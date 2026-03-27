void __thiscall sub_8C4010(void *this, float *a2)
{
  int v3; // edi
  double v4; // st7
  float v5; // [esp+Ch] [ebp-44h]
  __int128 v6; // [esp+10h] [ebp-40h]
  __int128 v7; // [esp+20h] [ebp-30h]
  __int128 v8; // [esp+30h] [ebp-20h]

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x40, 0x24);
    *(_WORD *)(v3 + 4) = 0x40;
    *(float *)&v8 = a2[0xC];
    *((float *)&v8 + 1) = a2[0xD];
    *((float *)&v8 + 2) = a2[0xE];
    *((float *)&v8 + 3) = a2[0xF];
    *(float *)&v7 = a2[8];
    *((float *)&v7 + 1) = a2[9];
    *((float *)&v7 + 2) = a2[0xA];
    *((float *)&v7 + 3) = a2[0xB];
    *(float *)&v6 = a2[4];
    *((float *)&v6 + 1) = a2[5];
    *((float *)&v6 + 2) = a2[6];
    *((float *)&v6 + 3) = a2[7];
    v4 = flt_B2FFE4;
    *(__int128 *)(v3 + 0x10) = v6;
    v5 = v4;
    *(__int128 *)(v3 + 0x20) = v7;
    *(float *)(v3 + 0xC) = v5;
    *(_WORD *)(v3 + 6) = 1;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)v3 = &hkTriangleShape::`vftable';
    *(__int128 *)(v3 + 0x30) = v8;
    *(float *)(v3 + 0xC) = a2[1];
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x4C))(this, v3);
    if ( *(_WORD *)(v3 + 4) )
    {
      if ( !--*(_WORD *)(v3 + 6) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
