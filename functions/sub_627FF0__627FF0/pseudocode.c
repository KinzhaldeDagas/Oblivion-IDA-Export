char __thiscall sub_627FF0(_DWORD *this, Actor *a2)
{
  int v3; // eax
  float *v4; // eax
  float v6; // [esp+8h] [ebp-14h]

  LOBYTE(v3) = Actor::CanUSeDoor_(a2);
  if ( (_BYTE)v3 )
  {
    v6 = flt_A6DD10;
    v4 = a2->vtbl->super.super.GetPos((TESObjectREFR *)a2);
    sub_446A40(
      (TESObjectREFR *)a2,
      flt_A6DD10,
      v4,
      v6,
      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_627DD0,
      (int)a2);
    v3 = dword_B3B920;
    *(this + 0x18) = dword_B3B920;
    dword_B3B920 = 0;
  }
  return v3;
}
