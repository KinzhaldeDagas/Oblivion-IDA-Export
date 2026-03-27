__m128 *__thiscall sub_94E860(_DWORD *this, int a2, int *a3, int a4)
{
  __m128 *v4; // ebx
  __m128 *result; // eax
  int *v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // [esp+14h] [ebp-100h] BYREF
  int v14; // [esp+18h] [ebp-FCh]
  int v15; // [esp+1Ch] [ebp-F8h]
  _DWORD v16[5]; // [esp+20h] [ebp-F4h] BYREF
  __m128 v17; // [esp+34h] [ebp-E0h] BYREF
  __m128 v18; // [esp+44h] [ebp-D0h] BYREF
  __m128 v19[3]; // [esp+54h] [ebp-C0h] BYREF
  __int128 v20; // [esp+84h] [ebp-90h]
  __m128 v21[4]; // [esp+94h] [ebp-80h] BYREF
  _OWORD v22[4]; // [esp+D4h] [ebp-40h] BYREF

  v4 = *(__m128 **)(a2 + 0xC);
  sub_958600(this + 0x30, (int)a3);
  sub_94D100(this, a2, v19, v22);
  *((__int128 *)this + 5) = v20;
  sub_928570(v4, (__m128 *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x10) + 0x50) + 0x10), (__m128 *)this + 4);
  sub_94CF80(this, a4);
  sub_94CF30(this, a4);
  result = (__m128 *)v4->m128_i32[3];
  if ( result )
  {
    result = sub_8B1F70(v21, v19, v4 + 6);
    v7 = (int *)v4->m128_i32[3];
    if ( v7 )
    {
      v8 = *v7;
      v13 = 0;
      v14 = 0;
      v15 = 0x80000000;
      (*(void (__thiscall **)(int *, _DWORD **))(v8 + 0x28))(v7, &v13);
      if ( v14 > 1 )
      {
        v9 = 4;
        v16[0] = v14 - 1;
        do
        {
          *(_OWORD *)&v16[1] = *(_OWORD *)&v13[v9];
          sub_88FCC0(&v18, v21, (__m128 *)&v16[1]);
          *(_OWORD *)&v16[1] = *(_OWORD *)&v13[v9 - 4];
          sub_88FCC0(&v17, v21, (__m128 *)&v16[1]);
          v10 = *a3;
          v11 = sub_8AEBB0(0.0, 0.25, 1.0, 1.0);
          (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(v10 + 0x1C))(a3, &v18, &v17, v11, a4);
          v9 += 4;
          --v16[0];
        }
        while ( v16[0] );
      }
      result = (__m128 *)v15;
      if ( v15 >= 0 )
      {
        v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
        if ( !v12 )
          v12 = dword_BA7D9C;
        return (__m128 *)sub_8A75D0(v12, v13, 0x10 * v15, 0x14);
      }
    }
  }
  return result;
}
