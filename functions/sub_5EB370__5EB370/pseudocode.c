char __thiscall sub_5EB370(TESObjectREFR *this)
{
  UInt32 DwordAtOffset40; // eax
  NiPoint3 *v3; // eax
  TESObjectCELL *v4; // edi
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF
  NiPoint3 v7; // 0:^4.12

  LOBYTE(DwordAtOffset40) = IsWeaponReady(this); /*0x5eb377*/
  if ( (_BYTE)DwordAtOffset40 ) /*0x5eb37e*/
  {
    v3 = (NiPoint3 *)this->vtbl->GetPos(this); /*0x5eb38c*/
    LOBYTE(DwordAtOffset40) = sub_5EB150(this, v3, 1); /*0x5eb391*/
    if ( (_BYTE)DwordAtOffset40 ) /*0x5eb398*/
    {
      DwordAtOffset40 = Shared_GetDwordAtOffset40(this); /*0x5eb39c*/
      v4 = (TESObjectCELL *)DwordAtOffset40; /*0x5eb3a1*/
      if ( DwordAtOffset40 ) /*0x5eb3a5*/
      {
        v7 = *(NiPoint3 *)this->vtbl->GetPos(this); /*0x5eb3c1*/
        Actor_ChoosePathGridSteeringPosition(this, (float *)v6, v7, v4, 0.0, 0.0, 0); /*0x5eb3d6*/
        LOBYTE(DwordAtOffset40) = ((char (__thiscall *)(TESObjectREFR *, int *))this->vtbl[1].super.Unk_09)(this, v6); /*0x5eb3ea*/
      }
    }
  }
  return DwordAtOffset40; /*0x5eb3ec*/
}
