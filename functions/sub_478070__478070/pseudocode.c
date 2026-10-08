// Caches ActorSkinInfo nodes by exact name. +0 is Bip01. Node indices 0..8 are Bip01 Head, Bip01 R Finger1, Bip01 L Finger1, Weapon, BackWeapon, SideWeapon, Quiver, Bip01 L ForearmTwist, Torch. Each indexed entry uses an 8-byte {flags,node} layout; node is at +8+index*8.
void __thiscall ActorSkinInfo_CacheNamedNodes(ActorSkinInfo *this, NiNode *rootNode)
{
  char **v3; // edi
  UInt32 *p_HeadNodeFlags; // ebx
  int v5; // eax
  volatile LONG *v6; // esi

  this->Bip01Node = (NiNode *)NiObjectNET_LookupObjectByName(rootNode, "Bip01"); /*0x4780ad*/
  v3 = off_B06550; /*0x4780af*/
  p_HeadNodeFlags = &this->HeadNodeFlags; /*0x4780b4*/
  do /*0x47813c*/
  {
    v5 = NiObjectNET_LookupObjectByName(rootNode, *v3); /*0x4780bb*/
    v6 = (volatile LONG *)v5; /*0x4780c0*/
    if ( v5 ) /*0x4780cb*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x4780d1*/
    if ( v6 && (*(int (__thiscall **)(volatile LONG *))(*v6 + 8))(v6) ) /*0x4780ea*/
    {
      *(_BYTE *)p_HeadNodeFlags |= 1u; /*0x4780f0*/
      p_HeadNodeFlags[1] = (UInt32)v6; /*0x4780f3*/
    }
    else
    {
      PrintError("Missing bone '%s' for '%s'", *v3, rootNode->members.super.super.m_pcName); /*0x478104*/
    }
    if ( v6 ) /*0x478116*/
    {
      if ( !InterlockedDecrement(v6 + 1) ) /*0x47811c*/
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x47812e*/
    }
    ++v3; /*0x478130*/
    p_HeadNodeFlags += 2; /*0x478133*/
  }
  while ( (int)v3 < (int)&unk_B06574 ); /*0x47813c*/
  sub_897A90((int)this->BackWeaponNode, 0); /*0x47814c*/
  sub_897A90((int)this->SideWeaponNode, 0); /*0x478157*/
}
