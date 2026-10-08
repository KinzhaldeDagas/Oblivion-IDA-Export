void __usercall sub_5BE800(Tile **this@<ecx>, double st5_0@<st2>, double a3@<st1>)
{
  Tile *v3; // esi
  double v4; // st7
  float a2; // [esp+0h] [ebp-8h]

  v3 = *(this + 0x2A); /*0x5be801*/
  if ( !v3 ) /*0x5be809*/
    JUMPOUT(0x5BE850); /*0x5be850*/
  switch ( (unsigned int)*(this + 0x21) ) /*0x5be816*/
  {
    case 0u: /*0x5be816*/
      v4 = 1.0; /*0x5be81d*/
      break; /*0x5be81f*/
    case 1u: /*0x5be816*/
      v4 = fConstant_2; /*0x5be821*/
      break; /*0x5be827*/
    case 2u: /*0x5be816*/
      v4 = *(float *)&dword_A46C30; /*0x5be829*/
      break; /*0x5be82f*/
    case 3u: /*0x5be816*/
      v4 = flt_A46B10; /*0x5be831*/
      break; /*0x5be831*/
    default:
      JUMPOUT(0x5BE847); /*0x5be847*/
  }
  a2 = v4; /*0x5be838*/
  Tile_SetFloat(v3, 0xFAEu, a2); /*0x5be842*/
  def_5BE816((int)v3, st5_0, a3, v4); /*0x5be843*/
}
