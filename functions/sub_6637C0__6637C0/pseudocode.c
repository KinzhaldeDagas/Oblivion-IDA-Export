BSExtraData *__thiscall sub_6637C0(PlayerCharacter *this)
{
  char v2; // bl
  _DWORD *firstPersonSkinInfo; // esi
  _DWORD *ShadowSceneNode; // eax
  _DWORD *p_Bip01Node; // esi
  _DWORD *v6; // eax
  UInt32 *v7; // eax
  int v9; // [esp-8h] [ebp-14h]
  int v10; // [esp-8h] [ebp-14h]

  v2 = TESObjectREFR::GetNiNode((TESObjectREFR *)this)->members.super.m_flags & 1;
  if ( v2 )
    firstPersonSkinInfo = this->firstPersonSkinInfo;
  else
    firstPersonSkinInfo = &this->super.ActorSkinInfo->Bip01Node;
  if ( firstPersonSkinInfo )
  {
    if ( sub_477EC0(firstPersonSkinInfo, 8) )
    {
      v9 = sub_477EC0(firstPersonSkinInfo, 8);
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
      sub_7C7F90(ShadowSceneNode, v9, 0);
    }
  }
  if ( v2 )
    p_Bip01Node = &this->super.ActorSkinInfo->Bip01Node;
  else
    p_Bip01Node = this->firstPersonSkinInfo;
  if ( p_Bip01Node )
  {
    if ( sub_477EC0(p_Bip01Node, 8) )
    {
      v10 = sub_477EC0(p_Bip01Node, 8);
      v6 = (_DWORD *)GetShadowSceneNode(0);
      sub_7C7F90(v6, v10, 1);
    }
  }
  v7 = &this->unk760[0xE];
  if ( !v2 )
    v7 = &this->unk760[0xF];
  return sub_4DD130(this, *v7);
}
