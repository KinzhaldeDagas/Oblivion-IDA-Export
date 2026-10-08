// MoonSugarEffect decode: hardware/software skinning gate. Considers BuffData, skinData, hardware partition data, renderer flags, mixed vertex processing, and shader interface capability before choosing skinned path.
bool __thiscall sub_768890(NiDX9Renderer *this, NiGeometry *a2, NiObject *a3)
{
  bool result; // al
  NiObject *skinData; // eax
  UInt32 m_uiRefCount; // eax
  NiObject *v7; // esi
  int v8; // eax

  if ( a2->member.geomData->member.BuffData ) /*0x76889c*/
    return 0; /*0x76889c*/
  skinData = a2->member.skinData; /*0x7688ab*/
  if ( !skinData ) /*0x7688b3*/
    return 0; /*0x7688b3*/
  m_uiRefCount = skinData[1].members.m_uiRefCount; /*0x7688b5*/
  if ( !m_uiRefCount ) /*0x7688ba*/
    return 0; /*0x7688a5*/
  if ( *(_DWORD *)(*(_DWORD *)(m_uiRefCount + 0xC) + 0x28) /*0x7688d7*/
    || (this->__vftable->super.GetFlags((NiRenderer *)this) & 2) != 0 )
  {
    return 1; /*0x7688c6*/
  }
  v7 = a3; /*0x7688da*/
  if ( !a3 ) /*0x7688e0*/
    v7 = NiRTTI_Cast(&MEMORY[0xB42858], a2->member.shader); /*0x7688f6*/
  result = 1; /*0x768947*/
  if ( this->member.Unk6E4 <= 0xFFFE0000 /*0x76890f*/
    || !v7
    || !((unsigned __int8 (__thiscall *)(NiObject *))v7->__vftable[1].Load)(v7) )
  {
    if ( !this->member.mixedVertexProcessing ) /*0x768915*/
      return 0; /*0x768915*/
    if ( !v7 ) /*0x768920*/
      return 0; /*0x768920*/
    if ( !v7->__vftable[1].GetType(v7) ) /*0x768929*/
      return 0; /*0x768929*/
    v8 = (int)v7->__vftable[1].GetType(v7); /*0x768936*/
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x68))(v8) ) /*0x76893f*/
      return 0; /*0x768913*/
  }
  return result; /*0x7688a4*/
}
