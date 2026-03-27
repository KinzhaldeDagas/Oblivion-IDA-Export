float *__thiscall sub_6EC080(void *this, int a2)
{
  float *v2; // eax
  float v4[5]; // [esp+Ch] [ebp-14h] BYREF

  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0xA8))(this, v4);
  v2 = (float *)FormHeapAlloc(0x18u);
  LODWORD(v4[1]) = v2;
  v4[4] = 0.0;
  if ( v2 )
    return sub_6D29E0(v2, v4[0]);
  else
    return 0;
}
