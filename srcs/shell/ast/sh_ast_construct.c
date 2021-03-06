/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_ast_construct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:44:23 by akarasso          #+#    #+#             */
/*   Updated: 2018/09/22 10:47:15 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	sh_ast_revsplit_tree(t_ast_node *ast, int (*func)(void *data))
{
	sh_ast_revsplit(ast, func);
	if (ast->right)
		sh_ast_revsplit_tree(ast->right, func);
	if (ast->left)
		sh_ast_revsplit_tree(ast->left, func);
}

void	sh_ast_split_tree(t_ast_node *ast, int (*func)(void *data))
{
	sh_ast_split(ast, func);
	if (ast->right)
		sh_ast_split_tree(ast->right, func);
	if (ast->left)
		sh_ast_split_tree(ast->left, func);
}

void	sh_ast_construct(t_shell *sh)
{
	sh->ast = ft_ast_new(sh->lexer->first);
	sh_ast_revsplit_tree(sh->ast, is_terminator);
	sh_ast_revsplit_tree(sh->ast, is_logical);
	sh_ast_split_tree(sh->ast, is_pipe);
}
