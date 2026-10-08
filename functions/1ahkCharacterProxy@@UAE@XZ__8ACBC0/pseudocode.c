void __thiscall ahkCharacterProxy::~ahkCharacterProxy(ahkCharacterProxy *this)
{
  int v2; // eax
  char *v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int *v7; // ecx
  int v8; // eax
  int v9; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // [esp+Ch] [ebp-8h] BYREF

  v2 = *((_DWORD *)this + 0x24); /*0x8acbc7*/
  v3 = (char *)this + 8; /*0x8acbce*/
  v4 = 0; /*0x8acbd1*/
  *(_DWORD *)this = &off_A97C08; /*0x8acbd5*/
  *((_DWORD *)this + 2) = off_A97BF4; /*0x8acbdb*/
  *((_DWORD *)this + 3) = off_A97BE0; /*0x8acbe1*/
  if ( v2 > 0 ) /*0x8acbe8*/
  {
    do /*0x8acc08*/
      sub_8A6300(*(int **)(*((_DWORD *)this + 0x23) + 4 * v4++), (int)v3); /*0x8acbfa*/
    while ( v4 < *((_DWORD *)this + 0x24) ); /*0x8acc08*/
  }
  v5 = *((_DWORD *)this + 0x27); /*0x8acc0a*/
  v6 = 0; /*0x8acc10*/
  *((_DWORD *)this + 0x24) = 0; /*0x8acc14*/
  if ( v5 > 0 ) /*0x8acc1e*/
  {
    do /*0x8acc3b*/
      sub_8DE670(*(int **)(*((_DWORD *)this + 0x26) + 4 * v6++), (int)this + 0xC); /*0x8acc2d*/
    while ( v6 < *((_DWORD *)this + 0x27) ); /*0x8acc3b*/
  }
  v7 = *((int **)this + 0xC); /*0x8acc3d*/
  *((_DWORD *)this + 0x27) = 0; /*0x8acc4a*/
  sub_8BC7B0(v7, &v18, 0x1300); /*0x8acc54*/
  sub_8BC730(*((int (__thiscall ****)(int (__stdcall ***)(signed int), int))this + 0xC)); /*0x8acc5c*/
  v8 = *((_DWORD *)this + 0x28); /*0x8acc61*/
  v9 = MEMORY[0xBA9DE4]; /*0x8acc69*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8acc6f*/
  if ( v8 >= 0 ) /*0x8acc76*/
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C); /*0x8acc7b*/
    if ( !v11 ) /*0x8acc83*/
      v11 = unk_BA7D9C; /*0x8acc85*/
    sub_8A75D0(v11, *((_DWORD **)this + 0x26), 4 * v8, 0x14); /*0x8acc9d*/
  }
  v12 = *((_DWORD *)this + 0x25); /*0x8acca2*/
  if ( v12 >= 0 ) /*0x8accaa*/
  {
    v13 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C); /*0x8accaf*/
    if ( !v13 ) /*0x8accb7*/
      v13 = unk_BA7D9C; /*0x8accb9*/
    sub_8A75D0(v13, *((_DWORD **)this + 0x23), 4 * v12, 0x14); /*0x8accd1*/
  }
  v14 = *((_DWORD *)this + 0x22); /*0x8accd6*/
  if ( v14 >= 0 ) /*0x8accde*/
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C); /*0x8acce3*/
    if ( !v15 ) /*0x8acceb*/
      v15 = unk_BA7D9C; /*0x8acced*/
    sub_8A75D0(v15, *((_DWORD **)this + 0x20), 4 * v14, 0x14); /*0x8acd05*/
  }
  v16 = *((_DWORD *)this + 0x1F); /*0x8acd0a*/
  if ( v16 >= 0 ) /*0x8acd0f*/
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C); /*0x8acd14*/
    if ( !v17 ) /*0x8acd1c*/
      v17 = unk_BA7D9C; /*0x8acd1e*/
    sub_8A75D0(v17, *((_DWORD **)this + 0x1D), 0x30 * (v16 & 0x3FFFFFFF), 0x14); /*0x8acd36*/
  }
  *((_DWORD *)this + 3) = &hkPhantomListener::`vftable'; /*0x8acd3b*/
  *((_DWORD *)this + 2) = &hkEntityListener::`vftable'; /*0x8acd42*/
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x8acd4a*/
}
