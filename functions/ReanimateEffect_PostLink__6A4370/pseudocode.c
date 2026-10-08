NiNode *__thiscall ReanimateEffect_PostLink(volatile LONG ***this, TESObjectREFR *linkContext)
{
  NiNode *result; // eax
  NiNode *v4; // edi
  UInt32 v5; // ecx
  void (__stdcall *v6)(int, int); // edx
  int v7; // eax
  NiExtraData **m_extraDataList; // ecx

  ActiveEffect_Base_PostLink((ActiveEffect *)this, linkContext); /*0x6a437a*/
  result = linkContext->vtbl->GetNiNode(linkContext); /*0x6a4389*/
  v4 = result; /*0x6a438b*/
  if ( result ) /*0x6a438f*/
  {
    v5 = sub_5E12B0((Actor *)linkContext); /*0x6a439c*/
    if ( v5 ) /*0x6a43a0*/
    {
      v6 = *(void (__stdcall **)(int, int))(*(_DWORD *)v5 + 0x9C); /*0x6a43a8*/
      if ( (int)*(this + 0xF) >= 0x28 ) /*0x6a43ae*/
        v6(0, 0); /*0x6a43ba*/
      else
        v6(1, 1); /*0x6a43b4*/
    }
    if ( (int)*(this + 0xF) < 0x1E ) /*0x6a43c0*/
      sub_88D070(v4, 1, 1, 0); /*0x6a43c9*/
    v7 = (int)v4->vtbl->super.GetObjectByName((NiAVObject *)v4, "Bip01 Spine2"); /*0x6a43dd*/
    if ( v7 ) /*0x6a43e1*/
    {
      result = (NiNode *)NiAVObject_GetBhkCollisionObject(v7); /*0x6a43e4*/
      if ( result ) /*0x6a43ee*/
      {
        m_extraDataList = result->members.super.super.m_extraDataList; /*0x6a43f0*/
        *(this + 0xE) = (volatile LONG **)m_extraDataList; /*0x6a43f4*/
        return ((NiNode *(__thiscall *)(NiExtraData **, int))(*m_extraDataList)[0xD].__vftable)(m_extraDataList, 6); /*0x6a4409*/
      }
    }
    else
    {
      return (NiNode *)PrintError("No Bip01 Spine2 bone for reanimation. Need a backup bone!"); /*0x6a4410*/
    }
  }
  return result; /*0x6a43f9*/
}
