void __thiscall sub_8BE550(void *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  __int128 v6; // [esp+14h] [ebp-40h]
  __int128 v7; // [esp+24h] [ebp-30h]

  if ( a2 ) /*0x8be58e*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 0x26); /*0x8be5a3*/
    *(_WORD *)(v3 + 4) = 0x60; /*0x8be5a5*/
    v4 = sub_910040((_DWORD *)v3, *(_WORD **)(a2 + 4), *(_DWORD *)(a2 + 8), 0); /*0x8be5c3*/
    *(float *)&v7 = *(float *)(a2 + 0x20); /*0x8be5cb*/
    v5 = v4; /*0x8be5cf*/
    *((float *)&v7 + 1) = *(float *)(a2 + 0x24); /*0x8be5d5*/
    *((float *)&v7 + 2) = *(float *)(a2 + 0x28); /*0x8be5e6*/
    *((float *)&v7 + 3) = *(float *)(a2 + 0x2C); /*0x8be5ed*/
    *(float *)&v6 = *(float *)(a2 + 0x10); /*0x8be5f4*/
    *((float *)&v6 + 1) = *(float *)(a2 + 0x14); /*0x8be5fb*/
    *((float *)&v6 + 2) = *(float *)(a2 + 0x18); /*0x8be602*/
    *((float *)&v6 + 3) = *(float *)(a2 + 0x1C); /*0x8be609*/
    *((__int128 *)v4 + 2) = v6; /*0x8be612*/
    *((__int128 *)v4 + 3) = v7; /*0x8be61b*/
    *((float *)v4 + 0x10) = *(float *)(a2 + 0x30); /*0x8be622*/
    *((float *)v4 + 0x11) = *(float *)(a2 + 0x34); /*0x8be628*/
    (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x4C))(this, v4); /*0x8be630*/
    if ( *((_WORD *)v5 + 2) ) /*0x8be632*/
    {
      if ( !--*((_WORD *)v5 + 3) ) /*0x8be63e*/
        (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x8be64f*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8be659*/
  }
}
