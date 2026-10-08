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

  v4 = TESOutput_PrintLabeledUnsignedInt("MultiTexture Decal Map", v46); /*0x705dfa*/
  capacity = a3->capacity; /*0x705dff*/
  end = a3->end; /*0x705e03*/
  v55 = v4; /*0x705e0c*/
  if ( end >= capacity ) /*0x705e10*/
    NiTArray_SetSize((unsigned __int16 *)a3, end + a3->growSize); /*0x705e1b*/
  NiTArray_SetAt(a3, end, &v55); /*0x705e28*/
  HIDWORD(v38) = "m_spTexture "; /*0x705e2d*/
  LODWORD(v38) = 0x40; /*0x705e36*/
  sub_6C5D40(a2, v58, v38, v47); /*0x705e39*/
  v7 = TESOutput_PrintLabeledPointer(v58, *((_DWORD *)a2 + 2)); /*0x705e47*/
  v8 = a3->end; /*0x705e4c*/
  v9 = a3->capacity; /*0x705e50*/
  v55 = v7; /*0x705e59*/
  if ( v8 >= v9 ) /*0x705e5d*/
    NiTArray_SetSize((unsigned __int16 *)a3, v8 + a3->growSize); /*0x705e68*/
  NiTArray_SetAt(a3, v8, &v55); /*0x705e75*/
  HIDWORD(v39) = "Clamp Mode "; /*0x705e7a*/
  LODWORD(v39) = 0x40; /*0x705e83*/
  sub_6C5D40(a2, v58, v39, v48); /*0x705e86*/
  v10 = sub_703A70(v58, (*((unsigned __int16 *)a2 + 2) >> 0xC) & 3); /*0x705e9b*/
  v11 = a3->end; /*0x705ea0*/
  v55 = v10; /*0x705ea4*/
  if ( v11 >= a3->capacity ) /*0x705eb1*/
    NiTArray_SetSize((unsigned __int16 *)a3, v11 + a3->growSize); /*0x705ebc*/
  NiTArray_SetAt(a3, v11, &v55); /*0x705ec9*/
  HIDWORD(v40) = "Filter Mode"; /*0x705ece*/
  LODWORD(v40) = 0x40; /*0x705ed7*/
  sub_6C5D40(a2, v58, v40, v49); /*0x705eda*/
  v12 = sub_703B20(v58, a2[5] & 0xF); /*0x705eec*/
  v13 = a3->end; /*0x705ef1*/
  v14 = a3->capacity; /*0x705ef5*/
  v55 = v12; /*0x705efe*/
  if ( v13 >= v14 ) /*0x705f02*/
    NiTArray_SetSize((unsigned __int16 *)a3, v13 + a3->growSize); /*0x705f0d*/
  NiTArray_SetAt(a3, v13, &v55); /*0x705f1a*/
  HIDWORD(v41) = "Texture Coord Index "; /*0x705f1f*/
  LODWORD(v41) = 0x40; /*0x705f28*/
  sub_6C5D40(a2, v58, v41, v50); /*0x705f2b*/
  v15 = TESOutput_PrintLabeledUnsignedInt(v58, (unsigned __int8)a2[4]); /*0x705f3a*/
  v16 = a3->end; /*0x705f3f*/
  v17 = a3->capacity; /*0x705f43*/
  v55 = v15; /*0x705f4c*/
  if ( v16 >= v17 ) /*0x705f50*/
    NiTArray_SetSize((unsigned __int16 *)a3, v16 + a3->growSize); /*0x705f5b*/
  NiTArray_SetAt(a3, v16, &v55); /*0x705f68*/
  if ( a1 + 1 < v56 ) /*0x705f78*/
    JUMPOUT(0x705BF0); /*0x705bf0*/
  result = *(_DWORD *)(v57 + 0x2C); /*0x705f7e*/
  if ( result ) /*0x705f83*/
  {
    result = *(unsigned __int16 *)(result + 0xA); /*0x705f89*/
    v56 = result; /*0x705f8f*/
    v55 = 0; /*0x705f93*/
    if ( result ) /*0x705f9b*/
    {
      result = (unsigned int)v55; /*0x705fa1*/
      do /*0x7062ba*/
      {
        v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v57 + 0x2C) + 4) + 4 * result); /*0x705faf*/
        if ( v19 ) /*0x705fb4*/
        {
          v20 = TESOutput_PrintLabeledUnsignedInt("Shader Map", (int)v55); /*0x705fc4*/
          v21 = a3->end; /*0x705fc9*/
          v22 = v20; /*0x705fcd*/
          if ( v21 >= a3->capacity ) /*0x705fd8*/
            NiTArray_SetSize((unsigned __int16 *)a3, v21 + a3->growSize); /*0x705fe3*/
          if ( v21 < a3->end ) /*0x705fee*/
          {
            if ( v22 ) /*0x706004*/
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v21) ) /*0x706009*/
                ++a3->numObjs; /*0x70600f*/
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v21) ) /*0x706019*/
            {
              --a3->numObjs; /*0x70601f*/
            }
          }
          else
          {
            a3->end = v21 + 1; /*0x705ff5*/
            if ( v22 ) /*0x705ff9*/
              ++a3->numObjs; /*0x705ffb*/
          }
          *((_DWORD *)&a3->data->vtbl + v21) = v22; /*0x706028*/
          v23 = TESOutput_PrintLabeledUnsignedInt("m_uiID", *(_DWORD *)(v19 + 0x10)); /*0x706034*/
          v24 = a3->end; /*0x706039*/
          v25 = v23; /*0x706046*/
          if ( v24 >= a3->capacity ) /*0x706048*/
            NiTArray_SetSize((unsigned __int16 *)a3, v24 + a3->growSize); /*0x706053*/
          if ( v24 < a3->end ) /*0x70605e*/
          {
            if ( v25 ) /*0x706074*/
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v24) ) /*0x706079*/
                ++a3->numObjs; /*0x70607f*/
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v24) ) /*0x706089*/
            {
              --a3->numObjs; /*0x70608f*/
            }
          }
          else
          {
            a3->end = v24 + 1; /*0x706065*/
            if ( v25 ) /*0x706069*/
              ++a3->numObjs; /*0x70606b*/
          }
          HIDWORD(v42) = "m_spTexture "; /*0x706098*/
          LODWORD(v42) = 0x40; /*0x7060a1*/
          *((_DWORD *)&a3->data->vtbl + v24) = v25; /*0x7060a4*/
          sub_6C5D40((va_list)v24, v58, v42, v51); /*0x7060a7*/
          v26 = TESOutput_PrintLabeledPointer(v58, *(_DWORD *)(v19 + 8)); /*0x7060b5*/
          v27 = a3->end; /*0x7060ba*/
          v28 = v26; /*0x7060c7*/
          if ( v27 >= a3->capacity ) /*0x7060c9*/
            NiTArray_SetSize((unsigned __int16 *)a3, v27 + a3->growSize); /*0x7060d4*/
          if ( v27 < a3->end ) /*0x7060df*/
          {
            if ( v28 ) /*0x7060f5*/
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v27) ) /*0x7060fa*/
                ++a3->numObjs; /*0x706100*/
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v27) ) /*0x70610a*/
            {
              --a3->numObjs; /*0x706110*/
            }
          }
          else
          {
            a3->end = v27 + 1; /*0x7060e6*/
            if ( v28 ) /*0x7060ea*/
              ++a3->numObjs; /*0x7060ec*/
          }
          HIDWORD(v43) = "Clamp Mode "; /*0x706119*/
          LODWORD(v43) = 0x40; /*0x706122*/
          *((_DWORD *)&a3->data->vtbl + v27) = v28; /*0x706125*/
          sub_6C5D40((va_list)v27, v58, v43, v52); /*0x706128*/
          v29 = sub_703A70(v58, (*(unsigned __int16 *)(v19 + 4) >> 0xC) & 3); /*0x70613d*/
          v30 = a3->end; /*0x706142*/
          v31 = v29; /*0x70614f*/
          if ( v30 >= a3->capacity ) /*0x706151*/
            NiTArray_SetSize((unsigned __int16 *)a3, v30 + a3->growSize); /*0x70615c*/
          if ( v30 < a3->end ) /*0x706167*/
          {
            if ( v31 ) /*0x70617d*/
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v30) ) /*0x706182*/
                ++a3->numObjs; /*0x706188*/
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v30) ) /*0x706192*/
            {
              --a3->numObjs; /*0x706198*/
            }
          }
          else
          {
            a3->end = v30 + 1; /*0x70616e*/
            if ( v31 ) /*0x706172*/
              ++a3->numObjs; /*0x706174*/
          }
          HIDWORD(v44) = "Filter Mode"; /*0x7061a1*/
          LODWORD(v44) = 0x40; /*0x7061aa*/
          *((_DWORD *)&a3->data->vtbl + v30) = v31; /*0x7061ad*/
          sub_6C5D40((va_list)v30, v58, v44, v53); /*0x7061b0*/
          v32 = sub_703B20(v58, *(_BYTE *)(v19 + 5) & 0xF); /*0x7061c2*/
          v33 = a3->end; /*0x7061c7*/
          v34 = v32; /*0x7061d4*/
          if ( v33 >= a3->capacity ) /*0x7061d6*/
            NiTArray_SetSize((unsigned __int16 *)a3, v33 + a3->growSize); /*0x7061e1*/
          if ( v33 < a3->end ) /*0x7061ec*/
          {
            if ( v34 ) /*0x706202*/
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v33) ) /*0x706207*/
                ++a3->numObjs; /*0x70620d*/
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v33) ) /*0x706217*/
            {
              --a3->numObjs; /*0x70621d*/
            }
          }
          else
          {
            a3->end = v33 + 1; /*0x7061f3*/
            if ( v34 ) /*0x7061f7*/
              ++a3->numObjs; /*0x7061f9*/
          }
          HIDWORD(v45) = "Texture Coord Index "; /*0x706226*/
          LODWORD(v45) = 0x40; /*0x70622f*/
          *((_DWORD *)&a3->data->vtbl + v33) = v34; /*0x706232*/
          sub_6C5D40((va_list)v33, v58, v45, v54); /*0x706235*/
          v35 = TESOutput_PrintLabeledUnsignedInt(v58, *(unsigned __int8 *)(v19 + 4)); /*0x706244*/
          v36 = a3->end; /*0x706249*/
          v37 = v35; /*0x706256*/
          if ( v36 >= a3->capacity ) /*0x706258*/
            NiTArray_SetSize((unsigned __int16 *)a3, v36 + a3->growSize); /*0x706263*/
          if ( v36 < a3->end ) /*0x70626e*/
          {
            if ( v37 ) /*0x706284*/
            {
              if ( !*((_DWORD *)&a3->data->vtbl + v36) ) /*0x706289*/
                ++a3->numObjs; /*0x70628f*/
            }
            else if ( *((_DWORD *)&a3->data->vtbl + v36) ) /*0x706299*/
            {
              --a3->numObjs; /*0x70629f*/
            }
          }
          else
          {
            a3->end = v36 + 1; /*0x706275*/
            if ( v37 ) /*0x706279*/
              ++a3->numObjs; /*0x70627b*/
          }
          result = (unsigned int)v55; /*0x7062a8*/
          *((_DWORD *)&a3->data->vtbl + v36) = v37; /*0x7062ac*/
        }
        v55 = (char *)++result; /*0x7062b6*/
      }
      while ( result < v56 ); /*0x7062ba*/
    }
  }
  return result; /*0x7062d8*/
}
