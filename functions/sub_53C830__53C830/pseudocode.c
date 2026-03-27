NiProperty *__thiscall sub_53C830(Moon *this, int a2, char *Src)
{
  char *v4; // eax
  float *v5; // ebx
  float *v6; // eax
  double v7; // st7
  double v8; // st7
  double v9; // st5
  double v10; // st6
  double v11; // st7
  double v12; // st5
  double v13; // st5
  double v14; // st5
  double v15; // st5
  double v16; // st5
  double v17; // st5
  double v18; // st5
  double v19; // st5
  float *v20; // eax
  float *v21; // eax
  float *v22; // esi
  float *v23; // eax
  float *v24; // edi
  _WORD *v25; // eax
  NiAVObject *v26; // eax
  NiAVObject *v27; // esi
  NiAVObject *v28; // ebx
  NiAVObject *v29; // eax
  NiAVObject *v30; // esi
  NiAVObject *v31; // edi
  NiObjectNET *v32; // eax
  BSShaderProperty *v33; // esi
  NiNode *v34; // ecx
  Sky *(__cdecl *v35)(int); // esi
  NiNode *v36; // eax
  NiNode *v37; // edi
  NiNode *v38; // esi
  NiNode *v39; // eax
  NiNode *v40; // edi
  NiNode *v41; // esi
  float *v42; // eax
  double v43; // st6
  float *v44; // eax
  NiProperty *NiPropertyByID; // eax
  NiProperty *v46; // eax
  NiProperty *result; // eax
  NiProperty *v48; // eax
  int v49; // [esp+4Ch] [ebp-54h]
  int v50; // [esp+50h] [ebp-50h]
  int v51; // [esp+54h] [ebp-4Ch]
  int v52; // [esp+58h] [ebp-48h]
  int v53; // [esp+5Ch] [ebp-44h]
  float v54; // [esp+64h] [ebp-3Ch]
  float v55; // [esp+64h] [ebp-3Ch]
  float v56[9]; // [esp+70h] [ebp-30h] BYREF
  int v57; // [esp+9Ch] [ebp-4h]
  float v58; // [esp+A4h] [ebp+4h]
  float v59; // [esp+A4h] [ebp+4h]
  float v60; // [esp+A4h] [ebp+4h]
  float v61; // [esp+A4h] [ebp+4h]
  float v62; // [esp+A4h] [ebp+4h]
  float v63; // [esp+A4h] [ebp+4h]
  float v64; // [esp+A4h] [ebp+4h]
  float v65; // [esp+A4h] [ebp+4h]
  float v66; // [esp+A4h] [ebp+4h]
  float v67; // [esp+A4h] [ebp+4h]
  _WORD *v68; // [esp+A4h] [ebp+4h]
  float Srcb; // [esp+A8h] [ebp+8h]
  float Srcc; // [esp+A8h] [ebp+8h]
  float Srcd; // [esp+A8h] [ebp+8h]
  float Srce; // [esp+A8h] [ebp+8h]
  float *Srca; // [esp+A8h] [ebp+8h]

  sub_543D30((Sky *)this, a2);
  v4 = Src;
  if ( !Src )
    v4 = "Moon Root";
  NiObjectNET_SetName(*((NiObjectNET **)this + 1), v4);
  v49 = FormHeapAlloc(0x30u);
  v5 = (float *)FormHeapAlloc(0x30u);
  v52 = FormHeapAlloc(0x30u);
  v6 = (float *)FormHeapAlloc(0x30u);
  v7 = (double)*((int *)this + 0x1B);
  v53 = (int)v6;
  if ( *((int *)this + 0x1B) < 0 )
    v7 = v7 + flt_A2FC78;
  v58 = v7;
  v8 = v58;
  v9 = dbl_A3D360;
  v59 = v58 * v9;
  v10 = v8;
  v11 = v9;
  Srcb = v10;
  *v5 = v59;
  v5[1] = Srcb;
  v5[2] = 0.0;
  v12 = (double)*((int *)this + 0x1B);
  if ( *((int *)this + 0x1B) < 0 )
    v12 = v12 + flt_A2FC78;
  v60 = v12 * v11;
  v5[3] = v60;
  v5[4] = v60;
  v5[5] = 0.0;
  v13 = (double)*((int *)this + 0x1B);
  if ( *((int *)this + 0x1B) < 0 )
    v13 = v13 + flt_A2FC78;
  v61 = v13;
  v5[6] = v61;
  v5[7] = v61;
  v5[8] = 0.0;
  v14 = (double)*((int *)this + 0x1B);
  if ( *((int *)this + 0x1B) < 0 )
    v14 = v14 + flt_A2FC78;
  v62 = v14;
  Srcc = v62 * v11;
  v5[9] = v62;
  v5[0xA] = Srcc;
  v5[0xB] = 0.0;
  v15 = (double)*((int *)this + 0x1B);
  if ( *((int *)this + 0x1B) < 0 )
    v15 = v15 + flt_A2FC78;
  v63 = v15;
  v16 = v63;
  v64 = v63 * v11;
  Srcd = v16;
  *v6 = v64;
  v6[1] = Srcd;
  v6[2] = 0.0;
  v17 = (double)*((int *)this + 0x1B);
  if ( *((int *)this + 0x1B) < 0 )
    v17 = v17 + flt_A2FC78;
  v65 = v17 * v11;
  v6[3] = v65;
  v6[4] = v65;
  v6[5] = 0.0;
  v18 = (double)*((int *)this + 0x1B);
  if ( *((int *)this + 0x1B) < 0 )
    v18 = v18 + flt_A2FC78;
  v66 = v18;
  v6[6] = v66;
  v6[7] = v66;
  v6[8] = 0.0;
  v19 = (double)*((int *)this + 0x1B);
  if ( *((int *)this + 0x1B) < 0 )
    v19 = v19 + flt_A2FC78;
  v67 = v19;
  Srce = v11 * v67;
  v6[9] = v67;
  v6[0xA] = Srce;
  v6[0xB] = 0.0;
  Srca = (float *)FormHeapAlloc(0x20u);
  v20 = (float *)FormHeapAlloc(0x20u);
  *Srca = 0.0;
  Srca[1] = 0.0;
  Srca[2] = 0.0;
  Srca[3] = 1.0;
  Srca[4] = 1.0;
  Srca[5] = 0.0;
  Srca[6] = 1.0;
  Srca[7] = 1.0;
  *v20 = 0.0;
  v20[1] = 0.0;
  v20[2] = 0.0;
  v20[3] = 1.0;
  v20[4] = 1.0;
  v20[5] = 0.0;
  v51 = (int)v20;
  v20[6] = 1.0;
  v20[7] = 1.0;
  v21 = (float *)FormHeapAlloc(0x40u);
  v22 = v21;
  v57 = 0;
  if ( v21 )
    sub_401080(v21, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v22 = 0;
  v23 = (float *)FormHeapAlloc(0x40u);
  v24 = v23;
  v57 = 1;
  if ( v23 )
    sub_401080(v23, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v24 = 0;
  *v22 = 1.0;
  v22[4] = 1.0;
  v22[1] = 0.0;
  v22[2] = 0.0;
  v22[3] = 1.0;
  v22[5] = 0.0;
  v22[6] = 0.0;
  v22[7] = 1.0;
  v22[8] = 1.0;
  v22[9] = 0.0;
  v22[0xA] = 0.0;
  v22[0xB] = 1.0;
  v22[0xC] = 1.0;
  v22[0xD] = 0.0;
  v22[0xE] = 0.0;
  v22[0xF] = 1.0;
  *v24 = 1.0;
  v24[1] = 0.0;
  v24[2] = 0.0;
  v24[3] = 1.0;
  v24[4] = 1.0;
  v24[5] = 0.0;
  v24[6] = 0.0;
  v24[8] = 1.0;
  v24[7] = 1.0;
  v24[0xC] = 1.0;
  v24[9] = 0.0;
  v24[0xA] = 0.0;
  v24[0xD] = 0.0;
  v24[0xE] = 0.0;
  v24[0xB] = 1.0;
  v24[0xF] = 1.0;
  v68 = (_WORD *)FormHeapAlloc(0xCu);
  v25 = (_WORD *)FormHeapAlloc(0xCu);
  *v68 = 0;
  v68[2] = 2;
  v68[3] = 2;
  v68[5] = 3;
  v68[1] = 1;
  v68[4] = 1;
  v50 = (int)v25;
  *v25 = 0;
  v25[1] = 1;
  v25[2] = 2;
  v25[3] = 2;
  v25[4] = 1;
  v25[5] = 3;
  v26 = (NiAVObject *)FormHeapAlloc(0xC0u);
  v57 = 2;
  if ( v26 )
    v27 = sub_7174B0(v26, 4, (int)v5, v49, (int)v22, (int)Srca, 1, 0, 2, (int)v68);
  else
    v27 = 0;
  v28 = *((NiAVObject **)this + 4);
  v57 = 0xFFFFFFFF;
  if ( v28 != v27 )
  {
    if ( v28 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v28->members) )
        v28->vtbl->super.super.Destructor((NiRefObject *)v28, 1);
    }
    *((_DWORD *)this + 4) = v27;
    if ( v27 )
      InterlockedIncrement((volatile LONG *)&v27->members);
  }
  NiObjectNET_SetName(*((NiObjectNET **)this + 4), "Moon Mesh");
  *(_WORD *)(*((_DWORD *)this + 4) + 0x18) |= 2u;
  v29 = (NiAVObject *)FormHeapAlloc(0xC0u);
  v57 = 3;
  if ( v29 )
    v30 = sub_7174B0(v29, 4, v53, v52, (int)v24, v51, 1, 0, 2, v50);
  else
    v30 = 0;
  v31 = *((NiAVObject **)this + 5);
  v57 = 0xFFFFFFFF;
  if ( v31 != v30 )
  {
    if ( v31 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v31->members) )
        v31->vtbl->super.super.Destructor((NiRefObject *)v31, 1);
    }
    *((_DWORD *)this + 5) = v30;
    if ( v30 )
      InterlockedIncrement((volatile LONG *)&v30->members);
  }
  NiObjectNET_SetName(*((NiObjectNET **)this + 5), "Shadow Mesh");
  *(_WORD *)(*((_DWORD *)this + 5) + 0x18) |= 2u;
  v32 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v33 = (BSShaderProperty *)v32;
  v57 = 4;
  if ( v32 )
  {
    NiObjectNET::NiObjectNET(v32);
    v33->vtbl = &NiAlphaProperty::`vftable';
    v33->member.super.flags = 0xEC;
    v33->member.super.pad01A[0] = 0;
  }
  else
  {
    v33 = 0;
  }
  if ( v33 )
    InterlockedIncrement((volatile LONG *)&v33->member);
  v33->member.super.flags |= 1u;
  v33->member.super.flags = v33->member.super.flags & 0xFFE1 | 0xC;
  v33->member.super.flags &= 0xFE1Fu;
  v33->member.super.flags |= 0x2000u;
  v34 = *((NiNode **)this + 4);
  v57 = 5;
  sub_405680(v34, v33);
  if ( !InterlockedDecrement((volatile LONG *)&v33->member) )
    (*(void (__thiscall **)(BSShaderProperty *, int))v33->vtbl)(v33, 1);
  v57 = 0xFFFFFFFF;
  if ( Sky_CreateOrGetGlobalObject()->unk0DC == 3 || Sky_CreateOrGetGlobalObject()->unk0DC == 2 )
  {
    v35 = 0;
    if ( this == Sky_CreateOrGetGlobalObject()->masserMoon )
    {
      v35 = sub_540EF0;
    }
    else if ( this == Sky_CreateOrGetGlobalObject()->secundaMoon )
    {
      v35 = sub_540F20;
    }
    sub_53FBE0(*((_DWORD *)this + 5), "Textures\\Sky\\MoonShadow.dds", v35, 1);
    *((_DWORD *)this + 0x1C) = 2;
  }
  v36 = (NiNode *)FormHeapAlloc(0xDCu);
  v57 = 6;
  if ( v36 )
    v37 = NiNode::NiNode(v36, 0);
  else
    v37 = 0;
  v38 = *((NiNode **)this + 2);
  v57 = 0xFFFFFFFF;
  if ( v38 != v37 )
  {
    if ( v38 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v38->members) )
        v38->vtbl->super.super.super.Destructor((NiRefObject *)v38, 1);
    }
    *((_DWORD *)this + 2) = v37;
    if ( v37 )
      InterlockedIncrement((volatile LONG *)&v37->members);
  }
  v39 = (NiNode *)FormHeapAlloc(0xDCu);
  v57 = 7;
  if ( v39 )
    v40 = NiNode::NiNode(v39, 0);
  else
    v40 = 0;
  v41 = *((NiNode **)this + 3);
  v57 = 0xFFFFFFFF;
  if ( v41 != v40 )
  {
    if ( v41 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v41->members) )
        v41->vtbl->super.super.super.Destructor((NiRefObject *)v41, 1);
    }
    *((_DWORD *)this + 3) = v40;
    if ( v40 )
      InterlockedIncrement((volatile LONG *)&v40->members);
  }
  NiObjectNET_SetName(*((NiObjectNET **)this + 2), "Moon Node");
  NiObjectNET_SetName(*((NiObjectNET **)this + 3), "Shadow Node");
  *(_WORD *)(*((_DWORD *)this + 2) + 0x18) |= 2u;
  *(_WORD *)(*((_DWORD *)this + 3) + 0x18) |= 2u;
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 2) + 0x84))(
    *((_DWORD *)this + 2),
    *((_DWORD *)this + 4),
    1);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 3) + 0x84))(
    *((_DWORD *)this + 3),
    *((_DWORD *)this + 5),
    1);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 1) + 0x84))(
    *((_DWORD *)this + 1),
    *((_DWORD *)this + 3),
    1);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 1) + 0x84))(
    *((_DWORD *)this + 1),
    *((_DWORD *)this + 2),
    1);
  NiMatrix33_InitRotationTransposedTransform___(v56, flt_A3721C);
  v42 = *((float **)this + 4);
  v43 = flt_A427E0;
  v42[0x15] = 0.0;
  v54 = v43;
  v42[0x16] = v54;
  v42[0x17] = 0.0;
  v55 = v43;
  qmemcpy((void *)(*((_DWORD *)this + 4) + 0x30), v56, 0x24u);
  v44 = (float *)(*((_DWORD *)this + 5) + 0x54);
  *v44 = 0.0;
  v44[1] = v55;
  v44[2] = 0.0;
  qmemcpy((void *)(*((_DWORD *)this + 5) + 0x30), v56, 0x24u);
  sub_7B8940(*((NiAVObject **)this + 1), 0xA, 0, 1);
  if ( NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4) )
  {
    NiPropertyByID = NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4);
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB )
    {
      v46 = NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4);
      if ( v46 )
        v46[5].members.m_extraDataList = (NiExtraData **)6;
    }
  }
  result = NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4);
  if ( result )
  {
    v48 = NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4);
    result = (NiProperty *)((*((int (__thiscall **)(NiProperty *))v48->vtbl + 0x15))(v48) == 0xB);
    if ( result )
    {
      result = NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4);
      if ( result )
        result[5].members.m_extraDataList = (NiExtraData **)7;
    }
  }
  return result;
}
