int PrintToLog___(char *Format, ...)
{
  va_list ArgList; // [esp+8h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  return MessageHandler_HandleMessage(3, Format, ArgList);
}
