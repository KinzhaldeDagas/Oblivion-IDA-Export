_DWORD *__thiscall sub_8E14E0(int *this, _DWORD *a2, const void **a3)
{
  int v4; // ebx
  int v5; // eax
  _DWORD *v6; // ecx
  unsigned int *v7; // edi
  unsigned int v8; // eax
  int v9; // ebp
  _DWORD *result; // eax
  unsigned int v11; // ecx
  unsigned int v13; // ebx
  _DWORD *v14; // esi
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // ecx
  bool v18; // cf
  _DWORD *v19; // ecx
  bool v20; // zf
  _DWORD *v21; // [esp+10h] [ebp-18h]
  unsigned int *v22; // [esp+14h] [ebp-14h]
  int v23; // [esp+18h] [ebp-10h]
  int v24; // [esp+1Ch] [ebp-Ch]
  unsigned int v25; // [esp+20h] [ebp-8h]
  int v26; // [esp+24h] [ebp-4h]
  int v27; // [esp+30h] [ebp+8h]

  v4 = *(this + 0x11);
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v6 = *(_DWORD **)(v5 + 0x19C);
  v26 = v5;
  v7 = (unsigned int *)v6[8];
  v8 = (4 * (v4 >> 5) + 0x30) & 0xFFFFFFF0;
  if ( (unsigned int)v7 + v8 > v6[0xB] )
  {
    v23 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v6 + 0xC))(v6, (4 * (v4 >> 5) + 0x30) & 0xFFFFFFF0);
    v7 = (unsigned int *)v23;
  }
  else
  {
    v6[8] = (char *)v7 + v8;
    v23 = (int)v7;
  }
  v9 = *(this + 0x10) + 0x10 * *a2;
  v22 = v7;
  v24 = v9;
  result = (_DWORD *)sub_8E0E90(
                       this,
                       v4,
                       *(unsigned __int16 *)(*(this + 0x13) + 4 * *(unsigned __int16 *)(v9 + 8)),
                       v9,
                       *a2,
                       v7);
  v21 = (_DWORD *)*(this + 0x10);
  v11 = (unsigned int)&v7[(*(this + 0x11) >> 5) + 1];
  v25 = v11;
  if ( (unsigned int)v7 < v11 )
  {
    do
    {
      v13 = *v22;
      v14 = v21;
      if ( *v22 )
      {
        do
        {
          if ( (_BYTE)v13 )
          {
            if ( (v13 & 1) != 0 && (((v14[1] - *(_DWORD *)v9) | (*(_DWORD *)(v9 + 4) - *v14)) & 0x80008000) == 0 )
            {
              v15 = v14[3];
              v27 = v15;
              if ( (v15 & 1) == 0 )
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
                {
                  sub_8A6EE0(a3, 8);
                  v15 = v27;
                }
                v16 = (int)a3[1];
                v17 = *a3;
                v17[2 * v16] = a2;
                v9 = v24;
                v17[2 * v16 + 1] = v15;
                a3[1] = (char *)a3[1] + 1;
              }
            }
            v14 += 4;
            v13 >>= 1;
          }
          else
          {
            v14 += 0x20;
            v13 >>= 8;
          }
        }
        while ( v13 );
        v11 = v25;
      }
      result = v22 + 1;
      v18 = (unsigned int)(v22 + 1) < v11;
      v21 += 0x80;
      ++v22;
    }
    while ( v18 );
    v7 = (unsigned int *)v23;
  }
  v19 = *(_DWORD **)(v26 + 0x19C);
  v20 = v7 == (unsigned int *)v19[0xA];
  v19[8] = v7;
  if ( v20 )
    return (_DWORD *)(*(unsigned int (__thiscall **)(_DWORD *, unsigned int *))(*v19 + 0x10))(v19, v7);
  return result;
}
