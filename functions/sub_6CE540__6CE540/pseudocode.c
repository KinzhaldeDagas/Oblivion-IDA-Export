unsigned __int8 __thiscall sub_6CE540(_BYTE *this, int a2, float a3, float a4, float a5)
{
  unsigned __int8 v6; // al
  unsigned __int8 v7; // bl
  char v8; // al
  NiPoint3 *v10; // esi
  unsigned __int8 v11; // [esp+17h] [ebp-21h]
  _BYTE v12[32]; // [esp+18h] [ebp-20h] BYREF

  v11 = *(this + 0xF); /*0x6ce566*/
  v6 = sub_6CC5C0(this, a2, a3, a4, a5); /*0x6ce56a*/
  v7 = v6; /*0x6ce56f*/
  if ( v6 != byte_A79EFC ) /*0x6ce577*/
  {
    sub_6C3500((float *)(*((_DWORD *)this + 0x14) + 0x68 * v6)); /*0x6ce582*/
    v8 = *(this + 0xE); /*0x6ce587*/
    if ( v8 == 1 ) /*0x6ce58c*/
    {
      *(this + 0x54) = 1; /*0x6ce58e*/
      return v7; /*0x6ce598*/
    }
    if ( v8 == 2 ) /*0x6ce59d*/
    {
      if ( !NiTransform_IsInvalid((float *)this + 0xC) ) /*0x6ce5a5*/
      {
        v10 = (NiPoint3 *)(0x68 * v11 + *((_DWORD *)this + 0x14) + 4); /*0x6ce5ba*/
        if ( !NiTransform_IsInvalid(&v10->x) ) /*0x6ce5c0*/
          qmemcpy(this + 0x30, sub_6CB640((float *)this + 0xC, (int)v12, v10), 0x20u); /*0x6ce5dd*/
      }
      sub_6C3500((float *)(*((_DWORD *)this + 0x14) + 0x68 * v11)); /*0x6ce5eb*/
    }
  }
  return v7; /*0x6ce595*/
}
