char __thiscall sub_497500(unsigned __int8 *this, unsigned int i, _DWORD *a3, int a4)
{
  unsigned int v4; // ebp
  _DWORD *v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  float *v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // ecx
  unsigned int v14; // eax
  char v16; // [esp+Fh] [ebp-1h]

  v4 = i;
  v16 = 1;
  if ( !i )
    return v16;
  v6 = a3;
  if ( *a3 >= (unsigned int)*this )
    return v16;
  v7 = sub_497420(i);
  if ( !v7 )
  {
LABEL_7:
    v11 = *(unsigned __int16 *)(v4 + 0xB6);
    v12 = 0;
    for ( i = v11; v12 < i; ++v12 )
    {
      if ( *(unsigned __int16 *)(v4 + 0xB6) > v12 )
      {
        v13 = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v12);
        if ( v13 )
        {
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13);
          if ( v14 )
          {
            if ( !sub_497500(this, v14, v6, a4) )
              v16 = 0;
          }
        }
      }
      if ( *v6 >= (unsigned int)*this )
        break;
    }
    return v16;
  }
  v8 = sub_497340(*(_DWORD **)(v7 + 0x10), &i);
  if ( (_BYTE)a4 )
  {
    *(_BYTE *)(*((_DWORD *)this + 1) + 0x1C * *v6) = BYTE1(*v8) & 0x1F;
LABEL_6:
    v9 = (_DWORD *)(*((_DWORD *)this + 1) + 0x1C * *v6 + 4);
    *v9 = *(_DWORD *)(v4 + 0x54);
    v9[1] = *(_DWORD *)(v4 + 0x58);
    v9[2] = *(_DWORD *)(v4 + 0x5C);
    v10 = (float *)(*((_DWORD *)this + 1) + 0x1C * *v6);
    sub_711300((float *)(v4 + 0x30), v10 + 4, v10 + 5, v10 + 6);
    ++*v6;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(*((_DWORD *)this + 1) + 0x1C * *v6) == (BYTE1(*v8) & 0x1F) )
    goto LABEL_6;
  return 0;
}
