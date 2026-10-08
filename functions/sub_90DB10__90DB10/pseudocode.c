int __thiscall sub_90DB10(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD **v7; // ecx
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // eax
  _DWORD **v12; // ecx
  int v13; // eax
  int v14; // eax
  int result; // eax
  int v16; // [esp+10h] [ebp-4h]
  int v17; // [esp+10h] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90db12*/
  v3 = MEMORY[0xBA9DE4]; /*0x90db23*/
  if ( *(this + 0x10) > 0 ) /*0x90db29*/
  {
    v4 = 0; /*0x90db2b*/
    v16 = *(this + 0x10); /*0x90db2d*/
    do /*0x90db66*/
    {
      v5 = *(this + 0xF); /*0x90db31*/
      v6 = *(_DWORD *)(v5 + v4 + 8); /*0x90db34*/
      v7 = (_DWORD **)(v4 + v5); /*0x90db38*/
      if ( v6 >= 0 ) /*0x90db3c*/
        sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C), *v7, 8 * v6, 0x14); /*0x90db55*/
      v4 += 0xC; /*0x90db5e*/
      --v16; /*0x90db62*/
    }
    while ( v16 ); /*0x90db66*/
  }
  v8 = *(this + 0x11); /*0x90db68*/
  if ( v8 >= 0 ) /*0x90db6d*/
    sub_8A75D0( /*0x90db8a*/
      *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C),
      (_DWORD *)*(this + 0xF),
      0xC * (v8 & 0x3FFFFFFF),
      0x14);
  if ( *(this + 0xD) > 0 ) /*0x90db94*/
  {
    v9 = 0; /*0x90db96*/
    v17 = *(this + 0xD); /*0x90db98*/
    do /*0x90dbd8*/
    {
      v10 = *(this + 0xC); /*0x90dba0*/
      v11 = *(_DWORD *)(v10 + v9 + 8); /*0x90dba3*/
      v12 = (_DWORD **)(v9 + v10); /*0x90dba7*/
      if ( v11 >= 0 ) /*0x90dbab*/
        sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C), *v12, 0xC * (v11 & 0x3FFFFFFF), 0x14); /*0x90dbc7*/
      v9 += 0xC; /*0x90dbd0*/
      --v17; /*0x90dbd4*/
    }
    while ( v17 ); /*0x90dbd8*/
  }
  v13 = *(this + 0xE); /*0x90dbda*/
  if ( v13 >= 0 ) /*0x90dbdf*/
    sub_8A75D0( /*0x90dbfc*/
      *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C),
      (_DWORD *)*(this + 0xC),
      0xC * (v13 & 0x3FFFFFFF),
      0x14);
  sub_942E10(this + 8); /*0x90dc04*/
  v14 = *(this + 6); /*0x90dc09*/
  if ( v14 >= 0 ) /*0x90dc0e*/
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C), (_DWORD *)*(this + 4), 8 * v14, 0x14); /*0x90dc28*/
  result = *(this + 3); /*0x90dc2d*/
  if ( result >= 0 ) /*0x90dc32*/
    return sub_8A75D0( /*0x90dc4f*/
             *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C),
             (_DWORD *)*(this + 1),
             0x30 * (result & 0x3FFFFFFF),
             0x14);
  return result; /*0x90dc54*/
}
