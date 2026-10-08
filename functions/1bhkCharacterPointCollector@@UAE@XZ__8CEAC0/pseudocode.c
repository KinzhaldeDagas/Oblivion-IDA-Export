// TES4 authoritative: bhkCharacterPointCollector destructor releases object refs and dynamic arrays, including 0x30-byte contact storage.
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

  *(_DWORD *)this = &bhkCharacterPointCollector::`vftable'; /*0x8ceaeb*/
  for ( i = 0; i < *((_DWORD *)this + 0x6A); ++i ) /*0x8ceb05*/
    sub_8BC730(*(int (__stdcall ****)(signed int))(*((_DWORD *)this + 0x69) + 4 * i)); /*0x8ceb19*/
  v3 = *((_DWORD *)this + 0x6B); /*0x8ceb29*/
  v4 = MEMORY[0xBA9DE4]; /*0x8ceb31*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ceb37*/
  if ( v3 >= 0 ) /*0x8ceb3e*/
  {
    v6 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8ceb44*/
    if ( !v6 ) /*0x8ceb4c*/
      v6 = unk_BA7D9C; /*0x8ceb4e*/
    sub_8A75D0(v6, *((_DWORD **)this + 0x69), 4 * v3, 0x14); /*0x8ceb67*/
  }
  v7 = *((_DWORD *)this + 0x6B) & 0x40000000 | 0x80000000; /*0x8ceb77*/
  *((_DWORD *)this + 0x69) = 0; /*0x8ceb7c*/
  *((_DWORD *)this + 0x6A) = 0; /*0x8ceb82*/
  *((_DWORD *)this + 0x6B) = v7; /*0x8ceb88*/
  v8 = *((_DWORD *)this + 0x71); /*0x8ceb8e*/
  if ( v8 >= 0 ) /*0x8ceb96*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8ceb9c*/
    if ( !v9 ) /*0x8ceba4*/
      v9 = unk_BA7D9C; /*0x8ceba6*/
    sub_8A75D0(v9, *((_DWORD **)this + 0x6F), 0x30 * (v8 & 0x3FFFFFFF), 0x14); /*0x8cebc1*/
  }
  v10 = *((_DWORD *)this + 0x71) & 0x40000000 | 0x80000000; /*0x8cebd2*/
  *((_DWORD *)this + 0x6F) = 0; /*0x8cebd8*/
  *((_DWORD *)this + 0x70) = 0; /*0x8cebde*/
  *((_DWORD *)this + 0x71) = v10; /*0x8cebe4*/
  v11 = *((_DWORD *)this + 0x6E); /*0x8cebea*/
  if ( v11 >= 0 ) /*0x8cebf2*/
  {
    v12 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8cebf8*/
    if ( !v12 ) /*0x8cec00*/
      v12 = unk_BA7D9C; /*0x8cec02*/
    sub_8A75D0(v12, *((_DWORD **)this + 0x6C), 4 * v11, 0x14); /*0x8cec1b*/
  }
  v13 = *((_DWORD *)this + 0x6E) & 0x40000000 | 0x80000000; /*0x8cec2c*/
  *((_DWORD *)this + 0x6C) = 0; /*0x8cec32*/
  *((_DWORD *)this + 0x6D) = 0; /*0x8cec38*/
  *((_DWORD *)this + 0x6E) = v13; /*0x8cec3e*/
  v14 = *((_DWORD *)this + 0x71); /*0x8cec44*/
  if ( v14 >= 0 ) /*0x8cec51*/
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8cec57*/
    if ( !v15 ) /*0x8cec5f*/
      v15 = unk_BA7D9C; /*0x8cec61*/
    sub_8A75D0(v15, *((_DWORD **)this + 0x6F), 0x30 * (v14 & 0x3FFFFFFF), 0x14); /*0x8cec7c*/
  }
  v16 = *((_DWORD *)this + 0x6E); /*0x8cec81*/
  if ( v16 >= 0 ) /*0x8cec8e*/
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8cec94*/
    if ( !v17 ) /*0x8cec9c*/
      v17 = unk_BA7D9C; /*0x8cec9e*/
    sub_8A75D0(v17, *((_DWORD **)this + 0x6C), 4 * v16, 0x14); /*0x8cecb7*/
  }
  v18 = *((_DWORD *)this + 0x6B); /*0x8cecbc*/
  if ( v18 >= 0 ) /*0x8cecc8*/
  {
    v19 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8cecce*/
    if ( !v19 ) /*0x8cecd6*/
      v19 = unk_BA7D9C; /*0x8cecd8*/
    sub_8A75D0(v19, *((_DWORD **)this + 0x69), 4 * v18, 0x14); /*0x8cecf1*/
  }
  hkAllCdPointCollector::~hkAllCdPointCollector(this); /*0x8ced00*/
}
