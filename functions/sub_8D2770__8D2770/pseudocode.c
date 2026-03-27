bhkRefObject *__cdecl sub_8D2770(int *a1)
{
  bhkRefObject *v1; // esi
  bool v2; // zf
  bhkRefObject *v3; // eax
  int v5[2]; // [esp+8h] [ebp-2Ch] BYREF
  int v6[3]; // [esp+10h] [ebp-24h] BYREF
  _DWORD v7[3]; // [esp+1Ch] [ebp-18h] BYREF
  unsigned int v8; // [esp+30h] [ebp-4h]

  v1 = 0;
  v5[0] = 0;
  v6[0] = 0;
  v6[1] = 0;
  v6[2] = 0x80000000;
  v7[0] = 0;
  v7[1] = 0;
  v7[2] = 0x80000000;
  *(float *)&v5[1] = flt_B2EFC4;
  v2 = a1[1] == 0;
  v8 = 0;
  if ( !v2 )
  {
    sub_917820(a1, (int)v7, v6);
    v3 = (bhkRefObject *)FormHeapAlloc(0x14u);
    LOBYTE(v8) = 1;
    if ( v3 )
      v1 = sub_8D26C0(v3, (float *)v5);
  }
  v8 = 0xFFFFFFFF;
  sub_8C8DB0(v5);
  return v1;
}
