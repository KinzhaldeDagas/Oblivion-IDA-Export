unsigned int __thiscall sub_724700(unsigned __int16 *this, int a2, int a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  NiTArray_NiTexturingPropertyMap *v6; // esi

  NiNode::AddObject(this, a2, a3);
  *((_DWORD *)this + 0x3A) = 1;
  v4 = *(this + 0x7B);
  v5 = *(this + 0x7A);
  v6 = (NiTArray_NiTexturingPropertyMap *)(this + 0x76);
  a3 = 0;
  if ( v4 >= v5 )
    NiTArray_SetSize((unsigned __int16 *)v6, v4 + v6->growSize);
  return NiTArray_SetAt(v6, v4, &a3);
}
