TESPackage *__thiscall sub_625D80(TESPackage *this, _DWORD *a2, TESObjectREFR *a3, int a4)
{
  TESObjectREFR *v5; // eax
  float Distance; // [esp+24h] [ebp+4h]

  TESPackage::TESPackage(this);
  this->__vftable = (TESPackageVtbl *)&DialoguePackage::`vftable';
  *((_DWORD *)this + 0x14) = a2;
  if ( a2 )
    sub_6B74B0(a2);
  *((float *)this + 0x11) = 0.0;
  *((_DWORD *)this + 0x18) = a4;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = a3;
  ((void (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_5F)(a3, 0);
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x12) = 0;
  Distance = TesObjectREF_GetDistance(a3, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
  if ( Distance < dbl_A6E6F8 )
  {
    v5 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    if ( !TESDataHandler_g_PlayerRef->dialoguePackage )
    {
LABEL_7:
      v5[3].member.super.modlist.data = (Data *)this;
      goto LABEL_8;
    }
    if ( Distance < TesObjectREF_GetDistance(
                      (TESObjectREFR *)*(_DWORD *)&v5[3].member.super.modlist.data->name[0x44],
                      v5,
                      0) )
    {
      v5 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      goto LABEL_7;
    }
  }
LABEL_8:
  *((_BYTE *)this + 0x4C) = 0;
  return this;
}
