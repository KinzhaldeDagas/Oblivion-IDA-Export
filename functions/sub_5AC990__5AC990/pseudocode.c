void sub_5AC990()
{
  int v0; // [esp+0h] [ebp-24h]

  switch ( (unsigned __int16)Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, v0) )
  {
    case 1u:
    case 3u:
    case 4u:
    case 6u:
    case 7u:
    case 9u:
    case 0xAu:
    case 0xCu:
    case 0xDu:
    case 0xFu:
    case 0x10u:
    case 0x12u:
    case 0x13u:
      JUMPOUT(0x5ACABF);
    case 2u:
    case 5u:
    case 8u:
    case 0xBu:
    case 0xEu:
    case 0x11u:
      JUMPOUT(0x5ACABE);
    default:
      JUMPOUT(0x5ACAB7);
  }
}
