int __cdecl Magic_GetSchoolFromSkillAV(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0x14:
      result = 0;
      break;
    case 0x15:
      result = 1;
      break;
    case 0x16:
      result = 2;
      break;
    case 0x17:
      result = 3;
      break;
    case 0x18:
      result = 4;
      break;
    case 0x19:
      result = Magic_GetSchoolFromSkillAV_::Done(a1 - 0x14);
      break;
    default:
      JUMPOUT(0x41B7F8);
  }
  return result;
}
