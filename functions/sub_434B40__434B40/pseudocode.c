Ni2DBuffer *__thiscall sub_434B40(volatile LONG **this)
{
  volatile LONG **v1; // esi
  int v2; // ecx
  NiNode *v4; // eax
  Ni2DBuffer *v5; // eax
  Ni2DBuffer *v6; // edi

  v1 = this + 2;
  v2 = (int)*(this + 2);
  if ( !v2 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 0x98))(v2) )
    return (Ni2DBuffer *)*v1;
  v4 = (NiNode *)FormHeapAlloc(0xF0u);
  if ( v4 )
    v5 = (Ni2DBuffer *)sub_4A12E0(v4, *v1);
  else
    v5 = 0;
  v6 = v5;
  NiSmartPointer_Set__((Ni2DBuffer **)v1, v5);
  return v6;
}
