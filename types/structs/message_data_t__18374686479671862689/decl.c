union message_data_t
{
unsigned __int8 bytes[1];
hardware_msg_data hardware;
callback_msg_data callback;
winevent_msg_data winevent;
};
