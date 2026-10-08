HavokStreambufWriter *__stdcall HavokStreambufWriter::HavokStreambufWriter(int a1)
{
  HavokStreambufWriter *result; // eax

  result = (HavokStreambufWriter *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x5343bf*/
                                     unk_BA7D98,
                                     0x10,
                                     0x17);
  *((_WORD *)result + 2) = 0x10; /*0x5343cc*/
  *((_WORD *)result + 3) = 1; /*0x5343d2*/
  *(_DWORD *)result = &HavokStreambufWriter::`vftable'; /*0x5343d6*/
  *((_DWORD *)result + 2) = 1; /*0x5343dc*/
  *((_BYTE *)result + 0xC) = 0; /*0x5343df*/
  if ( a1 == 1 ) /*0x5343e3*/
  {
    *((_DWORD *)result + 2) = 4; /*0x5343f3*/
  }
  else if ( a1 == 2 ) /*0x5343e7*/
  {
    *((_DWORD *)result + 2) = 0; /*0x5343e9*/
  }
  return result; /*0x5343f0*/
}
