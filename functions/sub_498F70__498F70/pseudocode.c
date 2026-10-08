NiAVObject *__stdcall sub_498F70(NiTriShapeData *a2)
{
  NiTriShape *v1; // eax

  v1 = (NiTriShape *)FormHeapAlloc(0xC0u); /*0x498f96*/
  if ( v1 ) /*0x498fac*/
    return (NiAVObject *)OB_NiTriShape_ctorWithData_010201A0(v1, a2); /*0x498fb5*/
  else
    return 0; /*0x498fcc*/
}
