char __cdecl sub_50C1C0(
        int a1,
        int a2,
        _BYTE *a3,
        int a4,
        int a5,
        int a6,
        bool (__thiscall *CompareTo)(BSExtraData *this, BSExtraData *other))
{
  bool (__thiscall *v7)(BSExtraData *, BSExtraData *); // edi

  v7 = CompareTo; /*0x50c1ca*/
  *(double *)CompareTo = 0.0; /*0x50c1ce*/
  CompareTo = 0; /*0x50c1d0*/
  if ( a3 ) /*0x50c1d8*/
  {
    if ( sub_4D7990(a3) ) /*0x50c1dc*/
    {
      CompareTo = sub_4D7990(a3)[1].CompareTo; /*0x50c1f5*/
      sub_4F9FB0(&CompareTo, v7); /*0x50c1f9*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x50c201*/
    Interface_ConsolePrint("GetParentRef >> (%08x)", CompareTo); /*0x50c216*/
  return 1; /*0x50c208*/
}
