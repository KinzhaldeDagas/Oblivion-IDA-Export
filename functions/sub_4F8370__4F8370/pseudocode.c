char __usercall sub_4F8370@<al>(double a1@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  int v8; // esi

  v8 = 0;
  *a6 = 0.0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a4 + 4) == 0x11 )
      v8 = a4;
  }
  if ( ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>))TESDataHandler_g_PlayerRef->vtbl->super.Unk_9A)(
         TESDataHandler_g_PlayerRef,
         a2,
         a1) == v8 )
    *a6 = 1.0;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsBirthsign is %0.2f", *a6);
  return 1;
}
