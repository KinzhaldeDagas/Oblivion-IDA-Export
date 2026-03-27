char __thiscall sub_628240(int this, PlayerCharacter *a2)
{
  char v2; // cl
  char result; // al

  switch ( *(_WORD *)(this + 0x1F4) )
  {
    case 0xFFFF:
    case 6:
      v2 = *(_BYTE *)(this + 0x11D);
      if ( v2 && v2 != 4 && v2 != 9 )
        goto LABEL_8;
      result = 1;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
      if ( a2 == TESDataHandler_g_PlayerRef )
        byte_B3BAEB = 1;
      goto LABEL_8;
    default:
LABEL_8:
      result = 0;
      break;
  }
  return result;
}
