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
  NiAVObject *niNode; // ebp
  float *v10; // eax
  int v11; // eax
  ExtraDataList *p_baseExtraList; // ecx
  bool v13; // al
  float v14[9]; // [esp+18h] [ebp-24h] BYREF

  v6 = a5;
  if ( (a5 & 0x8000000) != 0 )
  {
    if ( TESObjectREFR_GetContainer(this) )
    {
      ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef(this);
      st6_0 = ExtraContainerChanges_RunScripts(ContainerExtraDataForRef, a4, st6_0);
    }
  }
  niNode = (NiAVObject *)this->member.niNode;
  if ( niNode )
  {
    v10 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->GetPos)(
                     this,
                     a4,
                     st6_0,
                     st5_0);
    niNode->members.m_localTransform.pos.x = *v10;
    niNode->members.m_localTransform.pos.y = v10[1];
    niNode->members.m_localTransform.pos.z = v10[2];
    qmemcpy(&niNode->members.m_localTransform, sub_4D7AF0((float *)this, v14), 0x24u);
    sub_88CDC0(niNode, 1, 0);
    NiAVObject_UpdateNiAVObject(niNode, 0.0, 0);
    v6 = a5;
  }
  if ( (v6 & 0x80000) != 0 )
  {
    v11 = v6;
    if ( !v6 )
      v11 = sub_4533F0(SaveLoad_CurrentSavegame, (int)this, 0);
    p_baseExtraList = &this->member.baseExtraList;
    if ( (v11 & 0x40000) != 0 )
      v13 = !sub_41F830(p_baseExtraList, 8);
    else
      v13 = sub_41F830(p_baseExtraList, 8);
    if ( v13 )
      sub_4D82E0(this, 4);
    else
      sub_4D8270(this, 4);
  }
  if ( (v6 & 0x177577E0) != 0 || this->vtbl->IsActor(this) )
    TESObjectREFR_PostLinkModifiedExtraList(&this->member.baseExtraList, v6, a6, (int)this);
  this->member.super.flags &= ~0x200000u;
}
