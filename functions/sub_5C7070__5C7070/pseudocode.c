void __cdecl sub_5C7070(char arg0)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // edi
  TESForm *v3; // ebx
  Data *data; // esi
  char *v5; // eax
  double v6; // st7
  double v7; // st4
  double v8; // st6
  double v9; // st5
  double v10; // st3
  bool v11; // c0
  bool v12; // c3
  double v13; // st7
  double v14; // st7
  double v15; // st6
  double v16; // st6
  double v17; // st7
  double v18; // st5
  char *v19; // eax
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // esi
  int v23; // ecx
  int v24; // eax
  int v25; // ebp
  NiObject *v26; // eax
  NiObject *v27; // esi
  char *v28; // eax
  int v29; // eax
  bool v30; // zf
  NiNode *v31; // eax
  int v32; // edi
  _DWORD *ShadowSceneNode; // eax
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  _DWORD *v36; // esi
  _DWORD *v37; // eax
  _DWORD *v38; // esi
  int v39; // eax
  int v40; // eax
  NiNode **v41; // [esp+8h] [ebp-22Ch]
  float v42; // [esp+10h] [ebp-224h]
  int v43; // [esp+10h] [ebp-224h]
  int v44; // [esp+10h] [ebp-224h]
  float v45; // [esp+28h] [ebp-20Ch]
  float v46; // [esp+28h] [ebp-20Ch]
  float v47; // [esp+28h] [ebp-20Ch]
  float v48; // [esp+28h] [ebp-20Ch]
  int v49; // [esp+28h] [ebp-20Ch]
  float v50; // [esp+2Ch] [ebp-208h]
  float v51; // [esp+2Ch] [ebp-208h]
  float v52; // [esp+2Ch] [ebp-208h]
  float v53; // [esp+2Ch] [ebp-208h]
  int v54; // [esp+2Ch] [ebp-208h]
  float v55; // [esp+30h] [ebp-204h]
  unsigned int v56; // [esp+30h] [ebp-204h]
  double v57; // [esp+34h] [ebp-200h] BYREF
  double v58; // [esp+3Ch] [ebp-1F8h]
  int a1[24]; // [esp+44h] [ebp-1F0h] BYREF
  int v60[24]; // [esp+A4h] [ebp-190h] BYREF
  int v61[24]; // [esp+104h] [ebp-130h] BYREF
  unsigned int v62; // [esp+164h] [ebp-D0h] BYREF
  _DWORD v63[47]; // [esp+16Ch] [ebp-C8h] BYREF
  unsigned int v64; // [esp+230h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      if ( ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
             TESDataHandler_g_PlayerRef,
             0) )
      {
        if ( ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(
               TESDataHandler_g_PlayerRef,
               0) )
        {
          v3 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
          TESDataHandler_g_PlayerRef->super.super.super.process->Unk_17(TESDataHandler_g_PlayerRef->super.super.super.process);
          ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
          v64 = 0;
          ArrayConstructor(v60, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
          data = v3[9].member.modlist.data;
          LOBYTE(v64) = 1;
          v5 = (char *)sub_521A10((TESNPC *)v3);
          sub_552990((char *)&data->findData.ftLastAccessTime, v5, (int)a1, 0, 0.0);
          BSFaceGen_GetAge((int)a1, 0, 0);
          BSFaceGen_GetAge((int)a1, 0, 1);
          v50 = *(float *)(ParentMenu + 0x880);
          v58 = 1.0 - 0.0;
          v6 = dbl_A492F0;
          v51 = (v50 - 0.0) / v58 * dbl_A3F3D0 + v6;
          v45 = (float)0.0 - ((float)0.0 - v51);
          if ( v51 > v6 && flt_A47800 <= (double)v51 )
          {
            v9 = flt_A47800;
            v8 = flt_A468FC;
            v7 = v9;
          }
          else
          {
            v7 = v51;
            if ( v51 <= v6 )
              v7 = flt_A468FC;
            v8 = flt_A468FC;
            v9 = flt_A47800;
          }
          v10 = v45;
          if ( v45 > v6 && v10 >= v9 )
          {
            v13 = v7;
            v45 = v9;
          }
          else
          {
            v11 = v10 < v6;
            v12 = v10 == v6;
            v13 = v7;
            if ( v11 || v12 )
              v45 = v8;
          }
          v42 = v13;
          sub_555A00((int)a1, 0, 0, v42);
          sub_555A00((int)a1, 0, 1, v45);
          BSFaceGen_GetAge((int)a1, 1, 0);
          v14 = v45 - sub_522230(v3);
          v55 = v14;
          BSFaceGen_GetAge((int)a1, 1, 1);
          v57 = v14;
          v46 = v14 - sub_522230(v3);
          v52 = (*(float *)(ParentMenu + 0x884) - dbl_A2FC68) / v58 * dbl_A3C800 - dbl_A3D0C0;
          v47 = v46 - (v55 - v52);
          v15 = flt_A53954;
          if ( v15 < v52 && fConstant_2 <= (double)v52 )
          {
            v16 = fConstant_2;
            v17 = flt_A53954;
            v52 = fConstant_2;
          }
          else
          {
            if ( v52 <= v15 )
              v52 = flt_A53954;
            v16 = fConstant_2;
            v17 = flt_A53954;
          }
          v18 = v47;
          if ( v47 > v17 && v18 >= v16 )
          {
            v47 = v16;
          }
          else if ( v18 <= v17 )
          {
            v47 = v17;
          }
          v53 = sub_522230(v3) + v52;
          v48 = sub_522230(v3) + v47;
          sub_555A00((int)a1, 1, 0, v53);
          sub_555A00((int)a1, 1, 1, v48);
          sub_552880(v60);
          ArrayConstructor(v61, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
          LOBYTE(v64) = 2;
          sub_5221C0((int *)v3, v61);
          sub_552C10(v61, (int)a1, (int)v60);
          v41 = sub_521A10((TESNPC *)v3);
          v19 = (char *)sub_521A10((TESNPC *)v3);
          sub_552990((char *)v60, v19, (int)v41, 0, 0.0);
          v49 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                  TESDataHandler_g_PlayerRef,
                  0);
          v54 = 2;
          do
          {
            v20 = v49;
            v21 = *(unsigned __int16 *)(v49 + 0xB6);
            v22 = 0;
            LODWORD(v57) = v21;
            v56 = 0;
            if ( v21 )
            {
              while ( 1 )
              {
                if ( *(unsigned __int16 *)(v20 + 0xB6) > v22 )
                {
                  v23 = *(_DWORD *)(*(_DWORD *)(v20 + 0xB0) + 4 * v22);
                  if ( v23 )
                  {
                    v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 0x10))(v23);
                    v25 = v24;
                    if ( v24 )
                    {
                      if ( !strcmp(*(const char **)(v24 + 8), "FaceGenHair") )
                      {
                        *(float *)&v58 = *(float *)&v3[0x13].member.type;
                        sub_550980(v24, *(float *)&v58);
                      }
                      v26 = sub_550790(v25);
                      v27 = v26;
                      if ( v26 )
                      {
                        if ( v26->__vftable[1].Unk_02(v26) )
                        {
                          v28 = (char *)v27->__vftable[1].Unk_02(v27);
                          sub_558840(v28, (unsigned int *)v60, v25, 1.0, 0);
                          if ( !strcmp(*(const char **)(v25 + 8), "FaceGenHair") )
                          {
                            *(float *)&v58 = *(float *)&v3[0x13].member.type;
                            sub_550980(v25, *(float *)&v58);
                          }
                        }
                      }
                      v22 = v56;
                    }
                  }
                }
                v56 = ++v22;
                if ( v22 >= LODWORD(v57) )
                  break;
                v20 = v49;
              }
            }
            v29 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(
                    TESDataHandler_g_PlayerRef,
                    0);
            v30 = v54-- == 1;
            v49 = v29;
          }
          while ( !v30 );
          if ( arg0 )
          {
            v31 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetNiNode(TESDataHandler_g_PlayerRef);
            if ( v31 )
            {
              if ( v31->vtbl->super.super.Unk_02((NiObject *)v31) )
              {
                v32 = 0;
                if ( Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0) )
                {
                  if ( *((_DWORD *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0) + 0x26) )
                    v32 = *(_DWORD *)(*((_DWORD *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0) + 0x26)
                                    + 0x7C);
                }
                v43 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(
                        TESDataHandler_g_PlayerRef,
                        0);
                ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
                sub_7C5E70(ShadowSceneNode, v43);
                v44 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                        TESDataHandler_g_PlayerRef,
                        0);
                v34 = (_DWORD *)GetShadowSceneNode(0);
                sub_7C5E70(v34, v44);
                v35 = (_DWORD *)((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(
                                  TESDataHandler_g_PlayerRef,
                                  0);
                v36 = v35;
                if ( v35 )
                {
                  if ( v35[7] )
                  {
                    sub_716620(v35, v32);
                    (*(void (__thiscall **)(_DWORD, double *, _DWORD *))(*(_DWORD *)v36[7] + 0x88))(v36[7], &v57, v36);
                    sub_7016A0((NiD3DVertexShader *)&v57);
                  }
                }
                v37 = (_DWORD *)((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                                  TESDataHandler_g_PlayerRef,
                                  0);
                v38 = v37;
                if ( v37 )
                {
                  if ( v37[7] )
                  {
                    sub_716620(v37, v32);
                    (*(void (__thiscall **)(_DWORD, double *, _DWORD *))(*(_DWORD *)v38[7] + 0x88))(v38[7], &v57, v38);
                    sub_7016A0((NiD3DVertexShader *)&v57);
                  }
                }
              }
            }
            TESDataHandler_g_PlayerRef->super.super.super.process->Unk_17(TESDataHandler_g_PlayerRef->super.super.super.process);
            sub_405CE0(v3);
            FaceGenHeadParameters_Ctor(v63);
            TESRace_GetFaceGenHeadParameters((int *)v3[9].member.modlist.data, (int)v3, (int)v63);
            v39 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(TESDataHandler_g_PlayerRef);
            BSFaceGen_DoSomethingWithFaceGenNode(v39, 0);
            v40 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(TESDataHandler_g_PlayerRef);
            BSFaceGen_DoSomethingWithFaceGenNode(v40, 0);
            LOBYTE(v64) = 2;
            FaceGenHeadParameters_Dtor(&v62);
          }
          LOBYTE(v64) = 1;
          _LN21(v61, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
          LOBYTE(v64) = 0;
          _LN21(v60, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
          v64 = 0xFFFFFFFF;
          _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
        }
      }
    }
  }
}
