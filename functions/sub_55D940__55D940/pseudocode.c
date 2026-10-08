void __thiscall sub_55D940(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v7; // eax
  bool v8; // zf
  const char *v9; // ecx
  unsigned int v10; // edi
  char *v11; // eax
  const char *v12; // ecx
  unsigned int v13; // edi
  char *v14; // eax
  const char *v15; // ecx
  unsigned int v16; // edi
  char *v17; // eax
  const char *v18; // ecx
  unsigned int v19; // edi
  char *v20; // eax
  const char *v21; // ecx
  unsigned int v22; // edi
  char *v23; // eax
  const char *v24; // ecx
  unsigned int v25; // edi
  char *v26; // eax
  const char *v27; // ecx
  unsigned int v28; // edi
  char *v29; // eax
  const char *v30; // ecx
  unsigned int v31; // edi
  char *v32; // eax
  unsigned int v33; // edi
  char *v34; // eax
  unsigned int v35; // edi
  char *v36; // eax
  unsigned int v37; // edi
  char *v38; // eax
  unsigned int v39; // edi
  int i; // edi
  char *v41; // ebx
  char *v42; // eax
  unsigned int v43; // ebx
  int j; // ebx
  char *v45; // edi
  char *v46; // eax
  unsigned int v47; // edi
  unsigned int v48; // ecx
  int k; // ebx
  char *v50; // edi
  char *v51; // eax
  unsigned int v52; // edi
  unsigned int v53; // ecx
  double v54; // [esp+18h] [ebp-14h]
  int v55; // [esp+18h] [ebp-14h]
  int v56; // [esp+18h] [ebp-14h]
  int v57; // [esp+18h] [ebp-14h]
  float v58; // [esp+18h] [ebp-14h]
  float v59; // [esp+18h] [ebp-14h]
  float v60; // [esp+18h] [ebp-14h]

  v2 = a2; /*0x55d942*/
  sub_70BAE0(this, (int)this, a2); /*0x55d94a*/
  v4 = TESOutput_PrintString((char *)stru_B39DB8.name); /*0x55d955*/
  end = v2->end; /*0x55d95a*/
  capacity = v2->capacity; /*0x55d95e*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v4; /*0x55d967*/
  if ( end >= capacity ) /*0x55d96b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x55d976*/
  NiTArray_SetAt(v2, end, &a2); /*0x55d983*/
  v7 = (char *)FormHeapAlloc(0x20u); /*0x55d98a*/
  v8 = *((_BYTE *)this + 0x104) == 0; /*0x55d992*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v7; /*0x55d999*/
  v9 = "true"; /*0x55d99d*/
  if ( v8 ) /*0x55d9a2*/
    v9 = "false"; /*0x55d9a4*/
  _sprintf(v7, "bForceBaseMorph = %s", v9); /*0x55d9b0*/
  v10 = v2->end; /*0x55d9b5*/
  if ( v10 >= v2->capacity ) /*0x55d9c2*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x55d9cd*/
  NiTArray_SetAt(v2, v10, &a2); /*0x55d9da*/
  v11 = (char *)FormHeapAlloc(0x20u); /*0x55d9e1*/
  v8 = *((_BYTE *)this + 0x105) == 0; /*0x55d9e9*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v11; /*0x55d9f0*/
  v12 = "true"; /*0x55d9f4*/
  if ( v8 ) /*0x55d9f9*/
    v12 = "false"; /*0x55d9fb*/
  _sprintf(v11, "bFixedNormals = %s", v12); /*0x55da07*/
  v13 = v2->end; /*0x55da0c*/
  if ( v13 >= v2->capacity ) /*0x55da19*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x55da24*/
  NiTArray_SetAt(v2, v13, &a2); /*0x55da31*/
  v14 = (char *)FormHeapAlloc(0x20u); /*0x55da38*/
  v8 = *((_BYTE *)this + 0x106) == 0; /*0x55da40*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v14; /*0x55da47*/
  v15 = "true"; /*0x55da4b*/
  if ( v8 ) /*0x55da50*/
    v15 = "false"; /*0x55da52*/
  _sprintf(v14, "bAnimationUpdate = %s", v15); /*0x55da5e*/
  v16 = v2->end; /*0x55da63*/
  if ( v16 >= v2->capacity ) /*0x55da70*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x55da7b*/
  NiTArray_SetAt(v2, v16, &a2); /*0x55da88*/
  v17 = (char *)FormHeapAlloc(0x20u); /*0x55da8f*/
  v8 = *((_BYTE *)this + 0x107) == 0; /*0x55da97*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v17; /*0x55da9e*/
  v18 = "true"; /*0x55daa2*/
  if ( v8 ) /*0x55daa7*/
    v18 = "false"; /*0x55daa9*/
  _sprintf(v17, "bRotatedLastUpdate = %s", v18); /*0x55dab5*/
  v19 = v2->end; /*0x55daba*/
  if ( v19 >= v2->capacity ) /*0x55dac7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x55dad2*/
  NiTArray_SetAt(v2, v19, &a2); /*0x55dadf*/
  v20 = (char *)FormHeapAlloc(0x20u); /*0x55dae6*/
  v8 = *((_BYTE *)this + 0x108) == 0; /*0x55daee*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v20; /*0x55daf5*/
  v21 = "true"; /*0x55daf9*/
  if ( v8 ) /*0x55dafe*/
    v21 = "false"; /*0x55db00*/
  _sprintf(v20, "bApplyRotationToParent = %s", v21); /*0x55db0c*/
  v22 = v2->end; /*0x55db11*/
  if ( v22 >= v2->capacity ) /*0x55db1e*/
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize); /*0x55db29*/
  NiTArray_SetAt(v2, v22, &a2); /*0x55db36*/
  v23 = (char *)FormHeapAlloc(0x20u); /*0x55db3d*/
  v8 = *((_BYTE *)this + 0x110) == 0; /*0x55db45*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v23; /*0x55db4c*/
  v24 = "true"; /*0x55db50*/
  if ( v8 ) /*0x55db55*/
    v24 = "false"; /*0x55db57*/
  _sprintf(v23, "bUsingLoResHead = %s", v24); /*0x55db63*/
  v25 = v2->end; /*0x55db68*/
  if ( v25 >= v2->capacity ) /*0x55db75*/
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize); /*0x55db80*/
  NiTArray_SetAt(v2, v25, &a2); /*0x55db8d*/
  v26 = (char *)FormHeapAlloc(0x20u); /*0x55db94*/
  v8 = *((_BYTE *)this + 0x111) == 0; /*0x55db9c*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v26; /*0x55dba3*/
  v27 = "true"; /*0x55dba7*/
  if ( v8 ) /*0x55dbac*/
    v27 = "false"; /*0x55dbae*/
  _sprintf(v26, "bIAmPlayerCharacter = %s", v27); /*0x55dbba*/
  v28 = v2->end; /*0x55dbbf*/
  if ( v28 >= v2->capacity ) /*0x55dbcc*/
    NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize); /*0x55dbd7*/
  NiTArray_SetAt(v2, v28, &a2); /*0x55dbe4*/
  v29 = (char *)FormHeapAlloc(0x20u); /*0x55dbeb*/
  v8 = *((_BYTE *)this + 0x112) == 0; /*0x55dbf3*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v29; /*0x55dbfa*/
  v30 = "true"; /*0x55dbfe*/
  if ( v8 ) /*0x55dc03*/
    v30 = "false"; /*0x55dc05*/
  _sprintf(v29, "bIAmInDialouge = %s", v30); /*0x55dc11*/
  v31 = v2->end; /*0x55dc16*/
  if ( v31 >= v2->capacity ) /*0x55dc23*/
    NiTArray_SetSize((unsigned __int16 *)v2, v31 + v2->growSize); /*0x55dc2e*/
  NiTArray_SetAt(v2, v31, &a2); /*0x55dc3b*/
  v32 = (char *)FormHeapAlloc(0x20u); /*0x55dc42*/
  v54 = *(this + 0x43); /*0x55dc4e*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v32; /*0x55dc57*/
  _sprintf(v32, "fLastTime = %0.3f", v54); /*0x55dc5b*/
  v33 = v2->end; /*0x55dc60*/
  if ( v33 >= v2->capacity ) /*0x55dc6d*/
    NiTArray_SetSize((unsigned __int16 *)v2, v33 + v2->growSize); /*0x55dc78*/
  NiTArray_SetAt(v2, v33, &a2); /*0x55dc85*/
  v34 = (char *)FormHeapAlloc(0x20u); /*0x55dc8c*/
  v55 = *((_DWORD *)this + 0x45); /*0x55dc97*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v34; /*0x55dc9e*/
  _sprintf(v34, "pActor = %08X", v55); /*0x55dca2*/
  v35 = v2->end; /*0x55dca7*/
  if ( v35 >= v2->capacity ) /*0x55dcb4*/
    NiTArray_SetSize((unsigned __int16 *)v2, v35 + v2->growSize); /*0x55dcbf*/
  NiTArray_SetAt(v2, v35, &a2); /*0x55dccc*/
  if ( *((_DWORD *)this + 0x45) ) /*0x55dcd1*/
  {
    v36 = (char *)FormHeapAlloc(0x20u); /*0x55dcdc*/
    v56 = *(_DWORD *)(*((_DWORD *)this + 0x45) + 0xC); /*0x55dcea*/
    a2 = (NiTArray_NiTexturingPropertyMap *)v36; /*0x55dcf1*/
    _sprintf(v36, "pActor->iFormID = %08X", v56); /*0x55dcf5*/
    v37 = v2->end; /*0x55dcfa*/
    if ( v37 >= v2->capacity ) /*0x55dd07*/
      NiTArray_SetSize((unsigned __int16 *)v2, v37 + v2->growSize); /*0x55dd12*/
    NiTArray_SetAt(v2, v37, &a2); /*0x55dd1f*/
  }
  v38 = (char *)FormHeapAlloc(0x20u); /*0x55dd26*/
  v57 = *((_DWORD *)this + 0x37); /*0x55dd31*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v38; /*0x55dd38*/
  _sprintf(v38, "spAnimationData = %08X", v57); /*0x55dd3c*/
  v39 = v2->end; /*0x55dd41*/
  if ( v39 >= v2->capacity ) /*0x55dd4e*/
    NiTArray_SetSize((unsigned __int16 *)v2, v39 + v2->growSize); /*0x55dd59*/
  NiTArray_SetAt(v2, v39, &a2); /*0x55dd66*/
  if ( *((_DWORD *)this + 0x37) ) /*0x55dd6b*/
  {
    for ( i = 0; i < 0xD; ++i ) /*0x55dd78*/
    {
      if ( ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x54))( /*0x55dd99*/
             *((_DWORD *)this + 0x37),
             i) != dbl_A3A5B0 )
      {
        v41 = *(char **)(4 * i + 0xB11FF0); /*0x55dda6*/
        v58 = ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x54))( /*0x55ddb1*/
                *((_DWORD *)this + 0x37),
                i);
        v42 = TESOutput_PrintLabeledFloat(v41, v58); /*0x55ddb5*/
        v43 = v2->end; /*0x55ddba*/
        a2 = (NiTArray_NiTexturingPropertyMap *)v42; /*0x55ddbe*/
        if ( v43 >= v2->capacity ) /*0x55ddcb*/
          NiTArray_SetSize((unsigned __int16 *)v2, v43 + v2->growSize); /*0x55ddd6*/
        NiTArray_SetAt(v2, v43, &a2); /*0x55dde3*/
      }
    }
    for ( j = 0; j < 0x11; ++j ) /*0x55ddf0*/
    {
      if ( ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x5C))( /*0x55de0b*/
             *((_DWORD *)this + 0x37),
             j) != dbl_A3A5B0 )
      {
        v45 = *(char **)(4 * j + 0xB12028); /*0x55de1c*/
        v59 = ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x5C))( /*0x55de27*/
                *((_DWORD *)this + 0x37),
                j);
        v46 = TESOutput_PrintLabeledFloat(v45, v59); /*0x55de2b*/
        v47 = v2->end; /*0x55de30*/
        v48 = v2->capacity; /*0x55de34*/
        a2 = (NiTArray_NiTexturingPropertyMap *)v46; /*0x55de3d*/
        if ( v47 >= v48 ) /*0x55de41*/
        {
          NiTArray_SetSize((unsigned __int16 *)v2, v47 + v2->growSize); /*0x55de4c*/
          v46 = (char *)a2; /*0x55de51*/
        }
        if ( v47 < v2->end ) /*0x55de5b*/
        {
          if ( v46 ) /*0x55de71*/
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v47) ) /*0x55de76*/
              ++v2->numObjs; /*0x55de7c*/
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v47) ) /*0x55de86*/
          {
            --v2->numObjs; /*0x55de8c*/
          }
        }
        else
        {
          v2->end = v47 + 1; /*0x55de62*/
          if ( v46 ) /*0x55de66*/
            ++v2->numObjs; /*0x55de68*/
        }
        *((_DWORD *)&v2->data->vtbl + v47) = v46; /*0x55de95*/
      }
    }
    for ( k = 0; k < 0x10; ++k ) /*0x55dea4*/
    {
      if ( ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x68))( /*0x55dec9*/
             *((_DWORD *)this + 0x37),
             k) != dbl_A3A5B0 )
      {
        v50 = *(char **)(4 * k + 0xB12070); /*0x55deda*/
        v60 = ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x68))( /*0x55dee5*/
                *((_DWORD *)this + 0x37),
                k);
        v51 = TESOutput_PrintLabeledFloat(v50, v60); /*0x55dee9*/
        v52 = v2->end; /*0x55deee*/
        v53 = v2->capacity; /*0x55def2*/
        a2 = (NiTArray_NiTexturingPropertyMap *)v51; /*0x55defb*/
        if ( v52 >= v53 ) /*0x55deff*/
        {
          NiTArray_SetSize((unsigned __int16 *)v2, v52 + v2->growSize); /*0x55df0a*/
          v51 = (char *)a2; /*0x55df0f*/
        }
        if ( v52 < v2->end ) /*0x55df19*/
        {
          if ( v51 ) /*0x55df2f*/
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v52) ) /*0x55df34*/
              ++v2->numObjs; /*0x55df3a*/
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v52) ) /*0x55df44*/
          {
            --v2->numObjs; /*0x55df4a*/
          }
        }
        else
        {
          v2->end = v52 + 1; /*0x55df20*/
          if ( v51 ) /*0x55df24*/
            ++v2->numObjs; /*0x55df26*/
        }
        *((_DWORD *)&v2->data->vtbl + v52) = v51; /*0x55df53*/
      }
    }
  }
}
