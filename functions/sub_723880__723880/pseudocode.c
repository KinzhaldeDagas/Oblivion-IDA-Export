float *__thiscall sub_723880(NiCamera *this)
{
  float *result; // eax
  float Near; // ecx

  result = (float *)sub_70C120(this);
  Near = this->members.Frustum.Near;
  if ( Near != 0.0 )
    return (*(float *(__thiscall **)(float, NiCamera *))(*(_DWORD *)LODWORD(Near) + 0x50))(
             COERCE_FLOAT(LODWORD(Near)),
             this);
  return result;
}
