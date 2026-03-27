int __thiscall Actor_ModBaseAVf(_BYTE *this, int a2, float a3)
{
  int v4; // edi
  int v5; // ebx
  int result; // eax
  float *ContainerChanges; // eax

  v4 = 0;
  v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x190))(this) )
      v4 = v5;
  }
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 0x138))(v4, a2, LODWORD(a3));
  result = a2 - 0xC;
  if ( (unsigned int)(a2 - 0xC) <= 0x14 && (a2 == 0x12 || a2 == 0x1B) )
  {
    ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44));
    if ( ContainerChanges )
      sub_484310(ContainerChanges);
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x2C0))(this);
  }
  return result;
}
