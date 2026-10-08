unsigned int __userpurge sub_70BAE0@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int result; // eax
  _DWORD *v11; // ebx
  va_list v12; // edi
  char *v13; // eax
  unsigned int v14; // edi
  char *v15; // ebp
  NiTexturingProperty_Map *data; // ecx
  size_t v17; // [esp-10h] [ebp-64h]
  char ArgList[4]; // [esp+Ch] [ebp-48h] BYREF
  char DstBuf[64]; // [esp+10h] [ebp-44h] BYREF

  sub_7086B0(this, a2, (unsigned __int16 *)a3); /*0x70baf8*/
  v4 = TESOutput_PrintString((char *)parent.name); /*0x70bb03*/
  end = a3->end; /*0x70bb08*/
  capacity = a3->capacity; /*0x70bb0c*/
  *(_DWORD *)ArgList = v4; /*0x70bb15*/
  if ( end >= capacity ) /*0x70bb19*/
    NiTArray_SetSize((unsigned __int16 *)a3, end + a3->growSize); /*0x70bb24*/
  NiTArray_SetAt(a3, end, ArgList); /*0x70bb31*/
  v7 = TESOutput_PrintLabeledBool("m_bVisual", 0.0 != *(this + 0xB)); /*0x70bb51*/
  v8 = a3->end; /*0x70bb56*/
  v9 = a3->capacity; /*0x70bb5a*/
  *(_DWORD *)ArgList = v7; /*0x70bb63*/
  if ( v8 >= v9 ) /*0x70bb67*/
    NiTArray_SetSize((unsigned __int16 *)a3, v8 + a3->growSize); /*0x70bb72*/
  result = NiTArray_SetAt(a3, v8, ArgList); /*0x70bb7f*/
  if ( *((_DWORD *)this + 0x32) ) /*0x70bb84*/
  {
    v11 = *((_DWORD **)this + 0x30); /*0x70bb91*/
    for ( *(_DWORD *)ArgList = 0; v11; *((_DWORD *)&data->vtbl + v14) = v15 ) /*0x70bba1*/
    {
      v12 = (va_list)v11[2]; /*0x70bbac*/
      HIDWORD(v17) = "effect[%d]"; /*0x70bbb0*/
      v11 = (_DWORD *)*v11; /*0x70bbb8*/
      LODWORD(v17) = 0x40; /*0x70bbbe*/
      sub_6C5D40(v12, DstBuf, v17, *(char **)ArgList); /*0x70bbc1*/
      v13 = TESOutput_PrintLabeledPointer(DstBuf, (int)v12); /*0x70bbcc*/
      v14 = a3->end; /*0x70bbd1*/
      v15 = v13; /*0x70bbde*/
      if ( v14 >= a3->capacity ) /*0x70bbe0*/
        NiTArray_SetSize((unsigned __int16 *)a3, v14 + a3->growSize); /*0x70bbeb*/
      result = a3->end; /*0x70bbf0*/
      if ( v14 < result ) /*0x70bbf6*/
      {
        if ( v15 ) /*0x70bc0c*/
        {
          if ( !*((_DWORD *)&a3->data->vtbl + v14) ) /*0x70bc11*/
            ++a3->numObjs; /*0x70bc17*/
        }
        else
        {
          result = (unsigned int)a3->data; /*0x70bc1e*/
          if ( *(_DWORD *)(result + 4 * v14) ) /*0x70bc21*/
            --a3->numObjs; /*0x70bc27*/
        }
      }
      else
      {
        a3->end = v14 + 1; /*0x70bbfd*/
        if ( v15 ) /*0x70bc01*/
          ++a3->numObjs; /*0x70bc03*/
      }
      data = a3->data; /*0x70bc2d*/
      ++*(_DWORD *)ArgList; /*0x70bc30*/
    }
  }
  return result; /*0x70bc41*/
}
