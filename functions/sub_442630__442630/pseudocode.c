int __thiscall sub_442630(TES *this, UInt8 a2, UInt8 a3)
{
  double v3; // st5
  double v4; // st6
  double v5; // st7
  UInt32 v7; // edi
  _DWORD *ShadowSceneNode; // eax
  _DWORD *sound; // ecx
  TESObjectCELL *currentInteriorCell; // edi
  int result; // eax

  if ( this->unk7C ) /*0x442633*/
  {
    do /*0x442654*/
    {
      v7 = *(_DWORD *)(this->unk7C + 4); /*0x442643*/
      FormHeapFree(this->unk7C); /*0x442647*/
      this->unk7C = v7; /*0x442651*/
    }
    while ( v7 ); /*0x442654*/
  }
  this->unk78 = 0; /*0x44265d*/
  if ( !a2 || this->currentInteriorCell ) /*0x442666*/
    sub_4425D0(this); /*0x44266e*/
  if ( !a2 ) /*0x442675*/
  {
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x442679*/
    ShadowSceneNode_TeardownLightLists(ShadowSceneNode);// When this TES lifecycle path is not retaining the current world/cell state, tear down native full and active shadow-light lists before rebuild. /*0x442683*/
  }
  sound = MEMORY[0xB33398]->sound; /*0x44268d*/
  if ( sound ) /*0x442692*/
    sub_6AC210(sound); /*0x442694*/
  sub_43FFF0(this, v3, v4, v5, a2, 0); /*0x44269e*/
  currentInteriorCell = this->currentInteriorCell; /*0x4426a3*/
  if ( currentInteriorCell ) /*0x4426a8*/
  {
    if ( !a2 && !TES::IsInteriorCellPreloaded(this, this->currentInteriorCell) ) /*0x4426b1*/
      TESObjectCELL_Deactivate(v3, v4, v5, currentInteriorCell); /*0x4426c1*/
  }
  result = sub_43FE30(this, v3, v4, v5, a2); /*0x4426c9*/
  this->unkA8 = 1; /*0x4426d1*/
  if ( !a2 && !a3 ) /*0x4426df*/
    this->currentInteriorCell = 0; /*0x4426e1*/
  return result; /*0x4426e8*/
}
