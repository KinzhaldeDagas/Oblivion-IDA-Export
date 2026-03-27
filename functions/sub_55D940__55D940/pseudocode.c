void __thiscall sub_55D940(float *this, char *a2)
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
  int v41; // ebx
  char *v42; // eax
  unsigned int v43; // ebx
  int j; // ebx
  int v45; // edi
  char *v46; // eax
  unsigned int v47; // edi
  unsigned int v48; // ecx
  int k; // ebx
  int v50; // edi
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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_70BAE0(this, (int)a2);
  v4 = TESOutput_PrintString(*(_DWORD *)dword_B39DB8);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (char *)FormHeapAlloc(0x20u);
  v8 = *((_BYTE *)this + 0x104) == 0;
  a2 = v7;
  v9 = "true";
  if ( v8 )
    v9 = "false";
  _sprintf(v7, "bForceBaseMorph = %s", v9);
  v10 = v2->end;
  if ( v10 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  v11 = (char *)FormHeapAlloc(0x20u);
  v8 = *((_BYTE *)this + 0x105) == 0;
  a2 = v11;
  v12 = "true";
  if ( v8 )
    v12 = "false";
  _sprintf(v11, "bFixedNormals = %s", v12);
  v13 = v2->end;
  if ( v13 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  v14 = (char *)FormHeapAlloc(0x20u);
  v8 = *((_BYTE *)this + 0x106) == 0;
  a2 = v14;
  v15 = "true";
  if ( v8 )
    v15 = "false";
  _sprintf(v14, "bAnimationUpdate = %s", v15);
  v16 = v2->end;
  if ( v16 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize);
  NiTArray_SetAt(v2, v16, &a2);
  v17 = (char *)FormHeapAlloc(0x20u);
  v8 = *((_BYTE *)this + 0x107) == 0;
  a2 = v17;
  v18 = "true";
  if ( v8 )
    v18 = "false";
  _sprintf(v17, "bRotatedLastUpdate = %s", v18);
  v19 = v2->end;
  if ( v19 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize);
  NiTArray_SetAt(v2, v19, &a2);
  v20 = (char *)FormHeapAlloc(0x20u);
  v8 = *((_BYTE *)this + 0x108) == 0;
  a2 = v20;
  v21 = "true";
  if ( v8 )
    v21 = "false";
  _sprintf(v20, "bApplyRotationToParent = %s", v21);
  v22 = v2->end;
  if ( v22 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize);
  NiTArray_SetAt(v2, v22, &a2);
  v23 = (char *)FormHeapAlloc(0x20u);
  v8 = *((_BYTE *)this + 0x110) == 0;
  a2 = v23;
  v24 = "true";
  if ( v8 )
    v24 = "false";
  _sprintf(v23, "bUsingLoResHead = %s", v24);
  v25 = v2->end;
  if ( v25 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize);
  NiTArray_SetAt(v2, v25, &a2);
  v26 = (char *)FormHeapAlloc(0x20u);
  v8 = *((_BYTE *)this + 0x111) == 0;
  a2 = v26;
  v27 = "true";
  if ( v8 )
    v27 = "false";
  _sprintf(v26, "bIAmPlayerCharacter = %s", v27);
  v28 = v2->end;
  if ( v28 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize);
  NiTArray_SetAt(v2, v28, &a2);
  v29 = (char *)FormHeapAlloc(0x20u);
  v8 = *((_BYTE *)this + 0x112) == 0;
  a2 = v29;
  v30 = "true";
  if ( v8 )
    v30 = "false";
  _sprintf(v29, "bIAmInDialouge = %s", v30);
  v31 = v2->end;
  if ( v31 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v31 + v2->growSize);
  NiTArray_SetAt(v2, v31, &a2);
  v32 = (char *)FormHeapAlloc(0x20u);
  v54 = *(this + 0x43);
  a2 = v32;
  _sprintf(v32, "fLastTime = %0.3f", v54);
  v33 = v2->end;
  if ( v33 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v33 + v2->growSize);
  NiTArray_SetAt(v2, v33, &a2);
  v34 = (char *)FormHeapAlloc(0x20u);
  v55 = *((_DWORD *)this + 0x45);
  a2 = v34;
  _sprintf(v34, "pActor = %08X", v55);
  v35 = v2->end;
  if ( v35 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v35 + v2->growSize);
  NiTArray_SetAt(v2, v35, &a2);
  if ( *((_DWORD *)this + 0x45) )
  {
    v36 = (char *)FormHeapAlloc(0x20u);
    v56 = *(_DWORD *)(*((_DWORD *)this + 0x45) + 0xC);
    a2 = v36;
    _sprintf(v36, "pActor->iFormID = %08X", v56);
    v37 = v2->end;
    if ( v37 >= v2->capacity )
      NiTArray_SetSize((unsigned __int16 *)v2, v37 + v2->growSize);
    NiTArray_SetAt(v2, v37, &a2);
  }
  v38 = (char *)FormHeapAlloc(0x20u);
  v57 = *((_DWORD *)this + 0x37);
  a2 = v38;
  _sprintf(v38, "spAnimationData = %08X", v57);
  v39 = v2->end;
  if ( v39 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v39 + v2->growSize);
  NiTArray_SetAt(v2, v39, &a2);
  if ( *((_DWORD *)this + 0x37) )
  {
    for ( i = 0; i < 0xD; ++i )
    {
      if ( ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x54))(
             *((_DWORD *)this + 0x37),
             i) != dbl_A3A5B0 )
      {
        v41 = *(_DWORD *)(4 * i + 0xB11FF0);
        v58 = ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x54))(
                *((_DWORD *)this + 0x37),
                i);
        v42 = TESOutput_PrintLabeledFloat(v41, v58);
        v43 = v2->end;
        a2 = v42;
        if ( v43 >= v2->capacity )
          NiTArray_SetSize((unsigned __int16 *)v2, v43 + v2->growSize);
        NiTArray_SetAt(v2, v43, &a2);
      }
    }
    for ( j = 0; j < 0x11; ++j )
    {
      if ( ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x5C))(
             *((_DWORD *)this + 0x37),
             j) != dbl_A3A5B0 )
      {
        v45 = *(_DWORD *)(4 * j + 0xB12028);
        v59 = ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x5C))(
                *((_DWORD *)this + 0x37),
                j);
        v46 = TESOutput_PrintLabeledFloat(v45, v59);
        v47 = v2->end;
        v48 = v2->capacity;
        a2 = v46;
        if ( v47 >= v48 )
        {
          NiTArray_SetSize((unsigned __int16 *)v2, v47 + v2->growSize);
          v46 = a2;
        }
        if ( v47 < v2->end )
        {
          if ( v46 )
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v47) )
              ++v2->numObjs;
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v47) )
          {
            --v2->numObjs;
          }
        }
        else
        {
          v2->end = v47 + 1;
          if ( v46 )
            ++v2->numObjs;
        }
        *((_DWORD *)&v2->data->vtbl + v47) = v46;
      }
    }
    for ( k = 0; k < 0x10; ++k )
    {
      if ( ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x68))(
             *((_DWORD *)this + 0x37),
             k) != dbl_A3A5B0 )
      {
        v50 = *(_DWORD *)(4 * k + 0xB12070);
        v60 = ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**((_DWORD **)this + 0x37) + 0x68))(
                *((_DWORD *)this + 0x37),
                k);
        v51 = TESOutput_PrintLabeledFloat(v50, v60);
        v52 = v2->end;
        v53 = v2->capacity;
        a2 = v51;
        if ( v52 >= v53 )
        {
          NiTArray_SetSize((unsigned __int16 *)v2, v52 + v2->growSize);
          v51 = a2;
        }
        if ( v52 < v2->end )
        {
          if ( v51 )
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v52) )
              ++v2->numObjs;
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v52) )
          {
            --v2->numObjs;
          }
        }
        else
        {
          v2->end = v52 + 1;
          if ( v51 )
            ++v2->numObjs;
        }
        *((_DWORD *)&v2->data->vtbl + v52) = v51;
      }
    }
  }
}
