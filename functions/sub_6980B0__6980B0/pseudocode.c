float *__thiscall sub_6980B0(TESObjectREFR *this, int arg0, int a3)
{
  NiNode *v4; // esi
  float *result; // eax
  Ni2DBuffer *v6; // eax
  signed int v7; // edi
  void *DwordAtOffset40; // eax
  unsigned int v9; // edi
  _DWORD *ObjectPointerAt_054; // eax
  int v11; // edi
  int v12; // ecx
  float *v13; // eax
  float *v14; // edi
  float v15; // eax
  double v16; // st7
  float v17; // ecx
  float v18; // ecx
  double v19; // st6
  float v20; // edx
  double v21; // st7
  bhkCharacterProxy *CharProxy; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  float *v26; // esi
  Ni2DBuffer **v27; // eax
  Ni2DBuffer **v28; // esi
  float v29; // edx
  float v30; // eax
  Ni2DBuffer *v31; // [esp+30h] [ebp-4Ch]
  float v32; // [esp+34h] [ebp-48h] BYREF
  float v33; // [esp+38h] [ebp-44h]
  float v34; // [esp+3Ch] [ebp-40h]
  float v35; // [esp+40h] [ebp-3Ch]
  Ni2DBuffer *a2; // [esp+44h] [ebp-38h]
  Ni2DBuffer *v37; // [esp+48h] [ebp-34h]
  __m128 v38; // [esp+4Ch] [ebp-30h] BYREF
  unsigned int v39; // [esp+78h] [ebp-4h]

  v4 = 0; /*0x6980ef*/
  if ( !a3 /*0x698112*/
    || (result = *(float **)(a3 + 0xC), result == *((float **)this + 0x1C))
    && (result = (float *)(*(int (**)(void))(*(_DWORD *)arg0 + 4))(), *((float **)this + 0x26) != result) )
  {
    v6 = (Ni2DBuffer *)FormHeapAlloc(0xDCu); /*0x69811d*/
    v37 = v6; /*0x698125*/
    v39 = 0; /*0x69812b*/
    if ( v6 ) /*0x69812f*/
    {
      v4 = NiNode::NiNode((NiNode *)v6, 0); /*0x698139*/
      a2 = (Ni2DBuffer *)v4; /*0x69813b*/
    }
    else
    {
      a2 = 0; /*0x698141*/
    }
    v39 = 0xFFFFFFFF; /*0x698147*/
    Shared_GetDwordAtOffset40(this); /*0x69814f*/
    v7 = sub_4C9BE0(this); /*0x69815f*/
    DwordAtOffset40 = (void *)Shared_GetDwordAtOffset40(this); /*0x698161*/
    v9 = v7 + 2; /*0x698168*/
    ObjectPointerAt_054 = GetObjectPointerAt_054(DwordAtOffset40); /*0x69816b*/
    if ( ObjectPointerAt_054 /*0x698194*/
      && *((unsigned __int16 *)ObjectPointerAt_054 + 0x5B) > v9
      && (v11 = *(_DWORD *)(ObjectPointerAt_054[0x2C] + 4 * v9)) != 0
      && *(_WORD *)(v11 + 0xB6) > 3u )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(v11 + 0xB0) + 0xC); /*0x69819c*/
    }
    else
    {
      v12 = 0; /*0x6981a1*/
    }
    (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)v12 + 0x84))(v12, v4, 1); /*0x6981ae*/
    v13 = (float *)sub_7F4D60((int)v4); /*0x6981b3*/
    v14 = v13; /*0x6981b8*/
    if ( v13 ) /*0x6981bf*/
    {
      v13[0x4D] = flt_B37ED0[0xB8]; /*0x6981cb*/
      v13[0x4F] = flt_B37ED0[0xBA]; /*0x6981d7*/
      v13[0x50] = flt_B37ED0[0xBC]; /*0x6981e3*/
      v13[0x51] = flt_B37ED0[0x9A]; /*0x6981ef*/
      v13[0x52] = flt_B37ED0[0x9C]; /*0x6981fb*/
      v32 = flt_B37ED0[0xA2]; /*0x698207*/
      v33 = flt_B37ED0[0xA4]; /*0x698215*/
      v15 = v33; /*0x698219*/
      v16 = flt_B37ED0[0xA6]; /*0x69821d*/
      v14[0x58] = v32; /*0x698223*/
      v34 = v16; /*0x698229*/
      v17 = v34; /*0x69822d*/
      v14[0x59] = v15; /*0x698233*/
      v35 = 1.0; /*0x698239*/
      v14[0x5A] = v17; /*0x69823d*/
      v14[0x5B] = v35; /*0x698247*/
      v32 = flt_B37ED0[0xA8]; /*0x698253*/
      v33 = flt_B37ED0[0xAA]; /*0x698261*/
      v18 = v33; /*0x698265*/
      v19 = flt_B37ED0[0xAC]; /*0x698269*/
      v14[0x5C] = v32; /*0x69826f*/
      v34 = v19; /*0x698275*/
      v20 = v34; /*0x698279*/
      v14[0x5D] = v18; /*0x69827d*/
      v35 = 1.0; /*0x698283*/
      v14[0x5E] = v20; /*0x69828b*/
      v14[0x5F] = 1.0; /*0x698291*/
      v14[0x54] = flt_B37ED0[0xC0]; /*0x69829d*/
      v14[0x53] = flt_B37ED0[0xBE]; /*0x6982a9*/
      v14[0x55] = flt_B37ED0[0xC2]; /*0x6982b5*/
      v21 = flt_B37ED0[0xC4]; /*0x6982bd*/
      *((_BYTE *)v14 + 0x183) = 0; /*0x6982c3*/
      v14[0x57] = v21; /*0x6982ca*/
      sub_7F2EC0(v14); /*0x6982d0*/
    }
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x6982d7*/
    bhkCharacterController_ReadRelativePosition((__m128 *)CharProxy, &v38); /*0x6982e3*/
    HavokVector_ToWorldVector(&v32, &v38); /*0x6982f2*/
    v23 = *((_DWORD *)this + 0x26); /*0x6982f7*/
    v37 = 0; /*0x698302*/
    if ( v23 ) /*0x69830a*/
    {
      v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 0x154))(v23); /*0x698314*/
      if ( v24 ) /*0x698318*/
        v37 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v24 + 0x58))(v24, "Bip01 Spine2"); /*0x698328*/
    }
    v25 = (*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 4))(arg0); /*0x698335*/
    result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x154))(v25); /*0x698341*/
    v26 = result; /*0x698343*/
    if ( result ) /*0x698347*/
    {
      v31 = (Ni2DBuffer *)(*(int (__thiscall **)(float *, const char *))(*(_DWORD *)result + 0x58))( /*0x69835d*/
                            result,
                            "Bip01 Spine2");
      if ( !v31 ) /*0x698361*/
        v31 = (Ni2DBuffer *)v26; /*0x698363*/
      v27 = (Ni2DBuffer **)FormHeapAlloc(0x20u); /*0x698369*/
      v28 = 0; /*0x69836e*/
      if ( v27 ) /*0x698375*/
      {
        *v27 = 0; /*0x698377*/
        v27[1] = 0; /*0x698379*/
        v27[5] = 0; /*0x69837c*/
        v27[6] = 0; /*0x69837f*/
        v28 = v27; /*0x698382*/
      }
      NiSmartPointer_Set__(v28, (Ni2DBuffer *)v14); /*0x698387*/
      NiSmartPointer_Set__(v28 + 1, a2); /*0x698394*/
      NiSmartPointer_Set__(v28 + 5, v37); /*0x6983a1*/
      NiSmartPointer_Set__(v28 + 6, v31); /*0x6983ae*/
      v29 = v33; /*0x6983b9*/
      v30 = v34; /*0x6983bd*/
      *((float *)v28 + 2) = v32; /*0x6983c1*/
      *((float *)v28 + 3) = v29; /*0x6983c4*/
      *((float *)v28 + 4) = v30; /*0x6983c7*/
      v28[7] = *((Ni2DBuffer **)this + 0x21); /*0x6983d2*/
      result = sub_696460((float *)this, 0.0, (float **)v28); /*0x6983da*/
      *((_DWORD *)this + 0x21) = v28; /*0x6983df*/
    }
  }
  return result; /*0x6983e5*/
}
