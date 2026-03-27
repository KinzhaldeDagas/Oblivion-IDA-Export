void __thiscall sub_8BE550(void *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  __int128 v6; // [esp+14h] [ebp-40h]
  __int128 v7; // [esp+24h] [ebp-30h]

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 0x26);
    *(_WORD *)(v3 + 4) = 0x60;
    v4 = sub_910040((_DWORD *)v3, *(_WORD **)(a2 + 4), *(_DWORD *)(a2 + 8), 0);
    *(float *)&v7 = *(float *)(a2 + 0x20);
    v5 = v4;
    *((float *)&v7 + 1) = *(float *)(a2 + 0x24);
    *((float *)&v7 + 2) = *(float *)(a2 + 0x28);
    *((float *)&v7 + 3) = *(float *)(a2 + 0x2C);
    *(float *)&v6 = *(float *)(a2 + 0x10);
    *((float *)&v6 + 1) = *(float *)(a2 + 0x14);
    *((float *)&v6 + 2) = *(float *)(a2 + 0x18);
    *((float *)&v6 + 3) = *(float *)(a2 + 0x1C);
    *((__int128 *)v4 + 2) = v6;
    *((__int128 *)v4 + 3) = v7;
    *((float *)v4 + 0x10) = *(float *)(a2 + 0x30);
    *((float *)v4 + 0x11) = *(float *)(a2 + 0x34);
    (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x4C))(this, v4);
    if ( *((_WORD *)v5 + 2) )
    {
      if ( !--*((_WORD *)v5 + 3) )
        (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1);
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
