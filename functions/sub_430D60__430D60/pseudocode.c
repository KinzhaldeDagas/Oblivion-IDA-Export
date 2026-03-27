_DWORD *sub_430D60()
{
  _DWORD *v0; // esi
  _DWORD *result; // eax

  v0 = (_DWORD *)FormHeapAlloc(0x210u);
  result = 0;
  if ( v0 )
  {
    sub_7478C0(v0);
    *v0 = &BSSearchPath::`vftable';
    return v0;
  }
  return result;
}
