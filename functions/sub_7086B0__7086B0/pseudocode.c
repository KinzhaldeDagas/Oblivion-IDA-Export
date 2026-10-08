unsigned int __thiscall sub_7086B0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  float *v4; // edi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned __int16 *v22; // eax
  unsigned int v23; // ebx
  unsigned __int16 *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // edx
  unsigned __int16 *v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // ecx
  unsigned __int16 *v30; // eax
  unsigned int v31; // ebx
  unsigned __int16 *v32; // eax
  unsigned int v33; // ebx
  unsigned int v34; // edx
  unsigned int result; // eax
  _DWORD *v36; // ebp
  int v37; // edi
  char **v38; // eax
  char *v39; // eax
  unsigned int v40; // edi
  char *v41; // ebx
  int v42; // edi
  unsigned __int16 *v43; // eax
  unsigned int v44; // edi
  unsigned int v45; // edx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7086b3*/
  v4 = this; /*0x7086b8*/
  sub_700540((int *)this, a2); /*0x7086bf*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FA80.name); /*0x7086ca*/
  end = v3->end; /*0x7086cf*/
  capacity = v3->capacity; /*0x7086d3*/
  a2 = v5; /*0x7086dc*/
  if ( end >= capacity ) /*0x7086e0*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x7086eb*/
  NiTArray_SetAt(v3, end, &a2); /*0x7086f8*/
  LOBYTE(a2) = (_BYTE)v4[6] & 1; /*0x708703*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bAppCulled", (char)a2); /*0x708711*/
  v9 = v3->end; /*0x708716*/
  a2 = v8; /*0x70871a*/
  if ( v9 >= v3->capacity ) /*0x708727*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x708732*/
  NiTArray_SetAt(v3, v9, &a2); /*0x70873f*/
  v10 = (unsigned __int16 *)sub_707280(v4 + 0x15, "m_localTranslate"); /*0x70874c*/
  v11 = v3->end; /*0x708751*/
  a2 = v10; /*0x708755*/
  if ( v11 >= v3->capacity ) /*0x70875f*/
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize); /*0x70876a*/
  NiTArray_SetAt(v3, v11, &a2); /*0x708777*/
  v12 = (unsigned __int16 *)sub_711A50(v4 + 0xC, "m_localRotate"); /*0x708784*/
  v13 = v3->end; /*0x708789*/
  a2 = v12; /*0x70878d*/
  if ( v13 >= v3->capacity ) /*0x708797*/
    NiTArray_SetSize((unsigned __int16 *)v3, v13 + v3->growSize); /*0x7087a2*/
  NiTArray_SetAt(v3, v13, &a2); /*0x7087af*/
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fLocalScale", v4[0x18]); /*0x7087c0*/
  v15 = v3->end; /*0x7087c5*/
  a2 = v14; /*0x7087c9*/
  if ( v15 >= v3->capacity ) /*0x7087d6*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x7087e1*/
  NiTArray_SetAt(v3, v15, &a2); /*0x7087ee*/
  v16 = (unsigned __int16 *)sub_707280(v4 + 0x22, "m_worldTranslate"); /*0x7087fe*/
  v17 = v3->end; /*0x708803*/
  a2 = v16; /*0x708807*/
  if ( v17 >= v3->capacity ) /*0x708811*/
    NiTArray_SetSize((unsigned __int16 *)v3, v17 + v3->growSize); /*0x70881c*/
  NiTArray_SetAt(v3, v17, &a2); /*0x708829*/
  v18 = (unsigned __int16 *)sub_711A50(v4 + 0x19, "m_worldRotate"); /*0x708836*/
  v19 = v3->end; /*0x70883b*/
  a2 = v18; /*0x70883f*/
  if ( v19 >= v3->capacity ) /*0x708849*/
    NiTArray_SetSize((unsigned __int16 *)v3, v19 + v3->growSize); /*0x708854*/
  NiTArray_SetAt(v3, v19, &a2); /*0x708861*/
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_worldScale", v4[0x25]); /*0x708875*/
  v21 = v3->end; /*0x70887a*/
  a2 = v20; /*0x70887e*/
  if ( v21 >= v3->capacity ) /*0x70888b*/
    NiTArray_SetSize((unsigned __int16 *)v3, v21 + v3->growSize); /*0x708896*/
  NiTArray_SetAt(v3, v21, &a2); /*0x7088a3*/
  v22 = (unsigned __int16 *)sub_72A040(v4 + 8, "m_kWorldBound"); /*0x7088b0*/
  v23 = v3->end; /*0x7088b5*/
  a2 = v22; /*0x7088b9*/
  if ( v23 >= v3->capacity ) /*0x7088c3*/
    NiTArray_SetSize((unsigned __int16 *)v3, v23 + v3->growSize); /*0x7088ce*/
  NiTArray_SetAt(v3, v23, &a2); /*0x7088db*/
  LOBYTE(a2) = ((_BYTE)v4[6] & 2) != 0; /*0x7088e7*/
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledBool("SelUpdate", (char)a2); /*0x7088f5*/
  v25 = v3->end; /*0x7088fa*/
  v26 = v3->capacity; /*0x7088fe*/
  a2 = v24; /*0x708907*/
  if ( v25 >= v26 ) /*0x70890b*/
    NiTArray_SetSize((unsigned __int16 *)v3, v25 + v3->growSize); /*0x708916*/
  NiTArray_SetAt(v3, v25, &a2); /*0x708923*/
  LOBYTE(a2) = ((_BYTE)v4[6] & 4) != 0; /*0x708931*/
  v27 = (unsigned __int16 *)TESOutput_PrintLabeledBool("SelUpdateTransforms", (char)a2); /*0x70893f*/
  v28 = v3->end; /*0x708944*/
  v29 = v3->capacity; /*0x708948*/
  a2 = v27; /*0x708951*/
  if ( v28 >= v29 ) /*0x708955*/
    NiTArray_SetSize((unsigned __int16 *)v3, v28 + v3->growSize); /*0x708960*/
  NiTArray_SetAt(v3, v28, &a2); /*0x70896d*/
  LOBYTE(a2) = ((_BYTE)v4[6] & 0x10) != 0; /*0x70897b*/
  v30 = (unsigned __int16 *)TESOutput_PrintLabeledBool("SelUpdateRigid", (char)a2); /*0x708989*/
  v31 = v3->end; /*0x70898e*/
  a2 = v30; /*0x708992*/
  if ( v31 >= v3->capacity ) /*0x70899f*/
    NiTArray_SetSize((unsigned __int16 *)v3, v31 + v3->growSize); /*0x7089aa*/
  NiTArray_SetAt(v3, v31, &a2); /*0x7089b7*/
  LOBYTE(a2) = ((_BYTE)v4[6] & 8) != 0; /*0x7089c4*/
  v32 = (unsigned __int16 *)TESOutput_PrintLabeledBool("SelUpdatePropControllers", (char)a2); /*0x7089d2*/
  v33 = v3->end; /*0x7089d7*/
  v34 = v3->capacity; /*0x7089db*/
  a2 = v32; /*0x7089e4*/
  if ( v33 >= v34 ) /*0x7089e8*/
    NiTArray_SetSize((unsigned __int16 *)v3, v33 + v3->growSize); /*0x7089f3*/
  result = NiTArray_SetAt(v3, v33, &a2); /*0x708a00*/
  if ( *((_DWORD *)v4 + 0x29) ) /*0x708a05*/
  {
    v36 = *((_DWORD **)v4 + 0x27); /*0x708a13*/
    if ( v36 ) /*0x708a1b*/
    {
      do /*0x708aa0*/
      {
        v37 = v36[2]; /*0x708a21*/
        v36 = (_DWORD *)*v36; /*0x708a2c*/
        v38 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 4))(v37); /*0x708a31*/
        v39 = TESOutput_PrintLabeledPointer(*v38, v37); /*0x708a37*/
        v40 = v3->end; /*0x708a3c*/
        v41 = v39; /*0x708a49*/
        if ( v40 >= v3->capacity ) /*0x708a4b*/
          NiTArray_SetSize((unsigned __int16 *)v3, v40 + v3->growSize); /*0x708a56*/
        result = v3->end; /*0x708a5b*/
        if ( v40 < result ) /*0x708a61*/
        {
          if ( v41 ) /*0x708a77*/
          {
            if ( !*((_DWORD *)&v3->data->vtbl + v40) ) /*0x708a7c*/
              ++v3->numObjs; /*0x708a82*/
          }
          else
          {
            result = (unsigned int)v3->data; /*0x708a89*/
            if ( *(_DWORD *)(result + 4 * v40) ) /*0x708a8c*/
              --v3->numObjs; /*0x708a92*/
          }
        }
        else
        {
          v3->end = v40 + 1; /*0x708a68*/
          if ( v41 ) /*0x708a6c*/
            ++v3->numObjs; /*0x708a6e*/
        }
        *((_DWORD *)&v3->data->vtbl + v40) = v41; /*0x708a9d*/
      }
      while ( v36 ); /*0x708aa0*/
      v4 = this; /*0x708aa6*/
    }
  }
  v42 = *((_DWORD *)v4 + 0x2A); /*0x708aab*/
  if ( v42 ) /*0x708ab3*/
  {
    v43 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_spCollisionObject", v42); /*0x708abb*/
    v44 = v3->end; /*0x708ac0*/
    v45 = v3->capacity; /*0x708ac4*/
    a2 = v43; /*0x708acd*/
    if ( v44 >= v45 ) /*0x708ad1*/
      NiTArray_SetSize((unsigned __int16 *)v3, v44 + v3->growSize); /*0x708adc*/
    return NiTArray_SetAt(v3, v44, &a2); /*0x708ae9*/
  }
  return result; /*0x708aee*/
}
