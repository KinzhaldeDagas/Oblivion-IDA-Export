// ODismemberment combat decode: block-hit sound router. Chooses WPNBlockHand/Blade/Blunt/Staff/Bow or enchanted hit variants, then routes through the same positioned sound tail as weapon hit audio.
int __cdecl Combat_PlayBlockHitSound(
        int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        int a8,
        int a9,
        int a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16)
{
  int *v16; // ecx

  v16 = (int *)unk_B3C0F0; /*0x6afff0*/
  if ( !unk_B3C0F0 || unk_B3C20C >= (unsigned int)dword_B16304 ) /*0x6b0012*/
    JUMPOUT(0x6B0305); /*0x6b0305*/
  switch ( a1 ) /*0x6b0024*/
  {
    case 0xFFFFFFFF: /*0x6b0024*/
      PlaySound___(v16, "WPNBlockHand", 0x4102, 1); /*0x6b0037*/
      break; /*0x6b0037*/
    case 0: /*0x6b0024*/
    case 1: /*0x6b0024*/
      if ( (_BYTE)a9 ) /*0x6b0045*/
        PlaySound___(v16, "WPNHitBladeEnchanted", 0x4102, 1); /*0x6b004c*/
      else
        PlaySound___(v16, "WPNBlockBlade", 0x4102, 1); /*0x6b0053*/
      break; /*0x6b004c*/
    case 2: /*0x6b0024*/
    case 3: /*0x6b0024*/
      if ( (_BYTE)a9 ) /*0x6b0061*/
        PlaySound___(v16, "WPNHitBluntEnchanted", 0x4102, 1); /*0x6b0068*/
      else
        PlaySound___(v16, "WPNBlockBlunt", 0x4102, 1); /*0x6b006f*/
      break; /*0x6b0068*/
    case 4: /*0x6b0024*/
      PlaySound___(v16, "WPNBlockStaff", 0x4102, 1); /*0x6b007d*/
      break; /*0x6b007d*/
    case 5: /*0x6b0024*/
      PlaySound___(v16, "WPNBlockBow", 0x4102, 1); /*0x6b008b*/
      break; /*0x6b008b*/
    default:
      JUMPOUT(0x6B0098); /*0x6b0098*/
  }
  return def_6B0024(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}
