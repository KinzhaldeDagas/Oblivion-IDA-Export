void __cdecl DrawGrassPass_(int a1, int arg4, int arg8, float a4, int a5, int a6, float a7)
{
  int ShadowSceneNode; // esi
  int v8; // eax
  NiNode *v9; // eax
  NiObjectNET *v10; // eax
  signed int v11; // esi
  int v12; // eax
  signed int v13; // ecx
  TESForm *CellFromCoords; // eax
  TESForm *v15; // ecx
  int XCoordinate; // eax
  TESForm *v17; // ecx
  int v18; // eax
  TESForm *v19; // ecx
  int v20; // eax
  TESForm *v21; // ecx
  int v22; // eax
  TESForm *v23; // ecx
  int v24; // eax
  TESForm *v25; // ecx
  int v26; // eax
  TESForm *v27; // ecx
  int v28; // eax
  TESForm *v29; // ecx
  double v30; // st7
  int v31; // eax
  char v32; // bl
  int YCoordinate; // [esp+18h] [ebp-4Ch]
  int v34; // [esp+18h] [ebp-4Ch]
  int v35; // [esp+18h] [ebp-4Ch]
  int v36; // [esp+18h] [ebp-4Ch]
  int v37; // [esp+18h] [ebp-4Ch]
  int v38; // [esp+18h] [ebp-4Ch]
  int v39; // [esp+18h] [ebp-4Ch]
  int v40; // [esp+18h] [ebp-4Ch]
  TESObjectCELL *v41; // [esp+30h] [ebp-34h]
  TESObjectCELL *v42; // [esp+30h] [ebp-34h]
  TESObjectCELL *v43; // [esp+30h] [ebp-34h]
  TESObjectCELL *v44; // [esp+30h] [ebp-34h]
  TESObjectCELL *v45; // [esp+30h] [ebp-34h]
  TESObjectCELL *v46; // [esp+30h] [ebp-34h]
  TESObjectCELL *v47; // [esp+30h] [ebp-34h]
  TESObjectCELL *v48; // [esp+30h] [ebp-34h]
  float v49; // [esp+34h] [ebp-30h]
  float v50; // [esp+38h] [ebp-2Ch]
  signed int a3; // [esp+3Ch] [ebp-28h]
  signed int a3a; // [esp+3Ch] [ebp-28h]
  signed int a2; // [esp+40h] [ebp-24h]
  signed int v54; // [esp+44h] [ebp-20h]
  signed int v55; // [esp+48h] [ebp-1Ch]
  signed int v56; // [esp+4Ch] [ebp-18h]
  float v57; // [esp+50h] [ebp-14h]
  float v58; // [esp+54h] [ebp-10h]

  if ( !TES->currentInteriorCell )
  {
    if ( byte_B09B00 )
    {
      if ( byte_B09AE4 )
      {
        if ( !byte_B3608D )
          sub_4EA750();
        v49 = SettingGrassEndDistance;
        byte_B43344 = bGrassPointLightening;
        v50 = SettingGrassStartFadeDistance;
        if ( v49 > 0.0 )
        {
          if ( !dword_B36094 )
          {
            ShadowSceneNode = GetShadowSceneNode(0);
            v8 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)ShadowSceneNode + 0x58))(
                   ShadowSceneNode,
                   "Grass");
            dword_B36094 = v8;
            if ( !v8 )
            {
              v9 = (NiNode *)FormHeapAlloc(0xDCu);
              if ( v9 )
                v10 = (NiObjectNET *)NiNode::NiNode(v9, 0);
              else
                v10 = 0;
              dword_B36094 = (int)v10;
              NiObjectNET_SetName(v10, "Grass");
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)ShadowSceneNode + 0x84))(
                ShadowSceneNode,
                dword_B36094,
                0);
            }
          }
          sub_7C2960(0.0, 0.0, v50, v49);
          v11 = Double_To_SInt32(*(float *)&a1);
          a2 = v11;
          v12 = Double_To_SInt32(*(float *)&a1);
          v13 = v12;
          a3 = v12;
          if ( *(float *)&a1 < 0.0 )
            a2 = --v11;
          if ( *(float *)&arg4 < 0.0 )
          {
            v13 = v12 - 1;
            a3 = v12 - 1;
          }
          CellFromCoords = TES_GetCellFromCoords(TES, v11, v13);
          DrawGrass(
            (TESObjectCELL *)CellFromCoords,
            dword_B36094,
            a1,
            arg4,
            *(float *)&arg8,
            a4,
            *(float *)&a5,
            a6,
            v50,
            v49,
            a7);
          v57 = *(float *)&a1 - (double)(a2 << 0xC);
          v54 = a2 - 1;
          v58 = *(float *)&arg4 - (double)(a3 << 0xC);
          v15 = TES_GetCellFromCoords(TES, a2 - 1, a3);
          v41 = (TESObjectCELL *)v15;
          if ( v15 )
          {
            if ( v57 - v49 >= dbl_A2FC68 )
            {
              YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v15);
              XCoordinate = TESObjectCELL_GetXCoordinate(v41);
              sub_7C3AB0(XCoordinate, YCoordinate);
            }
            else
            {
              DrawGrass(
                (TESObjectCELL *)v15,
                dword_B36094,
                a1,
                arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                v49,
                a7);
            }
          }
          v56 = a2 + 1;
          v17 = TES_GetCellFromCoords(TES, a2 + 1, a3);
          v42 = (TESObjectCELL *)v17;
          if ( v17 )
          {
            if ( v57 + v49 <= dbl_A37650 )
            {
              v34 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v17);
              v18 = TESObjectCELL_GetXCoordinate(v42);
              sub_7C3AB0(v18, v34);
            }
            else
            {
              DrawGrass(
                (TESObjectCELL *)v17,
                dword_B36094,
                a1,
                arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                v49,
                a7);
            }
          }
          v55 = a3 - 1;
          v19 = TES_GetCellFromCoords(TES, a2, a3 - 1);
          v43 = (TESObjectCELL *)v19;
          if ( v19 )
          {
            if ( v58 - v49 >= dbl_A2FC68 )
            {
              v35 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v19);
              v20 = TESObjectCELL_GetXCoordinate(v43);
              sub_7C3AB0(v20, v35);
            }
            else
            {
              DrawGrass(
                (TESObjectCELL *)v19,
                dword_B36094,
                a1,
                arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                v49,
                a7);
            }
          }
          a3a = a3 + 1;
          v21 = TES_GetCellFromCoords(TES, a2, a3a);
          v44 = (TESObjectCELL *)v21;
          if ( v21 )
          {
            if ( v58 + v49 <= dbl_A37650 )
            {
              v36 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v21);
              v22 = TESObjectCELL_GetXCoordinate(v44);
              sub_7C3AB0(v22, v36);
            }
            else
            {
              DrawGrass(
                (TESObjectCELL *)v21,
                dword_B36094,
                a1,
                arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                v49,
                a7);
            }
          }
          v23 = TES_GetCellFromCoords(TES, v54, v55);
          v45 = (TESObjectCELL *)v23;
          if ( v23 )
          {
            if ( v57 - v49 >= 0.0 || v58 - v49 >= 0.0 )
            {
              v37 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v23);
              v24 = TESObjectCELL_GetXCoordinate(v45);
              sub_7C3AB0(v24, v37);
            }
            else
            {
              DrawGrass(
                (TESObjectCELL *)v23,
                dword_B36094,
                a1,
                arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                v49,
                a7);
            }
          }
          v25 = TES_GetCellFromCoords(TES, v54, a3a);
          v46 = (TESObjectCELL *)v25;
          if ( v25 )
          {
            if ( v57 - v49 >= dbl_A2FC68 || v58 + v49 <= dbl_A37650 )
            {
              v38 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v25);
              v26 = TESObjectCELL_GetXCoordinate(v46);
              sub_7C3AB0(v26, v38);
            }
            else
            {
              DrawGrass(
                (TESObjectCELL *)v25,
                dword_B36094,
                a1,
                arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                v49,
                a7);
            }
          }
          v27 = TES_GetCellFromCoords(TES, v56, v55);
          v47 = (TESObjectCELL *)v27;
          if ( v27 )
          {
            if ( v57 + v49 <= dbl_A37650 || v58 - v49 >= dbl_A2FC68 )
            {
              v39 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v27);
              v28 = TESObjectCELL_GetXCoordinate(v47);
              sub_7C3AB0(v28, v39);
            }
            else
            {
              DrawGrass(
                (TESObjectCELL *)v27,
                dword_B36094,
                a1,
                arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                v49,
                a7);
            }
          }
          v29 = TES_GetCellFromCoords(TES, v56, a3a);
          v48 = (TESObjectCELL *)v29;
          if ( v29 )
          {
            v30 = dbl_A37650;
            if ( v30 >= v57 + v49 || v58 + v49 <= v30 )
            {
              v40 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v29);
              v31 = TESObjectCELL_GetXCoordinate(v48);
              sub_7C3AB0(v31, v40);
            }
            else
            {
              DrawGrass(
                (TESObjectCELL *)v29,
                dword_B36094,
                a1,
                arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                v49,
                a7);
            }
          }
          if ( bGrassPointLightening )
          {
            v32 = 0;
            if ( byte_B43384 )
            {
              sub_43F2E0(&stru_B43400);
              v32 = 1;
            }
            GetShadowSceneNode(0);
            sub_7C7050(dword_B36094, 0);
            if ( v32 )
              sub_43F300(&stru_B43400);
          }
          if ( dword_B36094 )
          {
            NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B36094, 0.0, 0);
            NiAVObject_InitializePropertyState((NiAVObject *)dword_B36094);
          }
        }
      }
    }
  }
}
