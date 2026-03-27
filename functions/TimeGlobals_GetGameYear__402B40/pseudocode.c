int __thiscall TimeGlobals_GetGameYear(void *this)
{
  double v1; // st7

  if ( *(_DWORD *)this )
    v1 = *(float *)(*(_DWORD *)this + 0x24);
  else
    v1 = 427.0;
  return (__int64)(float)v1;
}
