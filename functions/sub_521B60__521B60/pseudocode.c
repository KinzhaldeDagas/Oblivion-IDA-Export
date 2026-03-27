char __usercall sub_521B60@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char v4; // al
  TESObjectREFR *v5; // ecx
  char result; // al

  v4 = sub_578D70(a1, a2, a3, a4);
  v5 = (TESObjectREFR *)dword_B362D0;
  dword_B362CC = 2 - (v4 != 1);
  result = ActivateRef(v5, a2, a3, a4, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0, 0, 1);
  dword_B362D0 = 0;
  return result;
}
