void sub_4D5370()
{
  double v0; // st7
  float x; // edx
  float y; // eax
  PlayerCharacter *v3; // ecx
  ExtraDataList *DwordAtOffset40; // eax
  TESWorldSpace *vtbl; // eax
  int v6; // esi
  int v7; // edi
  double v8; // st7
  double v9; // st6
  float *SafeFloatPointer; // eax
  unsigned int v11; // ebp
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  int v15; // ebx
  int v16; // eax
  int i; // esi
  ExtraDataList *v18; // ecx
  float v19; // [esp+0h] [ebp-34h]
  float v20; // [esp+0h] [ebp-34h]
  int v21; // [esp+0h] [ebp-34h]
  TESWorldSpace *v22; // [esp+4h] [ebp-30h]
  float v23; // [esp+8h] [ebp-2Ch]
  float v24; // [esp+Ch] [ebp-28h]
  float v25; // [esp+10h] [ebp-24h]
  float v26; // [esp+14h] [ebp-20h]
  NiPoint3 v27; // [esp+18h] [ebp-1Ch] BYREF
  ExtraDataList *v28; // [esp+24h] [ebp-10h]
  TESObjectCELL *CellAtCellCoord; // [esp+28h] [ebp-Ch]
  int v30; // [esp+2Ch] [ebp-8h]
  int v31; // [esp+30h] [ebp-4h]

  if ( (unk_B35E20 & 1) == 0 ) /*0x4d537a*/
  {
    v0 = flt_A32048; /*0x4d537c*/
    unk_B35E20 |= 1u; /*0x4d5382*/
    other.x = v0; /*0x4d5389*/
    other.y = v0; /*0x4d538f*/
    other.z = v0; /*0x4d5395*/
  }
  if ( reference ) /*0x4d539b*/
  {
    v27 = *(NiPoint3 *)reference->super.super.super.super.pos; /*0x4d53ae*/
    sub_4122F0(&v27.x); /*0x4d53c5*/
    if ( NiPoint3__NotEqual(&v27, &other) ) /*0x4d53d6*/
    {
      x = v27.x; /*0x4d53e7*/
      y = v27.y; /*0x4d53eb*/
      other.z = v27.z; /*0x4d53ef*/
      v3 = reference; /*0x4d53f5*/
      other.x = x; /*0x4d53fb*/
      other.y = y; /*0x4d5401*/
      DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v3); /*0x4d5406*/
      if ( DwordAtOffset40 ) /*0x4d540d*/
      {
        if ( (DwordAtOffset40[1].members.m_presenceBitfield[8] & 1) != 0 ) /*0x4d5417*/
        {
          sub_4D2720(DwordAtOffset40, &v27.x); /*0x4d55c7*/
        }
        else
        {
          v28 = DwordAtOffset40; /*0x4d5423*/
          vtbl = (TESWorldSpace *)DwordAtOffset40[4].vtbl; /*0x4d5427*/
          CellAtCellCoord = 0; /*0x4d542d*/
          v30 = 0; /*0x4d5431*/
          v31 = 0; /*0x4d5435*/
          v22 = vtbl; /*0x4d5439*/
          if ( vtbl ) /*0x4d543d*/
          {
            v6 = (int)v27.x >> 0xC; /*0x4d5450*/
            v7 = (int)v27.y >> 0xC; /*0x4d546c*/
            v19 = (float)(v6 << 0xC); /*0x4d5471*/
            v8 = v19; /*0x4d5478*/
            v23 = v19; /*0x4d5480*/
            v20 = (float)(v7 << 0xC); /*0x4d548d*/
            v9 = v20; /*0x4d5491*/
            v21 = 0; /*0x4d5495*/
            v25 = v8 + dbl_A37650; /*0x4d54a7*/
            v26 = dbl_A37650 + v9; /*0x4d54ad*/
            SafeFloatPointer = GameSetting_GetSafeFloatPointer(MEMORY[0xB35C14]); /*0x4d54b1*/
            if ( v23 < v27.x - *SafeFloatPointer ) /*0x4d54c7*/
            {
              v12 = GameSetting_GetSafeFloatPointer(MEMORY[0xB35C14]); /*0x4d54d3*/
              v11 = v25 <= *v12 + v27.x; /*0x4d54eb*/
            }
            else
            {
              v11 = 0xFFFFFFFF; /*0x4d54c9*/
            }
            v13 = GameSetting_GetSafeFloatPointer(MEMORY[0xB35C14]); /*0x4d54f5*/
            v24 = v9; /*0x4d5499*/
            if ( v24 < v27.y - *v13 ) /*0x4d550b*/
            {
              v14 = GameSetting_GetSafeFloatPointer(MEMORY[0xB35C14]); /*0x4d551c*/
              if ( v26 <= *v14 + v27.y ) /*0x4d5532*/
                v21 = 1; /*0x4d5534*/
            }
            else
            {
              v21 = 0xFFFFFFFF; /*0x4d550d*/
            }
            v15 = 1; /*0x4d553f*/
            if ( v11 ) /*0x4d5544*/
            {
              CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v22, v6 + v11, v7); /*0x4d5554*/
              v15 = 2; /*0x4d5558*/
            }
            v16 = v21; /*0x4d555d*/
            if ( v21 ) /*0x4d5563*/
            {
              *(&v28 + v15) = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord(v22, v6, v7 + v21); /*0x4d5572*/
              v16 = v21; /*0x4d5576*/
              ++v15; /*0x4d557a*/
            }
            if ( v11 ) /*0x4d557f*/
            {
              if ( v16 ) /*0x4d5583*/
                *(&v28 + v15) = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord(v22, v6 + v11, v7 + v16); /*0x4d5594*/
            }
          }
          for ( i = 0; i < 4; ++i ) /*0x4d559a*/
          {
            v18 = *(&v28 + i); /*0x4d55a0*/
            if ( !v18 ) /*0x4d55a6*/
              break; /*0x4d55a6*/
            sub_4D2720(v18, &v27.x); /*0x4d55ad*/
          }
        }
      }
    }
  }
}
