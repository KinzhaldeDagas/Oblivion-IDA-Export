int __thiscall sub_6B6B20(int this, float a2)
{
  double v2; // st7
  double v3; // st7

  v2 = (double)*(int *)(this + 0x40);
  if ( *(int *)(this + 0x40) < 0 )
    v2 = v2 + flt_A2FC78;
  v3 = v2 * a2;
  if ( (unsigned int)(__int64)v3 - 0x64 <= 0x30CDC && *(_DWORD *)(this + 0x50) )
    return (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 0x50) + 0x44))(
             *(_DWORD *)(this + 0x50),
             (__int64)v3);
  else
    return 0x80004005;
}
