const char *__cdecl sub_8E7D80(int a1)
{
  const char *result; // eax

  switch ( a1 )
  {
    case 0:
      result = "hkBallAndSocketConstraint";
      break;
    case 1:
      result = "hkHingeConstraint";
      break;
    case 2:
      result = "hkLimitedHingeConstraint";
      break;
    case 3:
      result = "hkPointToPathConstraint";
      break;
    case 4:
      result = "hkPoweredHingeConstraint";
      break;
    case 6:
      result = "hkPrismaticConstraint";
      break;
    case 7:
      result = "hkRagdollConstraint";
      break;
    case 8:
      result = "hkStiffSpringConstraintC";
      break;
    case 9:
      result = "hkWheelConstraint";
      break;
    case 0xA:
      result = "hkGenericConstraint";
      break;
    case 0xC:
      result = "hkBreakableConstraint";
      break;
    case 0xD:
      result = "hkMalleableConstraint";
      break;
    default:
      result = "Unknown";
      break;
  }
  return result;
}
