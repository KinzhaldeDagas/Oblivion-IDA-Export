bool __cdecl sub_51AC80(__int16 a1)
{
  int v2; // eax

  if ( a1 == 0xFF )
    return 0;
  v2 = *(_DWORD *)(0x24 * (unsigned __int8)a1 + 0xB102EC);
  return v2 == 5 || v2 == 4 || v2 == 7 || v2 == 6;
}
