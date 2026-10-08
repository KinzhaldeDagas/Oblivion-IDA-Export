// positive sp value has been detected, the output may be wrong!
void __userpurge sub_544450(int a1@<ebx>, unsigned int a2@<ebp>, int a3@<edi>, double a4@<st0>, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  double v8; // st7
  double v9; // st4
  double v10; // st5
  double v11; // st4
  double v12; // st7
  double v13; // st6
  bool v14; // zf
  double v15; // st5
  float v16; // edx
  float v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  NiNode *v21; // eax
  NiNode *v22; // esi
  NiProperty *NiPropertyByID; // eax
  NiPoint3 *v24; // esi
  float x; // eax
  float z; // edx
  double v27; // st7
  int v28; // edi
  float v29; // [esp-20h] [ebp-30h]
  float y; // [esp-1Ch] [ebp-2Ch]
  float v31; // [esp-18h] [ebp-28h]
  float v32; // [esp-8h] [ebp-18h]
  float v33; // [esp-4h] [ebp-14h]
  float v34; // [esp+0h] [ebp-10h]
  NiPoint3 v35; // [esp+4h] [ebp-Ch] BYREF
  float v36; // [esp+14h] [ebp+4h]
  float v37; // [esp+14h] [ebp+4h]
  unsigned int v38; // [esp+14h] [ebp+4h]
  float v39; // [esp+14h] [ebp+4h]
  float v40; // [esp+14h] [ebp+4h]
  float v41; // [esp+14h] [ebp+4h]
  float v42; // [esp+18h] [ebp+8h]
  float v43; // [esp+18h] [ebp+8h]
  int GameDaysPassed; // [esp+18h] [ebp+8h]

  stru_B36680.y = a4; /*0x54445c*/
  stru_B36680.z = a4; /*0x544462*/
  nullsub_returnVoid_2arg(a1, a6); /*0x544475*/
  v6 = *(_DWORD *)(a1 + 0xDC); /*0x54447a*/
  if ( v6 == 3 || v6 == 2 ) /*0x544488*/
  {
    v7 = *(_DWORD *)(a3 + 4); /*0x54448e*/
    if ( (*(_BYTE *)(v7 + 0x18) & 0x20) != 0 ) /*0x54449a*/
    {
      v42 = sub_4991C0((Sky *)a1); /*0x5444b1*/
      v36 = sub_53FC90((Sky *)a1); /*0x5444bc*/
      v32 = sub_499180((Sky *)a1); /*0x5444c7*/
      v33 = sub_53FC10((Sky *)a1); /*0x5444d2*/
      v8 = v36; /*0x5444d6*/
      v9 = dbl_A2FAA0; /*0x5444e2*/
      v43 = v36 - (v36 - v42) * v9; /*0x5444ee*/
      v37 = v32 - v9 * (v32 - v33); /*0x544506*/
      v10 = v34; /*0x54450a*/
      v11 = v37; /*0x544512*/
      if ( v34 <= (double)v33 || v11 <= v10 ) /*0x544522*/
      {
        v13 = v34; /*0x544536*/
        v14 = v10 >= v11; /*0x544538*/
        v15 = v43; /*0x54453b*/
        if ( v14 && v15 >= v13 ) /*0x544548*/
        {
          v12 = 0.0; /*0x544550*/
        }
        else if ( v15 >= v13 || v34 >= v8 ) /*0x544566*/
        {
          v12 = 1.0; /*0x54457c*/
        }
        else
        {
          v12 = (v34 - v43) / (v8 - v43); /*0x54456e*/
        }
      }
      else
      {
        v12 = (v11 - v10) / (v11 - v33); /*0x54452c*/
      }
      *(float *)(a3 + 0xC) = v12; /*0x54457e*/
      if ( *(float *)(a3 + 0xC) <= 0.0 ) /*0x54458b*/
      {
        *(_WORD *)(*(_DWORD *)(a3 + 4) + 0x18) |= 1u; /*0x544764*/
      }
      else
      {
        *(_WORD *)(*(_DWORD *)(a3 + 4) + 0x18) &= ~1u; /*0x544594*/
        v16 = *(float *)(a1 + 0x84); /*0x5445a0*/
        v17 = *(float *)(a1 + 0x8C); /*0x5445a6*/
        v35.y = *(float *)(a1 + 0x88); /*0x5445ac*/
        v18 = *(_DWORD *)(a3 + 8); /*0x5445b0*/
        v35.x = v16; /*0x5445b5*/
        v35.z = v17; /*0x5445b9*/
        if ( v18 == a2 ) /*0x5445bd*/
          v38 = a2; /*0x5445cc*/
        else
          v38 = *(unsigned __int16 *)(v18 + 0xB8); /*0x5445c6*/
        for ( ; a2 < v38; ++a2 ) /*0x5445d4*/
        {
          v19 = *(_DWORD *)(a3 + 8); /*0x5445e0*/
          if ( *(unsigned __int16 *)(v19 + 0xB6) > a2 ) /*0x5445ec*/
          {
            v20 = *(_DWORD *)(*(_DWORD *)(v19 + 0xB0) + 4 * a2); /*0x5445f8*/
            if ( v20 ) /*0x5445fd*/
            {
              v21 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0xC))(v20); /*0x544604*/
              v22 = v21; /*0x544606*/
              if ( v21 ) /*0x54460a*/
              {
                if ( NiNode_GetNiPropertyByID(v21, 4) ) /*0x544610*/
                {
                  NiPropertyByID = NiNode_GetNiPropertyByID(v22, 4); /*0x54461d*/
                  if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB ) /*0x544637*/
                  {
                    v24 = (NiPoint3 *)NiNode_GetNiPropertyByID(v22, 4); /*0x544642*/
                    if ( v24 ) /*0x544646*/
                    {
                      if ( NiPoint3__NotEqual(&stru_B36680, &v35) ) /*0x544652*/
                        v24[9] = v35; /*0x54465f*/
                      v24[0xA].x = *(float *)(a3 + 0xC); /*0x544673*/
                    }
                  }
                }
              }
            }
          }
        }
        x = v35.x; /*0x544684*/
        z = v35.z; /*0x54468c*/
        stru_B36680.y = v35.y; /*0x544690*/
        stru_B36680.x = x; /*0x544696*/
        stru_B36680.z = z; /*0x54469b*/
        v39 = *(float *)(a1 + 0xD0); /*0x5446ac*/
        GameDaysPassed = TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x5446b7*/
        v27 = (double)GameDaysPassed; /*0x5446bb*/
        if ( GameDaysPassed < 0 ) /*0x5446bf*/
          v27 = v27 + flt_A2FC78; /*0x5446c1*/
        v40 = v27 + v39 / dbl_A2F920; /*0x5446d7*/
        v35.x = unk_B36698; /*0x5446e1*/
        v35.y = unk_B366A0; /*0x5446eb*/
        v35.z = MEMORY[0xB366A8]; /*0x5446f5*/
        Vector3_NormalizeInPlace(&v35.x); /*0x5446f9*/
        v28 = *(_DWORD *)(a3 + 8); /*0x5446fe*/
        if ( v28 ) /*0x544705*/
        {
          v31 = v35.z; /*0x54470e*/
          y = v35.y; /*0x544716*/
          v29 = v35.x; /*0x54471e*/
          unknown_libname_14(unk_B36690, v40); /*0x54472b*/
          v41 = v40 * dbl_A3D5B0 / unk_B36690; /*0x544748*/
          sub_70FE20((float *)(v28 + 0x30), v41, v29, y, v31); /*0x544753*/
        }
      }
    }
    else
    {
      *(_WORD *)(v7 + 0x18) |= 1u; /*0x54449c*/
    }
  }
}
