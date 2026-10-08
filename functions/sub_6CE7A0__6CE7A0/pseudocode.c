_DWORD *__thiscall sub_6CE7A0(float *this, _DWORD *a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // bl
  float *v5; // edi
  NiPoint3 *v6; // esi
  float *v7; // ecx
  _BYTE v9[32]; // [esp+Ch] [ebp-20h] BYREF

  if ( *((_BYTE *)this + 0xE) == 1 ) /*0x6ce7b3*/
  {
    v4 = *((_BYTE *)this + 0xF); /*0x6ce7b6*/
    if ( a3 == v4 ) /*0x6ce7bd*/
    {
      v5 = this + 0xC; /*0x6ce7c0*/
      if ( !NiTransform_IsInvalid(this + 0xC) ) /*0x6ce7c5*/
      {
        v6 = (NiPoint3 *)(0x68 * v4 + *((_DWORD *)this + 0x14) + 4); /*0x6ce7d7*/
        if ( !NiTransform_IsInvalid(&v6->x) ) /*0x6ce7dd*/
          qmemcpy(v5, sub_6CB640(this + 0xC, (int)v9, v6), 0x20u); /*0x6ce7fa*/
      }
    }
  }
  sub_6CC6E0(this, a2, a3); /*0x6ce80a*/
  if ( *((_BYTE *)this + 0xE) == 1 ) /*0x6ce813*/
  {
    if ( *a2 ) /*0x6ce815*/
    {
      v7 = (float *)(*((_DWORD *)this + 0x14) + 0x68 * *((unsigned __int8 *)this + 0xF)); /*0x6ce821*/
      *((_BYTE *)this + 0x54) = 1; /*0x6ce824*/
      sub_6C3500(v7); /*0x6ce828*/
    }
  }
  return a2; /*0x6ce82f*/
}
