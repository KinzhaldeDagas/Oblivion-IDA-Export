// Shared GetTalkedToPC callback backs GetTalkedToPC and GetTalkedToPCParam; the vanilla-master scan found 540 condition rows for the former. The former requires a subject and has no params; the Param variant permits no subject and declares an Actor param.
char __cdecl GetTalkedToPC_Eval(int a1, int a2, int a3, double *a4)
{
  int v4; // ecx

  *a4 = 0.0; /*0x4f4b1e*/
  if ( a1 ) /*0x4f4b20*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f4b30*/
      goto LABEL_8; /*0x4f4b30*/
    v4 = a1; /*0x4f4b32*/
  }
  else
  {
    v4 = a2; /*0x4f4b36*/
  }
  if ( v4 ) /*0x4f4b3c*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x7C))(v4) ) /*0x4f4b43*/
      *a4 = 1.0; /*0x4f4b4b*/
  }
LABEL_8:
  if ( MEMORY[0xB361AC] ) /*0x4f4b4d*/
    Interface_ConsolePrint("GetTalkedToPC >> %0.2f", *a4); /*0x4f4b63*/
  return 1; /*0x4f4b6b*/
}
