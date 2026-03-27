bool __cdecl sub_497D50(int a1)
{
  int v1; // esi
  int v2; // ebx
  int v3; // edi
  signed int v4; // eax
  bool result; // al
  BOOL v6; // [esp-18h] [ebp-18h]

  result = 0;
  if ( dword_B350D8 )
  {
    if ( !bIsHDR )
    {
      v1 = dword_B42154;
      v2 = *(_DWORD *)dword_B42154;
      v3 = *(_DWORD *)(dword_B350D8 + 0x5C0);
      v6 = g_bFullScreen == 0;
      v4 = sub_4979E0(dword_B06C34);
      if ( (*(int (__stdcall **)(int, int, int, signed int, BOOL, int, _DWORD))(v2 + 0x2C))(
             v1,
             dword_B06C54,
             v3,
             v4,
             v6,
             a1,
             0) >= 0 )
        return 1;
    }
  }
  return result;
}
