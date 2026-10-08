void __usercall sub_5F0260(TESObjectREFR *this@<ecx>, double a2@<st1>)
{
  float v3; // eax
  float v4; // ecx
  float v5; // edx
  TESObjectREFRVtbl *vtbl; // eax
  TESObjectCELL *DwordAtOffset40; // eax

  if ( this != (TESObjectREFR *)reference ) /*0x5f0266*/
  {
    v3 = this->member.pos[0]; /*0x5ea793*/
    v4 = this->member.pos[1]; /*0x5ea796*/
    v5 = this->member.pos[2]; /*0x5ea799*/
    *((float *)this + 0x3A) = v3; /*0x5ea79c*/
    vtbl = this->vtbl; /*0x5ea7a2*/
    *((float *)this + 0x3B) = v4; /*0x5ea7a4*/
    *((float *)this + 0x3C) = v5; /*0x5ea7aa*/
    vtbl[1].super.Unk_0E((TESForm *)this); /*0x5ea7b8*/
    *((float *)this + 0x3D) = a2; /*0x5ea7ba*/
    if ( Shared_GetDwordAtOffset40(this) /*0x5ea7d4*/
      && (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this), TESObjectCELL_IsInterior(DwordAtOffset40)) )
    {
      *((_DWORD *)this + 0x3E) = Shared_GetDwordAtOffset40(this); /*0x5ea7e4*/
    }
    else
    {
      *((_DWORD *)this + 0x3E) = TESObjectREFR_GetWorldSpace(this); /*0x5ea7f3*/
    }
  }
}
