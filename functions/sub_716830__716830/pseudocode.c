unsigned __int16 *__thiscall sub_716830(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  const char *v8; // ecx
  unsigned int v9; // ebx
  unsigned __int16 *result; // eax
  unsigned int v11; // ecx
  NiTMap_TESCELL *v12; // ebp
  unsigned int v13; // eax
  int v14; // edi
  NiTMap_Entry_TESCELL **m_buckets; // edx
  char *v16; // ebx
  unsigned int v17; // edi
  bool v18; // zf
  const char *v19; // [esp+Ch] [ebp-8h] BYREF
  TESObjectCELL *v20; // [esp+10h] [ebp-4h] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_72FD30(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FCA0.SpinCount);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)FormHeapAlloc(0x60u);
  v8 = *(const char **)(*(this + 7) + 8);
  a2 = v7;
  if ( !v8 )
    v8 = "UNKNOWN";
  _sprintf((char *)v7, "m_pkScene = %s", v8);
  v9 = v2->end;
  if ( v9 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v9 + v2->growSize);
  result = (unsigned __int16 *)NiTArray_SetAt(v2, v9, &a2);
  if ( *(this + 5) )
  {
    v11 = *(this + 3);
    v12 = (NiTMap_TESCELL *)(this + 2);
    v13 = 0;
    if ( v11 )
    {
      v14 = *(this + 4);
      m_buckets = v12->m_buckets;
      while ( !*m_buckets )
      {
        ++v13;
        ++m_buckets;
        if ( v13 >= v11 )
          goto LABEL_12;
      }
      result = *(unsigned __int16 **)(v14 + 4 * v13);
    }
    else
    {
LABEL_12:
      result = 0;
    }
    a2 = result;
    if ( result )
    {
      do
      {
        sub_452600(v12, (NiTMap_Entry_TESCELL **)&a2, (void **)&v19, &v20);
        v16 = (char *)FormHeapAlloc(0x60u);
        _sprintf(v16, "%s", v19);
        v17 = v2->end;
        if ( v17 >= v2->capacity )
          NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize);
        if ( v17 < v2->end )
        {
          if ( v16 )
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v17) )
              ++v2->numObjs;
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v17) )
          {
            --v2->numObjs;
          }
        }
        else
        {
          v2->end = v17 + 1;
          if ( v16 )
            ++v2->numObjs;
        }
        v18 = a2 == 0;
        result = (unsigned __int16 *)v2->data;
        *(_DWORD *)&result[2 * v17] = v16;
      }
      while ( !v18 );
    }
  }
  return result;
}
