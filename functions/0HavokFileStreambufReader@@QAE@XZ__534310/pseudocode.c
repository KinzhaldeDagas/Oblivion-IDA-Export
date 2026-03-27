HavokFileStreambufReader *__stdcall HavokFileStreambufReader::HavokFileStreambufReader(int a1)
{
  HavokFileStreambufReader *result; // eax

  result = (HavokFileStreambufReader *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                                         dword_BA7D98,
                                         0x10,
                                         0x17);
  *((_WORD *)result + 2) = 0x10;
  *((_WORD *)result + 3) = 1;
  *(_DWORD *)result = &HavokFileStreambufReader::`vftable';
  *((_BYTE *)result + 0xC) = 1;
  return result;
}
