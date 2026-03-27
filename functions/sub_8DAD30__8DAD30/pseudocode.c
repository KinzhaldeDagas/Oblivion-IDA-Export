int __thiscall sub_8DAD30(int *this)
{
  int *v2; // esi
  int v3; // ebp
  int v4; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ecx

  *this = (int)&off_A9A3B8;
  sub_8DA510(this);
  v2 = this + 3;
  v3 = 8;
  do
  {
    v4 = 8;
    do
    {
      v5 = *v2;
      if ( *v2 )
      {
        if ( *(_WORD *)(v5 + 4) )
        {
          if ( !--*(_WORD *)(v5 + 6) )
            (**(void (__thiscall ***)(int, int))v5)(v5, 1);
        }
      }
      ++v2;
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
  result = *(this + 0x703);
  if ( result >= 0 )
  {
    v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    result = sub_8A75D0(v7, (_DWORD *)*(this + 0x701), 8 * result, 0x14);
  }
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
