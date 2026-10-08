void __thiscall sub_684000(int *this, Actor *a2)
{
  int *v2; // edi
  TESObjectREFR *LinkedDoor; // eax
  NiSurfaceData *v4; // ebx
  NiDX92DBufferData *SurfaceData; // eax
  char *v6; // ebp
  NiSurfaceData *v7; // esi
  float *Head; // eax
  float *v9; // edi
  float *v10; // eax
  float *v11; // edi
  float *v12; // eax
  float *v13; // edi
  float *v14; // eax
  double v15; // st7
  NiSurfaceData *v16; // eax
  float *v17; // eax
  float *v18; // edi
  float *v19; // eax
  double v20; // st7
  double v21; // st7
  float *v22; // edi
  float *v23; // eax
  double v24; // st7
  float v25; // [esp+4h] [ebp-68h]
  float v26; // [esp+4h] [ebp-68h]
  float v27; // [esp+4h] [ebp-68h]
  float v28; // [esp+4h] [ebp-68h]
  char v29; // [esp+1Eh] [ebp-4Eh]
  bool v30; // [esp+1Fh] [ebp-4Dh]
  float v31; // [esp+20h] [ebp-4Ch]
  int v32; // [esp+24h] [ebp-48h] BYREF
  int *v33; // [esp+28h] [ebp-44h]
  float v34; // [esp+2Ch] [ebp-40h]
  float v35; // [esp+30h] [ebp-3Ch] BYREF
  float v36; // [esp+34h] [ebp-38h]
  float v37; // [esp+38h] [ebp-34h]
  float v38; // [esp+3Ch] [ebp-30h] BYREF
  float v39; // [esp+40h] [ebp-2Ch]
  float v40; // [esp+44h] [ebp-28h]
  float v41; // [esp+48h] [ebp-24h]
  float v42; // [esp+4Ch] [ebp-20h]
  float v43; // [esp+50h] [ebp-1Ch]
  float v44; // [esp+54h] [ebp-18h]
  float v45; // [esp+58h] [ebp-14h]
  float v46; // [esp+5Ch] [ebp-10h]
  float v47[3]; // [esp+60h] [ebp-Ch] BYREF
  char v48; // [esp+70h] [ebp+4h]

  v2 = this; /*0x68400b*/
  v33 = this; /*0x68400d*/
  if ( !a2 ) /*0x684011*/
    return; /*0x684011*/
  v29 = sub_5E3400(a2); /*0x684022*/
  v30 = !sub_5E1E90(a2); /*0x684030*/
  LinkedDoor = TeleportData_GetLinkedDoor((TeleportData *)(v2 + 5)); /*0x684035*/
  v4 = (NiSurfaceData *)LinkedDoor; /*0x68403a*/
  if ( LinkedDoor ) /*0x68403e*/
  {
    SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)LinkedDoor); /*0x684042*/
    v6 = (char *)SurfaceData; /*0x684047*/
    if ( SurfaceData ) /*0x68404b*/
    {
      v7 = NiDX92DBufferData::GetSurfaceData(SurfaceData); /*0x684054*/
      goto LABEL_7; /*0x684056*/
    }
  }
  else
  {
    v6 = 0; /*0x684058*/
  }
  v7 = 0; /*0x68405a*/
LABEL_7:
  v48 = 0; /*0x68405c*/
  if ( v4 ) /*0x684063*/
  {
    do /*0x68438d*/
    {
      if ( !v6 || !v7 ) /*0x68407a*/
        break; /*0x68407a*/
      if ( !v29 && sub_68CA80(v7) || !v30 && sub_68CAB0(v7) ) /*0x68409f*/
        goto LABEL_33; /*0x6840a6*/
      if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x6840b1*/
      {
        Head = (float *)EmbeddedList_GetHead(v6); /*0x6840b9*/
        if ( !sub_43F840(MEMORY[0xB333A0], Head) ) /*0x6840c5*/
          break; /*0x6840cc*/
      }
      v9 = (float *)EmbeddedList_GetHead((char *)v4); /*0x6840db*/
      v10 = (float *)EmbeddedList_GetHead(v6); /*0x6840dd*/
      v47[0] = *v10 - *v9; /*0x6840eb*/
      v47[1] = v10[1] - v9[1]; /*0x6840f5*/
      v47[2] = v10[2] - v9[2]; /*0x6840ff*/
      v31 = Vector3_CalculateHeadingRadiansXY(v47); /*0x68410b*/
      v11 = (float *)EmbeddedList_GetHead(v6); /*0x684118*/
      v12 = (float *)EmbeddedList_GetHead((char *)v7); /*0x68411a*/
      v35 = *v12 - *v11; /*0x684128*/
      v36 = v12[1] - v11[1]; /*0x684132*/
      v37 = v12[2] - v11[2]; /*0x684141*/
      v25 = Vector3_CalculateHeadingRadiansXY(&v35); /*0x68414a*/
      v34 = fabs(sub_683AD0(v31, v25, (float *)&v32)); /*0x68415f*/
      v13 = (float *)EmbeddedList_GetHead((char *)v4); /*0x684174*/
      v14 = (float *)EmbeddedList_GetHead((char *)v7); /*0x684176*/
      v38 = *v14 - *v13; /*0x684188*/
      v39 = v14[1] - v13[1]; /*0x684193*/
      v40 = v14[2] - v13[2]; /*0x68419d*/
      v26 = Vector3_CalculateHeadingRadiansXY(&v38); /*0x6841a6*/
      *(float *)&v32 = fabs(sub_683AD0(v31, v26, (float *)&v32)); /*0x6841bb*/
      v15 = flt_A6E734; /*0x6841cd*/
      if ( v15 > *(float *)&v32 ) /*0x6841d2*/
      {
        while ( v15 > v34 && !v48 && !sub_68CA50(v6) ) /*0x6841fb*/
        {
          sub_68BE80((NiSurfaceData **)v33 + 5, (NiDX92DBufferData *)v6, v4); /*0x68420a*/
          v6 = (char *)v7; /*0x684211*/
          v16 = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v7); /*0x684213*/
          v7 = v16; /*0x684218*/
          if ( !v16 ) /*0x68421c*/
            goto LABEL_31; /*0x68421c*/
          if ( !v29 && sub_68CA80(v16) || !v30 && sub_68CAB0(v7) ) /*0x684241*/
          {
            v48 = 1; /*0x6843b5*/
            break; /*0x6843ba*/
          }
          if ( MEMORY[0xB333A0]->currentInteriorCell /*0x684267*/
            || (v17 = (float *)EmbeddedList_GetHead(v6), sub_43F840(MEMORY[0xB333A0], v17)) )
          {
            v18 = (float *)EmbeddedList_GetHead(v6); /*0x68427d*/
            v19 = (float *)EmbeddedList_GetHead((char *)v7); /*0x68427f*/
            v41 = *v19 - *v18; /*0x684288*/
            v20 = v19[1]; /*0x684290*/
            v35 = v41; /*0x684293*/
            v42 = v20 - v18[1]; /*0x68429f*/
            v21 = v19[2]; /*0x6842a7*/
            v36 = v42; /*0x6842aa*/
            v43 = v21 - v18[2]; /*0x6842b6*/
            v37 = v43; /*0x6842be*/
            v27 = Vector3_CalculateHeadingRadiansXY(&v35); /*0x6842c7*/
            v34 = fabs(sub_683AD0(v31, v27, (float *)&v32)); /*0x6842dc*/
            v22 = (float *)EmbeddedList_GetHead((char *)v4); /*0x6842f1*/
            v23 = (float *)EmbeddedList_GetHead((char *)v7); /*0x6842f3*/
            v44 = *v23 - *v22; /*0x6842fc*/
            v45 = v23[1] - v22[1]; /*0x684306*/
            v24 = v23[2] - v22[2]; /*0x684315*/
            v38 = v44; /*0x684318*/
            v39 = v45; /*0x684320*/
            v46 = v24; /*0x684324*/
            v40 = v46; /*0x684332*/
            v28 = Vector3_CalculateHeadingRadiansXY(&v38); /*0x68433b*/
            *(float *)&v32 = fabs(sub_683AD0(v31, v28, (float *)&v32)); /*0x684350*/
            v15 = flt_A6E734; /*0x684362*/
            if ( v15 > *(float *)&v32 ) /*0x684367*/
              continue; /*0x684367*/
          }
          break; /*0x684367*/
        }
      }
      if ( v7 ) /*0x684371*/
      {
        if ( !v48 ) /*0x684378*/
        {
          v4 = (NiSurfaceData *)v6; /*0x68437a*/
          v6 = (char *)v7; /*0x68437e*/
          v7 = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v7); /*0x684385*/
        }
      }
LABEL_31:
      v2 = v33; /*0x684389*/
    }
    while ( v4 ); /*0x68438d*/
    if ( !v48 ) /*0x684398*/
      return; /*0x684398*/
LABEL_33:
    if ( v7 ) /*0x68439c*/
    {
      sub_68C0F0((NiDX92DBufferData **)v2 + 5, (NiDX92DBufferData *)v7); /*0x6843a2*/
      *((_BYTE *)v2 + 0x2C) |= 0x80u; /*0x6843a7*/
    }
  }
}
