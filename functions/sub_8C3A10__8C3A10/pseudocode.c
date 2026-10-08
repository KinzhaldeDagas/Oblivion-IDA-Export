void __thiscall sub_8C3A10(void *this, int a2)
{
  int v3; // eax
  float *v4; // esi
  void (__thiscall *v5)(void *, float *); // edx
  int v6; // [esp+0h] [ebp-70h]
  int v7; // [esp+4h] [ebp-6Ch]
  int v8; // [esp+4h] [ebp-6Ch]
  float v9; // [esp+8h] [ebp-68h]
  _DWORD v10[15]; // [esp+20h] [ebp-50h] BYREF
  int v11; // [esp+6Ch] [ebp-4h]

  if ( a2 ) /*0x8c3a4e*/
  {
    if ( !*(_DWORD *)(a2 + 8) ) /*0x8c3a54*/
    {
      sub_914340(v10); /*0x8c3a5e*/
      v7 = *(_DWORD *)(a2 + 4); /*0x8c3a6b*/
      v11 = 0; /*0x8c3a6c*/
      *(_DWORD *)(a2 + 8) = sub_914160(v7, (int)v10); /*0x8c3a7c*/
      v11 = 0xFFFFFFFF; /*0x8c3a7f*/
      v10[0] = &hkBaseObject::`vftable'; /*0x8c3a87*/
    }
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x8c3a9e*/
    *(_WORD *)(v3 + 4) = 0x18; /*0x8c3aa0*/
    v9 = *(float *)(a2 + 0xC); /*0x8c3ab4*/
    v8 = *(_DWORD *)(a2 + 8); /*0x8c3ab7*/
    v6 = *(_DWORD *)(a2 + 4); /*0x8c3ab8*/
    v11 = 1; /*0x8c3abb*/
    v4 = sub_8C3810((float *)v3, v6, v8, v9); /*0x8c3ac8*/
    v5 = *(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x4C); /*0x8c3acc*/
    v11 = 0xFFFFFFFF; /*0x8c3ad2*/
    v5(this, v4); /*0x8c3ada*/
    if ( *((_WORD *)v4 + 2) ) /*0x8c3adc*/
    {
      if ( !--*((_WORD *)v4 + 3) ) /*0x8c3ae8*/
        (**(void (__thiscall ***)(float *, int))v4)(v4, 1); /*0x8c3af9*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8c3b03*/
  }
}
