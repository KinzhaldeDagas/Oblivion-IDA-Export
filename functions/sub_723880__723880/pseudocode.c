float *__thiscall sub_723880(NiCamera *this)
{
  float *result; // eax
  float Near; // ecx

  result = (float *)NiAVObject_UpdateWorldTransform(this); /*0x723883*/
  Near = this->members.Frustum.Near; /*0x723888*/
  if ( Near != 0.0 ) /*0x723890*/
    return (*(float *(__thiscall **)(float, NiCamera *))(*(_DWORD *)LODWORD(Near) + 0x50))( /*0x723898*/
             COERCE_FLOAT(LODWORD(Near)),
             this);
  return result; /*0x72389a*/
}
