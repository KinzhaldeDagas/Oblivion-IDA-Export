void __cdecl sub_9313E0(int a1, int a2, int a3, __int16 a4, int a5, float *a6, float *a7, float **a8, float **a9)
{
  int v10; // eax
  unsigned __int16 *v11; // edi
  float *v12; // edx
  float *v13; // ecx
  float *v14; // eax
  int v15; // [esp+4h] [ebp-1Ch] BYREF
  int v16; // [esp+8h] [ebp-18h]
  int v17; // [esp+Ch] [ebp-14h]
  _DWORD v18[4]; // [esp+10h] [ebp-10h] BYREF
  float v19; // [esp+40h] [ebp+20h]

  if ( a8[1] == (float *)1 && a9[1] == (float *)1 )
  {
    v10 = *(_DWORD *)(a5 + 8);
    v11 = *(unsigned __int16 **)a5;
    if ( v10 )
    {
      if ( a4 != (__int16)0xFFFF && **(_WORD **)(v10 + 4) == a4 )
        v11 = *(unsigned __int16 **)(a5 + 4);
    }
    v12 = *a8;
    v13 = *a9;
    if ( fabs((*a8)[1] - (*a9)[1]) < *(float *)(a1 + 0xC) )
    {
      v16 = 0;
      v17 = 0x80000002;
      v15 = (int)v18;
      v19 = v13[1];
      *(float *)v18 = *v12;
      *(float *)&v18[1] = v12[1];
      v16 = 1;
      *(float *)&v18[2] = *v13;
      *(float *)&v18[3] = v13[1];
      v16 = 2;
      sub_92EC70(a2, a1, v19, a3, v11, a6, a7, &v15);
      v14 = *a8;
      if ( *(_DWORD *)v15 != *(_DWORD *)*a8 )
        v14 = *a9;
      v14[1] = v14[1] * flt_A3D65C;
      if ( v17 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          (_DWORD *)v15,
          8 * v17,
          0x14);
    }
  }
}
