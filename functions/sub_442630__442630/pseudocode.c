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

  if ( this->unk7C )
  {
    do
    {
      v7 = *(_DWORD *)(this->unk7C + 4);
      FormHeapFree(this->unk7C);
      this->unk7C = v7;
    }
    while ( v7 );
  }
  this->unk78 = 0;
  if ( !a2 || this->currentInteriorCell )
    sub_4425D0(this);
  if ( !a2 )
  {
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    sub_7C7E50(ShadowSceneNode);
  }
  sound = OSGlobals->sound;
  if ( sound )
    sub_6AC210(sound);
  sub_43FFF0(this, v3, v4, v5, a2, 0);
  currentInteriorCell = this->currentInteriorCell;
  if ( currentInteriorCell )
  {
    if ( !a2 && !TES::IsInteriorCellPreloaded(this, this->currentInteriorCell) )
      sub_447BA0(v3, v4, v5, currentInteriorCell);
  }
  result = sub_43FE30(this, v3, v4, v5, a2);
  this->unkA8 = 1;
  if ( !a2 && !a3 )
    this->currentInteriorCell = 0;
  return result;
}
