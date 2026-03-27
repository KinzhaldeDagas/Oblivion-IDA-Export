void __thiscall sub_8B8120(void *this, float *a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  void (__thiscall *v5)(void *, _DWORD *); // eax
  float v6; // [esp+1Ch] [ebp-44h]
  float v7; // [esp+20h] [ebp-40h]
  float v8; // [esp+24h] [ebp-3Ch]
  float v9; // [esp+28h] [ebp-38h]
  float v10[7]; // [esp+30h] [ebp-30h] BYREF
  unsigned int v11; // [esp+5Ch] [ebp-4h]

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x20, 0x24);
    *(_WORD *)(v3 + 4) = 0x20;
    v9 = a2[4];
    v8 = a2[5];
    v11 = 0;
    v6 = a2[6];
    v7 = a2[7];
    v10[0] = v9;
    v10[1] = v8;
    v10[2] = v6;
    v10[3] = v7;
    v4 = sub_8CDFE0((_DWORD *)v3, v10, SLODWORD(flt_B2EFC4));
    v5 = *(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x4C);
    v11 = 0xFFFFFFFF;
    v5(this, v4);
    if ( *((_WORD *)v4 + 2) )
    {
      if ( !--*((_WORD *)v4 + 3) )
        (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1);
    }
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
