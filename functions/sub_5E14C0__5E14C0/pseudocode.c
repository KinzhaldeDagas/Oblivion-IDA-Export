int sub_5E14C0(char *Format, ...)
{
  va_list ArgList; // [esp+8h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  return MessageHandler_HandleMessage(4, Format, ArgList); /*0x5e14d4*/
}
