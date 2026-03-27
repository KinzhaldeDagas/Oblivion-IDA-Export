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

  v7 = CompareTo;
  *(double *)CompareTo = 0.0;
  CompareTo = 0;
  if ( a3 )
  {
    if ( sub_4D7990(a3) )
    {
      CompareTo = sub_4D7990(a3)[1].CompareTo;
      sub_4F9FB0(&CompareTo, v7);
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetParentRef >> (%08x)", CompareTo);
  return 1;
}
