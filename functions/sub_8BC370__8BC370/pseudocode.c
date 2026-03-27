int __thiscall sub_8BC370(int *this)
{
  int v2; // eax
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  int result; // eax
  int v6; // ecx

  v2 = *(this + 2);
  v3 = 0;
  *this = (int)&off_A98360;
  if ( v2 > 0 )
  {
    do
    {
      v4 = *(void (__thiscall ****)(_DWORD, int))(*(this + 1) + 4 * v3);
      if ( v4 )
        (**v4)(v4, 1);
      ++v3;
    }
    while ( v3 < *(this + 2) );
  }
  result = *(this + 3);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    result = sub_8A75D0(v6, (_DWORD *)*(this + 1), 4 * result, 0x14);
  }
  *this = (int)&off_A99B50;
  return result;
}
