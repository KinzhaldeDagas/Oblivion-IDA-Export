// Projects one authored FanControl as offset + first element of basisMatrix * parameters.matrix[2*matrixChannel]. This proves control channels 0/1 address matrix 0 geometry and matrix 2 texture.
float __thiscall FaceGenFanControls_GetControlValue(
        void *this,
        int fanIndex,
        int controlIndex,
        int matrixChannel,
        const FaceGenHeadParameters *parameters)
{
  char *selectedControl; // edi
  FaceGenMatrix *projectionProduct; // esi
  float *projectedBegin; // eax
  FaceGenMatrix projection; // [esp+10h] [ebp-18h] BYREF
  int fanIndexa; // [esp+2Ch] [ebp+4h]

  if ( fanIndex >= 5 ) /*0x6edd40*/
    FaceGen_ReportAssertionViolation(".\\FanControls.cpp", 0xBB); /*0x6edd4c*/
  if ( controlIndex >= 2 ) /*0x6edd5b*/
    FaceGen_ReportAssertionViolation(".\\FanControls.cpp", 0xBC); /*0x6edd67*/
  if ( matrixChannel >= 2 ) /*0x6edd76*/
    FaceGen_ReportAssertionViolation(".\\FanControls.cpp", 0xBD); /*0x6edd82*/
  if ( *(_BYTE *)this ) /*0x6edd8a*/
  {
    selectedControl = (char *)this + 0x80 * fanIndex + 0x40 * controlIndex + 0x20 * matrixChannel; /*0x6eddae*/
    projectionProduct = FaceGenMatrix_Multiply( /*0x6eddc1*/
                          (const FaceGenMatrix *)(selectedControl + 0x25C),
                          &projection,
                          &parameters->matrices[2 * matrixChannel]);// Authoritative channel mapping: controls project parameters.matrix[2 * matrixChannel], so channels 0/1 are geometry matrix 0 and texture matrix 2.
    projectedBegin = projectionProduct->begin; /*0x6eddc3*/
    if ( !projectedBegin || !(projectionProduct->end - projectedBegin) ) /*0x6eddcf*/
      _invalid_parameter_noinfo(controlIndex, (int)selectedControl, (int)projectionProduct); /*0x6eddd4*/
    fanIndexa = *(int *)projectionProduct->begin; /*0x6edde4*/
    if ( projection.begin ) /*0x6edde8*/
      FormHeapFree((unsigned int)projection.begin); /*0x6eddeb*/
    return *((float *)selectedControl + 0x9E) + *(float *)&fanIndexa;// Loads selected record projectionOffset at record+0x1C (FanControls+0x278 plus index strides), then adds projected basis product. This identifies the file scalar read by the CTL loader. /*0x6ede05*/
  }
  else
  {
    return 0.0; /*0x6edd8f*/
  }
}
