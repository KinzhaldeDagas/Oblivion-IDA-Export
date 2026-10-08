NiObject *sub_72ABF0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x5Cu); /*0x72ac14*/
  v1 = v0; /*0x72ac19*/
  if ( !v0 ) /*0x72ac2c*/
    return 0; /*0x72ac5a*/
  NiTriShapeData_Construct(v0); /*0x72ac30*/
  v1->__vftable = (NiObjectVtbl *)&NiTriShapeDynamicData::`vftable'; /*0x72ac35*/
  LOWORD(v1[0xB].__vftable) = 0; /*0x72ac3b*/
  HIWORD(v1[0xB].__vftable) = 0; /*0x72ac41*/
  return v1; /*0x72ac49*/
}
