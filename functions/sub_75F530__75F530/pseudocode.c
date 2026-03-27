float *__thiscall sub_75F530(void *this, int a2)
{
  float *v2; // eax
  float v4; // [esp+8h] [ebp-4h] BYREF

  v4 = *(float *)&this;
  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0xAC))(this, &v4);
  v2 = (float *)FormHeapAlloc(0x18u);
  if ( v2 )
    return sub_6D29E0(v2, v4);
  else
    return 0;
}
