HavokFileStreambufReader *__stdcall HavokFileStreambufReader::HavokFileStreambufReader(int a1)
{
  HavokFileStreambufReader *result; // eax

  result = (HavokFileStreambufReader *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x53431f*/
                                         unk_BA7D98,
                                         0x10,
                                         0x17);
  *((_WORD *)result + 2) = 0x10; /*0x534326*/
  *((_WORD *)result + 3) = 1; /*0x53432c*/
  *(_DWORD *)result = &HavokFileStreambufReader::`vftable'; /*0x534330*/
  *((_BYTE *)result + 0xC) = 1; /*0x534336*/
  return result; /*0x534339*/
}
