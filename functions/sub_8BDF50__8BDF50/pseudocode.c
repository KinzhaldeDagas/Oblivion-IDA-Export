void __thiscall sub_8BDF50(void *this, int a2)
{
  int v3; // eax
  float *v4; // edi
  __int128 v5; // [esp+14h] [ebp-30h]

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x40, 0x26);
    *(_WORD *)(v3 + 4) = 0x40;
    v4 = (float *)sub_90FDF0((_DWORD *)v3, *(_WORD **)(a2 + 4), *(_DWORD *)(a2 + 8), 0);
    v4[0xC] = *(float *)(a2 + 0x20);
    v4[0xD] = *(float *)(a2 + 0x24);
    *(float *)&v5 = *(float *)(a2 + 0x10);
    *((float *)&v5 + 1) = *(float *)(a2 + 0x14);
    *((float *)&v5 + 2) = *(float *)(a2 + 0x18);
    *((float *)&v5 + 3) = *(float *)(a2 + 0x1C);
    *((__int128 *)v4 + 2) = v5;
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x4C))(this, v4);
    if ( *((_WORD *)v4 + 2) )
    {
      if ( !--*((_WORD *)v4 + 3) )
        (**(void (__thiscall ***)(float *, int))v4)(v4, 1);
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
