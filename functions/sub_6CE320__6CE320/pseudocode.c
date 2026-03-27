_DWORD *__thiscall sub_6CE320(int *this, _DWORD *a2)
{
  _DWORD *result; // eax
  Ni2DBuffer *v4; // eax

  result = (_DWORD *)sub_6D0550(this, (signed int)a2);
  if ( a2[0x36] >= 0xA010068u )
  {
    v4 = (Ni2DBuffer *)sub_712A90(a2);
    return NiSmartPointer_Set__((Ni2DBuffer **)this + 0xF, v4);
  }
  return result;
}
