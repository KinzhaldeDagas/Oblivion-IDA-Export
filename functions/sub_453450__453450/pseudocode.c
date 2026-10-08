bool __thiscall sub_453450(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x453450*/
  v2 = (_DWORD *)*this; /*0x453455*/
  v4 = 0; /*0x45345c*/
  NiTMap_GetAt(v2, a2, &v4); /*0x453464*/
  return v4 != 0; /*0x453471*/
}
