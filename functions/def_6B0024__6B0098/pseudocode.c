void __usercall def_6B0024(
        int *a1@<ecx>,
        int *a2@<esi>,
        int a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        int a11,
        int a12)
{
  int *v12; // eax

  switch ( a12 ) /*0x6b00a4*/
  {
    case 0xFFFFFFFF: /*0x6b00a4*/
      v12 = PlaySound___(a1, "WPNBlockHand", 0x4102, 1); /*0x6b00b7*/
      break; /*0x6b00b7*/
    case 0: /*0x6b00a4*/
    case 1: /*0x6b00a4*/
      v12 = PlaySound___(a1, "WPNBlockBlade", 0x4102, 1); /*0x6b00c5*/
      break; /*0x6b00c5*/
    case 2: /*0x6b00a4*/
    case 3: /*0x6b00a4*/
      v12 = PlaySound___(a1, "WPNBlockBlunt", 0x4102, 1); /*0x6b00d3*/
      break; /*0x6b00d3*/
    case 4: /*0x6b00a4*/
      v12 = PlaySound___(a1, "WPNBlockStaff", 0x4102, 1); /*0x6b00e1*/
      break; /*0x6b00e1*/
    case 5: /*0x6b00a4*/
      v12 = PlaySound___(a1, "WPNBlockBow", 0x4102, 1); /*0x6b00ef*/
      break; /*0x6b00ef*/
    default:
      JUMPOUT(0x6B00F6); /*0x6b00f6*/
  }
  def_6B00A4(v12, a2, a3, a4, a5, a6, a7, a8, a9, a10); /*0x6b00f5*/
}
