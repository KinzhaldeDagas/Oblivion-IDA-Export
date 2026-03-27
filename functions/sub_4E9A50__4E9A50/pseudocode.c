NiTMap_Entry_TESCELL *__thiscall sub_4E9A50(char *this, NiTMap_Entry_TESCELL *a2)
{
  NiTMap_Entry_TESCELL *result; // eax
  NiTMap_Entry_TESCELL *v4; // esi
  TESObjectCELL *data; // ecx
  NiTMap_TESCELL *p_key; // edi
  unsigned int v7; // eax
  _DWORD *next; // esi
  NiTMap_Entry_TESCELL **m_buckets; // edx
  NiTMap_Entry_TESCELL *v10; // eax
  char **v11; // esi
  char *v12; // ebx
  char **v13; // eax
  float *v14; // edi
  char *v15; // eax
  UInt32 m_numBuckets; // edx
  UInt32 v17; // eax
  NiTMap_Entry_TESCELL **v18; // ecx
  char *v19; // esi
  float *v20; // eax
  char *j; // edi
  float *v22; // eax
  int v23; // ebx
  char *v24; // esi
  int v25; // eax
  bool v26; // zf
  int *v27; // eax
  NiTMap_Entry_TESCELL *i; // [esp+14h] [ebp-1Ch] BYREF
  NiTMap_TESCELL *v29; // [esp+18h] [ebp-18h]
  char *v30; // [esp+1Ch] [ebp-14h]
  char *v31; // [esp+20h] [ebp-10h] BYREF
  unsigned int v32; // [esp+2Ch] [ebp-4h]

  v30 = this;
  result = (NiTMap_Entry_TESCELL *)OblivionDynamicCast(
                                     a2,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESRoad `RTTI Type Descriptor',
                                     0);
  v4 = result;
  if ( result )
  {
    sub_4E8C20(this);
    data = v4[2].data;
    p_key = (NiTMap_TESCELL *)&v4[2].key;
    v7 = 0;
    v29 = (NiTMap_TESCELL *)&v4[2].key;
    if ( data )
    {
      next = v4[3].next;
      m_buckets = p_key->m_buckets;
      while ( !*m_buckets )
      {
        ++v7;
        ++m_buckets;
        if ( v7 >= (unsigned int)data )
          goto LABEL_6;
      }
      v10 = (NiTMap_Entry_TESCELL *)next[v7];
    }
    else
    {
LABEL_6:
      v10 = 0;
    }
    for ( i = v10; i; p_key = v29 )
    {
      a2 = 0;
      sub_452600(p_key, &i, (void **)&v31, (TESObjectCELL **)&a2);
      v11 = (char **)a2;
      if ( a2 )
      {
        do
        {
          if ( !v11[1] && !*v11 )
            break;
          v12 = *v11;
          v13 = (char **)FormHeapAlloc(0x28u);
          a2 = (NiTMap_Entry_TESCELL *)v13;
          v32 = 0;
          v14 = v13 ? sub_4BEF70((float *)v13) : 0;
          v32 = 0xFFFFFFFF;
          v15 = sub_4BEF40(v12);
          sub_4BEF50(v14, v15);
          sub_4E9060(v30, (signed int)v14);
          v11 = (char **)v11[1];
        }
        while ( v11 );
      }
    }
    m_numBuckets = p_key->m_numBuckets;
    v17 = 0;
    if ( m_numBuckets )
    {
      v18 = p_key->m_buckets;
      while ( !*v18 )
      {
        ++v17;
        ++v18;
        if ( v17 >= m_numBuckets )
          goto LABEL_21;
      }
      result = p_key->m_buckets[v17];
    }
    else
    {
LABEL_21:
      result = 0;
    }
    i = result;
    if ( result )
    {
      while ( 1 )
      {
        a2 = 0;
        for ( result = (NiTMap_Entry_TESCELL *)sub_452600(p_key, &i, (void **)&v31, (TESObjectCELL **)&a2); a2; result = a2 )
        {
          result = a2;
          if ( !a2->key && !a2->next )
            break;
          v19 = (char *)a2->next;
          v20 = (float *)sub_4BEF40((char *)a2->next);
          v31 = (char *)sub_4E8D00(v30, v20);
          for ( j = sub_4E7DE0(v19); j; j = *((char **)j + 1) )
          {
            if ( !*((_DWORD *)j + 1) && !*(_DWORD *)j )
              break;
            v22 = (float *)sub_4BEF40(*(char **)j);
            v23 = sub_4E8D00(v30, v22);
            if ( v23 )
            {
              v24 = sub_4E7DE0(v31);
              v25 = (int)(v24 + 4);
              if ( *((_DWORD *)v24 + 1) )
              {
                do
                {
                  v24 = *(char **)v25;
                  v26 = *(_DWORD *)(*(_DWORD *)v25 + 4) == 0;
                  v25 = *(_DWORD *)v25 + 4;
                }
                while ( !v26 );
              }
              if ( *(_DWORD *)v24 )
              {
                v27 = (int *)FormHeapAlloc(8u);
                if ( v27 )
                {
                  *v27 = v23;
                  v27[1] = 0;
                  *((_DWORD *)v24 + 1) = v27;
                }
                else
                {
                  *((_DWORD *)v24 + 1) = 0;
                }
              }
              else
              {
                *(_DWORD *)v24 = v23;
              }
            }
          }
          a2 = (NiTMap_Entry_TESCELL *)a2->key;
        }
        if ( !i )
          break;
        p_key = v29;
      }
    }
  }
  return result;
}
