<!-- # <img width="500" height="200" src="https://upload.wikimedia.org/wikipedia/commons/2/21/Gato_leyendo_canal_IRC_de_Wikipedia_en_espa%C3%B1ol.jpg" alt="Internet relay chat"> -->
# <p align="center">ft_irc (internet relay chat)</p>

## Description

Well, ft_irc is a project that brings IRC protocol to life, by implementing a server that offers a real-time messaging that can  be either public or private, Users can exchange direct messages and join group channels.

IRC was invented by the Finn Jarkko Oikarinen in 1988 when he was at the University of Oulu. Inspired by existing chat programs, he set out to improve the multi-user chat “MultiUser Talk” and thus created Internet Relay Chat, the popularity of which grew immensely within a few years, The term IRC, short for Internet Relay Chat, refers to a chat system that allows people (even strangers) to message each other over the Internet in near real time.

IRC users connect to one of numerous networks and then join one or more of the channels. Here you have the option to send text messages to everyone present or to have a private conversation with another person in query mode.

It is important to note that each channel is defined by a specific topic and users also have the option to create their very own channel. Highly frequented IRC chat rooms of the “Libera.Chat” network in 2021 include “#linux” in which users exchange information about the Linux operating system and “#python” which is about the programming language of the same name. IRC is used by both individuals and businesses because it greatly facilitates text-based communication.

##  How to Install and Run the Project

+ Before running the program, run make to compile the files and insure that the executable file is exist named by 'ircserv'
```
make
```

+ Run the server, by executing the ./ircserv that takes two parameters the first parameter is the port that the server will listen on, and the second is the server password.
```
./ircserv 8080 password
```

## How to Use the Project
* After running the program, the server will listen on the port passed as an argument to the program for the incomming connections, and for incomming events, when the server catches an event, it will be processed and executed with an appropriate action.
> To connect to the server use some TCP/UDP client, you can use nc "Netcat" to connect to the server
```
nc 127.0.0.1 8080
```
- after connecting to the server, it is mandatory to authenticate with a nick name and a user name by using the commands ```NICK``` & ```USER * * * *``` those commands are supported by the server, there is a third command used on the authentication part, which is pass, this command has the priority on the authentication process, the associated password with pass command need to be matched with the server's password otherwise the authentication fails in this part.

+ The server supports some sort of commands from the client, those commands can be listed by using 'man' command after authenticate, the man command also can give the manual about each supported commands by specifying the name of the command after 'man' command.

> Those are the suported commands by the server
```
    * PASS
    * NICK
    * USER
    * JOIN
    * PRIVMSG
    * KICK
    * INVITE
    * TOPIC
    * MODE
    * PART 
```
> [!TIP]
> To get information about any command from the listed commands bellow use the man command.

## Preview

## Resoureses
<a href="https://www.ionos.com/digitalguide/server/know-how/irc/#:~:text=IRC%20was%20invented%20by%20the,immensely%20within%20a%20few%20years">About Internet relay chat</a>
