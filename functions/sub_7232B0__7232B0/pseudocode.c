void __thiscall sub_7232B0(unsigned __int16 *this, int a2)
{
  int v3; // esi
  NiAVObject *v4; // eax
  int CastingType; // [esp-4h] [ebp-1Ch]

  sub_700160(this, a2);
  v3 = *((_DWORD *)this + 0x2F);
  if ( v3 )
  {
    InterlockedIncrement((volatile LONG *)(v3 + 4));
    CastingType = TESEnchantableForm_GetCastingType((_DWORD *)v3);
    v4 = sub_452A60((Atmosphere *)v3);
    sub_7383F0((int)this, (int)v4, CastingType);
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
}
