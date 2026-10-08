float *__thiscall sub_6ECAB0(void *this, int a2)
{
  float *v2; // eax
  int v4[6]; // [esp+8h] [ebp-18h] BYREF

  (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this + 0xA8))(this, v4); /*0x6ecae0*/
  v2 = (float *)FormHeapAlloc(0x20u); /*0x6ecae4*/
  v4[5] = 0; /*0x6ecaf2*/
  if ( v2 ) /*0x6ecafa*/
    return sub_6DA240(v2, v4[0], v4[1], v4[2]); /*0x6ecb17*/
  else
    return 0; /*0x6ecb2e*/
}
