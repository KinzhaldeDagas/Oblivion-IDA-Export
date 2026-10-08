LONG __thiscall sub_6E0C00(Ni2DBuffer **this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  NiObject *v5; // eax
  Ni2DBuffer *v6; // eax
  Ni2DBuffer **v7; // edi

  result = j_NiSingleInterpController_LinkObject((int)a2); /*0x6e0c2a*/
  if ( a2[0x36] < 0xA010068u ) /*0x6e0c39*/
  {
    v4 = sub_7124A0(a2); /*0x6e0c46*/
    if ( v4 ) /*0x6e0c4e*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x6e0c54*/
    v5 = (NiObject *)FormHeapAlloc(0x20u); /*0x6e0c64*/
    if ( v5 ) /*0x6e0c77*/
      v6 = (Ni2DBuffer *)sub_6DA160(v5, v4); /*0x6e0c7c*/
    else
      v6 = 0; /*0x6e0c83*/
    v7 = this + 0xF; /*0x6e0c85*/
    NiSmartPointer_Set__(v7, v6); /*0x6e0c90*/
    result = (*((int (__thiscall **)(Ni2DBuffer *))(*v7)->__vftable + 0x1F))(*v7); /*0x6e0c9c*/
    if ( v4 ) /*0x6e0ca8*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x6e0cae*/
      if ( !result ) /*0x6e0cb6*/
        return (**(LONG (__thiscall ***)(int, int))v4)(v4, 1); /*0x6e0cc0*/
    }
  }
  return result; /*0x6e0cc2*/
}
