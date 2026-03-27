float *__thiscall sub_78DC10(void *this)
{
  float *v2; // ecx
  _DWORD v4[22]; // [esp+0h] [ebp-64h] BYREF
  int v5; // [esp+60h] [ebp-4h]

  v4[0x15] = v4;
  v4[0x14] = 0;
  v5 = 0;
  v2 = (float *)FormHeapAlloc(0xA0u);
  v4[0x13] = v2;
  LOBYTE(v5) = 1;
  if ( v2 )
    return sub_78D9E0(v2, (int)this);
  else
    return 0;
}
