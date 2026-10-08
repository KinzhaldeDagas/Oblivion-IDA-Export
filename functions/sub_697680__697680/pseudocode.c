void __userpurge sub_697680(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, float a6)
{
  bhkCharacterProxy *CharProxy; // edi
  int v9; // ecx
  int v10; // esi
  MobileObject *v11; // ecx
  signed int vtbl_high; // esi
  NiAVObject *v13; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  _DWORD *v15; // ecx
  NiAVObject *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // ecx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  PlayerCharacter *v26; // eax
  unsigned int v27; // ebp
  _DWORD *v28; // eax
  float *v29; // eax
  __int16 v30; // fps
  __int16 v31; // fps
  float *v32; // eax
  bhkCharacterProxy *v33; // eax
  bhkCharacterProxy *v34; // eax
  unsigned int v35; // esi
  unsigned __int16 *v36; // eax
  unsigned __int16 v37; // ax
  unsigned int v38; // edi
  int v39; // eax
  float v40; // [esp+8h] [ebp-5Ch]
  float v41; // [esp+8h] [ebp-5Ch]
  float v42; // [esp+Ch] [ebp-58h]
  float v43; // [esp+Ch] [ebp-58h]
  float v44; // [esp+Ch] [ebp-58h]
  int v45; // [esp+Ch] [ebp-58h]
  double v46; // [esp+20h] [ebp-44h]
  float v47; // [esp+28h] [ebp-3Ch]
  float v48; // [esp+2Ch] [ebp-38h]
  float v49; // [esp+30h] [ebp-34h]
  float v50; // [esp+34h] [ebp-30h]
  float v51; // [esp+38h] [ebp-2Ch]
  float v52; // [esp+3Ch] [ebp-28h]
  float v53[9]; // [esp+40h] [ebp-24h] BYREF

  MobilObject_PostLinkModifiedForm(a1, a2, a3, a4, a5, SLODWORD(a6)); /*0x697695*/
  CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x6976a1*/
  if ( CharProxy )
  {
    v9 = *(_DWORD *)(a1 + 0x68); /*0x6976ab*/
    if ( v9 && (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x20))(v9) )
    {
      v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x68) + 0x20))(*(_DWORD *)(a1 + 0x68)); /*0x6976c7*/
      v11 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 0x190))(v10) != 0 ? (MobileObject *)v10 : 0;
      if ( v11 ) /*0x6976dd*/
      {
        vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo(v11, (TESObjectREFR *)&a6)->vtbl); /*0x6976e9*/
      }
      else
      {
        v13 = (NiAVObject *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x154))(v10); /*0x6976fc*/
        BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v13); /*0x6976ff*/
        if ( BhkCollisionObjectRecursive && (v15 = (_DWORD *)BhkCollisionObjectRecursive[4]) != 0 ) /*0x697710*/
          vtbl_high = *((unsigned __int16 *)sub_497340(v15, &a6) + 1); /*0x69771c*/
        else
          vtbl_high = sub_531D80(); /*0x697727*/
      }
    }
    else
    {
      v16 = (NiAVObject *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1); /*0x697735*/
      v17 = NiAVObject_FindBhkCollisionObjectRecursive(v16); /*0x697738*/
      if ( v17 && (v18 = v17[4]) != 0 ) /*0x697749*/
      {
        v19 = *(_DWORD *)(v18 + 8); /*0x69774b*/
        if ( v19 && (v20 = v19 + 0x14) != 0 ) /*0x697755*/
          vtbl_high = HIWORD(*(_DWORD *)(v20 + 0x1C)); /*0x69775a*/
        else
          vtbl_high = 0; /*0x697761*/
      }
      else
      {
        vtbl_high = (unsigned __int16)(dword_B2EB3C + 1); /*0x69776f*/
        dword_B2EB3C = vtbl_high; /*0x697775*/
        if ( !vtbl_high ) /*0x69777b*/
        {
          vtbl_high = 0xA; /*0x69777d*/
          dword_B2EB3C = 0xA; /*0x697782*/
        }
      }
    }
    bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &a6); /*0x69778f*/
    v21 = *((_DWORD **)CharProxy + 0xD9); /*0x697798*/
    v22 = LOWORD(a6) & 0xFFC0 | 7 | (vtbl_high << 0x10); /*0x6977a9*/
    if ( v21 ) /*0x6977ad*/
    {
      v23 = v21[2]; /*0x6977af*/
      if ( v23 ) /*0x6977b4*/
      {
        v24 = v23 + 0x14; /*0x6977b6*/
        if ( v24 ) /*0x6977b9*/
          *(_DWORD *)(v24 + 0x1C) = v22; /*0x6977bb*/
      }
      (*(void (__thiscall **)(_DWORD *))(*v21 + 0x80))(v21); /*0x6977c6*/
    }
  }
  v25 = *(_DWORD *)(a1 + 0x68); /*0x6977c8*/
  if ( v25 ) /*0x6977cd*/
    v26 = (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x20))(v25); /*0x6977d4*/
  else
    v26 = 0; /*0x6977d8*/
  if ( v26 != reference ) /*0x6977e0*/
    MEMORY[0xB3C0D0] = flt_B37ED0[0x90] + MEMORY[0xB3C0D0]; /*0x6977ee*/
  v27 = *(_DWORD *)(a1 + 0x84); /*0x6977f4*/
  if ( v27 ) /*0x6977fc*/
  {
    v28 = *(_DWORD **)(a1 + 0x88); /*0x697802*/
    if ( v28 ) /*0x69780a*/
    {
      v28[0x15] = *(_DWORD *)v27; /*0x697813*/
      v28[0x16] = *(_DWORD *)(v27 + 4); /*0x697819*/
      v28[0x17] = *(_DWORD *)(v27 + 8); /*0x69781f*/
      sub_47C600((NiTransform *)(v27 + 0xC), (NiTransform *)(*(_DWORD *)(a1 + 0x88) + 0x30)); /*0x69782f*/
      LOBYTE(a6) = *(_DWORD *)(a1 + 0x80) != 0; /*0x69783e*/
      v29 = *(float **)(a1 + 0x90); /*0x697842*/
      if ( v29 ) /*0x69784a*/
      {
        v42 = a6; /*0x69785d*/
        v50 = v29[0x22] - *(float *)v27; /*0x69785f*/
        v51 = v29[0x23] - *(float *)(v27 + 4); /*0x69786c*/
        v52 = v29[0x24] - *(float *)(v27 + 8); /*0x697879*/
        v46 = v50 * v50 + v51 * v51; /*0x69788d*/
        v40 = *(float *)(a1 + 0x5C); /*0x697898*/
        a6 = v46 + v52 * v52; /*0x69789f*/
        a6 = sqrt(a6); /*0x6978ac*/
        sub_7F3530(*(_DWORD *)(a1 + 0x7C), *(float *)(v27 + 0x1C), a6, v40, v42); /*0x6978c4*/
        a6 = 0.0 * 0.0 + v46; /*0x6978d9*/
        a6 = sqrt(a6); /*0x6978e6*/
        sub_98598A(a6, v52, v30); /*0x6978f2*/
        a6 = v52; /*0x6978f7*/
        v43 = -v52; /*0x697904*/
        sub_98598A(v51, v50, v31); /*0x697915*/
        a6 = v50; /*0x69791a*/
        sub_7118E0(v53, v50, 0.0, v43); /*0x69792a*/
        qmemcpy((void *)(*(_DWORD *)(a1 + 0x88) + 0x30), v53, 0x24u); /*0x697941*/
      }
      else
      {
        v32 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1); /*0x697952*/
        v47 = *(float *)v27 - *v32; /*0x69796f*/
        v44 = a6; /*0x69797a*/
        v48 = *(float *)(v27 + 4) - v32[1]; /*0x697980*/
        v49 = *(float *)(v27 + 8) - v32[2]; /*0x69798b*/
        v41 = *(float *)(a1 + 0x5C); /*0x69799e*/
        a6 = v48 * v48 + v47 * v47 + v49 * v49; /*0x6979b1*/
        a6 = sqrt(a6); /*0x6979be*/
        sub_7F3530(*(_DWORD *)(a1 + 0x7C), *(float *)(v27 + 0x1C), a6, v41, v44); /*0x6979d6*/
        if ( TESForm::IsActor(*(TESForm **)(a1 + 0x7C)) || *(_DWORD *)(a1 + 0x80) == 2 ) /*0x6979f2*/
        {
          *(_DWORD *)(a1 + 0x80) = 2; /*0x6979f8*/
          v33 = MobileObject_GetCharProxy((MobileObject *)a1); /*0x697a01*/
          bhkCharacterProxy_GetCollisionFilterInfo(v33, &a6); /*0x697a08*/
          v45 = LODWORD(a6) | 0x4000; /*0x697a16*/
          v34 = MobileObject_GetCharProxy((MobileObject *)a1); /*0x697a19*/
          sub_694FC0(v34, v45); /*0x697a20*/
        }
      }
    }
    v35 = 0; /*0x697a25*/
    *(_DWORD *)(a1 + 0x84) = 0; /*0x697a27*/
    v36 = *(unsigned __int16 **)(v27 + 0x20); /*0x697a2d*/
    if ( v36 ) /*0x697a32*/
    {
      v37 = *v36; /*0x697a34*/
      v38 = v37; /*0x697a37*/
      if ( v37 ) /*0x697a3c*/
      {
        do /*0x697a68*/
        {
          v39 = MagicTarget_LookupByFormID(*(_DWORD *)(*(_DWORD *)(v27 + 0x20) + 4 * v35 + 4)); /*0x697a48*/
          if ( v39 ) /*0x697a52*/
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 0x20C))(a1, v39, 0); /*0x697a61*/
          ++v35; /*0x697a63*/
        }
        while ( v35 < v38 ); /*0x697a68*/
      }
    }
    FormHeapFree(v27); /*0x697a6b*/
  }
}
