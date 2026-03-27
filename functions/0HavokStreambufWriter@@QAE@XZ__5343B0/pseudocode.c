HavokStreambufWriter *__stdcall HavokStreambufWriter::HavokStreambufWriter(int a1)
{
  HavokStreambufWriter *result; // eax

  result = (HavokStreambufWriter *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                                     dword_BA7D98,
                                     0x10,
                                     0x17);
  *((_WORD *)result + 2) = 0x10;
  *((_WORD *)result + 3) = 1;
  *(_DWORD *)result = &HavokStreambufWriter::`vftable';
  *((_DWORD *)result + 2) = 1;
  *((_BYTE *)result + 0xC) = 0;
  if ( a1 == 1 )
  {
    *((_DWORD *)result + 2) = 4;
  }
  else if ( a1 == 2 )
  {
    *((_DWORD *)result + 2) = 0;
  }
  return result;
}
