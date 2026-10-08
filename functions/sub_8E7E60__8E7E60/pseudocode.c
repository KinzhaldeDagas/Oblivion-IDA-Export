_DWORD *__cdecl sub_8E7E60(int a1)
{
  _DWORD *result; // eax

  switch ( a1 ) /*0x8e7e6d*/
  {
    case 0: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7e76*/
      if ( !result ) /*0x8e7e80*/
        goto LABEL_26; /*0x8e7e80*/
      result[1] = 0; /*0x8c3294*/
      result[3] = 0; /*0x8c3297*/
      result[4] = 0; /*0x8c329a*/
      result[2] = 1; /*0x8c329d*/
      *result = &hkBallAndSocketConstraintCinfo::`vftable'; /*0x8c32a4*/
      break; /*0x8c32aa*/
    case 1: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7e8f*/
      if ( !result ) /*0x8e7e99*/
        goto LABEL_26; /*0x8e7e99*/
      result[1] = 0; /*0x8c2b24*/
      result[3] = 0; /*0x8c2b27*/
      result[4] = 0; /*0x8c2b2a*/
      result[2] = 1; /*0x8c2b2d*/
      *result = &hkHingeConstraintCinfo::`vftable'; /*0x8c2b34*/
      break; /*0x8c2b3a*/
    case 2: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7ea8*/
      if ( !result ) /*0x8e7eb2*/
        goto LABEL_26; /*0x8e7eb2*/
      result[1] = 0; /*0x539b64*/
      result[3] = 0; /*0x539b67*/
      result[4] = 0; /*0x539b6a*/
      result[2] = 1; /*0x539b6d*/
      *result = &hkLimitedHingeConstraintCinfo::`vftable'; /*0x539b74*/
      break; /*0x539b7a*/
    case 3: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7ec1*/
      if ( !result ) /*0x8e7ecb*/
        goto LABEL_26; /*0x8e7ecb*/
      result[1] = 0; /*0x8e7e24*/
      result[3] = 0; /*0x8e7e27*/
      result[4] = 0; /*0x8e7e2a*/
      result[2] = 1; /*0x8e7e2d*/
      *result = &hkPointToPathConstraintCinfo::`vftable'; /*0x8e7e34*/
      break; /*0x8e7e3a*/
    case 4: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7eda*/
      if ( !result ) /*0x8e7ee4*/
        goto LABEL_26; /*0x8e7ee4*/
      result[1] = 0; /*0x8e7e44*/
      result[3] = 0; /*0x8e7e47*/
      result[4] = 0; /*0x8e7e4a*/
      result[2] = 1; /*0x8e7e4d*/
      *result = &hkPoweredHingeConstraintCinfo::`vftable'; /*0x8e7e54*/
      break; /*0x8e7eea*/
    case 6: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7ef3*/
      if ( !result ) /*0x8e7efd*/
        goto LABEL_26; /*0x8e7efd*/
      result[1] = 0; /*0x8c1c94*/
      result[3] = 0; /*0x8c1c97*/
      result[4] = 0; /*0x8c1c9a*/
      result[2] = 1; /*0x8c1c9d*/
      *result = &hkPrismaticConstraintCinfo::`vftable'; /*0x8c1ca4*/
      break; /*0x8c1caa*/
    case 7: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7f0c*/
      if ( !result ) /*0x8e7f16*/
        goto LABEL_26; /*0x8e7f16*/
      result[1] = 0; /*0x8c1254*/
      result[3] = 0; /*0x8c1257*/
      result[4] = 0; /*0x8c125a*/
      result[2] = 1; /*0x8c125d*/
      *result = &hkRagdollConstraintCinfo::`vftable'; /*0x8c1264*/
      break; /*0x8c126a*/
    case 8: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7f21*/
      if ( !result ) /*0x8e7f2b*/
        goto LABEL_26; /*0x8e7f2b*/
      result[1] = 0; /*0x8c0844*/
      result[3] = 0; /*0x8c0847*/
      result[4] = 0; /*0x8c084a*/
      result[2] = 1; /*0x8c084d*/
      *result = &hkStiffSpringConstraintCinfo::`vftable'; /*0x8c0854*/
      break; /*0x8c085a*/
    case 9: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7f36*/
      if ( !result ) /*0x8e7f40*/
        goto LABEL_26; /*0x8e7f40*/
      result[1] = 0; /*0x8c0334*/
      result[3] = 0; /*0x8c0337*/
      result[4] = 0; /*0x8c033a*/
      result[2] = 1; /*0x8c033d*/
      *result = &hkWheelConstraintCinfo::`vftable'; /*0x8c0344*/
      break; /*0x8c034a*/
    case 0xA: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7f4b*/
      if ( !result ) /*0x8e7f55*/
        goto LABEL_26; /*0x8e7f55*/
      result[1] = 0; /*0x8c22d4*/
      result[3] = 0; /*0x8c22d7*/
      result[4] = 0; /*0x8c22da*/
      result[2] = 1; /*0x8c22dd*/
      *result = &hkGenericConstraintCinfo::`vftable'; /*0x8c22e4*/
      break; /*0x8e7f57*/
    case 0xC: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7f60*/
      if ( !result ) /*0x8e7f6a*/
        goto LABEL_26; /*0x8e7f6a*/
      result[1] = 0; /*0x8bfa84*/
      result[3] = 0; /*0x8bfa87*/
      result[4] = 0; /*0x8bfa8a*/
      result[2] = 1; /*0x8bfa8d*/
      *result = &hkBreakableConstraintCinfo::`vftable'; /*0x8bfa94*/
      break; /*0x8e7f6c*/
    case 0xD: /*0x8e7e6d*/
      result = (_DWORD *)FormHeapAlloc(0x14u); /*0x8e7f75*/
      if ( !result ) /*0x8e7f7f*/
        goto LABEL_26; /*0x8e7f7f*/
      result[1] = 0; /*0x8bf364*/
      result[3] = 0; /*0x8bf367*/
      result[4] = 0; /*0x8bf36a*/
      result[2] = 1; /*0x8bf36d*/
      *result = &hkMalleableConstraintCinfo::`vftable'; /*0x8bf374*/
      break; /*0x8e7f81*/
    default:
LABEL_26:
      result = 0; /*0x8e7f88*/
      break; /*0x8e7f88*/
  }
  return result; /*0x8e7f8a*/
}
