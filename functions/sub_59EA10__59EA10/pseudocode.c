char __userpurge sub_59EA10@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char a5, char a6)
{
  UnkBohBoh *v7; // eax
  UnkBohBoh *v8; // edi

  v7 = sub_6B8660();
  v8 = v7;
  if ( *(_BYTE *)(a1 + 0x96) )
  {
    v7->unk00 = 0;
    sub_59E2B0((int *)a1, 1);
  }
  *(_BYTE *)(a1 + 0x88) = sub_6B92C0(v8, a3, a4, a5, a6);
  *(_BYTE *)(a1 + 0x96) = 0;
  return sub_59E680(a1, a1, a2, a3);
}
