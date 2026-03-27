int sub_404EC0(char *Format, ...)
{
  va_list ArgList; // [esp+8h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  return MessageHandler_HandleMessage(0, Format, ArgList);
}
