int __cdecl sub_55E390(char a1)
{
  int result; // eax
  NiTMap_TESCELL **v2; // esi
  _DWORD *v3; // esi
  volatile LONG *v4; // eax
  volatile LONG *v5; // edi
  bool v6; // zf
  UInt32 m_numBuckets; // edx
  UInt32 v8; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edi
  NiTMap_Entry_TESCELL **v10; // ecx
  void (__thiscall ***v11)(_DWORD, int); // ecx
  char *v12; // esi
  int v13; // [esp+8h] [ebp-Ch] BYREF
  void *v14; // [esp+Ch] [ebp-8h] BYREF
  void *v15; // [esp+10h] [ebp-4h] BYREF

  if ( !dword_B39E04 )
    sub_55F750(0);
  result = dword_B39E04;
  if ( *(_DWORD *)dword_B39E04 )
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B39E80, (int)&unk_A2F830);
    if ( a1 )
    {
      v2 = (NiTMap_TESCELL **)dword_B39E04;
      if ( !dword_B39E04 )
      {
        sub_55F750(0);
        v2 = (NiTMap_TESCELL **)dword_B39E04;
      }
      v13 = sub_6A9030(*v2);
      while ( v13 )
      {
        if ( !v2 )
        {
          sub_55F750(0);
          v2 = (NiTMap_TESCELL **)dword_B39E04;
        }
        sub_452600(*v2, (NiTMap_Entry_TESCELL **)&v13, &v15, (TESObjectCELL **)&v14);
        v3 = v14;
        if ( v14 )
        {
          v4 = *(volatile LONG **)v14;
          if ( !*(_DWORD *)v14 )
            goto LABEL_18;
          if ( *((_DWORD *)v4 + 1) <= 1u )
          {
            v5 = *(volatile LONG **)v14;
            if ( v4 )
            {
              if ( !InterlockedDecrement(v4 + 1) )
              {
                if ( v5 )
                  (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
              }
              *v3 = 0;
            }
LABEL_18:
            _LN21(v3, 4u, v3[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
            FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF));
            v6 = dword_B39E04 == 0;
            v14 = 0;
            if ( v6 )
              sub_55F750(0);
            NiTMap_RemoveAt(*(_DWORD **)dword_B39E04, (int)v15);
            v2 = (NiTMap_TESCELL **)dword_B39E04;
            if ( !dword_B39E04 )
            {
              sub_55F750(0);
              v2 = (NiTMap_TESCELL **)dword_B39E04;
            }
            m_numBuckets = (*v2)->m_numBuckets;
            v8 = 0;
            if ( m_numBuckets )
            {
              m_buckets = (*v2)->m_buckets;
              v10 = m_buckets;
              while ( !*v10 )
              {
                ++v8;
                ++v10;
                if ( v8 >= m_numBuckets )
                  goto LABEL_26;
              }
              v13 = (int)m_buckets[v8];
            }
            else
            {
LABEL_26:
              v13 = 0;
            }
            continue;
          }
        }
        v2 = (NiTMap_TESCELL **)dword_B39E04;
      }
      if ( !v2 )
      {
        sub_55F750(0);
        v2 = (NiTMap_TESCELL **)dword_B39E04;
      }
      if ( (*v2)->m_numItems )
        return NiLeaveCriticalSection_0(&stru_B39E80);
      NiTMap_Clear(*v2);
      if ( !dword_B39E04 )
        sub_55F750(0);
      v11 = *(void (__thiscall ****)(_DWORD, int))dword_B39E04;
    }
    else
    {
      if ( !dword_B39E04 )
        sub_55F750(0);
      v14 = (void *)sub_6A9030(*(_DWORD **)dword_B39E04);
      while ( v14 )
      {
        if ( !dword_B39E04 )
          sub_55F750(0);
        sub_452600(
          *(NiTMap_TESCELL **)dword_B39E04,
          (NiTMap_Entry_TESCELL **)&v14,
          (void **)&v13,
          (TESObjectCELL **)&v15);
        if ( v15 )
        {
          v12 = (char *)v15 + 0xFFFFFFFC;
          _LN21(v15, 4u, *((_DWORD *)v15 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_7016A0);
          FormHeapFree((unsigned int)v12);
        }
      }
      if ( !dword_B39E04 )
        sub_55F750(0);
      NiTMap_Clear(*(_DWORD **)dword_B39E04);
      if ( !dword_B39E04 )
        sub_55F750(0);
      v11 = *(void (__thiscall ****)(_DWORD, int))dword_B39E04;
    }
    if ( v11 )
      (**v11)(v11, 1);
    if ( !dword_B39E04 )
      sub_55F750(0);
    *(_DWORD *)dword_B39E04 = 0;
    return NiLeaveCriticalSection_0(&stru_B39E80);
  }
  return result;
}
