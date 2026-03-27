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
  float *v24; // esi
  int v25; // eax
  float v26; // edx
  double v27; // st7
  int v28; // edi
  float v29; // [esp-20h] [ebp-30h]
  float v30; // [esp-1Ch] [ebp-2Ch]
  float v31; // [esp-18h] [ebp-28h]
  float v32; // [esp-8h] [ebp-18h]
  float v33; // [esp-4h] [ebp-14h]
  float v34; // [esp+0h] [ebp-10h]
  float v35; // [esp+4h] [ebp-Ch] BYREF
  float v36; // [esp+8h] [ebp-8h]
  float v37; // [esp+Ch] [ebp-4h]
  float v38; // [esp+14h] [ebp+4h]
  float v39; // [esp+14h] [ebp+4h]
  unsigned int v40; // [esp+14h] [ebp+4h]
  float v41; // [esp+14h] [ebp+4h]
  float v42; // [esp+14h] [ebp+4h]
  float v43; // [esp+14h] [ebp+4h]
  float v44; // [esp+18h] [ebp+8h]
  float v45; // [esp+18h] [ebp+8h]
  int GameDaysPassed; // [esp+18h] [ebp+8h]

  flt_B36684 = a4;
  flt_B36688 = a4;
  nullsub_returnVoid_2arg(a1, a6);
  v6 = *(_DWORD *)(a1 + 0xDC);
  if ( v6 == 3 || v6 == 2 )
  {
    v7 = *(_DWORD *)(a3 + 4);
    if ( (*(_BYTE *)(v7 + 0x18) & 0x20) != 0 )
    {
      v44 = sub_4991C0((Sky *)a1);
      v38 = sub_53FC90((Sky *)a1);
      v32 = sub_499180((Sky *)a1);
      v33 = sub_53FC10((Sky *)a1);
      v8 = v38;
      v9 = dbl_A2FAA0;
      v45 = v38 - (v38 - v44) * v9;
      v39 = v32 - v9 * (v32 - v33);
      v10 = v34;
      v11 = v39;
      if ( v34 <= (double)v33 || v11 <= v10 )
      {
        v13 = v34;
        v14 = v10 >= v11;
        v15 = v45;
        if ( v14 && v15 >= v13 )
        {
          v12 = 0.0;
        }
        else if ( v15 >= v13 || v34 >= v8 )
        {
          v12 = 1.0;
        }
        else
        {
          v12 = (v34 - v45) / (v8 - v45);
        }
      }
      else
      {
        v12 = (v11 - v10) / (v11 - v33);
      }
      *(float *)(a3 + 0xC) = v12;
      if ( *(float *)(a3 + 0xC) <= 0.0 )
      {
        *(_WORD *)(*(_DWORD *)(a3 + 4) + 0x18) |= 1u;
      }
      else
      {
        *(_WORD *)(*(_DWORD *)(a3 + 4) + 0x18) &= ~1u;
        v16 = *(float *)(a1 + 0x84);
        v17 = *(float *)(a1 + 0x8C);
        v36 = *(float *)(a1 + 0x88);
        v18 = *(_DWORD *)(a3 + 8);
        v35 = v16;
        v37 = v17;
        if ( v18 == a2 )
          v40 = a2;
        else
          v40 = *(unsigned __int16 *)(v18 + 0xB8);
        for ( ; a2 < v40; ++a2 )
        {
          v19 = *(_DWORD *)(a3 + 8);
          if ( *(unsigned __int16 *)(v19 + 0xB6) > a2 )
          {
            v20 = *(_DWORD *)(*(_DWORD *)(v19 + 0xB0) + 4 * a2);
            if ( v20 )
            {
              v21 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0xC))(v20);
              v22 = v21;
              if ( v21 )
              {
                if ( NiNode_GetNiPropertyByID(v21, 4) )
                {
                  NiPropertyByID = NiNode_GetNiPropertyByID(v22, 4);
                  if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB )
                  {
                    v24 = (float *)NiNode_GetNiPropertyByID(v22, 4);
                    if ( v24 )
                    {
                      if ( sub_8AA390((float *)&dword_B36680, &v35) )
                      {
                        v24[0x1B] = v35;
                        v24[0x1C] = v36;
                        v24[0x1D] = v37;
                      }
                      v24[0x1E] = *(float *)(a3 + 0xC);
                    }
                  }
                }
              }
            }
          }
        }
        v25 = LODWORD(v35);
        v26 = v37;
        flt_B36684 = v36;
        dword_B36680 = v25;
        flt_B36688 = v26;
        v41 = *(float *)(a1 + 0xD0);
        GameDaysPassed = TimeGlobals_GetGameDaysPassed(&TimeGlobals);
        v27 = (double)GameDaysPassed;
        if ( GameDaysPassed < 0 )
          v27 = v27 + flt_A2FC78;
        v42 = v27 + v41 / dbl_A2F920;
        v35 = flt_B36698;
        v36 = flt_B366A0;
        v37 = fStarsRotateZAxis;
        sub_43F350(&v35);
        v28 = *(_DWORD *)(a3 + 8);
        if ( v28 )
        {
          v31 = v37;
          v30 = v36;
          v29 = v35;
          unknown_libname_14(flt_B36690, v42);
          v43 = v42 * dbl_A3D5B0 / flt_B36690;
          sub_70FE20((float *)(v28 + 0x30), v43, v29, v30, v31);
        }
      }
    }
    else
    {
      *(_WORD *)(v7 + 0x18) |= 1u;
    }
  }
}
