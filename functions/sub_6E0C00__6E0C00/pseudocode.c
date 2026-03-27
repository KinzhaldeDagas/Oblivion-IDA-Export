LONG __thiscall sub_6E0C00(Ni2DBuffer **this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  float *v5; // eax
  float *v6; // eax
  Ni2DBuffer **v7; // edi

  result = sub_75E480(a2);
  if ( a2[0x36] < 0xA010068u )
  {
    v4 = sub_7124A0(a2);
    if ( v4 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
    v5 = (float *)FormHeapAlloc(0x20u);
    if ( v5 )
      v6 = sub_6DA160(v5, v4);
    else
      v6 = 0;
    v7 = this + 0xF;
    NiSmartPointer_Set__(v7, (Ni2DBuffer *)v6);
    result = (*((int (__thiscall **)(Ni2DBuffer *))(*v7)->__vftable + 0x1F))(*v7);
    if ( v4 )
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4));
      if ( !result )
        return (**(LONG (__thiscall ***)(int, int))v4)(v4, 1);
    }
  }
  return result;
}
