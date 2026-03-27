void __thiscall ahkCharacterProxy::~ahkCharacterProxy(ahkCharacterProxy *this)
{
  int v2; // eax
  char *v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // ecx
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

  v2 = *((_DWORD *)this + 0x24);
  v3 = (char *)this + 8;
  v4 = 0;
  *(_DWORD *)this = &off_A97C08;
  *((_DWORD *)this + 2) = off_A97BF4;
  *((_DWORD *)this + 3) = off_A97BE0;
  if ( v2 > 0 )
  {
    do
      sub_8A6300(*(int **)(*((_DWORD *)this + 0x23) + 4 * v4++), (int)v3);
    while ( v4 < *((_DWORD *)this + 0x24) );
  }
  v5 = *((_DWORD *)this + 0x27);
  v6 = 0;
  *((_DWORD *)this + 0x24) = 0;
  if ( v5 > 0 )
  {
    do
      sub_8DE670(*(_DWORD **)(*((_DWORD *)this + 0x26) + 4 * v6++), (int)this + 0xC);
    while ( v6 < *((_DWORD *)this + 0x27) );
  }
  v7 = *((_DWORD **)this + 0xC);
  *((_DWORD *)this + 0x27) = 0;
  sub_8BC7B0(v7, &v18, 0x1300);
  sub_8BC730(*((int (__stdcall ****)(signed int))this + 0xC));
  v8 = *((_DWORD *)this + 0x28);
  v9 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v8 >= 0 )
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    sub_8A75D0(v11, *((_DWORD **)this + 0x26), 4 * v8, 0x14);
  }
  v12 = *((_DWORD *)this + 0x25);
  if ( v12 >= 0 )
  {
    v13 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C);
    if ( !v13 )
      v13 = dword_BA7D9C;
    sub_8A75D0(v13, *((_DWORD **)this + 0x23), 4 * v12, 0x14);
  }
  v14 = *((_DWORD *)this + 0x22);
  if ( v14 >= 0 )
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    sub_8A75D0(v15, *((_DWORD **)this + 0x20), 4 * v14, 0x14);
  }
  v16 = *((_DWORD *)this + 0x1F);
  if ( v16 >= 0 )
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C);
    if ( !v17 )
      v17 = dword_BA7D9C;
    sub_8A75D0(v17, *((_DWORD **)this + 0x1D), 0x30 * (v16 & 0x3FFFFFFF), 0x14);
  }
  *((_DWORD *)this + 3) = &hkPhantomListener::`vftable';
  *((_DWORD *)this + 2) = &hkEntityListener::`vftable';
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
