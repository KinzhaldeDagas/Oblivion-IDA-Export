unsigned __int8 __thiscall sub_75ED50(float *this, int a2, _DWORD **a3)
{
  unsigned __int8 result; // al
  int v5; // ecx
  Ni2DBuffer *v6; // eax

  sub_700770(this, a2, a3); /*0x75ed5f*/
  *(float *)(a2 + 8) = *(this + 2); /*0x75ed67*/
  result = *((_BYTE *)this + 0xC); /*0x75ed6a*/
  *(_BYTE *)(a2 + 0xC) = result; /*0x75ed6d*/
  *(_BYTE *)(a2 + 0xD) = *((_BYTE *)this + 0xD); /*0x75ed73*/
  v5 = *((_DWORD *)this + 0xA); /*0x75ed76*/
  if ( v5 ) /*0x75ed7b*/
  {
    v6 = (Ni2DBuffer *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v5 + 0x18))(v5, a3); /*0x75ed83*/
    return (unsigned __int8)NiSmartPointer_Set__((Ni2DBuffer **)(a2 + 0x28), v6); /*0x75ed89*/
  }
  return result; /*0x75ed8e*/
}
