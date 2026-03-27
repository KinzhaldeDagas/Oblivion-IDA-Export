bool __thiscall sub_768890(NiDX9Renderer *this, NiGeometry *a2, NiObject *a3)
{
  bool result; // al
  NiObject *skinData; // eax
  UInt32 m_uiRefCount; // eax
  NiObject *v7; // esi
  int v8; // eax

  if ( a2->member.geomData->member.BuffData )
    return 0;
  skinData = a2->member.skinData;
  if ( !skinData )
    return 0;
  m_uiRefCount = skinData[1].members.m_uiRefCount;
  if ( !m_uiRefCount )
    return 0;
  if ( *(_DWORD *)(*(_DWORD *)(m_uiRefCount + 0xC) + 0x28)
    || (this->__vftable->super.GetFlags((NiRenderer *)this) & 2) != 0 )
  {
    return 1;
  }
  v7 = a3;
  if ( !a3 )
    v7 = NiRTTI_Cast(&NiD3DShaderInterfaceString, a2->member.shader);
  result = 1;
  if ( this->member.Unk6E4 <= 0xFFFE0000
    || !v7
    || !((unsigned __int8 (__thiscall *)(NiObject *))v7->__vftable[1].Load)(v7) )
  {
    if ( !this->member.mixedVertexProcessing )
      return 0;
    if ( !v7 )
      return 0;
    if ( !v7->__vftable[1].GetType(v7) )
      return 0;
    v8 = (int)v7->__vftable[1].GetType(v7);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x68))(v8) )
      return 0;
  }
  return result;
}
