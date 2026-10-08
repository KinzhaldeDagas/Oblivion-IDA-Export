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
  const void *v16; // edx
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

  v4 = *(this + 0x11); /*0x8e14ed*/
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e14f7*/
  v6 = *(_DWORD **)(v5 + 0x19C); /*0x8e14fa*/
  v26 = v5; /*0x8e1508*/
  v7 = (unsigned int *)v6[8]; /*0x8e1514*/
  v8 = (4 * (v4 >> 5) + 0x30) & 0xFFFFFFF0; /*0x8e1517*/
  if ( (unsigned int)v7 + v8 > v6[0xB] ) /*0x8e151f*/
  {
    v23 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v6 + 0xC))(v6, (4 * (v4 >> 5) + 0x30) & 0xFFFFFFF0); /*0x8e1530*/
    v7 = (unsigned int *)v23; /*0x8e1534*/
  }
  else
  {
    v6[8] = (char *)v7 + v8; /*0x8e1521*/
    v23 = (int)v7; /*0x8e1524*/
  }
  v9 = *(this + 0x10) + 0x10 * *a2; /*0x8e1547*/
  v22 = v7; /*0x8e1558*/
  v24 = v9; /*0x8e155c*/
  result = (_DWORD *)sub_8E0E90( /*0x8e1560*/
                       this,
                       v4,
                       *(unsigned __int16 *)(*(this + 0x13) + 4 * *(unsigned __int16 *)(v9 + 8)),
                       v9,
                       *a2,
                       v7);
  v21 = (_DWORD *)*(this + 0x10); /*0x8e156e*/
  v11 = (unsigned int)&v7[(*(this + 0x11) >> 5) + 1]; /*0x8e1572*/
  v25 = v11; /*0x8e1578*/
  if ( (unsigned int)v7 < v11 ) /*0x8e157c*/
  {
    do /*0x8e162a*/
    {
      v13 = *v22; /*0x8e158a*/
      v14 = v21; /*0x8e158e*/
      if ( *v22 ) /*0x8e158a*/
      {
        do /*0x8e1609*/
        {
          if ( (_BYTE)v13 ) /*0x8e1596*/
          {
            if ( (v13 & 1) != 0 && (((v14[1] - *(_DWORD *)v9) | (*(_DWORD *)(v9 + 4) - *v14)) & 0x80008000) == 0 ) /*0x8e15bf*/
            {
              v15 = v14[3]; /*0x8e15c1*/
              v27 = v15; /*0x8e15c6*/
              if ( (v15 & 1) == 0 ) /*0x8e15ca*/
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x8e15da*/
                {
                  sub_8A6EE0(a3, 8); /*0x8e15df*/
                  v15 = v27; /*0x8e15e4*/
                }
                v16 = a3[1]; /*0x8e15eb*/
                v17 = *a3; /*0x8e15ee*/
                v17[2 * (_DWORD)v16] = a2; /*0x8e15f4*/
                v9 = v24; /*0x8e15f7*/
                v17[2 * (_DWORD)v16 + 1] = v15; /*0x8e15fb*/
                a3[1] = (char *)a3[1] + 1; /*0x8e15ff*/
              }
            }
            v14 += 4; /*0x8e1602*/
            v13 >>= 1; /*0x8e1605*/
          }
          else
          {
            v14 += 0x20; /*0x8e1598*/
            v13 >>= 8; /*0x8e159e*/
          }
        }
        while ( v13 ); /*0x8e1609*/
        v11 = v25; /*0x8e160b*/
      }
      result = v22 + 1; /*0x8e1617*/
      v18 = (unsigned int)(v22 + 1) < v11; /*0x8e1620*/
      v21 += 0x80; /*0x8e1622*/
      ++v22; /*0x8e1626*/
    }
    while ( v18 ); /*0x8e162a*/
    v7 = (unsigned int *)v23; /*0x8e1630*/
  }
  v19 = *(_DWORD **)(v26 + 0x19C); /*0x8e1638*/
  v20 = v7 == (unsigned int *)v19[0xA]; /*0x8e163e*/
  v19[8] = v7; /*0x8e1641*/
  if ( v20 ) /*0x8e1644*/
    return (*(_DWORD *(__thiscall **)(_DWORD *, unsigned int *))(*v19 + 0x10))(v19, v7); /*0x8e1649*/
  return result; /*0x8e164c*/
}
