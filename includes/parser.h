/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:53:44 by bbellatr          #+#    #+#             */
/*   Updated: 2022/05/30 15:53:44 by bbellatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

//Парсинг карты
void	ft_parse_params(t_game *game, int *gnl, int fd);
void	ft_parse_rgb(t_game *game, char ***tmp, int *op, int i);
void	ft_check_map(t_game *game);

#endif
