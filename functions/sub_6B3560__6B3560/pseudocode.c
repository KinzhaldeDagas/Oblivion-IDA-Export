int __thiscall sub_6B3560(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // ebp
  int v18; // eax
  int v19; // ecx
  int *v20; // ebp
  unsigned int *v21; // eax
  int v22; // ecx
  bool v23; // cc
  _DWORD *v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // ebp
  int *v29; // esi
  int v30; // edx
  unsigned int *v31; // ecx
  int result; // eax
  unsigned int v33; // [esp+10h] [ebp-1Ch]
  int v34; // [esp+14h] [ebp-18h] BYREF
  int v35; // [esp+18h] [ebp-14h] BYREF
  int v36; // [esp+1Ch] [ebp-10h]
  int v37; // [esp+20h] [ebp-Ch]
  int v38; // [esp+24h] [ebp-8h] BYREF
  int v39; // [esp+28h] [ebp-4h] BYREF
  int v40; // [esp+30h] [ebp+4h]

  v3 = *this;
  v4 = *(_DWORD *)(v3 + 4);
  v5 = 0x48 * a2;
  v6 = *(_DWORD *)(v4 + 0x48 * a2 + 0x2C) + *(this + 0x104A);
  v7 = 0x48 * a2 + v4;
  v40 = v6;
  if ( *(_DWORD *)(v7 + 0x3C) && *(_DWORD *)(*(_DWORD *)(v3 + 4) + v5 + 0x40) == 2 )
  {
    v36 = 0x24;
    v37 = 0x240;
  }
  else
  {
    v8 = *(_DWORD *)(v3 + 4);
    v9 = *(_DWORD *)(v8 + v5 + 0x60);
    v10 = *(_DWORD *)(v8 + v5 + 0x64);
    v11 = 0x25 * *(this + 0x104E);
    v39 = v9;
    v12 = v9 + v10;
    v13 = *(_DWORD *)(4 * (v11 + v9) + 0xB17F5C);
    v14 = *(_DWORD *)(4 * (v11 + v12) + 0xB17F60);
    v36 = v13;
    v37 = v14;
  }
  v15 = 0;
  v16 = 0;
  v33 = 0;
  if ( (*(_DWORD *)(*(_DWORD *)(v3 + 4) + v5 + 0x30) & 0x7FFFFFFF) != 0 )
  {
    v17 = this + 7;
    while ( 1 )
    {
      if ( v15 >= v36 )
        v18 = v15 >= v37
            ? *(_DWORD *)(*(_DWORD *)(*this + 4) + v5 + 0x50)
            : *(_DWORD *)(*(_DWORD *)(*this + 4) + v5 + 0x4C);
      else
        v18 = *(_DWORD *)(*(_DWORD *)(*this + 4) + v5 + 0x48);
      sub_6B32F0(0x28 * v18 + 0xB17A08, &v34, &v35, &v38, &v39, (unsigned int *)*(this + 1));
      v19 = v35;
      *v17 = v34;
      v20 = v17 + 1;
      *v20 = v19;
      v16 += 2;
      v17 = v20 + 1;
      v33 += 2;
      if ( v33 >= 2 * *(_DWORD *)(*(_DWORD *)(*this + 4) + v5 + 0x30) )
        break;
      v15 = v33;
    }
    v6 = v40;
  }
  v21 = (unsigned int *)*(this + 1);
  v37 = 0x28 * *(_DWORD *)(*(_DWORD *)(*this + 4) + v5 + 0x70) + 0xB17F08;
  v22 = v21[1];
  v23 = v22 <= v6;
  if ( v22 < v6 )
  {
    v24 = this + v16 + 7;
    do
    {
      if ( v16 >= 0x240 )
        break;
      sub_6B32F0(v37, &v34, &v35, &v38, &v39, v21);
      v25 = v38;
      v26 = v39;
      v27 = v34;
      v28 = v35;
      *v24 = v38;
      v24[1] = v26;
      v29 = v24 + 1;
      v29[1] = v27;
      v30 = v25 + v28 + v27;
      v29 += 2;
      *v29 = v28;
      v21 = (unsigned int *)*(this + 1);
      *(this + 6) += v26 + v30;
      v22 = v21[1];
      v6 = v40;
      v16 += 4;
      v24 = v29 + 1;
    }
    while ( v22 < v40 );
    v23 = v22 <= v6;
  }
  if ( !v23 )
  {
    sub_6AF7B0((_DWORD *)*(this + 1), v22 - v6);
    v6 = v40;
    v16 -= 4;
  }
  v31 = (unsigned int *)*(this + 1);
  result = v31[1];
  if ( result < v6 )
    result = sub_6AF6F0(v31, v6 - result);
  if ( v16 >= 0x240 )
    *(this + 4) = 0x240;
  else
    *(this + 4) = v16;
  if ( v16 < 0x240 )
  {
    memset(this + v16 + 7, 0, 4 * (0x240 - v16));
    return 0;
  }
  return result;
}
