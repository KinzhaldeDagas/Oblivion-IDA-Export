NiTMap_Entry_TESCELL *__thiscall sub_716760(_DWORD *this, signed int i)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  NiTMap_Entry_TESCELL *result; // eax
  unsigned int v6; // edx
  NiTMap_TESCELL *v7; // esi
  unsigned int v8; // eax
  NiTMap_Entry_TESCELL **m_buckets; // ecx
  int v10; // [esp-14h] [ebp-28h]
  int v11; // [esp+8h] [ebp-Ch] BYREF
  const char *v12; // [esp+Ch] [ebp-8h] BYREF
  TESObjectCELL *v13; // [esp+10h] [ebp-4h] BYREF

  v2 = (_DWORD *)i;
  j_nullsub_3(i);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 7));
  v11 = *(this + 5);
  v10 = v2[0x88];
  v4 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v10 + 8);
  i = 4;
  result = (NiTMap_Entry_TESCELL *)v4(v10, &v11, 4, &i, 1);
  if ( *(this + 5) )
  {
    v6 = *(this + 3);
    v7 = (NiTMap_TESCELL *)(this + 2);
    v8 = 0;
    if ( v6 )
    {
      m_buckets = v7->m_buckets;
      while ( !*m_buckets )
      {
        ++v8;
        ++m_buckets;
        if ( v8 >= v6 )
          goto LABEL_6;
      }
      result = v7->m_buckets[v8];
    }
    else
    {
LABEL_6:
      result = 0;
    }
    i = (signed int)result;
    if ( result )
    {
      do
      {
        sub_452600(v7, (NiTMap_Entry_TESCELL **)&i, (void **)&v12, &v13);
        sub_713720(v2, v12);
        result = (NiTMap_Entry_TESCELL *)(*(int (__thiscall **)(_DWORD *, TESObjectCELL *))(*v2 + 0x2C))(v2, v13);
      }
      while ( i );
    }
  }
  return result;
}
