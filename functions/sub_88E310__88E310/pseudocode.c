int __thiscall sub_88E310(__m128 *this)
{
  float v1; // xmm1_4
  __m128 v3; // xmm2
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  int v6; // eax
  _DWORD *v7; // edi
  bhkRefObject *v8; // eax
  bhkRefObject *v9; // eax
  bhkRefObject *v10; // ebx
  int result; // eax
  int v12; // ecx
  bhkRefObject *v13; // [esp+1Ch] [ebp-144h]
  int v14; // [esp+24h] [ebp-13Ch]
  float v15; // [esp+30h] [ebp-130h] BYREF
  float v16; // [esp+34h] [ebp-12Ch]
  float v17; // [esp+38h] [ebp-128h]
  float v18; // [esp+3Ch] [ebp-124h]
  float v19[4]; // [esp+40h] [ebp-120h] BYREF
  __m128 v20; // [esp+50h] [ebp-110h] BYREF
  float v21[5]; // [esp+60h] [ebp-100h] BYREF
  int v22; // [esp+74h] [ebp-ECh]
  float v23; // [esp+110h] [ebp-50h]
  char v24; // [esp+130h] [ebp-30h]
  int v25; // [esp+15Ch] [ebp-4h]

  v1 = *(float *)&dword_A9631C;
  *(float *)&v14 = flt_B2EFC4;
  v3 = *(this + 7);
  v18 = 0.0;
  v4 = 0;
  v4.m128_f32[0] = v1;
  v5 = *(this + 8);
  v15 = 1.0;
  v16 = 1.0;
  v17 = 1.0;
  v20 = _mm_mul_ps(_mm_sub_ps(v5, v3), _mm_shuffle_ps(v4, v4, 0));
  sub_47DCD0(&v15, &v20);
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x20, 0x24);
  *(_WORD *)(v6 + 4) = 0x20;
  v19[0] = v15;
  v19[1] = v16;
  v25 = 0;
  v19[2] = v17;
  v19[3] = v18;
  v7 = sub_8CDFE0((_DWORD *)v6, v19, v14);
  v25 = 0xFFFFFFFF;
  sub_8A5790(v21);
  v23 = 0.0;
  v25 = 1;
  v24 = 6;
  if ( this != (__m128 *)0xFFFFFFEC )
    v21[0] = *((float *)this + 0xC);
  LODWORD(v21[1]) = v7;
  v8 = (bhkRefObject *)FormHeapAlloc(0x1Cu);
  LOBYTE(v25) = 2;
  if ( v8 )
  {
    v9 = sub_533290(v8, (int)v21);
    v13 = v9;
  }
  else
  {
    v13 = 0;
    v9 = 0;
  }
  v10 = *((bhkRefObject **)this + 0x2C);
  LOBYTE(v25) = 1;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v10->members) )
        v10->__vftable->super.Destructor((NiRefObject *)v10, 1);
      v9 = v13;
    }
    *((_DWORD *)this + 0x2C) = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)&v9->members);
  }
  if ( *((_WORD *)v7 + 2) )
  {
    if ( !--*((_WORD *)v7 + 3) )
      (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1);
  }
  result = v22;
  v25 = 0xFFFFFFFF;
  if ( v22 >= 0 )
  {
    v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v12 )
      v12 = dword_BA7D9C;
    return sub_8A75D0(v12, (_DWORD *)LODWORD(v21[3]), 8 * v22, 0x14);
  }
  return result;
}
