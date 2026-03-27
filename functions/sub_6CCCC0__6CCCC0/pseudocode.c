char __thiscall sub_6CCCC0(_DWORD *this, int a2)
{
  char result; // al
  unsigned __int8 i; // bl
  int v5; // ecx

  result = sub_6E7270(a2);
  if ( result )
  {
    if ( (*(_BYTE *)(this + 3) & 1) == 0 )
    {
      for ( i = 0; i < *((_BYTE *)this + 0xD); ++i )
      {
        v5 = *(_DWORD *)(*(this + 5) + 0x18 * i);
        if ( v5 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2);
      }
    }
    return 1;
  }
  return result;
}
