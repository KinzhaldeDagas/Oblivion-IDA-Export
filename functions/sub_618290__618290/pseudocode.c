void *__userpurge sub_618290@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>, _DWORD *Dst)
{
  _DWORD *v4; // esi
  TESSaveLoadGame_SerializationView *v5; // ecx
  void *result; // eax
  _DWORD *v7; // eax

  v4 = Dst; /*0x618291*/
  v5 = g_TESSaveLoadGame; /*0x6182a1*/
  LOBYTE(Dst) = Dst != 0; /*0x6182a7*/
  result = SaveLoad_LoadData(v5, &Dst, 1u); /*0x6182ab*/
  if ( (_BYTE)Dst ) /*0x6182b5*/
  {
    v7 = (_DWORD *)FormHeapAlloc(8u); /*0x6182b9*/
    if ( v7 ) /*0x6182c3*/
    {
      *v7 = 0; /*0x6182c5*/
      v7[1] = 0; /*0x6182cb*/
      *v4 = v7; /*0x6182d4*/
      return (void *)sub_614DB0(v7, a1, a2, a3); /*0x6182d6*/
    }
    else
    {
      *v4 = 0; /*0x6182e3*/
      return (void *)sub_614DB0(0, a1, a2, a3); /*0x6182e5*/
    }
  }
  else
  {
    *v4 = 0; /*0x6182ee*/
  }
  return result; /*0x6182db*/
}
