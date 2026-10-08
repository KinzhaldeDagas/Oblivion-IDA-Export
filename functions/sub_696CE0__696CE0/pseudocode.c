void __thiscall sub_696CE0(void *this)
{
  NiNode *v2; // eax
  NiNode *v3; // edi
  NiNode *v4; // esi
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  NiNode *v7; // eax
  NiNode *v8; // edi
  NiNode *v9; // esi
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  NiExtraData *ExtraData; // esi
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  const void **v15; // ecx
  int v16; // esi
  NiProperty *v17; // eax
  NiProperty *v18; // esi
  NiProperty *v19; // edi
  int v20; // eax
  float *v21; // eax
  float v22; // edx
  double v23; // st7
  float *v24; // eax
  float v25; // edx
  double v26; // st6
  float v27; // [esp+34h] [ebp-38h]
  float v28; // [esp+34h] [ebp-38h]
  NiMatrix33 v29; // [esp+3Ch] [ebp-30h] BYREF
  int v30; // [esp+68h] [ebp-4h]

  v2 = (NiNode *)FormHeapAlloc(0xDCu); /*0x696d0d*/
  v3 = 0; /*0x696d19*/
  v30 = 0; /*0x696d1d*/
  if ( v2 ) /*0x696d21*/
    v3 = NiNode::NiNode(v2, 0); /*0x696d2b*/
  v4 = *((NiNode **)this + 0x25); /*0x696d2d*/
  v30 = 0xFFFFFFFF; /*0x696d35*/
  if ( v4 != v3 ) /*0x696d3d*/
  {
    if ( v4 ) /*0x696d41*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) ) /*0x696d47*/
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x696d5d*/
    }
    *((_DWORD *)this + 0x25) = v3; /*0x696d61*/
    if ( v3 ) /*0x696d67*/
      InterlockedIncrement((volatile LONG *)&v3->members); /*0x696d6d*/
  }
  v5 = *((_DWORD **)this + 0x25); /*0x696d7c*/
  v6 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this); /*0x696d84*/
  v5[0x22] = *v6; /*0x696d88*/
  v5[0x23] = v6[1]; /*0x696d91*/
  v5[0x24] = v6[2]; /*0x696d9f*/
  v7 = (NiNode *)FormHeapAlloc(0xDCu); /*0x696da5*/
  v30 = 1; /*0x696db3*/
  if ( v7 ) /*0x696dbb*/
    v8 = NiNode::NiNode(v7, 0); /*0x696dc6*/
  else
    v8 = 0; /*0x696dca*/
  v9 = *((NiNode **)this + 0x22); /*0x696dcc*/
  v30 = 0xFFFFFFFF; /*0x696dd4*/
  if ( v9 != v8 ) /*0x696ddc*/
  {
    if ( v9 ) /*0x696de0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v9->members) ) /*0x696de6*/
        v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1); /*0x696dfc*/
    }
    *((_DWORD *)this + 0x22) = v8; /*0x696e00*/
    if ( v8 ) /*0x696e06*/
      InterlockedIncrement((volatile LONG *)&v8->members); /*0x696e0c*/
  }
  v10 = *((_DWORD **)this + 0x22); /*0x696e1b*/
  v11 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this); /*0x696e23*/
  v10[0x15] = *v11; /*0x696e27*/
  v10[0x16] = v11[1]; /*0x696e2d*/
  v10[0x17] = v11[2]; /*0x696e33*/
  ExtraData = NiObjectNET_GetExtraData(*((NiObjectNET **)this + 0x22), dword_A7D0EC); /*0x696e46*/
  if ( !ExtraData ) /*0x696e4a*/
  {
    v13 = (unsigned int *)FormHeapAlloc(0x10u); /*0x696e4e*/
    v30 = 2; /*0x696e5c*/
    if ( v13 ) /*0x696e64*/
      v14 = BSXFlags_constr(v13); /*0x696e68*/
    else
      v14 = 0; /*0x696e6f*/
    v15 = *((const void ***)this + 0x22); /*0x696e71*/
    v30 = 0xFFFFFFFF; /*0x696e7d*/
    ExtraData = (NiExtraData *)v14; /*0x696e85*/
    sub_6FF820(v15, dword_A7D0EC, v14); /*0x696e87*/
  }
  ExtraData[1].__vftable = (NiExtraDataVtbl *)((int)ExtraData[1].__vftable | 1); /*0x696e8c*/
  v16 = *((_DWORD *)this + 0x1F); /*0x696e90*/
  if ( v16 ) /*0x696e95*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x696e9b*/
      (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x696eb1*/
    *((_DWORD *)this + 0x1F) = 0; /*0x696eb3*/
  }
  NiMatrix33_SetEulerZXY(&v29, *((float *)this + 0xA), *((float *)this + 8), *((float *)this + 9)); /*0x696eed*/
  qmemcpy((void *)(*((_DWORD *)this + 0x22) + 0x30), &v29, 0x24u); /*0x696f04*/
  v17 = sub_7F4D60(*((_DWORD *)this + 0x22)); /*0x696f0f*/
  v18 = *((NiProperty **)this + 0x1F); /*0x696f14*/
  v19 = v17; /*0x696f17*/
  if ( v18 != v17 ) /*0x696f1e*/
  {
    if ( v18 ) /*0x696f22*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x696f28*/
        (*(void (__thiscall **)(NiProperty *, int))v18->vtbl)(v18, 1); /*0x696f3e*/
    }
    *((_DWORD *)this + 0x1F) = v19; /*0x696f42*/
    if ( v19 ) /*0x696f45*/
      InterlockedIncrement((volatile LONG *)&v19->members); /*0x696f4b*/
  }
  v20 = *((_DWORD *)this + 0x1F); /*0x696f51*/
  if ( v20 ) /*0x696f56*/
  {
    *(float *)(v20 + 0x134) = flt_B37ED0[0x9E]; /*0x696f62*/
    *(float *)(*((_DWORD *)this + 0x1F) + 0x13C) = flt_B37ED0[0x96]; /*0x696f71*/
    *(float *)(*((_DWORD *)this + 0x1F) + 0x140) = flt_B37ED0[0x98]; /*0x696f80*/
    *(float *)(*((_DWORD *)this + 0x1F) + 0x144) = flt_B37ED0[0x9A]; /*0x696f8f*/
    *(float *)(*((_DWORD *)this + 0x1F) + 0x148) = flt_B37ED0[0x9C]; /*0x696f9e*/
    v21 = (float *)(*((_DWORD *)this + 0x1F) + 0x160); /*0x696fad*/
    v22 = flt_B37ED0[0xA4]; /*0x696fc4*/
    v23 = flt_B37ED0[0xA6]; /*0x696fc8*/
    *v21 = flt_B37ED0[0xA2]; /*0x696fce*/
    v21[1] = v22; /*0x696fd0*/
    v27 = v23; /*0x696fd3*/
    v21[2] = v27; /*0x696fdd*/
    v21[3] = 1.0; /*0x696fe8*/
    v24 = *((float **)this + 0x1F); /*0x696ff1*/
    v25 = flt_B37ED0[0xAA]; /*0x697006*/
    v26 = flt_B37ED0[0xAC]; /*0x69700a*/
    v24[0x5C] = flt_B37ED0[0xA8]; /*0x697010*/
    v24[0x5D] = v25; /*0x697016*/
    v28 = v26; /*0x69701c*/
    v24[0x5E] = v28; /*0x697024*/
    v24[0x5F] = 1.0; /*0x697032*/
    *(float *)(*((_DWORD *)this + 0x1F) + 0x150) = flt_B37ED0[0xB0]; /*0x697046*/
    *(float *)(*((_DWORD *)this + 0x1F) + 0x14C) = flt_B37ED0[0xAE]; /*0x697055*/
    *(float *)(*((_DWORD *)this + 0x1F) + 0x154) = flt_B37ED0[0xB2]; /*0x697064*/
    *(float *)(*((_DWORD *)this + 0x1F) + 0x15C) = flt_B37ED0[0xB6]; /*0x697073*/
    *(_BYTE *)(*((_DWORD *)this + 0x1F) + 0x183) = 1; /*0x69707c*/
    sub_7F2EC0(*((float **)this + 0x1F)); /*0x697086*/
  }
}
