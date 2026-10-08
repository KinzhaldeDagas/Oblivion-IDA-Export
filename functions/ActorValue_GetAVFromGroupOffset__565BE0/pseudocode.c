// mwMediumArmor: Oblivion group 2 maps skill offset to actor value by adding 0x0C. OpenMW/Morrowind skill index 2 is MediumArmor, but Oblivion offset 2 becomes actor value 0x0E (Blade). Do not pass Morrowind skill indexes directly through this helper.
int __cdecl ActorValue_GetAVFromGroupOffset(int a1, char a2)
{
  int result; // eax

  switch ( a1 ) /*0x565be9*/
  {
    case 0: /*0x565be9*/
      result = a2; /*0x565bf0*/
      break; /*0x565bf5*/
    case 1: /*0x565be9*/
      result = a2 + 8; /*0x565bfb*/
      break; /*0x565bfe*/
    case 2: /*0x565be9*/
      result = a2 + 0xC; /*0x565c04*/
      break; /*0x565c07*/
    case 3: /*0x565be9*/
      result = a2 + 0x21; /*0x565c0d*/
      break; /*0x565c10*/
    case 4: /*0x565be9*/
      result = a2 + 0x25; /*0x565c16*/
      break; /*0x565c19*/
    case 5: /*0x565be9*/
      result = a2 + 0x28; /*0x565c1f*/
      break; /*0x565c22*/
    case 6: /*0x565be9*/
      result = a2 + 0x2A; /*0x565c28*/
      break; /*0x565c2b*/
    default:
      JUMPOUT(0x565C2C); /*0x565c2c*/
  }
  return result; /*0x565bf5*/
}
