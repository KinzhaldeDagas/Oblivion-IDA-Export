const char *__cdecl sub_8E7D80(int a1)
{
  const char *result; // eax

  switch ( a1 ) /*0x8e7d89*/
  {
    case 0: /*0x8e7d89*/
      result = "hkBallAndSocketConstraint"; /*0x8e7d90*/
      break; /*0x8e7d95*/
    case 1: /*0x8e7d89*/
      result = "hkHingeConstraint"; /*0x8e7d96*/
      break; /*0x8e7d9b*/
    case 2: /*0x8e7d89*/
      result = "hkLimitedHingeConstraint"; /*0x8e7d9c*/
      break; /*0x8e7da1*/
    case 3: /*0x8e7d89*/
      result = "hkPointToPathConstraint"; /*0x8e7da2*/
      break; /*0x8e7da7*/
    case 4: /*0x8e7d89*/
      result = "hkPoweredHingeConstraint"; /*0x8e7da8*/
      break; /*0x8e7dad*/
    case 6: /*0x8e7d89*/
      result = "hkPrismaticConstraint"; /*0x8e7dae*/
      break; /*0x8e7db3*/
    case 7: /*0x8e7d89*/
      result = "hkRagdollConstraint"; /*0x8e7db4*/
      break; /*0x8e7db9*/
    case 8: /*0x8e7d89*/
      result = "hkStiffSpringConstraintC"; /*0x8e7dba*/
      break; /*0x8e7dbf*/
    case 9: /*0x8e7d89*/
      result = "hkWheelConstraint"; /*0x8e7dc0*/
      break; /*0x8e7dc5*/
    case 0xA: /*0x8e7d89*/
      result = "hkGenericConstraint"; /*0x8e7dc6*/
      break; /*0x8e7dcb*/
    case 0xC: /*0x8e7d89*/
      result = "hkBreakableConstraint"; /*0x8e7dcc*/
      break; /*0x8e7dd1*/
    case 0xD: /*0x8e7d89*/
      result = "hkMalleableConstraint"; /*0x8e7dd2*/
      break; /*0x8e7dd7*/
    default:
      result = "Unknown"; /*0x8e7dd8*/
      break; /*0x8e7dd8*/
  }
  return result; /*0x8e7d95*/
}
