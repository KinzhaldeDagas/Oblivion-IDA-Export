unsigned int __userpurge sub_7086B0@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
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

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  v4 = this;
  sub_700540((int *)this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3FA80);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  LOBYTE(a3) = (_BYTE)v4[6] & 1;
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool((int)"m_bAppCulled", (char)a3);
  v9 = v3->end;
  a3 = v8;
  if ( v9 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v10 = (unsigned __int16 *)sub_707280(v4 + 0x15, "m_localTranslate");
  v11 = v3->end;
  a3 = v10;
  if ( v11 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize);
  NiTArray_SetAt(v3, v11, &a3);
  v12 = (unsigned __int16 *)sub_711A50(v4 + 0xC, (int)"m_localRotate");
  v13 = v3->end;
  a3 = v12;
  if ( v13 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v13 + v3->growSize);
  NiTArray_SetAt(v3, v13, &a3);
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"m_fLocalScale", v4[0x18]);
  v15 = v3->end;
  a3 = v14;
  if ( v15 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  NiTArray_SetAt(v3, v15, &a3);
  v16 = (unsigned __int16 *)sub_707280(v4 + 0x22, "m_worldTranslate");
  v17 = v3->end;
  a3 = v16;
  if ( v17 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v17 + v3->growSize);
  NiTArray_SetAt(v3, v17, &a3);
  v18 = (unsigned __int16 *)sub_711A50(v4 + 0x19, (int)"m_worldRotate");
  v19 = v3->end;
  a3 = v18;
  if ( v19 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v19 + v3->growSize);
  NiTArray_SetAt(v3, v19, &a3);
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"m_worldScale", v4[0x25]);
  v21 = v3->end;
  a3 = v20;
  if ( v21 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v21 + v3->growSize);
  NiTArray_SetAt(v3, v21, &a3);
  v22 = (unsigned __int16 *)sub_72A040(v4 + 8, (int)"m_kWorldBound");
  v23 = v3->end;
  a3 = v22;
  if ( v23 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v23 + v3->growSize);
  NiTArray_SetAt(v3, v23, &a3);
  LOBYTE(a3) = ((_BYTE)v4[6] & 2) != 0;
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledBool((int)"SelUpdate", (char)a3);
  v25 = v3->end;
  v26 = v3->capacity;
  a3 = v24;
  if ( v25 >= v26 )
    NiTArray_SetSize((unsigned __int16 *)v3, v25 + v3->growSize);
  NiTArray_SetAt(v3, v25, &a3);
  LOBYTE(a3) = ((_BYTE)v4[6] & 4) != 0;
  v27 = (unsigned __int16 *)TESOutput_PrintLabeledBool((int)"SelUpdateTransforms", (char)a3);
  v28 = v3->end;
  v29 = v3->capacity;
  a3 = v27;
  if ( v28 >= v29 )
    NiTArray_SetSize((unsigned __int16 *)v3, v28 + v3->growSize);
  NiTArray_SetAt(v3, v28, &a3);
  LOBYTE(a3) = ((_BYTE)v4[6] & 0x10) != 0;
  v30 = (unsigned __int16 *)TESOutput_PrintLabeledBool((int)"SelUpdateRigid", (char)a3);
  v31 = v3->end;
  a3 = v30;
  if ( v31 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v31 + v3->growSize);
  NiTArray_SetAt(v3, v31, &a3);
  LOBYTE(a3) = ((_BYTE)v4[6] & 8) != 0;
  v32 = (unsigned __int16 *)TESOutput_PrintLabeledBool((int)"SelUpdatePropControllers", (char)a3);
  v33 = v3->end;
  v34 = v3->capacity;
  a3 = v32;
  if ( v33 >= v34 )
    NiTArray_SetSize((unsigned __int16 *)v3, v33 + v3->growSize);
  result = NiTArray_SetAt(v3, v33, &a3);
  if ( *((_DWORD *)v4 + 0x29) )
  {
    v36 = *((_DWORD **)v4 + 0x27);
    if ( v36 )
    {
      do
      {
        v37 = v36[2];
        v36 = (_DWORD *)*v36;
        v38 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 4))(v37);
        v39 = TESOutput_PrintLabeledPointer(*v38, v37);
        v40 = v3->end;
        v41 = v39;
        if ( v40 >= v3->capacity )
          NiTArray_SetSize((unsigned __int16 *)v3, v40 + v3->growSize);
        result = v3->end;
        if ( v40 < result )
        {
          if ( v41 )
          {
            if ( !*((_DWORD *)&v3->data->vtbl + v40) )
              ++v3->numObjs;
          }
          else
          {
            result = (unsigned int)v3->data;
            if ( *(_DWORD *)(result + 4 * v40) )
              --v3->numObjs;
          }
        }
        else
        {
          v3->end = v40 + 1;
          if ( v41 )
            ++v3->numObjs;
        }
        *((_DWORD *)&v3->data->vtbl + v40) = v41;
      }
      while ( v36 );
      v4 = this;
    }
  }
  v42 = *((_DWORD *)v4 + 0x2A);
  if ( v42 )
  {
    v43 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_spCollisionObject", v42);
    v44 = v3->end;
    v45 = v3->capacity;
    a3 = v43;
    if ( v44 >= v45 )
      NiTArray_SetSize((unsigned __int16 *)v3, v44 + v3->growSize);
    return NiTArray_SetAt(v3, v44, &a3);
  }
  return result;
}
