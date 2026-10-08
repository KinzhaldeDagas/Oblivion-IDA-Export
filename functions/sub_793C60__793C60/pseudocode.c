// Constructs the shared CWindMatrices container, allocates four 0x40-byte identity transforms, then records size 4.
OB_CWindMatrices_010201A0 *__thiscall OB_CWindMatrices_ctor_010201A0(OB_CWindMatrices_010201A0 *this)
{
  OB_stTransform_010201A0 *v2; // eax
  OB_stTransform_010201A0 *v3; // edi

  this->matrixCount = 0; /*0x793c8a*/
  v2 = (OB_stTransform_010201A0 *)FormHeapAlloc(0x100u); /*0x793c8f*/
  v3 = v2; /*0x793c94*/
  if ( v2 ) /*0x793ca7*/
    sub_401080(v2, 0x40, 4, (void *(__thiscall *)(void *))OB_stTransform_ctor_010201A0); /*0x793cb3*/
  else
    v3 = 0; /*0x793cba*/
  this->matrices = v3; /*0x793cc8*/
  OB_CWindMatrices_Resize_010201A0(this, 4u); /*0x793ccb*/
  return this; /*0x793cd2*/
}
