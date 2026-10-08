// stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
void __thiscall OB_StBezierSpline_Dtor_010201A0(OB_stBezierSpline_010201A0 *this)
{
  OB_stVector24_Destroy_010201A0((OB_stVector24_010201A0 *)&this->splinePoints); /*0x784b94*/
  OB_stVector24_Destroy_010201A0((OB_stVector24_010201A0 *)&this->evenlySpacedPoints); /*0x784ba1*/
  if ( this->controlPointTangentLengths.begin ) /*0x784ba6*/
    FormHeapFree((unsigned int)this->controlPointTangentLengths.begin); /*0x784bb0*/
  this->controlPointTangentLengths.begin = 0; /*0x784bbb*/
  this->controlPointTangentLengths.end = 0; /*0x784bbe*/
  this->controlPointTangentLengths.capacity = 0; /*0x784bc1*/
  OB_stVector24_Destroy_010201A0((OB_stVector24_010201A0 *)&this->controlPointTangents); /*0x784bc8*/
  OB_stVector24_Destroy_010201A0((OB_stVector24_010201A0 *)&this->controlPoints); /*0x784bd8*/
}
