int __thiscall sub_6C3DB0(Ni2DBuffer **this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi
  float *v5; // eax
  float *v6; // eax

  result = sub_6CE1C0(a2);
  if ( a2[0x36] < 0xA010068u )
  {
    v4 = sub_7124A0(a2);
    v5 = (float *)FormHeapAlloc(0x38u);
    if ( v5 )
      v6 = sub_6D5B20(v5, v4);
    else
      v6 = 0;
    NiSmartPointer_Set__(this + 0xF, (Ni2DBuffer *)v6);
    return (*((int (__thiscall **)(_DWORD))(*(this + 0xF))->__vftable + 0x1F))(*(this + 0xF));
  }
  return result;
}
