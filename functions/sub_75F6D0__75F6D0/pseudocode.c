_DWORD *__thiscall sub_75F6D0(Ni2DBuffer **this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // esi
  float *v5; // eax
  float *v6; // eax

  result = (_DWORD *)sub_75E480((int)a2);
  if ( a2[0x36] < 0xA010068u )
  {
    v4 = sub_7124A0(a2);
    v5 = (float *)FormHeapAlloc(0x18u);
    if ( v5 )
    {
      v6 = sub_6D2990(v5, v4);
      return NiSmartPointer_Set__(this + 0xF, (Ni2DBuffer *)v6);
    }
    else
    {
      return NiSmartPointer_Set__(this + 0xF, 0);
    }
  }
  return result;
}
