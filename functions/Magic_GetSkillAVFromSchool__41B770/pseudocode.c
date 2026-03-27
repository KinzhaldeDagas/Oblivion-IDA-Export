int __cdecl Magic_GetSkillAVFromSchool(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = 0x14;
      break;
    case 1:
      result = 0x15;
      break;
    case 2:
      result = 0x16;
      break;
    case 3:
      result = 0x17;
      break;
    case 4:
      result = 0x18;
      break;
    case 5:
      result = Magic_GetSkillAVFromSchool_::Done(a1);
      break;
    default:
      JUMPOUT(0x41B7A6);
  }
  return result;
}
