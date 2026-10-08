void __userpurge sub_647A80(int *this@<ecx>, double a2@<st1>, double a3@<st2>, double a4@<st0>, Actor *a5)
{
  TargetData **v6; // edi
  int v7; // eax
  char v8; // al
  float *v9; // eax
  double DistanceToPoint; // st7
  unsigned int v11; // ebp
  unsigned int v12; // eax
  float v13[3]; // [esp+14h] [ebp-Ch] BYREF

  v6 = (TargetData **)(*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>))(*this + 0x184))(this, a4); /*0x647a91*/
  v7 = *(this + 0xB); /*0x647a93*/
  if ( !v7 || (*(_DWORD *)(v7 + 8) & 0x800) != 0 ) /*0x647aa9*/
  {
    (*(void (__thiscall **)(int *, Actor *, int))(*this + 0x188))(this, a5, 2); /*0x647bbb*/
  }
  else if ( (*(_DWORD *)(v7 + 8) & 0x20) != 0 ) /*0x647ab7*/
  {
    sub_566870(v6, (TESForm *)v7, 1); /*0x647abc*/
    (*(void (__thiscall **)(int *, Actor *, int))(*this + 0x188))(this, a5, 2); /*0x647ad2*/
  }
  else if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x198))(v7, 1) || *(this + 0x11) ) /*0x647aec*/
  {
    sub_566DC0((TESPackage *)v6, kTerrainLODQuadRayDirectionZ, a2, a3, a5, 0, kTerrainLODQuadRayDirectionZ); /*0x647b2d*/
    if ( v8 ) /*0x647b34*/
    {
      if ( TesObjectREF_GetDistance((TESObjectREFR *)a5, (TESObjectREFR *)*(this + 0xB), 0) != dbl_A3A5B0 ) /*0x647b66*/
      {
        v9 = sub_566B30((TESPackage *)v6, v13, a5); /*0x647b71*/
        DistanceToPoint = TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)*(this + 0xB), v9); /*0x647b7a*/
        v11 = Double_To_SInt32(DistanceToPoint); /*0x647b86*/
        sub_566DB0(v6); /*0x647b88*/
        if ( v11 <= v12 ) /*0x647b90*/
          (*(void (__thiscall **)(int *, Actor *, int))(*this + 0x188))(this, a5, 1); /*0x647b9f*/
      }
    }
    else
    {
      (*(void (__thiscall **)(int *, Actor *, unsigned int))(*this + 0x188))(this, a5, 0xFFFFFFFF); /*0x647b43*/
    }
  }
  else
  {
    sub_566870(v6, (TESForm *)*(this + 0xB), 1); /*0x647afa*/
    ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->Unk_BE)(a5, *(this + 0xB)); /*0x647b17*/
  }
}
