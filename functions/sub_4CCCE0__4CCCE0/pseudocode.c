int sub_4CCCE0()
{
  int result; // eax

  if ( bhkWorldM )
    return (*(int (__thiscall **)(int))(*(_DWORD *)bhkWorldM + 0x80))(bhkWorldM);
  return result;
}
