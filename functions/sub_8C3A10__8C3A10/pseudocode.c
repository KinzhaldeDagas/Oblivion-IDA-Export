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

  if ( a2 )
  {
    if ( !*(_DWORD *)(a2 + 8) )
    {
      sub_914340(v10);
      v7 = *(_DWORD *)(a2 + 4);
      v11 = 0;
      *(_DWORD *)(a2 + 8) = sub_914160(v7, (int)v10);
      v11 = 0xFFFFFFFF;
      v10[0] = &hkBaseObject::`vftable';
    }
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
    *(_WORD *)(v3 + 4) = 0x18;
    v9 = *(float *)(a2 + 0xC);
    v8 = *(_DWORD *)(a2 + 8);
    v6 = *(_DWORD *)(a2 + 4);
    v11 = 1;
    v4 = sub_8C3810((float *)v3, v6, v8, v9);
    v5 = *(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x4C);
    v11 = 0xFFFFFFFF;
    v5(this, v4);
    if ( *((_WORD *)v4 + 2) )
    {
      if ( !--*((_WORD *)v4 + 3) )
        (**(void (__thiscall ***)(float *, int))v4)(v4, 1);
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
