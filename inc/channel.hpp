/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   channel.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:01:33 by mwilsch           #+#    #+#             */
/*   Updated: 2023/07/11 16:04:35 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "main.hpp"

/**
 * @brief 
 * 
 */
class ChannelData {
	private:
		string _name;
		string _topic;
		set <int> _clientSockets;
		set <int> _operators;
	public:
	/*			CLASS DEFAULT FUNCTIONS			*/
	
		ChannelData( void );
		~ChannelData( void );
	
	/*			GETTERS			*/


	/*			SETTERS			 */


};

/**
 * @brief 
 * 
 */
class ChannelManager {
	private:
		map<string, ChannelData> _channels;
	public:
	/*			CLASS DEFAULT FUNCTIONS			*/
	
		ChannelManager( void );
		~ChannelManager( void );
		
	/*			???			*/
	
};	