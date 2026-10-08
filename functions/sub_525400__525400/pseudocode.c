void __stdcall sub_525400(PlayerCharacter *a1)
{
  PlayerCharacter *v1; // ecx
  bool v2; // zf
  NiNode *NodeByPerspective; // eax
  NiAVObject *v4; // ebx
  float v5[9]; // [esp+4h] [ebp-48h] BYREF
  float v6[9]; // [esp+28h] [ebp-24h] BYREF

  LOBYTE(MEMORY[0xB33D80]) = 1; /*0x525408*/
  ((void (__thiscall *)(LowProcess *, PlayerCharacter *))a1->super.super.super.process->Unk_C5)( /*0x52541b*/
    a1->super.super.super.process,
    a1);
  v1 = reference; /*0x52541d*/
  v2 = a1 == reference; /*0x525423*/
  LOBYTE(MEMORY[0xB33D80]) = 0; /*0x525425*/
  if ( v2 ) /*0x52542c*/
  {
    NodeByPerspective = PlayerCharacter_GetNodeByPerspective(v1, 1); /*0x525431*/
    if ( NodeByPerspective && NodeByPerspective->members.children.end ) /*0x52543a*/
      v4 = *NodeByPerspective->members.children.data; /*0x52544a*/
    else
      v4 = 0; /*0x52544e*/
    qmemcpy(v5, &stru_B26AF0[0xA].unk2C, sizeof(v5)); /*0x525461*/
    if ( v4 ) /*0x525463*/
      qmemcpy(&v4->members.m_localTransform, sub_4D7C50(reference, v6, v5, 0), 0x24u); /*0x525486*/
  }
}
