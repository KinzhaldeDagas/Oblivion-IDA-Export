void __userpurge sub_526230(_DWORD *this@<ecx>, int a2@<edi>, int a3)
{
  unsigned int v4; // eax
  unsigned int *v5; // edx
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // ebp
  bool v10; // zf
  unsigned int v11; // edi
  _DWORD *v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  size_t v17; // [esp-10h] [ebp-40h]
  size_t v18; // [esp-4h] [ebp-34h]
  size_t v19; // [esp-4h] [ebp-34h]
  size_t v20; // [esp-4h] [ebp-34h]
  _BYTE a1[25]; // [esp+7h] [ebp-29h] BYREF
  int v22; // [esp+20h] [ebp-10h] BYREF
  float v23; // [esp+24h] [ebp-Ch] BYREF
  unsigned int v24; // [esp+28h] [ebp-8h]

  v4 = 0;
  *(_DWORD *)&a1[0xD] = 0;
  v5 = this + 0x42;
  HIDWORD(v17) = a2;
  do
  {
    v6 = 0;
    *(_DWORD *)&a1[5] = 0;
    *(_DWORD *)&a1[9] = v5;
    do
    {
      v7 = *v5;
      v8 = v5[1];
      v9 = 0;
      v10 = *v5 == 0;
      v24 = *v5;
      *(_DWORD *)&a1[1] = v8;
      if ( !v10 )
      {
        do
        {
          v11 = 0;
          if ( *(_DWORD *)&a1[1] )
          {
            v12 = this + 6 * v4 + 6 * v6 + 0x42;
            do
            {
              v13 = v12[3];
              if ( !v13 || !((v12[4] - v13) >> 2) )
                _invalid_parameter_noinfo();
              LODWORD(v17) = 4;
              v23 = *(float *)(v12[3] + 4 * (v11 + v9 * v12[1]));
              TESForm_SaveDataToCurrentSaveGame((TESForm *)&v23, v17);
              ++v11;
            }
            while ( v11 < *(_DWORD *)&a1[1] );
            v6 = *(_DWORD *)&a1[5];
            v7 = v24;
            v4 = *(_DWORD *)&a1[0xD];
            v5 = *(unsigned int **)&a1[9];
          }
          ++v9;
        }
        while ( v9 < v7 );
      }
      ++v6;
      v5 += 6;
      *(_DWORD *)&a1[5] = v6;
      *(_DWORD *)&a1[9] = v5;
    }
    while ( v6 < 2 );
    v4 += 2;
    *(_DWORD *)&a1[0xD] = v4;
  }
  while ( v4 < 4 );
  v14 = *(this + 0x3A);
  *(_DWORD *)&a1[0x11] = 0;
  if ( v14 )
    *(_DWORD *)&a1[0x11] = *(_DWORD *)(v14 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&a1[0x11], 4u);
  v15 = *(this + 0x72);
  *(_DWORD *)&a1[0x15] = 0;
  if ( v15 )
    *(_DWORD *)&a1[0x15] = *(_DWORD *)(v15 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&a1[0x15], 4u);
  v16 = *(this + 0x74);
  v22 = 0;
  if ( v16 )
    v22 = *(_DWORD *)(v16 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v22, 4u);
  LODWORD(v18) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x73), v18);
  LODWORD(v19) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x7A), v19);
  a1[0] = TESActorBase_IsFemale(this) == 1;
  LODWORD(v20) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, v20);
}
