void __cdecl Magic_GetSchoolFromSkillAV(int a1)
{
  switch ( a1 ) /*0x41b7d1*/
  {
    case 0x14: /*0x41b7d1*/
    case 0x15: /*0x41b7d1*/
    case 0x16: /*0x41b7d1*/
    case 0x17: /*0x41b7d1*/
    case 0x18: /*0x41b7d1*/
      return;
    case 0x19: /*0x41b7d1*/
      Magic_GetSchoolFromSkillAV_::Done(); /*0x41b7f4*/
      break; /*0x41b7f4*/
    default:
      JUMPOUT(0x41B7F8); /*0x41b7f8*/
  }
}
