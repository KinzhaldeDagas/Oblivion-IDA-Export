void __thiscall sub_8A4E30(int *this, int *a2, int a3)
{
  int (__thiscall *v4)(int *, char *); // edx
  int v5; // edi
  __m128 *v6; // ecx
  int *v7; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int *v14; // eax
  bool v15; // bl
  float v16; // esi
  int *v17; // eax
  int v18; // ecx
  int (__thiscall *v19)(int, int); // eax
  volatile LONG *v20; // edi
  void (__thiscall ***v21)(_DWORD, int); // esi
  int v22; // [esp+1Ch] [ebp-1Ch] BYREF
  int v23; // [esp+20h] [ebp-18h]
  float v24; // [esp+24h] [ebp-14h] BYREF
  int v25; // [esp+28h] [ebp-10h] BYREF
  unsigned int v26; // [esp+34h] [ebp-4h]

  v4 = *(int (__thiscall **)(int *, char *))(*this + 0x74);
  v23 = 0;
  v5 = a3;
  v6 = (__m128 *)v4(this, (char *)&v22 + 3);
  if ( v6 )
  {
    v24 = *(float *)(a3 + 0x10);
    if ( v24 != 1.0 )
      sub_8A2D60(v6, v24);
  }
  sub_89F5D0(this, (int)a2, (_DWORD **)a3);
  v7 = this + 4;
  a2[6] = (*(this + 6) | a2[6]) & 0xFFFFFFC7;
  v8 = *(this + 2);
  if ( !v8 || v8 == 0xFFFFFFEC )
    LOWORD(v9) = 0;
  else
    v9 = *(_DWORD *)(v8 + 0x30);
  if ( (v9 & 0x2000) != 0 || 1.0 != *(float *)(a3 + 0x10) )
  {
    v10 = a2[2];
    if ( !v10 || v10 == 0xFFFFFFEC )
      v11 = 0;
    else
      v11 = *(_DWORD *)(v10 + 0x30);
    v12 = v11 | 0x2000;
    if ( v10 )
    {
      v13 = v10 + 0x14;
      if ( v13 )
        *(_DWORD *)(v13 + 0x1C) = v12;
    }
    (*(void (__thiscall **)(int *))(*a2 + 0x80))(a2);
  }
  while ( 1 )
  {
    v15 = 0;
    if ( v7 )
    {
      v14 = sub_677C70(v7, (int *)&v24);
      v23 |= 1u;
      if ( *v14 )
        v15 = 1;
    }
    if ( (v23 & 1) != 0 )
    {
      v16 = v24;
      v23 &= ~1u;
      if ( v24 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v24) + 4)) && v16 != 0.0 )
        (**(void (__thiscall ***)(_DWORD, int))LODWORD(v16))(LODWORD(v16), 1);
    }
    if ( !v15 )
      break;
    v17 = sub_677C70(v7, &v25);
    v18 = *v17;
    v19 = *(int (__thiscall **)(int, int))(*(_DWORD *)*v17 + 0x18);
    v26 = 0;
    v20 = (volatile LONG *)v19(v18, v5);
    v26 = 0xFFFFFFFF;
    if ( v25 )
    {
      v21 = (void (__thiscall ***)(_DWORD, int))v25;
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) )
        (**v21)(v21, 1);
    }
    sub_8A46C0(a2, v20);
    v7 = (int *)v7[1];
    v5 = a3;
  }
}
