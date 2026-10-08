void __thiscall sub_709160(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  float *v3; // edi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  _DWORD *v7; // ebx
  va_list v8; // edi
  char *v9; // eax
  unsigned int v10; // edi
  char *v11; // ebp
  NiTexturingProperty_Map *data; // ecx
  _DWORD *i; // ebx
  va_list v14; // edi
  char *v15; // eax
  unsigned int v16; // edi
  char *v17; // ebp
  NiTexturingProperty_Map *v18; // edx
  size_t v19; // [esp-10h] [ebp-68h]
  size_t v20; // [esp-10h] [ebp-68h]
  char ArgList[4]; // [esp+Ch] [ebp-4Ch] BYREF
  float *v22; // [esp+10h] [ebp-48h]
  char DstBuf[64]; // [esp+14h] [ebp-44h] BYREF

  v3 = this; /*0x709175*/
  v22 = this; /*0x709178*/
  sub_7086B0(this, (unsigned __int16 *)a2); /*0x70917c*/
  v4 = TESOutput_PrintString((char *)stru_B3FA88.name); /*0x709187*/
  end = a2->end; /*0x70918c*/
  capacity = a2->capacity; /*0x709190*/
  *(_DWORD *)ArgList = v4; /*0x709199*/
  if ( end >= capacity ) /*0x70919d*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x7091a8*/
  NiTArray_SetAt(a2, end, ArgList); /*0x7091b5*/
  if ( *((_DWORD *)v3 + 0x32) ) /*0x7091ba*/
  {
    v7 = *((_DWORD **)v3 + 0x30); /*0x7091c7*/
    *(_DWORD *)ArgList = 0; /*0x7091d0*/
    if ( v7 ) /*0x7091d8*/
    {
      do /*0x709272*/
      {
        v8 = (va_list)v7[2]; /*0x7091e4*/
        HIDWORD(v19) = "affected node[%d]"; /*0x7091e8*/
        v7 = (_DWORD *)*v7; /*0x7091f0*/
        LODWORD(v19) = 0x40; /*0x7091f6*/
        sub_6C5D40(v8, DstBuf, v19, *(char **)ArgList); /*0x7091f9*/
        v9 = TESOutput_PrintLabeledPointer(DstBuf, (int)v8); /*0x709204*/
        v10 = a2->end; /*0x709209*/
        v11 = v9; /*0x709216*/
        if ( v10 >= a2->capacity ) /*0x709218*/
          NiTArray_SetSize((unsigned __int16 *)a2, v10 + a2->growSize); /*0x709223*/
        if ( v10 < a2->end ) /*0x70922e*/
        {
          if ( v11 ) /*0x709244*/
          {
            if ( !*((_DWORD *)&a2->data->vtbl + v10) ) /*0x709249*/
              ++a2->numObjs; /*0x70924f*/
          }
          else if ( *((_DWORD *)&a2->data->vtbl + v10) ) /*0x709259*/
          {
            --a2->numObjs; /*0x70925f*/
          }
        }
        else
        {
          a2->end = v10 + 1; /*0x709235*/
          if ( v11 ) /*0x709239*/
            ++a2->numObjs; /*0x70923b*/
        }
        data = a2->data; /*0x709265*/
        ++*(_DWORD *)ArgList; /*0x709268*/
        *((_DWORD *)&data->vtbl + v10) = v11; /*0x70926f*/
      }
      while ( v7 ); /*0x709272*/
      v3 = v22; /*0x709278*/
    }
    for ( i = *((_DWORD **)v3 + 0x34); i; *((_DWORD *)&v18->vtbl + v16) = v17 ) /*0x709284*/
    {
      v14 = (va_list)i[2]; /*0x709294*/
      i = (_DWORD *)*i; /*0x70929b*/
      HIDWORD(v20) = "unaffected node[%d]"; /*0x70929d*/
      LODWORD(v20) = 0x40; /*0x7092a6*/
      sub_6C5D40(v14, DstBuf, v20, *(char **)ArgList); /*0x7092a9*/
      v15 = TESOutput_PrintLabeledPointer(DstBuf, (int)v14); /*0x7092b4*/
      v16 = a2->end; /*0x7092b9*/
      v17 = v15; /*0x7092c6*/
      if ( v16 >= a2->capacity ) /*0x7092c8*/
        NiTArray_SetSize((unsigned __int16 *)a2, v16 + a2->growSize); /*0x7092d3*/
      if ( v16 < a2->end ) /*0x7092de*/
      {
        if ( v17 ) /*0x7092f4*/
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v16) ) /*0x7092f9*/
            ++a2->numObjs; /*0x7092ff*/
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v16) ) /*0x709309*/
        {
          --a2->numObjs; /*0x70930f*/
        }
      }
      else
      {
        a2->end = v16 + 1; /*0x7092e5*/
        if ( v17 ) /*0x7092e9*/
          ++a2->numObjs; /*0x7092eb*/
      }
      v18 = a2->data; /*0x709315*/
      ++*(_DWORD *)ArgList; /*0x709318*/
    }
  }
}
