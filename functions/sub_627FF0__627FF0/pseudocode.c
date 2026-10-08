char __thiscall sub_627FF0(_DWORD *this, Actor *a2)
{
  int v3; // eax
  float *v4; // eax
  float v6; // [esp+8h] [ebp-14h]

  LOBYTE(v3) = Actor::CanUSeDoor_(a2); /*0x627ff9*/
  if ( (_BYTE)v3 ) /*0x628003*/
  {
    v6 = flt_A6DD10; /*0x62801c*/
    v4 = a2->vtbl->super.super.GetPos(a2); /*0x62801f*/
    sub_446A40( /*0x628033*/
      (TESObjectREFR *)a2,
      flt_A6DD10,
      v4,
      v6,
      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_627DD0,
      (int)a2);
    v3 = unk_B3B920; /*0x628038*/
    *(this + 0x18) = unk_B3B920; /*0x62803d*/
    unk_B3B920 = 0; /*0x628040*/
  }
  return v3; /*0x62804a*/
}
