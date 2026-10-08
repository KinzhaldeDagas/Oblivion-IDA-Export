void __thiscall sub_8BDF50(void *this, int a2)
{
  int v3; // eax
  float *v4; // edi
  __int128 v5; // [esp+14h] [ebp-30h]

  if ( a2 ) /*0x8bdf8e*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x40, 0x26); /*0x8bdfa3*/
    *(_WORD *)(v3 + 4) = 0x40; /*0x8bdfa5*/
    v4 = (float *)sub_90FDF0((_DWORD *)v3, *(_WORD **)(a2 + 4), *(_DWORD *)(a2 + 8), 0); /*0x8bdfcb*/
    v4[0xC] = *(float *)(a2 + 0x20); /*0x8bdfcd*/
    v4[0xD] = *(float *)(a2 + 0x24); /*0x8bdfd6*/
    *(float *)&v5 = *(float *)(a2 + 0x10); /*0x8bdfe4*/
    *((float *)&v5 + 1) = *(float *)(a2 + 0x14); /*0x8bdfeb*/
    *((float *)&v5 + 2) = *(float *)(a2 + 0x18); /*0x8bdff2*/
    *((float *)&v5 + 3) = *(float *)(a2 + 0x1C); /*0x8bdff9*/
    *((__int128 *)v4 + 2) = v5; /*0x8be002*/
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x4C))(this, v4); /*0x8be00b*/
    if ( *((_WORD *)v4 + 2) ) /*0x8be00d*/
    {
      if ( !--*((_WORD *)v4 + 3) ) /*0x8be019*/
        (**(void (__thiscall ***)(float *, int))v4)(v4, 1); /*0x8be02a*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8be034*/
  }
}
