int __thiscall sub_8987E0(_DWORD *this, int a2, int a3)
{
  int *v4; // [esp-14h] [ebp-64h]
  int v5; // [esp-Ch] [ebp-5Ch]
  _DWORD v6[20]; // [esp+0h] [ebp-50h] BYREF

  v6[0x10] = 0;
  v6[0x11] = 0;
  v5 = *(this + 0x1E);
  v4 = (int *)*(this + 0x19);
  v6[0] = &hkWorldRayCaster::`vftable';
  return sub_8BA1B0(v6, v4, a2, v5, 0, a3);
}
