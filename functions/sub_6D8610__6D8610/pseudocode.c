void __thiscall sub_6D8610(unsigned __int16 *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  unsigned int v6; // ebp
  unsigned __int16 *v7; // ebx
  unsigned int i; // edi
  int v9; // eax
  int v10; // esi
  LONG v11; // [esp+14h] [ebp-10h] BYREF
  unsigned int v12; // [esp+20h] [ebp-4h]

  nullsub_returnvVoid_1arg((int)a2); /*0x6d863c*/
  v3 = sub_7124A0(a2); /*0x6d8643*/
  v4 = *((_DWORD *)this + 0xB); /*0x6d8648*/
  v5 = v3; /*0x6d864b*/
  if ( v4 != v3 ) /*0x6d864f*/
  {
    if ( v4 ) /*0x6d8653*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6d8659*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d866f*/
    }
    *((_DWORD *)this + 0xB) = v5; /*0x6d8673*/
    if ( v5 ) /*0x6d8676*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6d867c*/
  }
  v6 = *(this + 0xB); /*0x6d8682*/
  v7 = this + 0xE; /*0x6d8686*/
  sub_6C4510(this + 0xE, v6); /*0x6d868c*/
  for ( i = 0; i < v6; ++i ) /*0x6d8695*/
  {
    v9 = sub_7124A0(a2); /*0x6d869b*/
    v10 = v9; /*0x6d86a0*/
    v11 = v9; /*0x6d86a4*/
    if ( v9 ) /*0x6d86a8*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x6d86ae*/
    v12 = 0; /*0x6d86bc*/
    sub_6D7E90(v7, i, &v11); /*0x6d86c4*/
    v12 = 0xFFFFFFFF; /*0x6d86cb*/
    if ( v10 ) /*0x6d86d3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x6d86d9*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x6d86eb*/
    }
  }
}
