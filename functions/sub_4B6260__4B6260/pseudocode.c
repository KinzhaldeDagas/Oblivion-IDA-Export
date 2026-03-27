char __usercall sub_4B6260@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char result; // al

  result = sub_578D70(a1, a2, a3, a4);
  if ( result == 1 )
  {
    result = ActivateRef((_DWORD *)dword_B35B1C, a2, a3, a4, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0, 0, 1);
    dword_B35B1C = 0;
  }
  return result;
}
