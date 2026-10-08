int __thiscall Actor_ModBaseAVf(_BYTE *this, int a2, float a3)
{
  int v4; // edi
  int v5; // ebx
  int result; // eax
  float *ContainerChanges; // eax

  v4 = 0; /*0x5e2d5d*/
  v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this); /*0x5e2d61*/
  if ( v5 ) /*0x5e2d65*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e2d71*/
      v4 = v5; /*0x5e2d77*/
  }
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 0x138))(v4, a2, LODWORD(a3)); /*0x5e2d90*/
  result = a2 - 0xC; /*0x5e2d92*/
  if ( (unsigned int)(a2 - 0xC) <= 0x14 && (a2 == 0x12 || a2 == 0x1B) ) /*0x5e2da2*/
  {
    ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44)); /*0x5e2da7*/
    if ( ContainerChanges ) /*0x5e2dae*/
      sub_484310(ContainerChanges); /*0x5e2db2*/
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x2C0))(this); /*0x5e2dc1*/
  }
  return result; /*0x5e2dc3*/
}
