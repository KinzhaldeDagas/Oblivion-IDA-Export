char __userpurge sub_59EA60@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESTopic *a5)
{
  UnkBohBoh *v6; // eax
  char v7; // bl
  char result; // al

  v6 = sub_6B8660();
  v7 = sub_6B93B0(v6, a3, a4, *(TESObjectREFR **)(a1 + 0x60), a5);
  *(_BYTE *)(a1 + 0x88) = 0;
  result = sub_59E680(a1, a1, a2, a3);
  *(_BYTE *)(a1 + 0x88) = v7;
  return result;
}
