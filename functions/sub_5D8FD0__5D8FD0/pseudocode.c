double __usercall sub_5D8FD0@<st0>(double result@<st0>, int a2, int a3)
{
  const unsigned __int8 *v3; // eax
  const unsigned __int8 *v4; // ecx

  if ( (byte_B3B734 & 0x7F) != 0 )
  {
    if ( (byte_B3B734 & 0x7F) == 1 )
    {
      (**(void (__thiscall ***)(int, PlayerCharacter *))(a2 + 0x24))(a2 + 0x24, TESDataHandler_g_PlayerRef);
      Double_To_SInt32(result);
      result = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(a3 + 0x24))(
                 a3 + 0x24,
                 TESDataHandler_g_PlayerRef);
      Double_To_SInt32(result);
    }
    else if ( (byte_B3B734 & 0x7F) == 2 )
    {
      (**(void (__thiscall ***)(int, PlayerCharacter *))(a2 + 0x24))(a2 + 0x24, TESDataHandler_g_PlayerRef);
      Double_To_SInt32(result * fSpellmakingGoldMult);
      result = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(a3 + 0x24))(
                 a3 + 0x24,
                 TESDataHandler_g_PlayerRef);
      Double_To_SInt32(result);
    }
  }
  else
  {
    v3 = *(const unsigned __int8 **)(a3 + 0x1C);
    if ( !v3 )
      v3 = (const unsigned __int8 *)EmptyString;
    v4 = *(const unsigned __int8 **)(a2 + 0x1C);
    if ( !v4 )
      v4 = (const unsigned __int8 *)EmptyString;
    _mbscmp(v4, v3);
  }
  return result;
}
