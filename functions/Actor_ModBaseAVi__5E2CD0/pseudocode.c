int __thiscall Actor_ModBaseAVi(_BYTE *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  int result; // eax
  float *ContainerChanges; // eax

  v4 = 0; /*0x5e2cdd*/
  v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this); /*0x5e2ce1*/
  if ( v5 ) /*0x5e2ce5*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e2cf1*/
      v4 = v5; /*0x5e2cf7*/
  }
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 0x13C))(v4, a2, a3); /*0x5e2d0d*/
  result = a2 - 0xC; /*0x5e2d0f*/
  if ( (unsigned int)(a2 - 0xC) <= 0x14 && (a2 == 0x12 || a2 == 0x1B) ) /*0x5e2d1f*/
  {
    ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44)); /*0x5e2d24*/
    if ( ContainerChanges ) /*0x5e2d2b*/
      sub_484310(ContainerChanges); /*0x5e2d2f*/
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x2C0))(this); /*0x5e2d3e*/
  }
  return result; /*0x5e2d40*/
}
