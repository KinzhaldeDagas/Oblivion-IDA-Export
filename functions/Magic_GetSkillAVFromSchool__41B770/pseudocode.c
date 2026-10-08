void __cdecl Magic_GetSkillAVFromSchool(int a1)
{
  switch ( a1 ) /*0x41b77c*/
  {
    case 0: /*0x41b77c*/
    case 1: /*0x41b77c*/
    case 2: /*0x41b77c*/
    case 3: /*0x41b77c*/
    case 4: /*0x41b77c*/
      return;
    case 5: /*0x41b77c*/
      Magic_GetSkillAVFromSchool_::Done(); /*0x41b7a2*/
      break; /*0x41b7a2*/
    default:
      JUMPOUT(0x41B7A6); /*0x41b7a6*/
  }
}
