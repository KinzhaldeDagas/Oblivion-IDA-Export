// Oblivion binary evidence: destructor for compact 0x74 SIdvBranchInfo. Destroys and frees each of nine optional heap-owned 0x5C stBezierSpline pointers, then nulls all nine fields. CTreeEngine::FreeTransientData is the sole caller and frees the enclosing record afterward.
void __thiscall OB_SIdvBranchInfo_Dtor_010201A0(OB_SIdvBranchInfo_010201A0 *this)
{
  OB_stBezierSpline_010201A0 *flexibilityProfile; // edi
  OB_stBezierSpline_010201A0 *flexibilityScaleProfile; // edi
  OB_stBezierSpline_010201A0 *gravityProfile; // edi
  OB_stBezierSpline_010201A0 *disturbanceProfile; // edi
  OB_stBezierSpline_010201A0 *startAngleProfile; // edi
  OB_stBezierSpline_010201A0 *radiusProfile; // edi
  OB_stBezierSpline_010201A0 *radiusScaleProfile; // edi
  OB_stBezierSpline_010201A0 *lengthProfile; // edi
  OB_stBezierSpline_010201A0 *angleProfile; // edi

  flexibilityProfile = this->flexibilityProfile; /*0x7a7805*/
  if ( flexibilityProfile ) /*0x7a780c*/
  {
    OB_StBezierSpline_Dtor_010201A0(this->flexibilityProfile); /*0x7a7810*/
    FormHeapFree((unsigned int)flexibilityProfile); /*0x7a7816*/
  }
  flexibilityScaleProfile = this->flexibilityScaleProfile; /*0x7a781e*/
  if ( flexibilityScaleProfile ) /*0x7a7823*/
  {
    OB_StBezierSpline_Dtor_010201A0(this->flexibilityScaleProfile); /*0x7a7827*/
    FormHeapFree((unsigned int)flexibilityScaleProfile); /*0x7a782d*/
  }
  gravityProfile = this->gravityProfile; /*0x7a7835*/
  if ( gravityProfile ) /*0x7a783a*/
  {
    OB_StBezierSpline_Dtor_010201A0(this->gravityProfile); /*0x7a783e*/
    FormHeapFree((unsigned int)gravityProfile); /*0x7a7844*/
  }
  disturbanceProfile = this->disturbanceProfile; /*0x7a784c*/
  if ( disturbanceProfile ) /*0x7a7851*/
  {
    OB_StBezierSpline_Dtor_010201A0(this->disturbanceProfile); /*0x7a7855*/
    FormHeapFree((unsigned int)disturbanceProfile); /*0x7a785b*/
  }
  startAngleProfile = this->startAngleProfile; /*0x7a7863*/
  if ( startAngleProfile ) /*0x7a7868*/
  {
    OB_StBezierSpline_Dtor_010201A0(this->startAngleProfile); /*0x7a786c*/
    FormHeapFree((unsigned int)startAngleProfile); /*0x7a7872*/
  }
  radiusProfile = this->radiusProfile; /*0x7a787a*/
  if ( radiusProfile ) /*0x7a787f*/
  {
    OB_StBezierSpline_Dtor_010201A0(this->radiusProfile); /*0x7a7883*/
    FormHeapFree((unsigned int)radiusProfile); /*0x7a7889*/
  }
  radiusScaleProfile = this->radiusScaleProfile; /*0x7a7891*/
  if ( radiusScaleProfile ) /*0x7a7896*/
  {
    OB_StBezierSpline_Dtor_010201A0(this->radiusScaleProfile); /*0x7a789a*/
    FormHeapFree((unsigned int)radiusScaleProfile); /*0x7a78a0*/
  }
  lengthProfile = this->lengthProfile; /*0x7a78a8*/
  if ( lengthProfile ) /*0x7a78ad*/
  {
    OB_StBezierSpline_Dtor_010201A0(this->lengthProfile); /*0x7a78b1*/
    FormHeapFree((unsigned int)lengthProfile); /*0x7a78b7*/
  }
  angleProfile = this->angleProfile; /*0x7a78bf*/
  if ( angleProfile ) /*0x7a78c4*/
  {
    OB_StBezierSpline_Dtor_010201A0(this->angleProfile); /*0x7a78c8*/
    FormHeapFree((unsigned int)angleProfile); /*0x7a78ce*/
  }
  this->flexibilityProfile = 0; /*0x7a78d7*/
  this->flexibilityScaleProfile = 0; /*0x7a78da*/
  this->gravityProfile = 0; /*0x7a78dd*/
  this->disturbanceProfile = 0; /*0x7a78e0*/
  this->startAngleProfile = 0; /*0x7a78e3*/
  this->radiusProfile = 0; /*0x7a78e6*/
  this->radiusScaleProfile = 0; /*0x7a78e9*/
  this->lengthProfile = 0; /*0x7a78ec*/
  this->angleProfile = 0; /*0x7a78ef*/
}
