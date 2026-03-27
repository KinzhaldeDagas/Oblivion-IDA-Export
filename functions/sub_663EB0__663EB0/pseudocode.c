char __thiscall sub_663EB0(_DWORD *this, int a2)
{
  char result; // al
  char v3; // [esp+1h] [ebp-1h] BYREF

  result = 0xFF;
  v3 = 0xFF;
  if ( a2 )
  {
    sub_4D6760(this + 0x1E2, *(_DWORD *)(a2 + 0xC), &v3);
    return v3;
  }
  return result;
}
