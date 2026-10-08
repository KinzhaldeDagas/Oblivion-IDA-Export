void __thiscall sub_68D380(char *this)
{
  NiNode *v2; // eax
  NiNode *v3; // ebx
  NiNode *v4; // esi
  NiExtraData *ExtraData; // esi
  unsigned int *v6; // eax
  unsigned int *v7; // eax
  int v8; // ecx
  TESObjectREFR *v9; // ebx
  int v10; // ecx
  TESObjectCELL *DwordAtOffset40; // eax
  int v12; // eax
  int v13; // ebp
  float **v14; // esi
  Ni2DBuffer *v15; // eax
  int v16; // ebp
  int v17; // eax
  Ni2DBuffer *v18; // eax
  Ni2DBuffer *v19; // eax
  int v20; // eax
  Ni2DBuffer **v21; // edi
  Ni2DBuffer *v22; // eax
  Ni2DBuffer *v23; // eax
  float *v24; // eax
  float v25; // edx
  double v26; // st7
  float *v27; // eax
  double v28; // st6
  float v29; // edx
  signed int v30; // [esp-8h] [ebp-3Ch]
  int v31; // [esp+14h] [ebp-20h]
  float v32; // [esp+20h] [ebp-14h]
  float v33; // [esp+20h] [ebp-14h]

  v2 = (NiNode *)FormHeapAlloc(0xDCu); /*0x68d3ae*/
  v3 = 0; /*0x68d3ba*/
  if ( v2 ) /*0x68d3c2*/
    v3 = NiNode::NiNode(v2, 0); /*0x68d3cc*/
  v4 = *((NiNode **)this + 0xF); /*0x68d3ce*/
  if ( v4 != v3 ) /*0x68d3da*/
  {
    if ( v4 ) /*0x68d3de*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) ) /*0x68d3e4*/
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x68d3fa*/
    }
    *((_DWORD *)this + 0xF) = v3; /*0x68d3fe*/
    if ( v3 ) /*0x68d401*/
      InterlockedIncrement((volatile LONG *)&v3->members); /*0x68d407*/
  }
  ExtraData = NiObjectNET_GetExtraData(*((NiObjectNET **)this + 0xF), dword_A7D0EC); /*0x68d41a*/
  if ( !ExtraData ) /*0x68d41e*/
  {
    v6 = (unsigned int *)FormHeapAlloc(0x10u); /*0x68d422*/
    if ( v6 ) /*0x68d438*/
      v7 = BSXFlags_constr(v6); /*0x68d43c*/
    else
      v7 = 0; /*0x68d443*/
    ExtraData = (NiExtraData *)v7; /*0x68d452*/
    sub_6FF820(*((const void ***)this + 0xF), dword_A7D0EC, v7); /*0x68d454*/
  }
  ExtraData[1].__vftable = (NiExtraDataVtbl *)((int)ExtraData[1].__vftable | 1); /*0x68d459*/
  v8 = *((_DWORD *)this + 8); /*0x68d45d*/
  if ( v8 ) /*0x68d462*/
    v9 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x68d46b*/
  else
    v9 = 0; /*0x68d46f*/
  v10 = *((_DWORD *)this + 9); /*0x68d471*/
  if ( v10 ) /*0x68d476*/
    v31 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x20))(v10); /*0x68d47f*/
  else
    v31 = 0; /*0x68d485*/
  if ( v9 ) /*0x68d48f*/
  {
    if ( v31 ) /*0x68d49a*/
    {
      Shared_GetDwordAtOffset40(v9); /*0x68d4a2*/
      v30 = sub_4C9BE0(v9); /*0x68d4b2*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v9); /*0x68d4b5*/
      v12 = sub_441800(DwordAtOffset40, v30, 3u); /*0x68d4bc*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 0x84))(v12, *((_DWORD *)this + 0xF), 1); /*0x68d4d1*/
      v13 = *((_DWORD *)this + 0x12); /*0x68d4d3*/
      v14 = (float **)(this + 0x48); /*0x68d4d8*/
      if ( v13 ) /*0x68d4db*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x68d4e1*/
          (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x68d4f8*/
        *v14 = 0; /*0x68d4fa*/
      }
      v15 = (Ni2DBuffer *)sub_7F4D60(*((_DWORD *)this + 0xF)); /*0x68d506*/
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x12, v15); /*0x68d511*/
      v16 = v31; /*0x68d516*/
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 0x164))(v31); /*0x68d525*/
      if ( v17 ) /*0x68d529*/
      {
        v18 = (Ni2DBuffer *)(*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(_DWORD *)(v17 + 0x98) + 0x7C) /*0x68d541*/
                                                                        + 0x4C))(
                              *(_DWORD *)(*(_DWORD *)(v17 + 0x98) + 0x7C),
                              "Bip01 Spine1");
        NiSmartPointer_Set__((Ni2DBuffer **)this + 0x10, v18); /*0x68d546*/
        if ( !*((_DWORD *)this + 0x10) ) /*0x68d54b*/
        {
          v19 = (Ni2DBuffer *)v9->vtbl->GetNiNode(v9); /*0x68d55b*/
          NiSmartPointer_Set__((Ni2DBuffer **)this + 0x10, v19); /*0x68d560*/
        }
        v16 = v31; /*0x68d565*/
      }
      v20 = (int)v9->vtbl->GetAnimData(v9); /*0x68d573*/
      if ( v20 ) /*0x68d577*/
      {
        v21 = (Ni2DBuffer **)(this + 0x44); /*0x68d58c*/
        v22 = (Ni2DBuffer *)(*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(_DWORD *)(v20 + 0x98) + 0x7C) /*0x68d58f*/
                                                                        + 0x4C))(
                              *(_DWORD *)(*(_DWORD *)(v20 + 0x98) + 0x7C),
                              "Bip01 Spine1");
        NiSmartPointer_Set__(v21, v22); /*0x68d594*/
        if ( !*v21 ) /*0x68d599*/
        {
          v23 = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x154))(v16); /*0x68d5a9*/
          NiSmartPointer_Set__(v21, v23); /*0x68d5ae*/
        }
      }
      if ( *v14 ) /*0x68d5b3*/
      {
        (*v14)[0x4F] = flt_B37ED0[0xCA]; /*0x68d5c3*/
        (*v14)[0x50] = flt_B37ED0[0xCC]; /*0x68d5d1*/
        (*v14)[0x54] = flt_B37ED0[0xE6]; /*0x68d5df*/
        (*v14)[0x55] = flt_B37ED0[0xCE]; /*0x68d5ed*/
        (*v14)[0x57] = flt_B37ED0[0xD0]; /*0x68d5fb*/
        (*v14)[0x51] = flt_B37ED0[0xD2]; /*0x68d609*/
        (*v14)[0x52] = flt_B37ED0[0xD4]; /*0x68d617*/
        (*v14)[0x4D] = flt_B37ED0[0xD6]; /*0x68d625*/
        v24 = *v14; /*0x68d631*/
        v25 = flt_B37ED0[0xDA]; /*0x68d645*/
        v26 = flt_B37ED0[0xDC]; /*0x68d649*/
        v24[0x58] = flt_B37ED0[0xD8]; /*0x68d64f*/
        v24[0x59] = v25; /*0x68d655*/
        v32 = v26; /*0x68d65b*/
        v24[0x5A] = v32; /*0x68d665*/
        v24[0x5B] = 1.0; /*0x68d673*/
        v27 = *v14; /*0x68d68e*/
        v28 = flt_B37ED0[0xE2]; /*0x68d698*/
        v29 = flt_B37ED0[0xE0]; /*0x68d69e*/
        v27[0x5C] = flt_B37ED0[0xDE]; /*0x68d6a2*/
        v33 = v28; /*0x68d6a8*/
        v27 += 0x5C; /*0x68d6b0*/
        v27[1] = v29; /*0x68d6b9*/
        v27[2] = v33; /*0x68d6c0*/
        v27[3] = 1.0; /*0x68d6c3*/
        *((_BYTE *)*v14 + 0x181) = 0; /*0x68d6c8*/
        *((_BYTE *)*v14 + 0x183) = 1; /*0x68d6d1*/
        sub_7F2EC0(*v14); /*0x68d6da*/
      }
    }
  }
}
