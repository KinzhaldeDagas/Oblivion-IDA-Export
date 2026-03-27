char __thiscall GameSettingCollection_LoadExistingSetting(_BYTE *this, int a2, int a3)
{
  int v3; // eax
  char v5; // bl
  int v7; // [esp-8h] [ebp-10h]

  v3 = a2;
  v5 = 0;
  v7 = a3;
  *(this + 4) = 0;
  *((_DWORD *)this + 0x42) = v3;
  a2 = 0;
  NiTMap_GetAt((_DWORD *)this + 0x43, v7, &a2);
  if ( a2 )
    v5 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10))(this, a2);
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x18))(this);
  return v5;
}
