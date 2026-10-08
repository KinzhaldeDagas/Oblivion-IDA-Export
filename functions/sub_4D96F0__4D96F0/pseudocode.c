int __thiscall sub_4D96F0(_DWORD *this, _DWORD *a1, char *a2)
{
  int v4; // eax
  int result; // eax
  char v6[64]; // [esp+Ch] [ebp-44h] BYREF

  if ( *(this + 7) /*0x4d9738*/
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this) + 4) == 0x24
    && (v4 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this)) != 0
    && *(_BYTE *)(v4 + 0x104) == 4 )
  {
    strcpy(v6, a2); /*0x4d973e*/
  }
  else
  {
    result = NiObjectNET_LookupObjectByName(a1, a2); /*0x4d9757*/
    if ( result ) /*0x4d9761*/
      return result; /*0x4d9761*/
    strcpy(v6, a2); /*0x4d9767*/
  }
  v6[4] = 0x32; /*0x4d9782*/
  return NiObjectNET_LookupObjectByName(a1, v6); /*0x4d978f*/
}
