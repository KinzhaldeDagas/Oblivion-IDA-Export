int __thiscall sub_940E30(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int result; // eax

  v2 = *(this + 9); /*0x940e34*/
  v3 = 0; /*0x940e38*/
  *this = (int)&off_AA21EC; /*0x940e3c*/
  if ( v2 > 0 ) /*0x940e42*/
  {
    do /*0x940e5c*/
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, *(_DWORD *)(*(this + 8) + 4 * v3++)); /*0x940e53*/
    while ( v3 < *(this + 9) ); /*0x940e5c*/
  }
  sub_8B0E60(this + 0x18); /*0x940e61*/
  sub_8B0E60(this + 0x15); /*0x940e69*/
  sub_942BB0(this + 0xE); /*0x940e71*/
  sub_942BB0(this + 0xB); /*0x940e79*/
  v4 = *(this + 0xA); /*0x940e7e*/
  v5 = MEMORY[0xBA9DE4]; /*0x940e83*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x940e89*/
  if ( v4 >= 0 ) /*0x940e90*/
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C), (_DWORD *)*(this + 8), 4 * v4, 0x14); /*0x940eaa*/
  sub_8B0E60(this + 5); /*0x940eb2*/
  result = *(this + 4); /*0x940eb7*/
  if ( result >= 0 ) /*0x940ebc*/
    result = sub_8A75D0( /*0x940ed9*/
               *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C),
               (_DWORD *)*(this + 2),
               0x18 * (result & 0x3FFFFFFF),
               0x14);
  *this = (int)&hkBaseObject::`vftable'; /*0x940edf*/
  return result; /*0x940ede*/
}
