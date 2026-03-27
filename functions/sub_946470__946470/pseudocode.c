int __thiscall sub_946470(void **this)
{
  int v2; // ebx
  int i; // edi
  int v4; // ecx
  int result; // eax
  int v6; // ecx

  v2 = (int)*(this + 0xB);
  *this = &off_AA2950;
  *(this + 2) = &off_AA2938;
  if ( v2 )
  {
    for ( i = 0; i < *(_DWORD *)(v2 + 0x28); ++i )
      sub_946340(this, *(_DWORD *)(*(_DWORD *)(v2 + 0x24) + 8 * i));
    sub_8CA250((int *)*(this + 0xB), (int)sub_9463B0);
    v4 = (int)*(this + 0xB);
    if ( *(_WORD *)(v4 + 4) )
    {
      if ( !--*(_WORD *)(v4 + 6) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
  }
  result = (int)*(this + 0xA);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    result = sub_8A75D0(v6, *(this + 8), 8 * result, 0x14);
  }
  *(this + 2) = &off_A9D1C0;
  *this = &hkBaseObject::`vftable';
  return result;
}
