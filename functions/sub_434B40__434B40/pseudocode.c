NiNode *__thiscall sub_434B40(volatile LONG **this)
{
  volatile LONG **v1; // esi
  int v2; // ecx
  NiNode *v4; // eax
  NiNode *v5; // eax
  NiNode *v6; // edi

  v1 = this + 2; /*0x434b63*/
  v2 = (int)*(this + 2); /*0x434b66*/
  if ( !v2 ) /*0x434b6a*/
    return 0; /*0x434be1*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 0x98))(v2) ) /*0x434b74*/
    return (NiNode *)*v1; /*0x434b7c*/
  v4 = (NiNode *)FormHeapAlloc(0xF0u); /*0x434b95*/
  if ( v4 ) /*0x434bab*/
    v5 = sub_4A12E0(v4, *v1); /*0x434bb2*/
  else
    v5 = 0; /*0x434bb9*/
  v6 = v5; /*0x434bc6*/
  NiSmartPointer_Set__((Ni2DBuffer **)v1, (Ni2DBuffer *)v5); /*0x434bc8*/
  return v6; /*0x434b7e*/
}
