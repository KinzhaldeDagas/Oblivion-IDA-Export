int __thiscall sub_9105F0(_DWORD **this, int a2, int *a3)
{
  int v3; // ebx
  int v5; // edi
  long double v6; // st7
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // eax
  double v10; // st6
  double v11; // st6
  void (__thiscall ***v12)(_DWORD, int *); // ecx
  int v13; // eax
  int result; // eax
  _DWORD **v15; // [esp-8h] [ebp-24h]
  int v16; // [esp+10h] [ebp-Ch] BYREF
  float v17; // [esp+14h] [ebp-8h]
  char v18; // [esp+18h] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 0x28);
  v15 = this;
  LOBYTE(v15) = 1;
  (*(void (__thiscall **)(_DWORD, _DWORD **, int *))(**(this + 3) + 0x10))(*(this + 3), v15, &v16);
  v5 = LODWORD(v17);
  if ( *((_BYTE *)this + 0x18) )
    goto LABEL_12;
  v6 = *(float *)&SrcStr;
  v7 = 0;
  if ( SLODWORD(v17) >= 4 )
  {
    v8 = ((unsigned int)(LODWORD(v17) - 4) >> 2) + 1;
    v9 = v3 + 0x10;
    v7 = 4 * v8;
    do
    {
      v10 = *(float *)(v9 - 0x10);
      v9 += 0x20;
      --v8;
      v6 = v6
         + v10 * v10
         + *(float *)(v9 - 0x28) * *(float *)(v9 - 0x28)
         + *(float *)(v9 - 0x20) * *(float *)(v9 - 0x20)
         + *(float *)(v9 - 0x18) * *(float *)(v9 - 0x18);
    }
    while ( v8 );
  }
  for ( ; v7 < SLODWORD(v17); v6 = v6 + v11 * v11 )
    v11 = *(float *)(v3 + 8 * v7++);
  if ( v6 > *((float *)this + 5) * *((float *)this + 5) )
  {
    *((_BYTE *)this + 0x18) = 1;
    v12 = (void (__thiscall ***)(_DWORD, int *))*(this + 7);
    if ( v12 )
    {
      v13 = *(_DWORD *)(a2 + 0x24);
      v18 = *((_BYTE *)this + 0x19);
      v16 = v13;
      v17 = sqrt(v6);
      (**v12)(v12, &v16);
    }
  }
  if ( *((_BYTE *)this + 0x18) )
  {
LABEL_12:
    sub_8F0F70(a2, a3, 0, 8);
    if ( *((_BYTE *)this + 0x19) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a2 + 0x24) + 8) + 8))(
        *(_DWORD *)(*(_DWORD *)(a2 + 0x24) + 8),
        *(_DWORD *)(a2 + 0x24));
      *((_BYTE *)this + 0x18) = *((_BYTE *)this + 0x1A);
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int, int *))(**(this + 3) + 0x1C))(*(this + 3), a2, a3);
  }
  for ( result = 0; result < v5; ++result )
    *(_DWORD *)(v3 + 8 * result) = 0;
  return result;
}
