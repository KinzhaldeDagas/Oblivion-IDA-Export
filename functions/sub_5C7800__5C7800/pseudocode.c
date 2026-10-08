void sub_5C7800()
{
  _DWORD *OpenMenuTile; // eax
  TESNPC *v1; // esi
  TESRace *race; // edi
  char *v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st7
  double v8; // st6
  char *v9; // eax
  int *v10; // ecx
  int v11; // eax
  int v12; // eax
  NiNode **v13; // [esp+0h] [ebp-218h]
  float v14; // [esp+8h] [ebp-210h]
  _DWORD **v15; // [esp+Ch] [ebp-20Ch]
  float v16; // [esp+18h] [ebp-200h]
  float v17; // [esp+18h] [ebp-200h]
  float v18; // [esp+18h] [ebp-200h]
  float v19; // [esp+18h] [ebp-200h]
  float v20; // [esp+18h] [ebp-200h]
  double v21; // [esp+20h] [ebp-1F8h]
  char a1[96]; // [esp+28h] [ebp-1F0h] BYREF
  char v23[96]; // [esp+88h] [ebp-190h] BYREF
  int v24[24]; // [esp+E8h] [ebp-130h] BYREF
  unsigned int v25; // [esp+148h] [ebp-D0h] BYREF
  unsigned int v26; // [esp+214h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C); /*0x5c7830*/
  if ( OpenMenuTile /*0x5c7879*/
    && Tile_GetParentMenu(OpenMenuTile)
    && ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0)
    && ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4D)(reference, 0) )
  {
    v1 = (TESNPC *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c7893*/
    reference->super.super.super.process->Unk_17(reference->super.super.super.process); /*0x5c78a2*/
    ArrayConstructor( /*0x5c78b7*/
      a1,
      0x18u,
      4,
      (void (__thiscall *)(char *))FaceGenMatrix_Construct,
      (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
    v26 = 0; /*0x5c78d2*/
    ArrayConstructor( /*0x5c78dd*/
      v23,
      0x18u,
      4,
      (void (__thiscall *)(char *))FaceGenMatrix_Construct,
      (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
    race = v1->member.form.race; /*0x5c78e4*/
    LOBYTE(v26) = 1; /*0x5c78f7*/
    v3 = (char *)TESNPC_GetActiveFaceGenDeltaParameters(v1); /*0x5c78ff*/
    FaceGenHeadParameters_Combine((char *)race->unk12, v3, (int)a1, 0, 0.0); /*0x5c790c*/
    v21 = 0.0 - 0.0; /*0x5c791e*/
    FaceGenHeadParameters_GetControlValue((int)a1, 0, 1); /*0x5c7922*/
    v16 = v21 - v21; /*0x5c792e*/
    v4 = v16; /*0x5c7932*/
    v5 = dbl_A492F0; /*0x5c7936*/
    if ( v5 < v16 && flt_A47800 <= v4 ) /*0x5c7952*/
    {
      v6 = flt_A47800; /*0x5c7969*/
    }
    else
    {
      if ( v5 < v4 ) /*0x5c795d*/
        goto LABEL_11; /*0x5c795d*/
      v6 = flt_A468FC; /*0x5c7961*/
    }
    v17 = v6; /*0x5c796d*/
    v4 = v17; /*0x5c7971*/
LABEL_11:
    v14 = v4; /*0x5c7975*/
    FaceGenHeadParameters_SetControlValue((int)a1, 0, 1, v14); /*0x5c7982*/
    FaceGenHeadParameters_GetControlValue((int)a1, 1, 1); /*0x5c7990*/
    v18 = v4 - TESNPC_GetSexMorphBase(v1); /*0x5c79a7*/
    v19 = v18 - v21; /*0x5c79b3*/
    v7 = flt_A53954; /*0x5c79b7*/
    v8 = v19; /*0x5c79bd*/
    if ( v19 > v7 && fConstant_2 <= v8 ) /*0x5c79d7*/
    {
      v19 = fConstant_2; /*0x5c79ee*/
    }
    else if ( v8 <= v7 ) /*0x5c79e2*/
    {
      v19 = flt_A53954; /*0x5c79e4*/
    }
    v20 = TESNPC_GetSexMorphBase(v1) + v19; /*0x5c7a06*/
    FaceGenHeadParameters_SetControlValue((int)a1, 1, 1, v20); /*0x5c7a16*/
    FaceGenHeadParameters_Initialize(v23); /*0x5c7a23*/
    ArrayConstructor( /*0x5c7a41*/
      (char *)v24,
      0x18u,
      4,
      (void (__thiscall *)(char *))FaceGenMatrix_Construct,
      (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
    LOBYTE(v26) = 2; /*0x5c7a50*/
    TESNPC_BuildAbsoluteFaceGenParameters((int *)v1, v24); /*0x5c7a58*/
    FaceGenHeadParameters_ComputeRaceDelta(v24, (int)a1, (int)v23); /*0x5c7a6f*/
    v13 = TESNPC_GetActiveFaceGenDeltaParameters(v1); /*0x5c7a85*/
    v9 = (char *)TESNPC_GetActiveFaceGenDeltaParameters(v1); /*0x5c7a88*/
    FaceGenHeadParameters_Combine(v23, v9, (int)v13, 0, 0.0); /*0x5c7a96*/
    FaceGenRenderState_Construct(&v25); /*0x5c7aa5*/
    v10 = (int *)v1->member.form.race; /*0x5c7aaa*/
    LOBYTE(v26) = 3; /*0x5c7ab9*/
    TESRace_BuildFaceGenRenderState(v10, (int)v1, (int)&v25); /*0x5c7ac1*/
    v11 = ((int (__thiscall *)(PlayerCharacter *, _DWORD, unsigned int *))reference->vtbl->super.super.super.Unk_4C)( /*0x5c7ade*/
            reference,
            0,
            &v25);
    BSFaceGen_ApplyHeadParametersToNode(v11, v15); /*0x5c7ae1*/
    v12 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.super.super.Unk_4D)(reference); /*0x5c7b01*/
    BSFaceGen_ApplyHeadParametersToNode(v12, 0); /*0x5c7b04*/
    LOBYTE(v26) = 2; /*0x5c7b0c*/
    FaceGenRenderState_Destruct(&v25); /*0x5c7b1b*/
    LOBYTE(v26) = 1; /*0x5c7b31*/
    _LN21((char *)v24, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c7b39*/
    LOBYTE(v26) = 0; /*0x5c7b4f*/
    _LN21(v23, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c7b57*/
    v26 = 0xFFFFFFFF; /*0x5c7b6a*/
    _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c7b75*/
  }
}
