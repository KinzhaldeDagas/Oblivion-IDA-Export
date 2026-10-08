BOOL __thiscall sub_6ACA40(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x6aca40*/
  v2 = (_DWORD *)*(this + 0xC0); /*0x6aca45*/
  v4 = 0; /*0x6aca50*/
  NiTMap_GetAt(v2, a2, &v4); /*0x6aca58*/
  return v4 != 0; /*0x6aca66*/
}
