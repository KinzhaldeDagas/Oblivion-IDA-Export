_DWORD *__thiscall sub_6AB130(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x6ab130*/
  v2 = (_DWORD *)*(this + 0xC0); /*0x6ab135*/
  v4 = 0; /*0x6ab140*/
  NiTMap_GetAt(v2, a2, &v4); /*0x6ab148*/
  return v4; /*0x6ab151*/
}
