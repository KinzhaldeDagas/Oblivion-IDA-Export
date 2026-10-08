int __thiscall sub_7530C0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  NiTransform out; // [esp+4h] [ebp-D0h] BYREF
  NiTransform local; // [esp+38h] [ebp-9Ch] BYREF
  NiTransform parent; // [esp+6Ch] [ebp-68h] BYREF
  float v9[13]; // [esp+A0h] [ebp-34h] BYREF

  v4 = *(this + 0x14); /*0x7530c9*/
  if ( v4 ) /*0x7530ce*/
  {
    qmemcpy(&local, (const void *)(v4 + 0x64), sizeof(local)); /*0x7530de*/
    qmemcpy(v9, (const void *)(*(this + 4) + 0x64), sizeof(v9)); /*0x7530f6*/
    sub_718A80(v9, &parent); /*0x753100*/
    NiTransform_Compose(&parent, &out, &local); /*0x753113*/
    return (*(int (__thiscall **)(_DWORD *, NiTransform *, int, int))(*this + 0x68))(this, &out, a2, a3); /*0x753134*/
  }
  else
  {
    sub_718A50((float *)&out); /*0x753146*/
    return (*(int (__thiscall **)(_DWORD *, NiTransform *, int, int))(*this + 0x68))(this, &out, a2, a3); /*0x753167*/
  }
}
