// Oblivion CWindMatrices::Resize. Frees the old global transform array, allocates matrixCount contiguous 0x40-byte stTransform objects, constructs them, then explicitly loads identity into every matrix.
void __thiscall OB_CWindMatrices_Resize_010201A0(OB_CWindMatrices_010201A0 *this, unsigned __int16 matrixCount)
{
  int v3; // edi
  OB_stTransform_010201A0 *v4; // eax
  OB_stTransform_010201A0 *v5; // ebx
  int v6; // ebx

  FormHeapFree((unsigned int)this->matrices); /*0x787859*/
  v3 = matrixCount; /*0x787863*/
  this->matrixCount = matrixCount; /*0x787866*/
  v4 = (OB_stTransform_010201A0 *)FormHeapAlloc((unsigned __int64)matrixCount >> 0x1A != 0 ? 0xFFFFFFFF : matrixCount << 6);
  v5 = v4; /*0x787881*/
  if ( v4 ) /*0x787894*/
    sub_401080(v4, 0x40, matrixCount, (void *(__thiscall *)(void *))OB_stTransform_ctor_010201A0); /*0x78789f*/
  else
    v5 = 0; /*0x7878a6*/
  this->matrices = v5; /*0x7878b2*/
  if ( matrixCount ) /*0x7878b5*/
  {
    v6 = 0; /*0x7878b7*/
    do /*0x7878d0*/
    {
      OB_stTransform_LoadIdentity_010201A0(&this->matrices[v6++]); /*0x7878c5*/
      --v3; /*0x7878cd*/
    }
    while ( v3 ); /*0x7878d0*/
  }
}
