int __thiscall sub_7530C0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  NiTransform v6; // [esp+4h] [ebp-D0h] BYREF
  NiTransform v7; // [esp+38h] [ebp-9Ch] BYREF
  NiTransform v8; // [esp+6Ch] [ebp-68h] BYREF
  float v9[13]; // [esp+A0h] [ebp-34h] BYREF

  v4 = *(this + 0x14);
  if ( v4 )
  {
    qmemcpy(&v7, (const void *)(v4 + 0x64), sizeof(v7));
    qmemcpy(v9, (const void *)(*(this + 4) + 0x64), sizeof(v9));
    sub_718A80(v9, &v8);
    sub_53D7A0(&v8, &v6, &v7);
    return (*(int (__thiscall **)(_DWORD *, NiTransform *, int, int))(*this + 0x68))(this, &v6, a2, a3);
  }
  else
  {
    sub_718A50((float *)&v6);
    return (*(int (__thiscall **)(_DWORD *, NiTransform *, int, int))(*this + 0x68))(this, &v6, a2, a3);
  }
}
