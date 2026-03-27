_DWORD *__cdecl sub_8E7E60(int a1)
{
  _DWORD *result; // eax

  switch ( a1 )
  {
    case 0:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkBallAndSocketConstraintCinfo::`vftable';
      break;
    case 1:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkHingeConstraintCinfo::`vftable';
      break;
    case 2:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkLimitedHingeConstraintCinfo::`vftable';
      break;
    case 3:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkPointToPathConstraintCinfo::`vftable';
      break;
    case 4:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkPoweredHingeConstraintCinfo::`vftable';
      break;
    case 6:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkPrismaticConstraintCinfo::`vftable';
      break;
    case 7:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkRagdollConstraintCinfo::`vftable';
      break;
    case 8:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkStiffSpringConstraintCinfo::`vftable';
      break;
    case 9:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkWheelConstraintCinfo::`vftable';
      break;
    case 0xA:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkGenericConstraintCinfo::`vftable';
      break;
    case 0xC:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkBreakableConstraintCinfo::`vftable';
      break;
    case 0xD:
      result = (_DWORD *)FormHeapAlloc(0x14u);
      if ( !result )
        goto LABEL_26;
      result[1] = 0;
      result[3] = 0;
      result[4] = 0;
      result[2] = 1;
      *result = &hkMalleableConstraintCinfo::`vftable';
      break;
    default:
LABEL_26:
      result = 0;
      break;
  }
  return result;
}
