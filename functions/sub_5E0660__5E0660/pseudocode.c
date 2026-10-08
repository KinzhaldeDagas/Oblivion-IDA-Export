// Returns (localBoundMax.z - localBoundMin.z) * reference scale.
double __thiscall sub_5E0660(void *this)
{
  double v3; // [esp+8h] [ebp-20h]
  double v4; // [esp+8h] [ebp-20h]
  _BYTE v5[12]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = *(float *)((*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 0x15C))(this, v5) + 8); /*0x5e067c*/
  v4 = v3 - *(float *)((*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 0x158))(this, v6) + 8); /*0x5e06a0*/
  *(float *)&v4 = ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)this + 0xEC))(this) * v4; /*0x5e06ab*/
  return *(float *)&v4; /*0x5e06b1*/
}
