int __thiscall sub_926CA0(int *this)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax
  int v5; // ecx

  v2 = *(this + 3);
  *this = (int)&off_AA1828;
  if ( v2 > 0 )
  {
    v3 = 0;
    do
    {
      sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(this + 2) + v3));
      v3 += 0x50;
      --v2;
    }
    while ( v2 );
  }
  result = *(this + 4);
  if ( result >= 0 )
  {
    v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    result = sub_8A75D0(v5, (_DWORD *)*(this + 2), 0x50 * (result & 0x3FFFFFFF), 0x14);
  }
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
