LONG __thiscall sub_700050(unsigned __int16 *this, _DWORD *a2)
{
  int v3; // ebx
  unsigned int *v4; // eax
  LONG result; // eax
  int v6; // esi
  LONG v7; // ebx

  nullsub_returnvVoid_1arg((int)a2); /*0x70005a*/
  if ( a2[0x36] >= 0x500000Bu ) /*0x70006b*/
  {
    v3 = sub_7124D0(a2); /*0x70007c*/
    sub_6FF760(this, v3); /*0x700081*/
    for ( ; v3; --v3 ) /*0x700088*/
    {
      v4 = (unsigned int *)sub_7124A0(a2); /*0x700092*/
      NiObjectNET_AddExtraData((const void **)this, v3, v4); /*0x70009a*/
    }
  }
  else
  {
    *((_DWORD *)this + 4) = sub_7124A0(a2); /*0x700072*/
  }
  result = sub_7124A0(a2); /*0x7000a6*/
  v6 = *((_DWORD *)this + 3); /*0x7000ab*/
  v7 = result; /*0x7000ae*/
  if ( v6 != result ) /*0x7000b2*/
  {
    if ( v6 ) /*0x7000b6*/
    {
      result = InterlockedDecrement((volatile LONG *)(v6 + 4)); /*0x7000bc*/
      if ( !result ) /*0x7000c4*/
        result = (**(int (__thiscall ***)(int, int))v6)(v6, 1); /*0x7000d2*/
    }
    *((_DWORD *)this + 3) = v7; /*0x7000d6*/
    if ( v7 ) /*0x7000d9*/
      return InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x7000df*/
  }
  return result; /*0x7000e5*/
}
