double __thiscall TimeGlobals_GetGameHour(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 3);
  if ( v1 )
    return *(float *)(v1 + 0x24);
  else
    return (float)12.0;
}
