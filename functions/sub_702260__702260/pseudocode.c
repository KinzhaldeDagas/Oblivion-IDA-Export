_DWORD *__thiscall sub_702260(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  Ni2DBuffer *v4; // eax

  sub_6D7DF0((unsigned __int16 *)this, a2);
  result = (_DWORD *)sub_7124D0(a2);
  if ( result )
  {
    v4 = (Ni2DBuffer *)sub_7124A0(a2);
    return NiSmartPointer_Set__((Ni2DBuffer **)this + 0xF, v4);
  }
  return result;
}
