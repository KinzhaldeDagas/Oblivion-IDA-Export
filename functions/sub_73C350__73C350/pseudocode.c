unsigned int __userpurge sub_73C350@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  char *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  char *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // edx
  char *v17; // eax
  unsigned int v18; // ebx
  char *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  char *v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // edx
  char *v25; // eax
  unsigned int v26; // ebx
  char *v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // ecx
  char *v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // ecx

  v3 = a3;
  sub_709160(this, a2, a3);
  v5 = TESOutput_PrintString(*(char **)dword_B40178);
  end = v3->end;
  capacity = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = sub_711A50(this + 0x37, "m_kModelProjMat");
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v11 = sub_707280(this + 0x40, "m_kModelProjTrans");
  v12 = v3->end;
  v13 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize);
  NiTArray_SetAt(v3, v12, &a3);
  v14 = sub_73BA20("m_eTextureMode", *((_DWORD *)this + 0x52));
  v15 = v3->end;
  v16 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v14;
  if ( v15 >= v16 )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  NiTArray_SetAt(v3, v15, &a3);
  v17 = sub_703B20("m_eFilter", *((_DWORD *)this + 0x50));
  v18 = v3->end;
  a3 = (NiTArray_NiTexturingPropertyMap *)v17;
  if ( v18 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize);
  NiTArray_SetAt(v3, v18, &a3);
  v19 = sub_703A70("m_eClamp", *((_DWORD *)this + 0x51));
  v20 = v3->end;
  v21 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v19;
  if ( v20 >= v21 )
    NiTArray_SetSize((unsigned __int16 *)v3, v20 + v3->growSize);
  NiTArray_SetAt(v3, v20, &a3);
  v22 = sub_73BA20("m_eTextureMode", *((_DWORD *)this + 0x52));
  v23 = v3->end;
  v24 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v22;
  if ( v23 >= v24 )
    NiTArray_SetSize((unsigned __int16 *)v3, v23 + v3->growSize);
  NiTArray_SetAt(v3, v23, &a3);
  v25 = sub_73BAD0("m_eCoordMode", *((_DWORD *)this + 0x53));
  v26 = v3->end;
  a3 = (NiTArray_NiTexturingPropertyMap *)v25;
  if ( v26 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v26 + v3->growSize);
  NiTArray_SetAt(v3, v26, &a3);
  v27 = TESOutput_PrintLabeledBool("m_bPlaneEnable", *((_BYTE *)this + 0x150));
  v28 = v3->end;
  v29 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v27;
  if ( v28 >= v29 )
    NiTArray_SetSize((unsigned __int16 *)v3, v28 + v3->growSize);
  NiTArray_SetAt(v3, v28, &a3);
  v30 = sub_716E40(this + 0x55, "m_kModelPlane");
  v31 = v3->end;
  v32 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v30;
  if ( v31 >= v32 )
    NiTArray_SetSize((unsigned __int16 *)v3, v31 + v3->growSize);
  return NiTArray_SetAt(v3, v31, &a3);
}
