signed int __thiscall sub_90C020(unsigned __int8 *this, int a2, signed int *a3, signed int *a4)
{
  int v5; // ecx
  int v6; // ebx
  signed int v7; // esi
  int v8; // edi
  int i; // edi
  int j; // ebx
  int v11; // edi
  unsigned int v12; // eax
  char v13; // dl
  int v14; // ecx
  int v15; // eax
  signed int *v16; // eax
  int v17; // ecx
  int v18; // ecx
  signed int v19; // eax
  signed int *v20; // edx
  char v21; // al
  int v23; // [esp-4h] [ebp-3Ch]
  _DWORD *v24; // [esp+10h] [ebp-28h]
  int v25; // [esp+14h] [ebp-24h]
  int v26; // [esp+18h] [ebp-20h]
  int v27; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD *v28; // [esp+20h] [ebp-18h] BYREF
  int v29; // [esp+24h] [ebp-14h]
  unsigned int v30; // [esp+28h] [ebp-10h]
  _DWORD v31[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v5 = 0x80000000;
  v28 = 0;
  v29 = 0;
  v30 = 0x80000000;
  if ( a2 )
  {
    v31[0] = &a2;
    v31[1] = 1;
    v31[2] = 0x80000001;
    do
    {
      sub_8E6720((const void **)&v28, 0, v31);
      a2 = sub_90D1F0((_DWORD *)a2);
    }
    while ( a2 );
    v5 = v30;
  }
  v6 = *this;
  v7 = 0;
  v8 = 1;
  a2 = 1;
  v26 = v6;
  v25 = 0;
  if ( v29 > 0 )
  {
    while ( 1 )
    {
      v24 = (_DWORD *)v28[v25];
      for ( i = 0; i < sub_88D370(v24); ++i )
      {
        if ( v7 % v6 )
          v7 += v6 - v7 % v6;
        v7 += v6;
        if ( v6 > a2 )
          a2 = v6;
      }
      for ( j = 0; j < sub_90D2C0(v24); ++j )
      {
        v11 = sub_90D2D0(v24, j);
        if ( !v7 )
        {
          if ( v25 )
            v7 = *(this + 3) == 0;
        }
        v12 = sub_90BBB0(v11, *(unsigned __int8 *)(v11 + 0xC), *this);
        v13 = *(_BYTE *)(v11 + 0xC);
        v14 = v12;
        if ( v13 == 0x14
          || v13 == 0x16
          || v13 == 0x1A
          || v13 == 0x1B
          || v13 == 0x1C
          || v13 == 0x13
          && ((v15 = *(unsigned __int8 *)(v11 + 0xD), v15 == 0x14)
           || v15 == 0x16
           || v15 == 0x1A
           || v15 == 0x1B
           || v15 == 0x1C) )
        {
          v14 = *this;
        }
        if ( v14 > a2 )
          a2 = v14;
        if ( v7 % v14 )
          v7 += v14 - v7 % v14;
        v16 = a3;
        *a3 = v7;
        v17 = *(unsigned __int8 *)(v11 + 0xC);
        v23 = *this;
        a3 = v16 + 1;
        v27 = v17;
        v7 += sub_90BC80(this, v11, &v27, v23);
      }
      v18 = v7;
      if ( v7 % a2 )
        v18 = v7 + a2 - v7 % a2;
      v19 = v18;
      if ( !v18 )
        v19 = 1;
      v20 = a4;
      *a4 = v19;
      v21 = *(this + 2);
      a4 = v20 + 1;
      if ( !v21 )
        v7 = v18;
      if ( ++v25 >= v29 )
        break;
      v6 = v26;
    }
    v5 = v30;
    v8 = a2;
  }
  if ( v7 % v8 )
    v7 += v8 - v7 % v8;
  if ( !v7 )
    v7 = 1;
  if ( v5 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      v28,
      4 * v5,
      0x14);
  return v7;
}
