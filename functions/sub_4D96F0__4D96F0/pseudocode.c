int __thiscall sub_4D96F0(_DWORD *this, _DWORD *a1, char *a2)
{
  int v4; // eax
  int result; // eax
  char v6[64]; // [esp+Ch] [ebp-44h] BYREF

  if ( *(this + 7)
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this) + 4) == 0x24
    && (v4 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this)) != 0
    && *(_BYTE *)(v4 + 0x104) == 4 )
  {
    strcpy(v6, a2);
  }
  else
  {
    result = NiObjectNET_LookupObjectByName(a1, a2);
    if ( result )
      return result;
    strcpy(v6, a2);
  }
  v6[4] = 0x32;
  return NiObjectNET_LookupObjectByName(a1, v6);
}
