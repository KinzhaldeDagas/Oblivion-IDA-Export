float *__thiscall sub_6EC4B0(void *this, int a2)
{
  float *v2; // eax
  _DWORD v4[5]; // [esp+4h] [ebp-14h] BYREF

  (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0xA8))(this, v4);
  v2 = (float *)FormHeapAlloc(0x18u);
  v4[1] = v2;
  v4[4] = 0;
  if ( v2 )
    return sub_6E7FA0(v2, v4[0]);
  else
    return 0;
}
