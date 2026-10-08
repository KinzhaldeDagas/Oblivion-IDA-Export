double __usercall sub_5A82D0@<st0>(double result@<st0>, int a2@<edi>, int a3@<esi>)
{
  double v3; // st6
  double Float; // st6
  int *v5; // ecx
  bool v6; // zf
  int v7; // eax
  double BaseCalcAVf; // st6
  int v9; // eax
  double v10; // st6
  double v11; // st5
  double v12; // st6
  double v13; // st5
  double v14; // st6
  float v15; // [esp+10h] [ebp-24h]
  float v16; // [esp+10h] [ebp-24h]
  float v17; // [esp+10h] [ebp-24h]
  float v18; // [esp+10h] [ebp-24h]
  float v19; // [esp+10h] [ebp-24h]
  float v20; // [esp+10h] [ebp-24h]
  float v21; // [esp+10h] [ebp-24h]
  float v22; // [esp+14h] [ebp-20h]
  float v23; // [esp+14h] [ebp-20h]
  float v24; // [esp+14h] [ebp-20h]
  float v25; // [esp+14h] [ebp-20h]
  float v26; // [esp+18h] [ebp-1Ch]
  float v27; // [esp+18h] [ebp-1Ch]
  float v28; // [esp+18h] [ebp-1Ch]
  float v29; // [esp+18h] [ebp-1Ch]
  float v30; // [esp+18h] [ebp-1Ch]
  float v31; // [esp+18h] [ebp-1Ch]
  float v32; // [esp+18h] [ebp-1Ch]
  char v33; // [esp+23h] [ebp-11h]
  float v34; // [esp+24h] [ebp-10h]
  float v35; // [esp+24h] [ebp-10h]
  float v36; // [esp+24h] [ebp-10h]
  float v37; // [esp+28h] [ebp-Ch]
  float v38; // [esp+28h] [ebp-Ch]
  float v39; // [esp+28h] [ebp-Ch]
  float v40; // [esp+2Ch] [ebp-8h]
  float v41; // [esp+30h] [ebp-4h]
  float v42; // [esp+30h] [ebp-4h]

  if ( dword_B3B0B4[0xA7] ) /*0x5a82d6*/
  {
    if ( dword_B3B0B4[0xA8] ) /*0x5a82e2*/
    {
      if ( !Actor_IsSneaking(reference) || InterfaceManager_IsMenuMode() ) /*0x5a8301*/
      {
        if ( BYTE1(dword_B3B0B4[0xAB]) ) /*0x5a83a1*/
        {
          v28 = flt_B140C4; /*0x5a83b8*/
          Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA8], 0xFB6); /*0x5a83c6*/
          v17 = result; /*0x5a83d2*/
          sub_589980((_DWORD *)dword_B3B0B4[0xA8], 0xFB6, v17, 0.0, v28); /*0x5a83da*/
          BYTE1(dword_B3B0B4[0xAB]) = 0; /*0x5a83df*/
        }
      }
      else
      {
        v26 = flt_B140BC; /*0x5a8328*/
        if ( reference->isThirdPerson ) /*0x5a8322*/
          v3 = 0.0; /*0x5a832e*/
        else
          v3 = flt_A40098; /*0x5a8332*/
        v22 = v3; /*0x5a8338*/
        Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA7], 0xFB0); /*0x5a8340*/
        v15 = result; /*0x5a834c*/
        sub_589980((_DWORD *)dword_B3B0B4[0xA7], 0xFB0, v15, v22, v26); /*0x5a8354*/
        v27 = flt_B140C4; /*0x5a8368*/
        v23 = flt_B140B8; /*0x5a8372*/
        Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA8], 0xFB6); /*0x5a837a*/
        v16 = result; /*0x5a8386*/
        sub_589980((_DWORD *)dword_B3B0B4[0xA8], 0xFB6, v16, v23, v27); /*0x5a838e*/
        BYTE1(dword_B3B0B4[0xAB]) = 1; /*0x5a8393*/
        sub_5A80D0(); /*0x5a839a*/
      }
    }
  }
  if ( dword_B3B0B4[0xA9] && !bHealthBarShowing_Gameplay ) /*0x5a83f1*/
  {
    v33 = 0; /*0x5a83fd*/
    if ( !InterfaceManager_IsMenuMode() ) /*0x5a8401*/
    {
      v34 = *(float *)(dword_B3B0B4[0xA9] + 0x58); /*0x5a8417*/
      Float = 0.0; /*0x5a841b*/
      if ( v34 < 0.0 ) /*0x5a8426*/
        v34 = 0.0; /*0x5a8428*/
      if ( dword_B3B0B4[0xAC] ) /*0x5a842c*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B3B0B4[0xAC] + 0x198))( /*0x5a8441*/
               dword_B3B0B4[0xAC],
               0) )
        {
          v29 = flt_B140C0; /*0x5a8456*/
          Float = Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA9], 0xFB6); /*0x5a8464*/
          v18 = result; /*0x5a8470*/
          sub_589980((_DWORD *)dword_B3B0B4[0xA9], 0xFB6, v18, 0.0, v29); /*0x5a8478*/
          BYTE2(dword_B3B0B4[0xAB]) = 0; /*0x5a847d*/
        }
        v5 = (int *)dword_B3B0B4[0xAC]; /*0x5a8483*/
        if ( dword_B3B0B4[0xAC] ) /*0x5a8483*/
        {
LABEL_22:
          v7 = v5[0x16]; /*0x5a84d7*/
          if ( v7 ) /*0x5a84dc*/
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x468))(v5[0x16], 8); /*0x5a84ea*/
            v5 = (int *)dword_B3B0B4[0xAC]; /*0x5a84ec*/
          }
          else
          {
            Float = 0.0; /*0x5a84f4*/
          }
          v37 = Float; /*0x5a84f8*/
          BaseCalcAVf = Actor_GetBaseCalcAVf(v5, 0, a2, a3, 8); /*0x5a84fc*/
          result = result + v37; /*0x5a8501*/
          v40 = result; /*0x5a8513*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_B3B0B4[0xAC] + 0x288))(dword_B3B0B4[0xAC], 8); /*0x5a8519*/
          v38 = BaseCalcAVf; /*0x5a851b*/
          if ( v40 <= (double)v38 ) /*0x5a852e*/
            goto LABEL_41; /*0x5a852e*/
          v9 = *((_DWORD *)OblivionDynamicCast( /*0x5a854c*/
                             (void *)dword_B3B0B4[0xA9],
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                             &Tile3D `RTTI Type Descriptor',
                             0)
               + 0x11);
          if ( !v9 ) /*0x5a8554*/
            return result; /*0x5a8554*/
          v41 = *(float *)(v9 + 0x30) * dbl_A6C040; /*0x5a8563*/
          v10 = v41; /*0x5a8567*/
          v11 = v41; /*0x5a856b*/
          v42 = v38 / v40; /*0x5a8575*/
          v39 = v11 - v42 * v11; /*0x5a8581*/
          if ( v39 > v10 ) /*0x5a8590*/
            v39 = v10; /*0x5a8594*/
          v12 = v39; /*0x5a8598*/
          if ( LOBYTE(dword_B3B0B4[0xAB]) ) /*0x5a85a0*/
          {
            LOBYTE(dword_B3B0B4[0xAB]) = 0; /*0x5a8606*/
            v14 = (float)0.0; /*0x5a8612*/
            goto LABEL_38; /*0x5a8616*/
          }
          v13 = v34; /*0x5a85a8*/
          if ( v34 >= v12 ) /*0x5a85b3*/
          {
            if ( v13 > v12 ) /*0x5a85df*/
            {
              v36 = v13 - *(float *)&MEMORY[0xB33E90][0xC]; /*0x5a85e7*/
              v13 = v36; /*0x5a85eb*/
              if ( v36 < v12 ) /*0x5a85f6*/
              {
                v14 = v39; /*0x5a85fe*/
                goto LABEL_38; /*0x5a8602*/
              }
            }
          }
          else
          {
            v35 = v13 + *(float *)&MEMORY[0xB33E90][0xC]; /*0x5a85bb*/
            v13 = v35; /*0x5a85bf*/
            if ( v35 > v12 ) /*0x5a85ca*/
            {
              v14 = v39; /*0x5a85d2*/
LABEL_38:
              *(float *)(dword_B3B0B4[0xA9] + 0x58) = v14; /*0x5a861a*/
              *(float *)&dword_B3B0B4[0xAA] = *(float *)&dword_B3B0B4[0xAA] - *(float *)&MEMORY[0xB33E90][0xC]; /*0x5a862f*/
              if ( *(float *)&dword_B3B0B4[0xAA] <= 0.0 /*0x5a8657*/
                || (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B3B0B4[0xAC] + 0x198))(
                     dword_B3B0B4[0xAC],
                     0) )
              {
                v33 = 0; /*0x5a86ff*/
              }
              else
              {
                v31 = flt_B140C0; /*0x5a8670*/
                v33 = 1; /*0x5a8674*/
                v25 = flt_A40098; /*0x5a867f*/
                Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA9], 0xFB6); /*0x5a8687*/
                v20 = result; /*0x5a8693*/
                sub_589980((_DWORD *)dword_B3B0B4[0xA9], 0xFB6, v20, v25, v31); /*0x5a869b*/
                BYTE2(dword_B3B0B4[0xAB]) = 1; /*0x5a86a0*/
              }
              goto LABEL_41; /*0x5a86a0*/
            }
          }
          v14 = v13; /*0x5a8618*/
          goto LABEL_38; /*0x5a8618*/
        }
        Float = 0.0; /*0x5a848d*/
      }
      v30 = flt_B140C0; /*0x5a849e*/
      v24 = Float; /*0x5a84a2*/
      Float = Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA9], 0xFB6); /*0x5a84aa*/
      v19 = result; /*0x5a84b6*/
      sub_589980((_DWORD *)dword_B3B0B4[0xA9], 0xFB6, v19, v24, v30); /*0x5a84be*/
      v5 = (int *)dword_B3B0B4[0xAC]; /*0x5a84c3*/
      v6 = dword_B3B0B4[0xAC] == 0; /*0x5a84c9*/
      BYTE2(dword_B3B0B4[0xAB]) = 0; /*0x5a84cb*/
      if ( !v6 ) /*0x5a84d1*/
        goto LABEL_22; /*0x5a84d1*/
    }
LABEL_41:
    if ( (InterfaceManager_IsMenuMode() || !v33) && !bHealthBarShowing_Gameplay ) /*0x5a86b6*/
    {
      v32 = flt_B140C0; /*0x5a86cd*/
      Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA9], 0xFB6); /*0x5a86db*/
      v21 = result; /*0x5a86e7*/
      sub_589980((_DWORD *)dword_B3B0B4[0xA9], 0xFB6, v21, 0.0, v32); /*0x5a86ef*/
      BYTE2(dword_B3B0B4[0xAB]) = 0; /*0x5a86f4*/
    }
  }
  return result; /*0x5a86fa*/
}
