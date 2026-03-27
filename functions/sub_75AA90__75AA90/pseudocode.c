signed int __thiscall sub_75AA90(_WORD *this, int a2, int a3)
{
  unsigned __int16 v3; // bx
  int v4; // edi
  signed int v6; // ebp
  int v7; // edx
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  double v13; // st7
  int v14; // edx
  int v15; // ecx
  float *v16; // eax
  int v17; // edi
  int v18; // ebp
  int v19; // ecx
  bool v20; // c3
  float *v21; // ecx
  signed int result; // eax
  int v23; // [esp+Ch] [ebp-14h]
  int v24; // [esp+10h] [ebp-10h] BYREF
  int v25; // [esp+14h] [ebp-Ch]
  int v26; // [esp+18h] [ebp-8h]
  float i; // [esp+1Ch] [ebp-4h]

  v3 = *(_WORD *)(a3 + 0x48);
  v4 = *(_DWORD *)(a3 + 0x68);
  v23 = v4;
  if ( *(this + 0xC) == 0xFFFF )
    sub_75A870((int)this, *(unsigned __int16 *)(a3 + 8) / 0x14 + 1);
  v6 = v3;
  v7 = v3 / 0x14;
  v8 = (__int16)*(this + 0xC);
  if ( v8 >= v7 + 1 )
    v8 = v7 + 1;
  if ( v8 <= 1 )
    v8 = 1;
  if ( *(_WORD *)(v4 + 0xB6) )
    v9 = **(_DWORD **)(v4 + 0xB0);
  else
    v9 = 0;
  v10 = (unsigned __int16)*(this + 0xD);
  v24 = *(_DWORD *)(v9 + 0x20);
  v25 = *(_DWORD *)(v9 + 0x24);
  v26 = *(_DWORD *)(v9 + 0x28);
  for ( i = *(float *)(v9 + 0x2C); (int)v10 < v6; v10 += v8 )
  {
    if ( *(unsigned __int16 *)(v23 + 0xB6) > v10 )
      v11 = *(_DWORD *)(*(_DWORD *)(v23 + 0xB0) + 4 * v10);
    else
      v11 = 0;
    sub_72A6B0((float *)&v24, (float *)(v11 + 0x20));
  }
  v12 = (_DWORD *)(*((_DWORD *)this + 7) + 0x10 * (unsigned __int16)*(this + 0xD));
  *v12 = v24;
  v12[1] = v25;
  v12[2] = v26;
  *(float *)(0x10 * (unsigned __int16)*(this + 0xD) + *((_DWORD *)this + 7) + 0xC) = i;
  v13 = 0.0;
  v14 = v8;
  if ( v8 < (__int16)*(this + 0xC) )
  {
    v15 = 0x10 * v8;
    do
    {
      v16 = (float *)(v15 + *((_DWORD *)this + 7));
      *v16 = Vector3_InitValue_;
      v16[1] = *(&Vector3_InitValue_ + 1);
      v16[2] = dword_B3F9B0;
      *(float *)(v15 + *((_DWORD *)this + 7) + 0xC) = 0.0;
      ++v14;
      v15 += 0x10;
    }
    while ( v14 < (__int16)*(this + 0xC) );
  }
  if ( v8 > 1 )
  {
    v17 = 0x10;
    v18 = v8 - 1;
    do
    {
      v19 = *((_DWORD *)this + 7);
      v20 = v13 == *(float *)(v19 + v17 + 0xC);
      v21 = (float *)(v17 + v19);
      if ( !v20 )
      {
        sub_72A6B0((float *)&v24, v21);
        v13 = 0.0;
      }
      v17 += 0x10;
      --v18;
    }
    while ( v18 );
  }
  if ( v13 == i )
    i = **(float **)(a3 + 0x4C) * **(float **)(a3 + 0x44);
  *(_DWORD *)(v23 + 0x20) = v24;
  *(_DWORD *)(v23 + 0x24) = v25;
  *(_DWORD *)(v23 + 0x28) = v26;
  *(float *)(v23 + 0x2C) = i;
  result = (unsigned __int16)++*(this + 0xD);
  if ( result >= v8 )
    *(this + 0xD) = 0;
  return result;
}
