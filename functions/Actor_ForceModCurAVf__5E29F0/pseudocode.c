int __thiscall Actor_ForceModCurAVf(_BYTE *this, int a2, int a3, int a4)
{
  int result; // eax
  float *ContainerChanges; // eax

  if ( a2 != 0xA
    || *(float *)&a3 >= 0.0
    || (result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x278))(this), (_BYTE)result) )
  {
    AVCollection_ModAVLimited((_DWORD *)this + 0x22, a2, a3, 1);
    if ( a2 == 8 && *(float *)&a3 < 0.0 )
      (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 0x3B8))(this, a4, a3);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x40))(this, 0x200000);
    result = a2 - 0xC;
    if ( (unsigned int)(a2 - 0xC) <= 0x14 && (a2 == 0x12 || a2 == 0x1B) )
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44));
      if ( ContainerChanges )
        sub_484310(ContainerChanges);
      return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x2C0))(this);
    }
  }
  return result;
}
