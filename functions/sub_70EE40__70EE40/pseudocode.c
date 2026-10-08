unsigned int __thiscall sub_70EE40(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  unsigned __int16 *v21; // eax
  unsigned int v22; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x70ee42*/
  sub_7009A0(this, a2); /*0x70ee4a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FAD4.name); /*0x70ee55*/
  end = v2->end; /*0x70ee5a*/
  capacity = v2->capacity; /*0x70ee5e*/
  a2 = v4; /*0x70ee67*/
  if ( end >= capacity ) /*0x70ee6b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x70ee76*/
  NiTArray_SetAt(v2, end, &a2); /*0x70ee83*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Width", **((_DWORD **)this + 0x15)); /*0x70ee93*/
  v8 = v2->end; /*0x70ee98*/
  v9 = v2->capacity; /*0x70ee9c*/
  a2 = v7; /*0x70eea5*/
  if ( v8 >= v9 ) /*0x70eea9*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x70eeb4*/
  NiTArray_SetAt(v2, v8, &a2); /*0x70eec1*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Height", **((_DWORD **)this + 0x16)); /*0x70eed1*/
  v11 = v2->end; /*0x70eed6*/
  a2 = v10; /*0x70eeda*/
  if ( v11 >= v2->capacity ) /*0x70eee7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x70eef2*/
  NiTArray_SetAt(v2, v11, &a2); /*0x70eeff*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiMipmapLevels", *((_DWORD *)this + 0x18)); /*0x70ef0d*/
  v13 = v2->end; /*0x70ef12*/
  v14 = v2->capacity; /*0x70ef16*/
  a2 = v12; /*0x70ef1f*/
  if ( v13 >= v14 ) /*0x70ef23*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x70ef2e*/
  NiTArray_SetAt(v2, v13, &a2); /*0x70ef3b*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiFaces", *((_DWORD *)this + 0x1B)); /*0x70ef49*/
  v16 = v2->end; /*0x70ef4e*/
  v17 = v2->capacity; /*0x70ef52*/
  a2 = v15; /*0x70ef5b*/
  if ( v16 >= v17 ) /*0x70ef5f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x70ef6a*/
  NiTArray_SetAt(v2, v16, &a2); /*0x70ef77*/
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt( /*0x70ef8f*/
                              "TotalSizeInBytes",
                              *((_DWORD *)this + 0x1B)
                            * *(_DWORD *)(*((_DWORD *)this + 0x17) + 4 * *((_DWORD *)this + 0x18)));
  v19 = v2->end; /*0x70ef94*/
  v20 = v2->capacity; /*0x70ef98*/
  a2 = v18; /*0x70efa1*/
  if ( v19 >= v20 ) /*0x70efa5*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x70efb0*/
  NiTArray_SetAt(v2, v19, &a2); /*0x70efbd*/
  v21 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt( /*0x70efd1*/
                              "FaceSizeInBytes",
                              *(_DWORD *)(*((_DWORD *)this + 0x17) + 4 * *((_DWORD *)this + 0x18)));
  v22 = v2->end; /*0x70efd6*/
  a2 = v21; /*0x70efda*/
  if ( v22 >= v2->capacity ) /*0x70efe7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize); /*0x70eff2*/
  return NiTArray_SetAt(v2, v22, &a2); /*0x70f004*/
}
