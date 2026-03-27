int __thiscall sub_4E55A0(int this)
{
  unsigned int i; // esi
  int result; // eax
  _BYTE *v4; // ecx

  if ( *(_DWORD *)(this + 0x24) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(this + 0x30); ++i )
    {
      result = *(_DWORD *)(this + 0x24);
      v4 = *(_BYTE **)(*(_DWORD *)(result + 4) + 4 * i);
      if ( v4 )
        sub_67EDA0(v4);
    }
  }
  return result;
}
