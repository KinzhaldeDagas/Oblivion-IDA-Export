void __thiscall sub_526230(TESForm *this, int a2)
{
  unsigned int v4; // eax
  unsigned int *v5; // edx
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // ebp
  bool v10; // zf
  unsigned int v11; // edi
  TESForm *v12; // esi
  UInt32 refID; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _BYTE a1[25]; // [esp+7h] [ebp-29h] BYREF
  unsigned int v18; // [esp+20h] [ebp-10h] BYREF
  float source; // [esp+24h] [ebp-Ch] BYREF
  unsigned int v20; // [esp+28h] [ebp-8h]

  v4 = 0; /*0x526237*/
  *(_DWORD *)&a1[0xD] = 0; /*0x52623a*/
  v5 = (unsigned int *)(this + 0xB); /*0x52623e*/
  do /*0x5262ec*/
  {
    v6 = 0; /*0x526245*/
    *(_DWORD *)&a1[5] = 0; /*0x526247*/
    *(_DWORD *)&a1[9] = v5; /*0x52624b*/
    do /*0x5262dc*/
    {
      v7 = *v5; /*0x526250*/
      v8 = v5[1]; /*0x526252*/
      v9 = 0; /*0x526255*/
      v10 = *v5 == 0; /*0x526257*/
      v20 = *v5; /*0x526259*/
      *(_DWORD *)&a1[1] = v8; /*0x52625d*/
      if ( !v10 ) /*0x526261*/
      {
        do /*0x5262c9*/
        {
          v11 = 0; /*0x526263*/
          if ( *(_DWORD *)&a1[1] ) /*0x526269*/
          {
            v12 = this + v4 + v6 + 0xB; /*0x526272*/
            do /*0x5262b2*/
            {
              refID = v12->member.refID; /*0x526275*/
              if ( !refID || !((int)((int)v12->member.modlist.data - refID) >> 2) ) /*0x526281*/
                _invalid_parameter_noinfo(); /*0x526286*/
              source = *(float *)(v12->member.refID + 4 * (v11 + v9 * *(_DWORD *)&v12->member.type)); /*0x5262a2*/
              TESForm_SaveDataToCurrentSaveGame(this, &source, 4u); /*0x5262a6*/
              ++v11; /*0x5262ab*/
            }
            while ( v11 < *(_DWORD *)&a1[1] ); /*0x5262b2*/
            v6 = *(_DWORD *)&a1[5]; /*0x5262b4*/
            v7 = v20; /*0x5262b8*/
            v5 = *(unsigned int **)&a1[9]; /*0x5262bc*/
            v4 = *(_DWORD *)&a1[0xD]; /*0x5262c0*/
          }
          ++v9; /*0x5262c4*/
        }
        while ( v9 < v7 ); /*0x5262c9*/
      }
      ++v6; /*0x5262cb*/
      v5 += 6; /*0x5262ce*/
      *(_DWORD *)&a1[5] = v6; /*0x5262d4*/
      *(_DWORD *)&a1[9] = v5; /*0x5262d8*/
    }
    while ( v6 < 2 ); /*0x5262dc*/
    v4 += 2; /*0x5262e2*/
    *(_DWORD *)&a1[0xD] = v4; /*0x5262e8*/
  }
  while ( v4 < 4 ); /*0x5262ec*/
  v14 = *((_DWORD *)this + 0x3A); /*0x5262f2*/
  *(_DWORD *)&a1[0x11] = 0; /*0x5262fa*/
  if ( v14 ) /*0x526302*/
    *(_DWORD *)&a1[0x11] = *(_DWORD *)(v14 + 0xC); /*0x526307*/
  TESForm_SaveFormIDToCurrentSaveGame(this, (const unsigned int *)&a1[0x11], 4u); /*0x526314*/
  v15 = *((_DWORD *)this + 0x72); /*0x526319*/
  *(_DWORD *)&a1[0x15] = 0; /*0x526323*/
  if ( v15 ) /*0x526327*/
    *(_DWORD *)&a1[0x15] = *(_DWORD *)(v15 + 0xC); /*0x52632c*/
  TESForm_SaveFormIDToCurrentSaveGame(this, (const unsigned int *)&a1[0x15], 4u); /*0x526339*/
  v16 = *((_DWORD *)this + 0x74); /*0x52633e*/
  v18 = 0; /*0x526345*/
  if ( v16 ) /*0x52634d*/
    v18 = *(_DWORD *)(v16 + 0xC); /*0x526352*/
  TESForm_SaveFormIDToCurrentSaveGame(this, &v18, 4u); /*0x52635f*/
  TESForm_SaveDataToCurrentSaveGame(this, (char *)this + 0x1CC, 4u); /*0x52636f*/
  TESForm_SaveDataToCurrentSaveGame(this, (char *)this + 0x1E8, 4u); /*0x52637f*/
  a1[0] = TESActorBase_IsFemale(this) == 1; /*0x526395*/
  TESForm_SaveDataToCurrentSaveGame(this, a1, 1u); /*0x5263a2*/
}
