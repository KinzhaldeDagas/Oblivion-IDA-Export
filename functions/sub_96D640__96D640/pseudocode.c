float *__cdecl sub_96D640(signed int a1)
{
  float *v1; // eax
  float v3; // [esp+8h] [ebp-30h] BYREF
  _BYTE v4[4]; // [esp+Ch] [ebp-2Ch] BYREF
  _BYTE v5[4]; // [esp+10h] [ebp-28h] BYREF
  char v6[12]; // [esp+14h] [ebp-24h] BYREF
  char v7[12]; // [esp+20h] [ebp-18h] BYREF
  char v8[12]; // [esp+2Ch] [ebp-Ch] BYREF

  sub_709430(v6, a1);
  sub_709430(v7, a1);
  sub_709430(v8, a1);
  sub_6BE9D0(a1, (int)v4);
  sub_6BE9D0(a1, (int)v5);
  sub_6BE9D0(a1, (int)&v3);
  v1 = (float *)FormHeapAlloc(0x14u);
  if ( v1 )
    return sub_96C420(v1, v3, (int)v6);
  else
    return 0;
}
