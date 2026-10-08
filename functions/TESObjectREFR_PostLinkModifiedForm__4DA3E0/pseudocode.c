void __userpurge TESObjectREFR_PostLinkModifiedForm(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        int a5,
        int a6)
{
  int v6; // esi
  float *ContainerExtraDataForRef; // eax
  NiObjectNET *niNode; // ebp
  NiInterpController **v10; // eax
  int v11; // eax
  ExtraDataList *p_baseExtraList; // ecx
  bool v13; // al
  float v14[9]; // [esp+18h] [ebp-24h] BYREF

  v6 = a5; /*0x4da3e5*/
  if ( (a5 & 0x8000000) != 0 ) /*0x4da3f1*/
  {
    if ( TESObjectREFR_GetContainer(this) ) /*0x4da3f3*/
    {
      ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4da3fe*/
      st6_0 = ExtraContainerChanges_RunScripts(ContainerExtraDataForRef, a4, st6_0); /*0x4da408*/
    }
  }
  niNode = (NiObjectNET *)this->member.niNode; /*0x4da40e*/
  if ( niNode ) /*0x4da413*/
  {
    v10 = (NiInterpController **)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->GetPos)( /*0x4da420*/
                                   this,
                                   a4,
                                   st6_0,
                                   st5_0);
    niNode[3].members.m_controller = *v10; /*0x4da424*/
    niNode[3].members.m_extraDataList = (NiExtraData **)v10[1]; /*0x4da42a*/
    *(_DWORD *)&niNode[3].members.m_extraDataListLen = v10[2]; /*0x4da437*/
    qmemcpy(&niNode[2], sub_4D7AF0((float *)this, v14), 0x24u); /*0x4da44e*/
    sub_88CDC0(niNode, 1, 0); /*0x4da450*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)niNode, 0.0, 0); /*0x4da462*/
    v6 = a5; /*0x4da467*/
  }
  if ( (v6 & 0x80000) != 0 ) /*0x4da473*/
  {
    v11 = v6; /*0x4da477*/
    if ( !v6 ) /*0x4da479*/
      v11 = sub_4533F0(g_TESSaveLoadGame, (int)this, 0); /*0x4da483*/
    p_baseExtraList = &this->member.baseExtraList; /*0x4da48f*/
    if ( (v11 & 0x40000) != 0 ) /*0x4da492*/
      v13 = !ExtraDataList_TestActionFlagBits(p_baseExtraList, 8u); /*0x4da49b*/
    else
      v13 = ExtraDataList_TestActionFlagBits(p_baseExtraList, 8u); /*0x4da4a0*/
    if ( v13 ) /*0x4da4ab*/
      TESObjectREFR_ClearActionFlagBits(this, 4u); /*0x4da4ad*/
    else
      TESObjectREFR_SetActionFlagBits(this, 4u); /*0x4da4b4*/
  }
  if ( (v6 & 0x177577E0) != 0 || this->vtbl->IsActor(this) ) /*0x4da4cb*/
    TESObjectREFR_PostLinkModifiedExtraList(&this->member.baseExtraList, v6, a6, (int)this); /*0x4da4db*/
  this->member.super.flags &= ~0x200000u; /*0x4da4e0*/
}
