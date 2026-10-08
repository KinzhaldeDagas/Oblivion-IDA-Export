int __thiscall sub_7EC890(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DPass *v9; // edi
  int v10; // eax
  int v11; // eax
  NiD3DPass *v12; // eax
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-4h]

  (*((void (__thiscall **)(NiTArray_NiD3DPass *))this->_vtbl + 0x20))(this); /*0x7ec8be*/
  v9 = 0; /*0x7ec8c0*/
  value = 0; /*0x7ec8c2*/
  v10 = *((_DWORD *)this + 0x24); /*0x7ec8cc*/
  v16 = 0; /*0x7ec8ce*/
  if ( v10 ) /*0x7ec8d7*/
  {
    v11 = v10 - 1; /*0x7ec8d9*/
    if ( v11 ) /*0x7ec8db*/
    {
      if ( v11 != 1 ) /*0x7ec8df*/
        goto LABEL_9; /*0x7ec8df*/
      v12 = *((NiD3DPass **)this + 0x1C); /*0x7ec8e1*/
    }
    else
    {
      v12 = *((NiD3DPass **)this + 0x2B); /*0x7ec8e6*/
    }
  }
  else
  {
    v12 = *((NiD3DPass **)this + 0x2C); /*0x7ec8ee*/
  }
  if ( v12 ) /*0x7ec8f6*/
  {
    v9 = v12; /*0x7ec8f8*/
    ++v12->RefCount; /*0x7ec8fa*/
    value = v12; /*0x7ec8fd*/
  }
LABEL_9:
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x7ec901*/
  ++*((_DWORD *)this + 0xE); /*0x7ec912*/
  v16 = 0xFFFFFFFF; /*0x7ec91a*/
  if ( v9 ) /*0x7ec91e*/
  {
    if ( v9->RefCount-- == 1 ) /*0x7ec920*/
      NiD3DPass_ReleaseToPool(v9); /*0x7ec927*/
  }
  return 0; /*0x7ec92e*/
}
