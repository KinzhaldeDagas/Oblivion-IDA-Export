_DWORD *__thiscall sub_724760(int this, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int16 *v5; // esi
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v5 = (unsigned __int16 *)(this + 0xEC); /*0x724770*/
  *(_DWORD *)(this + 0xE8) = 1; /*0x724776*/
  v7 = 0; /*0x724780*/
  if ( a3 >= *(unsigned __int16 *)(this + 0xF4) ) /*0x72478a*/
    NiTArray_SetSize(v5, a3 + *(unsigned __int16 *)(this + 0xFA)); /*0x724795*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)v5, a3, &v7); /*0x7247a2*/
  NiNode::SetObjectAt((NiNode *)this, a2, a3, a4); /*0x7247b4*/
  return a2; /*0x7247b9*/
}
