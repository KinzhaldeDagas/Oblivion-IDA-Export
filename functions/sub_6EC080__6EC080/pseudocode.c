float *__thiscall sub_6EC080(void *this, int a2)
{
  float *v2; // eax
  float v4[5]; // [esp+Ch] [ebp-14h] BYREF

  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0xA8))(this, v4); /*0x6ec0b0*/
  v2 = (float *)FormHeapAlloc(0x18u); /*0x6ec0b4*/
  LODWORD(v4[1]) = v2; /*0x6ec0bc*/
  v4[4] = 0.0; /*0x6ec0c2*/
  if ( v2 ) /*0x6ec0ca*/
    return sub_6D29E0(v2, v4[0]); /*0x6ec0d6*/
  else
    return 0; /*0x6ec0ed*/
}
