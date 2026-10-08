int __thiscall sub_5217E0(NiTMap_TESCELL *this)
{
  NiTMap_TESCELL *v1; // edi
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  void *v7; // esi
  UInt32 v8; // ebx
  UInt32 i; // edi
  void *v10; // eax
  void *v11; // eax
  unsigned int *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  unsigned int v16; // [esp-8h] [ebp-3Ch]
  void *valueOut; // [esp+18h] [ebp-1Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+1Ch] [ebp-18h] BYREF
  NiTMap_TESCELL *v19; // [esp+20h] [ebp-14h]
  unsigned int keyOut[4]; // [esp+24h] [ebp-10h] BYREF

  v1 = this; /*0x521807*/
  v19 = this; /*0x521809*/
  m_numBuckets = this->m_numBuckets; /*0x52180d*/
  v3 = 0; /*0x521812*/
  if ( m_numBuckets ) /*0x521816*/
  {
    m_buckets = this->m_buckets; /*0x521818*/
    v5 = m_buckets; /*0x52181b*/
    while ( !*v5 ) /*0x521822*/
    {
      ++v3; /*0x521828*/
      ++v5; /*0x52182b*/
      if ( v3 >= m_numBuckets ) /*0x521830*/
        goto LABEL_5; /*0x521830*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)m_buckets[v3]; /*0x5218de*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x521832*/
  }
  position = v6; /*0x521836*/
  while ( position ) /*0x52183a*/
  {
    valueOut = 0; /*0x521851*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)v1, &position, keyOut, &valueOut); /*0x521855*/
    v7 = valueOut; /*0x52185a*/
    if ( valueOut ) /*0x521860*/
    {
      v8 = *((_DWORD *)valueOut + 3); /*0x521866*/
      for ( i = 0; i < v8; ++i ) /*0x52186d*/
      {
        v10 = (void *)sub_494ED0((TESObjectREFR *)v7, i); /*0x52187f*/
        v11 = OblivionDynamicCast( /*0x521885*/
                v10,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESIdleForm `RTTI Type Descriptor',
                0);
        if ( v11 ) /*0x52188f*/
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)v11 + 0x10))(v11, 1); /*0x52189a*/
      }
      if ( *((_DWORD *)v7 + 8) ) /*0x5218a3*/
      {
        while ( 1 ) /*0x5218a8*/
        {
          v12 = *((unsigned int **)v7 + 8); /*0x5218a8*/
          if ( !v12[1] && !*v12 ) /*0x5218b0*/
            break; /*0x5218b0*/
          FormHeapFree(*v12); /*0x5218b7*/
          v13 = *((_DWORD **)v7 + 8); /*0x5218bc*/
          v14 = (_DWORD *)v13[1]; /*0x5218bf*/
          if ( v14 ) /*0x5218c7*/
          {
            v13[1] = v14[1]; /*0x5218cc*/
            *v13 = *v14; /*0x5218d2*/
            FormHeapFree((unsigned int)v14); /*0x5218d4*/
          }
          else
          {
            *v13 = 0; /*0x5218e6*/
          }
        }
        FormHeapFree(*((_DWORD *)v7 + 8)); /*0x5218eb*/
      }
      FormHeapFree(*((_DWORD *)v7 + 6)); /*0x5218f7*/
      *((_DWORD *)v7 + 6) = 0; /*0x5218fc*/
      *((_WORD *)v7 + 0xF) = 0; /*0x5218ff*/
      *((_WORD *)v7 + 0xE) = 0; /*0x521903*/
      v16 = *((_DWORD *)v7 + 1); /*0x52190a*/
      keyOut[3] = 0xFFFFFFFF; /*0x52190b*/
      *(_DWORD *)v7 = &NiTLargeArray<TESForm *>::`vftable'; /*0x521913*/
      FormHeapFree(v16); /*0x521919*/
      FormHeapFree((unsigned int)v7); /*0x52191f*/
      v1 = v19; /*0x521924*/
    }
  }
  return NiTMap_Clear(v1); /*0x52193c*/
}
