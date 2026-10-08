void __thiscall sub_4EA080(NiTMap_TESCELL *this, TESTerrainLODQuad_OblivionComplete_060 **valueOut)
{
  UInt32 m_numBuckets; // edx
  UInt32 v4; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v6; // ecx
  MEF_U32PointerMapEntry32 *v7; // eax
  TESTerrainLODQuad_OblivionComplete_060 **v8; // esi
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  if ( (_BYTE)valueOut ) /*0x4ea08b*/
  {
    NiAVObject_InitializePropertyState((NiAVObject *)MEMORY[0xB333A0]->LandLOD); /*0x4ea095*/
    NiNode_UpdateDynamicEffectState(MEMORY[0xB333A0]->LandLOD); /*0x4ea0a3*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)MEMORY[0xB333A0]->LandLOD, 0.0, 0); /*0x4ea0b9*/
  }
  else
  {
    m_numBuckets = this->m_numBuckets; /*0x4ea0c5*/
    v4 = 0; /*0x4ea0c8*/
    if ( m_numBuckets ) /*0x4ea0cd*/
    {
      m_buckets = this->m_buckets; /*0x4ea0cf*/
      v6 = m_buckets; /*0x4ea0d2*/
      while ( !*v6 ) /*0x4ea0d7*/
      {
        ++v4; /*0x4ea0d9*/
        ++v6; /*0x4ea0dc*/
        if ( v4 >= m_numBuckets ) /*0x4ea0e1*/
          goto LABEL_7; /*0x4ea0e1*/
      }
      v7 = (MEF_U32PointerMapEntry32 *)m_buckets[v4]; /*0x4ea157*/
    }
    else
    {
LABEL_7:
      v7 = 0; /*0x4ea0e3*/
    }
    position = v7; /*0x4ea0e7*/
    while ( position ) /*0x4ea0eb*/
    {
      valueOut = 0; /*0x4ea101*/
      NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)this, &position, &keyOut, (void **)&valueOut); /*0x4ea109*/
      v8 = valueOut; /*0x4ea10e*/
      if ( valueOut ) /*0x4ea114*/
      {
        TESTerrainLODQuad_AdvanceUnloadState(*valueOut, MEMORY[0xB333A0]->LandLOD); /*0x4ea121*/
        TESTerrainLODQuad_AdvanceUnloadState(*v8, MEMORY[0xB333A0]->LandLOD); /*0x4ea132*/
        TESTerrainLODQuad_AdvanceUnloadState(*v8, MEMORY[0xB333A0]->LandLOD); /*0x4ea143*/
      }
    }
  }
}
