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

  if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x4ebdcc*/
  {
    if ( byte_B09B00 ) /*0x4ebdd7*/
    {
      if ( byte_B09AE4 ) /*0x4ebde3*/
      {
        if ( !unk_B3608D ) /*0x4ebdef*/
          sub_4EA750(); /*0x4ebdf7*/
        v49 = SettingGrassEndDistance; /*0x4ebe08*/
        unk_B43344 = bGrassPointLightening; /*0x4ebe0c*/
        v50 = SettingGrassStartFadeDistance; /*0x4ebe18*/
        if ( v49 > 0.0 ) /*0x4ebe27*/
        {
          if ( !unk_B36094 ) /*0x4ebe2d*/
          {
            ShadowSceneNode = GetShadowSceneNode(0); /*0x4ebe3d*/
            v8 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)ShadowSceneNode + 0x58))( /*0x4ebe4e*/
                   ShadowSceneNode,
                   "Grass");
            unk_B36094 = v8; /*0x4ebe52*/
            if ( !v8 ) /*0x4ebe57*/
            {
              v9 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4ebe5e*/
              if ( v9 ) /*0x4ebe74*/
                v10 = (NiObjectNET *)NiNode::NiNode(v9, 0); /*0x4ebe7a*/
              else
                v10 = 0; /*0x4ebe81*/
              unk_B36094 = (int)v10; /*0x4ebe92*/
              NiObjectNET_SetName(v10, "Grass"); /*0x4ebe97*/
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)ShadowSceneNode + 0x84))( /*0x4ebeae*/
                ShadowSceneNode,
                unk_B36094,
                0);
            }
          }
          sub_7C2960(0.0, 0.0, v50, v49); /*0x4ebecc*/
          v11 = Double_To_SInt32(*(float *)&a1); /*0x4ebeef*/
          a2 = v11; /*0x4ebef3*/
          v12 = Double_To_SInt32(*(float *)&a1); /*0x4ebef9*/
          v13 = v12; /*0x4ebf02*/
          a3 = v12; /*0x4ebf04*/
          if ( *(float *)&a1 < 0.0 ) /*0x4ebf0f*/
            a2 = --v11; /*0x4ebf14*/
          if ( *(float *)&arg4 < 0.0 ) /*0x4ebf1f*/
          {
            v13 = v12 - 1; /*0x4ebf21*/
            a3 = v12 - 1; /*0x4ebf24*/
          }
          CellFromCoords = TES_GetCellFromCoords(MEMORY[0xB333A0], v11, v13); /*0x4ebf30*/
          DrawGrass( /*0x4ebf87*/
            (TESObjectCELL *)CellFromCoords,
            unk_B36094,
            *(float *)&a1,
            *(float *)&arg4,
            *(float *)&arg8,
            a4,
            *(float *)&a5,
            a6,
            v50,
            SLODWORD(v49),
            a7);
          v57 = *(float *)&a1 - (double)(a2 << 0xC); /*0x4ebfbb*/
          v54 = a2 - 1; /*0x4ebfc8*/
          v58 = *(float *)&arg4 - (double)(a3 << 0xC); /*0x4ebfcc*/
          v15 = TES_GetCellFromCoords(MEMORY[0xB333A0], a2 - 1, a3); /*0x4ebfd5*/
          v41 = (TESObjectCELL *)v15; /*0x4ebfd9*/
          if ( v15 ) /*0x4ebfdd*/
          {
            if ( v57 - v49 >= dbl_A2FC68 ) /*0x4ebff8*/
            {
              YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v15); /*0x4ec04c*/
              XCoordinate = TESObjectCELL_GetXCoordinate(v41); /*0x4ec04d*/
              sub_7C3AB0(XCoordinate, YCoordinate); /*0x4ec053*/
            }
            else
            {
              DrawGrass( /*0x4ec037*/
                (TESObjectCELL *)v15,
                unk_B36094,
                *(float *)&a1,
                *(float *)&arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                SLODWORD(v49),
                a7);
            }
          }
          v56 = a2 + 1; /*0x4ec06e*/
          v17 = TES_GetCellFromCoords(MEMORY[0xB333A0], a2 + 1, a3); /*0x4ec077*/
          v42 = (TESObjectCELL *)v17; /*0x4ec07b*/
          if ( v17 ) /*0x4ec07f*/
          {
            if ( v57 + v49 <= dbl_A37650 ) /*0x4ec09a*/
            {
              v34 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v17); /*0x4ec0ee*/
              v18 = TESObjectCELL_GetXCoordinate(v42); /*0x4ec0ef*/
              sub_7C3AB0(v18, v34); /*0x4ec0f5*/
            }
            else
            {
              DrawGrass( /*0x4ec0d9*/
                (TESObjectCELL *)v17,
                unk_B36094,
                *(float *)&a1,
                *(float *)&arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                SLODWORD(v49),
                a7);
            }
          }
          v55 = a3 - 1; /*0x4ec110*/
          v19 = TES_GetCellFromCoords(MEMORY[0xB333A0], a2, a3 - 1); /*0x4ec119*/
          v43 = (TESObjectCELL *)v19; /*0x4ec11d*/
          if ( v19 ) /*0x4ec121*/
          {
            if ( v58 - v49 >= dbl_A2FC68 ) /*0x4ec13c*/
            {
              v35 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v19); /*0x4ec190*/
              v20 = TESObjectCELL_GetXCoordinate(v43); /*0x4ec191*/
              sub_7C3AB0(v20, v35); /*0x4ec197*/
            }
            else
            {
              DrawGrass( /*0x4ec17b*/
                (TESObjectCELL *)v19,
                unk_B36094,
                *(float *)&a1,
                *(float *)&arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                SLODWORD(v49),
                a7);
            }
          }
          a3a = a3 + 1; /*0x4ec1b2*/
          v21 = TES_GetCellFromCoords(MEMORY[0xB333A0], a2, a3a); /*0x4ec1bb*/
          v44 = (TESObjectCELL *)v21; /*0x4ec1bf*/
          if ( v21 ) /*0x4ec1c3*/
          {
            if ( v58 + v49 <= dbl_A37650 ) /*0x4ec1de*/
            {
              v36 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v21); /*0x4ec232*/
              v22 = TESObjectCELL_GetXCoordinate(v44); /*0x4ec233*/
              sub_7C3AB0(v22, v36); /*0x4ec239*/
            }
            else
            {
              DrawGrass( /*0x4ec21d*/
                (TESObjectCELL *)v21,
                unk_B36094,
                *(float *)&a1,
                *(float *)&arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                SLODWORD(v49),
                a7);
            }
          }
          v23 = TES_GetCellFromCoords(MEMORY[0xB333A0], v54, v55); /*0x4ec256*/
          v45 = (TESObjectCELL *)v23; /*0x4ec25a*/
          if ( v23 ) /*0x4ec25e*/
          {
            if ( v57 - v49 >= 0.0 || v58 - v49 >= 0.0 ) /*0x4ec28c*/
            {
              v37 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v23); /*0x4ec2e2*/
              v24 = TESObjectCELL_GetXCoordinate(v45); /*0x4ec2e3*/
              sub_7C3AB0(v24, v37); /*0x4ec2e9*/
            }
            else
            {
              DrawGrass( /*0x4ec2cb*/
                (TESObjectCELL *)v23,
                unk_B36094,
                *(float *)&a1,
                *(float *)&arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                SLODWORD(v49),
                a7);
            }
          }
          v25 = TES_GetCellFromCoords(MEMORY[0xB333A0], v54, a3a); /*0x4ec306*/
          v46 = (TESObjectCELL *)v25; /*0x4ec30a*/
          if ( v25 ) /*0x4ec30e*/
          {
            if ( v57 - v49 >= dbl_A2FC68 || v58 + v49 <= dbl_A37650 ) /*0x4ec340*/
            {
              v38 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v25); /*0x4ec394*/
              v26 = TESObjectCELL_GetXCoordinate(v46); /*0x4ec395*/
              sub_7C3AB0(v26, v38); /*0x4ec39b*/
            }
            else
            {
              DrawGrass( /*0x4ec37f*/
                (TESObjectCELL *)v25,
                unk_B36094,
                *(float *)&a1,
                *(float *)&arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                SLODWORD(v49),
                a7);
            }
          }
          v27 = TES_GetCellFromCoords(MEMORY[0xB333A0], v56, v55); /*0x4ec3b8*/
          v47 = (TESObjectCELL *)v27; /*0x4ec3bc*/
          if ( v27 ) /*0x4ec3c0*/
          {
            if ( v57 + v49 <= dbl_A37650 || v58 - v49 >= dbl_A2FC68 ) /*0x4ec3f2*/
            {
              v39 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v27); /*0x4ec446*/
              v28 = TESObjectCELL_GetXCoordinate(v47); /*0x4ec447*/
              sub_7C3AB0(v28, v39); /*0x4ec44d*/
            }
            else
            {
              DrawGrass( /*0x4ec431*/
                (TESObjectCELL *)v27,
                unk_B36094,
                *(float *)&a1,
                *(float *)&arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                SLODWORD(v49),
                a7);
            }
          }
          v29 = TES_GetCellFromCoords(MEMORY[0xB333A0], v56, a3a); /*0x4ec46a*/
          v48 = (TESObjectCELL *)v29; /*0x4ec46e*/
          if ( v29 ) /*0x4ec472*/
          {
            v30 = dbl_A37650; /*0x4ec48e*/
            if ( v30 >= v57 + v49 || v58 + v49 <= v30 ) /*0x4ec4a4*/
            {
              v40 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v29); /*0x4ec4fa*/
              v31 = TESObjectCELL_GetXCoordinate(v48); /*0x4ec4fb*/
              sub_7C3AB0(v31, v40); /*0x4ec501*/
            }
            else
            {
              DrawGrass( /*0x4ec4e3*/
                (TESObjectCELL *)v29,
                unk_B36094,
                *(float *)&a1,
                *(float *)&arg4,
                *(float *)&arg8,
                a4,
                *(float *)&a5,
                a6,
                v50,
                SLODWORD(v49),
                a7);
            }
          }
          if ( bGrassPointLightening ) /*0x4ec509*/
          {
            v32 = 0; /*0x4ec512*/
            if ( unk_B43384 ) /*0x4ec514*/
            {
              sub_43F2E0(&unk_B43400); /*0x4ec521*/
              v32 = 1; /*0x4ec526*/
            }
            GetShadowSceneNode(0); /*0x4ec52a*/
            sub_7C7050(unk_B36094, 0); /*0x4ec538*/
            if ( v32 ) /*0x4ec542*/
              sub_43F300(&unk_B43400); /*0x4ec549*/
          }
          if ( unk_B36094 ) /*0x4ec54e*/
          {
            NiAVObject_UpdateNiAVObject((NiAVObject *)unk_B36094, 0.0, 0); /*0x4ec560*/
            NiAVObject_InitializePropertyState((NiAVObject *)unk_B36094); /*0x4ec56b*/
          }
        }
      }
    }
  }
}
