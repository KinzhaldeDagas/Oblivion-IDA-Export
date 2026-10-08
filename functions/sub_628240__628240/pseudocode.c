char __thiscall sub_628240(int this, PlayerCharacter *a2)
{
  char v2; // cl
  char result; // al

  switch ( *(_WORD *)(this + 0x1F4) ) /*0x628256*/
  {
    case 0xFFFF: /*0x628256*/
    case 6: /*0x628256*/
      v2 = *(_BYTE *)(this + 0x11D); /*0x62825d*/
      if ( v2 && v2 != 4 && v2 != 9 ) /*0x62826f*/
        goto LABEL_8; /*0x62826f*/
      result = 1; /*0x628271*/
      break; /*0x628273*/
    case 2: /*0x628256*/
    case 3: /*0x628256*/
    case 4: /*0x628256*/
    case 5: /*0x628256*/
      if ( a2 == reference ) /*0x628280*/
        unk_B3BAEB = 1; /*0x628282*/
      goto LABEL_8; /*0x628282*/
    default:
LABEL_8:
      result = 0; /*0x628289*/
      break; /*0x628289*/
  }
  return result; /*0x628273*/
}
