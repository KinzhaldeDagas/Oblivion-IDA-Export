int __thiscall sub_89BAE0(int *this, int a2)
{
  int *v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // ebp
  bool v10; // cc
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // ecx
  _DWORD *v14; // esi
  int v15; // eax
  _DWORD *v16; // edx
  int v17; // eax
  int v19; // ecx
  int *v20[2]; // [esp+8h] [ebp-24h] BYREF
  char *v21; // [esp+10h] [ebp-1Ch] BYREF
  int v22; // [esp+14h] [ebp-18h]
  int v23; // [esp+18h] [ebp-14h]
  char v24; // [esp+1Ch] [ebp-10h] BYREF

  v2 = this;
  v3 = *(this + 0x22);
  v4 = 0;
  v20[0] = this;
  if ( v3 )
  {
    v5 = *(this + 0x20);
    LOBYTE(v20[0]) = 0xA;
    v20[1] = (int *)a2;
    sub_8D8830(v5, (int)v20);
    return 0;
  }
  else
  {
    v7 = a2;
    if ( *(_WORD *)(a2 + 4) )
      ++*(_WORD *)(a2 + 6);
    ++*(this + 0x22);
    v8 = *(_DWORD *)a2;
    v21 = &v24;
    v22 = 0;
    v23 = 0x80000004;
    (*(void (__thiscall **)(int, char **))(v8 + 0xC))(a2, &v21);
    v9 = 0;
    v10 = v22 <= 0;
    *(_DWORD *)(a2 + 8) = v2;
    if ( v10 )
      goto LABEL_22;
    do
    {
      v11 = *(_DWORD **)&v21[4 * v4];
      v12 = v11[0x15];
      v13 = v11[0x2F];
      v14 = v11 + 0x2E;
      v15 = 0;
      if ( v13 <= 0 )
        goto LABEL_10;
      v16 = (_DWORD *)*v14;
      while ( *v16 )
      {
        ++v15;
        ++v16;
        if ( v15 >= v13 )
          goto LABEL_10;
      }
      if ( v15 < 0 )
      {
LABEL_10:
        if ( v14[1] == (v14[2] & 0x3FFFFFFF) )
          sub_8A6EE0((int)v14, 4);
        *(_DWORD *)(*v14 + 4 * v14[1]++) = a2;
      }
      else
      {
        *(_DWORD *)(*v14 + 4 * v15) = a2;
      }
      if ( *(_WORD *)(v12 + 0x20) != 0xFFFF )
      {
        if ( v9 )
        {
          if ( *(_DWORD *)(v9 + 0x54) != *(_DWORD *)(*(_DWORD *)&v21[4 * v4] + 0x54) )
            sub_8CD320(v20[0], v9, *(_DWORD *)&v21[4 * v4]);
        }
        else
        {
          v9 = *(_DWORD *)&v21[4 * v4];
          sub_8DE080((_DWORD *)v12, a2);
        }
      }
      v17 = v22;
      ++v4;
    }
    while ( v4 < v22 );
    v7 = a2;
    v2 = v20[0];
    if ( !v9 )
LABEL_22:
      v17 = sub_8DE080(*(_DWORD **)(*(_DWORD *)v21 + 0x54), v7);
    if ( v2[0x22]-- == 1 )
    {
      v17 = v2[0x21];
      if ( v17 )
      {
        LOBYTE(v17) = *((_BYTE *)v2 + 0x90);
        if ( !(_BYTE)v17 )
          v17 = sub_899210((int)v2);
      }
    }
    sub_8DC260(v17, (int)v2, v7);
    if ( v23 >= 0 )
    {
      v19 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v19 )
        v19 = dword_BA7D9C;
      sub_8A75D0(v19, v21, 4 * v23, 0x14);
    }
    return v7;
  }
}
