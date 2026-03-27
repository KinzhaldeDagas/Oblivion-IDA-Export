char __usercall sub_500E00@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  bool v4; // zf
  const char *v5; // eax

  sub_5793B0(a1, a2, a3, a4);
  v4 = sub_579400() == 0;
  v5 = "shown.";
  if ( v4 )
    v5 = "hidden.";
  Interface_ConsolePrint("Toggle Full Help %s", v5);
  return 1;
}
