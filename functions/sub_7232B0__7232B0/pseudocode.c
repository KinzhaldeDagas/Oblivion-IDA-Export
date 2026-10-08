void __thiscall sub_7232B0(unsigned __int16 *this, int a2)
{
  int v3; // esi
  NiAVObject *PointerAtOffset08; // eax
  int CastingType; // [esp-4h] [ebp-1Ch]

  sub_700160(this, a2); /*0x7232d9*/
  v3 = *((_DWORD *)this + 0x2F); /*0x7232de*/
  if ( v3 ) /*0x7232e6*/
  {
    InterlockedIncrement((volatile LONG *)(v3 + 4)); /*0x7232f0*/
    CastingType = TESEnchantableForm_GetCastingType((_DWORD *)v3); /*0x723305*/
    PointerAtOffset08 = Shared_GetPointerAtOffset08((Atmosphere *)v3); /*0x723308*/
    sub_7383F0((int)this, (int)PointerAtOffset08, CastingType); /*0x72330f*/
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x723327*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x723339*/
  }
}
