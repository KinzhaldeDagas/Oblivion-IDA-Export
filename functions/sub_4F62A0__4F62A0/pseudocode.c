char __cdecl sub_4F62A0(int a1, int a2, int a3, double *a4)
{
  int v4; // ebp
  int v5; // edi

  *a4 = 0.0; /*0x4f62a7*/
  v4 = 0; /*0x4f62ae*/
  if ( a1 ) /*0x4f62b3*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 ) /*0x4f62c5*/
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1); /*0x4f62d3*/
  }
  v5 = 0; /*0x4f62d9*/
  if ( a2 ) /*0x4f62dd*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x170))(a2) + 4) == 0x23 ) /*0x4f62ef*/
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x170))(a2); /*0x4f62fd*/
  }
  if ( v4 ) /*0x4f6301*/
  {
    if ( v5 ) /*0x4f6305*/
    {
      if ( *(_DWORD *)(v4 + 0xE8) == *(_DWORD *)(v5 + 0xE8) ) /*0x4f6313*/
        *a4 = 1.0; /*0x4f631b*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f631d*/
    Interface_ConsolePrint("SameRace >> %0.2f", *a4); /*0x4f633a*/
  return 1; /*0x4f6324*/
}
