void __thiscall sub_559930(int *this)
{
  float *v2; // ebx
  unsigned int v3; // edi
  void *v4; // edi

  v2 = (float *)*(this + 2); /*0x559934*/
  if ( *(this + 1) > (unsigned int)v2 ) /*0x55993b*/
    _invalid_parameter_noinfo(); /*0x55993d*/
  v3 = *(this + 1); /*0x559942*/
  if ( v3 > *(this + 2) ) /*0x559948*/
    _invalid_parameter_noinfo(); /*0x55994a*/
  if ( (float *)v3 != v2 ) /*0x559951*/
  {
    v4 = (void *)sub_558610(v2, (float *)*(this + 2), v3); /*0x559965*/
    FaceGenEgtBasisRecordArray_Destruct(v4, (void *)*(this + 2)); /*0x55996a*/
    *(this + 2) = (int)v4; /*0x55996f*/
  }
}
