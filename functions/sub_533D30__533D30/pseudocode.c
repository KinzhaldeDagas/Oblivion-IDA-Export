int sub_533D30(int a1, char *Format, ...)
{
  va_list ArgList; // [esp+Ch] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  return MessageHandler_HandleMessage(a1, Format, ArgList);
}
