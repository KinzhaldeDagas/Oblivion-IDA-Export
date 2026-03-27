int sscanf(const char *Src, const char *Format, ...)
{
  int v2; // ebx
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, Format);
  return vscan_fn(v2, (int)Src, (int (__cdecl *)(int *, int, int, int))_input_l, (int)Format, 0, (int)va);
}
