int __thiscall sub_940E30(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int result; // eax

  v2 = *(this + 9);
  v3 = 0;
  *this = (int)&off_AA21EC;
  if ( v2 > 0 )
  {
    do
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 4))(
        dword_BA7D98,
        *(_DWORD *)(*(this + 8) + 4 * v3++));
    while ( v3 < *(this + 9) );
  }
  sub_8B0E60(this + 0x18);
  sub_8B0E60(this + 0x15);
  sub_942BB0(this + 0xE);
  sub_942BB0(this + 0xB);
  v4 = *(this + 0xA);
  v5 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v4 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C), (_DWORD *)*(this + 8), 4 * v4, 0x14);
  sub_8B0E60(this + 5);
  result = *(this + 4);
  if ( result >= 0 )
    result = sub_8A75D0(
               *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C),
               (_DWORD *)*(this + 2),
               0x18 * (result & 0x3FFFFFFF),
               0x14);
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
