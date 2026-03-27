void __thiscall bhkCharacterPointCollector::~bhkCharacterPointCollector(bhkCharacterPointCollector *this)
{
  int i; // edi
  int v3; // eax
  int v4; // edi
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx

  *(_DWORD *)this = &bhkCharacterPointCollector::`vftable';
  for ( i = 0; i < *((_DWORD *)this + 0x6A); ++i )
    sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*((_DWORD *)this + 0x69) + 4 * i));
  v3 = *((_DWORD *)this + 0x6B);
  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v3 >= 0 )
  {
    v6 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    sub_8A75D0(v6, *((_DWORD **)this + 0x69), 4 * v3, 0x14);
  }
  v7 = *((_DWORD *)this + 0x6B) & 0x40000000 | 0x80000000;
  *((_DWORD *)this + 0x69) = 0;
  *((_DWORD *)this + 0x6A) = 0;
  *((_DWORD *)this + 0x6B) = v7;
  v8 = *((_DWORD *)this + 0x71);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, *((_DWORD **)this + 0x6F), 0x30 * (v8 & 0x3FFFFFFF), 0x14);
  }
  v10 = *((_DWORD *)this + 0x71) & 0x40000000 | 0x80000000;
  *((_DWORD *)this + 0x6F) = 0;
  *((_DWORD *)this + 0x70) = 0;
  *((_DWORD *)this + 0x71) = v10;
  v11 = *((_DWORD *)this + 0x6E);
  if ( v11 >= 0 )
  {
    v12 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v12 )
      v12 = dword_BA7D9C;
    sub_8A75D0(v12, *((_DWORD **)this + 0x6C), 4 * v11, 0x14);
  }
  v13 = *((_DWORD *)this + 0x6E) & 0x40000000 | 0x80000000;
  *((_DWORD *)this + 0x6C) = 0;
  *((_DWORD *)this + 0x6D) = 0;
  *((_DWORD *)this + 0x6E) = v13;
  v14 = *((_DWORD *)this + 0x71);
  if ( v14 >= 0 )
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    sub_8A75D0(v15, *((_DWORD **)this + 0x6F), 0x30 * (v14 & 0x3FFFFFFF), 0x14);
  }
  v16 = *((_DWORD *)this + 0x6E);
  if ( v16 >= 0 )
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v17 )
      v17 = dword_BA7D9C;
    sub_8A75D0(v17, *((_DWORD **)this + 0x6C), 4 * v16, 0x14);
  }
  v18 = *((_DWORD *)this + 0x6B);
  if ( v18 >= 0 )
  {
    v19 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v19 )
      v19 = dword_BA7D9C;
    sub_8A75D0(v19, *((_DWORD **)this + 0x69), 4 * v18, 0x14);
  }
  hkAllCdPointCollector::~hkAllCdPointCollector(this);
}
