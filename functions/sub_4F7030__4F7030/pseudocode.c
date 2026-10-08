char __cdecl sub_4F7030(int a1, int a2, int a3, double *a4)
{
  int v4; // eax
  int v5; // eax
  double v6; // st7

  if ( unk_B361A4 == a1 ) /*0x4f7040*/
  {
    *a4 = unk_B361A8; /*0x4f7048*/
  }
  else
  {
    *a4 = 0.0; /*0x4f7050*/
    if ( a1 ) /*0x4f7052*/
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 ) /*0x4f7064*/
      {
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1); /*0x4f7070*/
        if ( v4 ) /*0x4f7074*/
        {
          v5 = *(_DWORD *)(v4 + 0xE8); /*0x4f7076*/
          if ( v5 ) /*0x4f707e*/
          {
            if ( (*(_BYTE *)(v5 + 0x70) & 1) != 0 ) /*0x4f7084*/
              *a4 = 1.0; /*0x4f7088*/
          }
        }
      }
    }
    v6 = *a4; /*0x4f708a*/
    unk_B361A4 = a1; /*0x4f708c*/
    unk_B361A8 = v6; /*0x4f7092*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f7098*/
    Interface_ConsolePrint("GetIsPlayableRace >> %0.2f", *a4); /*0x4f70ae*/
  return 1; /*0x4f70b6*/
}
