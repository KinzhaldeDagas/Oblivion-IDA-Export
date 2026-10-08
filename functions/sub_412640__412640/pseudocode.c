void __thiscall sub_412640(int this, int a2, int a3, int a4)
{
  int v5; // [esp+Ch] [ebp-10h]
  float v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v5 = (*(char *)(this + 0x25) << 0xC) + 0x800; /*0x412676*/
  v6[0] = (float)((*(char *)(this + 0x24) << 0xC) + 0x800); /*0x41267a*/
  v6[1] = (float)v5; /*0x41268b*/
  v6[2] = *(float *)(a3 + 8); /*0x412692*/
  sub_412500((_DWORD *)this, a2, v6, a4); /*0x412696*/
  if ( *(_DWORD *)(this + 0x28) ) /*0x41269b*/
    (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(this + 0x28) + 4))( /*0x4126ac*/
      *(_DWORD *)(this + 0x28),
      a2,
      a3,
      a4);
}
