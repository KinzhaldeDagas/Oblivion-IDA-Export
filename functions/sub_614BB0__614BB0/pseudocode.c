int __thiscall sub_614BB0(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 0x6C);
  if ( result != 4 && result != 7 && result != 9 && result != 8 && result != 0xC )
    *(_BYTE *)(this + 0x191) = 1;
  return result;
}
