// positive sp value has been detected, the output may be wrong!
unsigned int __userpurge def_705C0A@<eax>(
        int a1@<ebp>,
        va_list a2@<edi>,
        NiTArray_NiTexturingPropertyMap *a3@<esi>,
        int a4)
{
  char *v4; // eax
  unsigned int capacity; // edx
  unsigned int end; // ebx
  char *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  char *v10; // eax
  unsigned int v11; // ebx
  char *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // edx
  char *v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // ecx
  unsigned int result; // eax
  int v19; // ebp
  char *v20; // eax
  unsigned int v21; // edi
  char *v22; // ebx
  char *v23; // eax
  unsigned int v24; // edi
  char *v25; // ebx
  char *v26; // eax
  unsigned int v27; // edi
  char *v28; // ebx
  char *v29; // eax
  unsigned int v30; // edi
  char *v31; // ebx
  char *v32; // eax
  unsigned int v33; // edi
  char *v34; // ebx
  char *v35; // eax
  unsigned int v36; // edi
  char *v37; // ebx
  size_t v38; // [esp-A4h] [ebp-A8h]
  size_t v39; // [esp-A4h] [ebp-A8h]
  size_t v40; // [esp-A4h] [ebp-A8h]
  size_t v41; // [esp-A4h] [ebp-A8h]
  size_t v42; // [esp-A4h] [ebp-A8h]
  size_t v43; // [esp-A4h] [ebp-A8h]
  size_t v44; // [esp-A4h] [ebp-A8h]
  size_t v45; // [esp-A4h] [ebp-A8h]
  int v46; // [esp-A0h] [ebp-A4h]
  char *v47; // [esp-9Ch] [ebp-A0h]
  char *v48; // [esp-9Ch] [ebp-A0h]
  char *v49; // [esp-9Ch] [ebp-A0h]
  char *v50; // [esp-9Ch] [ebp-A0h]
  char *v51; // [esp-9Ch] [ebp-A0h]
  char *v52; // [esp-9Ch] [ebp-A0h]
  char *v53; // [esp-9Ch] [ebp-A0h]
  char *v54; // [esp-9Ch] [ebp-A0h]
  char *v55; // [esp-8Ch] [ebp-90h] BYREF
  unsigned int v56; // [esp-88h] [ebp-8Ch]
  int v57; // [esp-84h] [ebp-88h]
  char v58[132]; // [esp-80h] [ebp-84h] BYREF

  v4 = TESOutput_PrintLabeledUnsignedInt((int)"MultiTexture Decal Map", v46);
  capacity = a3->capacity;
  end = a3->end;
  v55 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)a3, end + a3->growSize);
  NiTArray_SetAt(a3, end, &v55);
  HIDWORD(v38) = "m_spTexture ";
  LODWORD(v38) = 0x40;
  sub_6C5D40(a2, v58, v38, v47);
  v7 = TESOutput_PrintLabeledPointer(v58, *((_DWORD *)a2 + 2));
  v8 = a3->end;
  v9 = a3->capacity;
  v55 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)a3, v8 + a3->growSize);
  NiTArray_SetAt(a3, v8, &v55);
  HIDWORD(v39) = "Clamp Mode ";
  LODWORD(v39) = 0x40;
  sub_6C5D40(a2, v58, v39, v48);
  v10 = sub_703A70(v58, (*((unsigned __int16 *)a2 + 2) >> 0xC) & 3);
  v11 = a3->end;
  v55 = v10;
  if ( v11 >= a3->capacity )
    NiTArray_SetSize((unsigned __int16 *)a3, v11 + a3->growSize);
  NiTArray_SetAt(a3, v11, &v55);
  HIDWORD(v40) = "Filter Mode";
  LODWORD(v40) = 0x40;
  sub_6C5D40(a2, v58, v40, v49);
  v12 = sub_703B20(v58, a2[5] & 0xF);
  v13 = a3->end;
  v14 = a3->capacity;
  v55 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize((unsigned __int16 *)a3, v13 + a3->growSize);
  NiTArray_SetAt(a3, v13, &v55);
  HIDWORD(v41) = "Texture Coord Index ";
  LODWORD(v41) = 0x40;
  sub_6C5D40(a2, v58, v41, v50);
  v15 = TESOutput_PrintLabeledUnsignedInt((int)v58, (unsigned __int8)a2[4]);
  v16 = a3->end;
  v17 = a3->capacity;
  v55 = v15;
  if ( v16 >= v17 )
    NiTArray_SetSize((unsigned __int16 *)a3, v16 + a3->growSize);
  NiTArray_SetAt(a3, v16, &v55);
  if ( a1 + 1 < v56 )
    JUMPOUT(0x705BF0);
  result = *(_DWORD *)(v57 + 0x2C);
  if ( result )
  {
    result = *(unsigned __int16 *)(result + 0xA);
    v56 = result;
    v55 = 0;
    if ( result )
    {
      result = (unsigned int)v55;
      do
      {
        v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v57 + 0x2C) + 4) + 4 * result);
        if ( v19 )
        {
          v20 = TESOutput_PrintLabeledUnsignedInt((int)"Shader Map", (int)v55);
          v21 = a3->end;
          v22 = v20;
          if ( v21 >= a3->capacity )
            NiTArray_SetSize((unsigned __int16 *)a3, v21 + a3->growSize);
          if ( v21 < a3->end )
          {
            if ( v22 )
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v21) )
                ++a3->numObjs;
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v21) )
            {
              --a3->numObjs;
            }
          }
          else
          {
            a3->end = v21 + 1;
            if ( v22 )
              ++a3->numObjs;
          }
          *((_DWORD *)&a3->data->vtbl + v21) = v22;
          v23 = TESOutput_PrintLabeledUnsignedInt((int)"m_uiID", *(_DWORD *)(v19 + 0x10));
          v24 = a3->end;
          v25 = v23;
          if ( v24 >= a3->capacity )
            NiTArray_SetSize((unsigned __int16 *)a3, v24 + a3->growSize);
          if ( v24 < a3->end )
          {
            if ( v25 )
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v24) )
                ++a3->numObjs;
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v24) )
            {
              --a3->numObjs;
            }
          }
          else
          {
            a3->end = v24 + 1;
            if ( v25 )
              ++a3->numObjs;
          }
          HIDWORD(v42) = "m_spTexture ";
          LODWORD(v42) = 0x40;
          *((_DWORD *)&a3->data->vtbl + v24) = v25;
          sub_6C5D40((va_list)v24, v58, v42, v51);
          v26 = TESOutput_PrintLabeledPointer(v58, *(_DWORD *)(v19 + 8));
          v27 = a3->end;
          v28 = v26;
          if ( v27 >= a3->capacity )
            NiTArray_SetSize((unsigned __int16 *)a3, v27 + a3->growSize);
          if ( v27 < a3->end )
          {
            if ( v28 )
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v27) )
                ++a3->numObjs;
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v27) )
            {
              --a3->numObjs;
            }
          }
          else
          {
            a3->end = v27 + 1;
            if ( v28 )
              ++a3->numObjs;
          }
          HIDWORD(v43) = "Clamp Mode ";
          LODWORD(v43) = 0x40;
          *((_DWORD *)&a3->data->vtbl + v27) = v28;
          sub_6C5D40((va_list)v27, v58, v43, v52);
          v29 = sub_703A70(v58, (*(unsigned __int16 *)(v19 + 4) >> 0xC) & 3);
          v30 = a3->end;
          v31 = v29;
          if ( v30 >= a3->capacity )
            NiTArray_SetSize((unsigned __int16 *)a3, v30 + a3->growSize);
          if ( v30 < a3->end )
          {
            if ( v31 )
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v30) )
                ++a3->numObjs;
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v30) )
            {
              --a3->numObjs;
            }
          }
          else
          {
            a3->end = v30 + 1;
            if ( v31 )
              ++a3->numObjs;
          }
          HIDWORD(v44) = "Filter Mode";
          LODWORD(v44) = 0x40;
          *((_DWORD *)&a3->data->vtbl + v30) = v31;
          sub_6C5D40((va_list)v30, v58, v44, v53);
          v32 = sub_703B20(v58, *(_BYTE *)(v19 + 5) & 0xF);
          v33 = a3->end;
          v34 = v32;
          if ( v33 >= a3->capacity )
            NiTArray_SetSize((unsigned __int16 *)a3, v33 + a3->growSize);
          if ( v33 < a3->end )
          {
            if ( v34 )
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v33) )
                ++a3->numObjs;
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v33) )
            {
              --a3->numObjs;
            }
          }
          else
          {
            a3->end = v33 + 1;
            if ( v34 )
              ++a3->numObjs;
          }
          HIDWORD(v45) = "Texture Coord Index ";
          LODWORD(v45) = 0x40;
          *((_DWORD *)&a3->data->vtbl + v33) = v34;
          sub_6C5D40((va_list)v33, v58, v45, v54);
          v35 = TESOutput_PrintLabeledUnsignedInt((int)v58, *(unsigned __int8 *)(v19 + 4));
          v36 = a3->end;
          v37 = v35;
          if ( v36 >= a3->capacity )
            NiTArray_SetSize((unsigned __int16 *)a3, v36 + a3->growSize);
          if ( v36 < a3->end )
          {
            if ( v37 )
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v36) )
                ++a3->numObjs;
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v36) )
            {
              --a3->numObjs;
            }
          }
          else
          {
            a3->end = v36 + 1;
            if ( v37 )
              ++a3->numObjs;
          }
          result = (unsigned int)v55;
          *((_DWORD *)&a3->data->vtbl + v36) = v37;
        }
        v55 = (char *)++result;
      }
      while ( result < v56 );
    }
  }
  return result;
}
