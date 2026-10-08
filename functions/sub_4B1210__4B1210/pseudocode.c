// Configure NiPointLight attenuation coefficients at +0x108/+0x10C/+0x110 from the native LIGH radius supplied in EAX and the engine interior/exterior attenuation settings. Sole direct caller is TESObjectLIGH_ConfigureReferencePointLight.
void __usercall NiPointLight_ConfigureAttenuationFromLightRadius(int a1@<eax>, int a2@<ecx>)
{
  int v2; // edx
  double v3; // st5
  double v4; // st4
  double v5; // st4
  double v6; // st4
  double v7; // st4
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float v11; // [esp+8h] [ebp-4h]
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+8h] [ebp-4h]

  if ( (unk_B35AC0 & 1) != 0 ) /*0x4b1222*/
    v11 = flt_B08178; /*0x4b122a*/
  else
    v11 = 0.0; /*0x4b1230*/
  *(_DWORD *)(a2 + 0xB8) += 3; /*0x4b1238*/
  v2 = *(_DWORD *)(a2 + 0xB8); /*0x4b123f*/
  *(float *)(a2 + 0x108) = v11; /*0x4b1245*/
  *(float *)(a2 + 0x10C) = 0.0; /*0x4b124b*/
  *(float *)(a2 + 0x110) = 0.0; /*0x4b1251*/
  v3 = fConstant_Inv100; /*0x4b1260*/
  if ( (unk_B35AC0 & 2) != 0 || MEMORY[0xB333A0]->currentInteriorCell && bOutQuadInLinearAttenuation == 1 ) /*0x4b127d*/
  {
    v4 = (double)a1; /*0x4b128b*/
    if ( a1 < 0 ) /*0x4b128f*/
      v4 = v4 + flt_A2FC78; /*0x4b1291*/
    v12 = v4 * flt_B08188; /*0x4b12a5*/
    if ( !dword_B08158 ) /*0x4b12a9*/
    {
      *(float *)(a2 + 0x10C) = flt_B08168; /*0x4b12fa*/
      goto LABEL_17; /*0x4b12fa*/
    }
    v5 = v12; /*0x4b12b8*/
    if ( dword_B08158 == 2 ) /*0x4b12ba*/
    {
      if ( v12 != 0.0 ) /*0x4b12e0*/
      {
        *(float *)(a2 + 0x10C) = flt_B08168 / (v5 * v5); /*0x4b12ec*/
        goto LABEL_17; /*0x4b12f2*/
      }
    }
    else if ( v12 != 0.0 ) /*0x4b12bf*/
    {
      *(float *)(a2 + 0x10C) = 1.0 / v5 * flt_B08168; /*0x4b12c9*/
LABEL_17:
      *(_DWORD *)(a2 + 0xB8) = v2 + 1; /*0x4b1300*/
      goto LABEL_18; /*0x4b1302*/
    }
    *(float *)(a2 + 0x10C) = v3; /*0x4b12d5*/
    goto LABEL_17; /*0x4b12db*/
  }
LABEL_18:
  if ( (unk_B35AC0 & 4) != 0 || !MEMORY[0xB333A0]->currentInteriorCell && bOutQuadInLinearAttenuation == 1 ) /*0x4b1327*/
  {
    v6 = (double)a1; /*0x4b1333*/
    if ( a1 < 0 ) /*0x4b1337*/
      v6 = v6 + flt_A2FC78; /*0x4b1339*/
    v13 = v6; /*0x4b1344*/
    v7 = v13; /*0x4b134b*/
    v14 = v13 * flt_B08190; /*0x4b1357*/
    if ( dword_B08160 ) /*0x4b133f*/
    {
      if ( dword_B08160 == 1 ) /*0x4b1363*/
      {
        if ( 0.0 == v14 ) /*0x4b13b1*/
        {
          ++*(_DWORD *)(a2 + 0xB8); /*0x4b13cd*/
          *(float *)(a2 + 0x110) = v3; /*0x4b13d8*/
        }
        else
        {
          v9 = 1.0 / v7 * flt_B08170; /*0x4b13b8*/
          ++*(_DWORD *)(a2 + 0xB8); /*0x4b13be*/
          *(float *)(a2 + 0x110) = v9; /*0x4b13c5*/
        }
      }
      else if ( v14 == 0.0 ) /*0x4b1376*/
      {
        ++*(_DWORD *)(a2 + 0xB8); /*0x4b1394*/
        *(float *)(a2 + 0x110) = v3; /*0x4b139d*/
      }
      else
      {
        v8 = flt_B08170 / (v14 * v14); /*0x4b137f*/
        ++*(_DWORD *)(a2 + 0xB8); /*0x4b1385*/
        *(float *)(a2 + 0x110) = v8; /*0x4b138c*/
      }
    }
    else
    {
      v10 = flt_B08170; /*0x4b13ea*/
      ++*(_DWORD *)(a2 + 0xB8); /*0x4b13f0*/
      *(float *)(a2 + 0x110) = v10; /*0x4b13f6*/
    }
  }
}
