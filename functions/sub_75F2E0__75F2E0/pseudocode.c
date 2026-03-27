float *__thiscall sub_75F2E0(void *this, int a2)
{
  float *v2; // eax
  void *v4; // [esp+4h] [ebp-4h] BYREF

  v4 = this;
  (*(void (__thiscall **)(void *, void **))(*(_DWORD *)this + 0xAC))(this, &v4);
  v2 = (float *)FormHeapAlloc(0x18u);
  if ( v2 )
    return sub_6E7FA0(v2, (char)v4);
  else
    return 0;
}
