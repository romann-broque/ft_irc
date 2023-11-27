/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <rbroque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:03:54 by rbroque           #+#    #+#             */
/*   Updated: 2023/11/26 23:01:30 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

///////////////////////////////
///			INCLUDES		///
///////////////////////////////

#include <string.h>
#include <sys/epoll.h>

#include <exception>
#include <typeinfo>

#include "Server.hpp"
#include "Signal.hpp"

///////////////////////////////
///			DEFINES			///
///////////////////////////////

#define EXPECTED_ARG_COUNT 3