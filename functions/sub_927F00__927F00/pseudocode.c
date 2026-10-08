_BYTE *__thiscall sub_927F00(_DWORD *this, _BYTE *a2, int a3, int a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // eax
  _DWORD *v8; // edi
  int v9; // ebx
  int v10; // ebp
  int v11; // eax
  int v12; // esi

  if ( *(_BYTE *)(a3 + 0x18) == 1 ) /*0x927f0b*/
    v4 = a3 + *(_DWORD *)(a3 + 0x10); /*0x927f10*/
  else
    v4 = 0; /*0x927f14*/
  if ( *(_BYTE *)(a4 + 0x18) == 1 ) /*0x927f1e*/
    v5 = a4 + *(_DWORD *)(a4 + 0x10); /*0x927f23*/
  else
    v5 = 0; /*0x927f27*/
  v6 = *(this + 4); /*0x927f29*/
  if ( !v6 || *(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int))(v6 + 8))(v6 + 8, &a3, a3, a4) )
  {
    if ( v4 && v5 )
    {
      if ( *(_DWORD *)(v4 + 0x6C) + *(_DWORD *)(v4 + 0x78) <= *(_DWORD *)(v5 + 0x6C) + *(_DWORD *)(v5 + 0x78) ) /*0x927f71*/
      {
        v8 = (_DWORD *)v4; /*0x927f7b*/
        a4 = v5; /*0x927f7d*/
      }
      else
      {
        v8 = (_DWORD *)v5; /*0x927f73*/
        a4 = v4; /*0x927f75*/
      }
      v9 = v8[0x1B] + v8[0x1E]; /*0x927f84*/
      v10 = 0; /*0x927f87*/
      if ( v9 <= 0 )
      {
LABEL_25:
        *a2 = 1; /*0x927fdd*/
        return a2; /*0x927fdd*/
      }
      else
      {
        a3 = 0; /*0x927f8d*/
        while ( 1 )
        {
          v11 = v8[0x1B]; /*0x927f91*/
          v12 = v10 >= v11 ? *(_DWORD *)(v8[0x1D] + 4 * (v10 - v11)) : *(_DWORD *)(a3 + v8[0x1A]);
          if ( v12 /*0x927fcb*/
            && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v12 + 0xC) + 0xC))(*(_DWORD *)(v12 + 0xC)) != 0xB
            && (*(_DWORD *)(v12 + 0x10) == a4 || *(_DWORD *)(v12 + 0x14) == a4) )
          {
            break; /*0x927fcb*/
          }
          ++v10; /*0x927fd1*/
          a3 += 0x1C; /*0x927fd7*/
          if ( v10 >= v9 ) /*0x927fdb*/
            goto LABEL_25; /*0x927fdb*/
        }
        *a2 = 0; /*0x927ff2*/
        return a2; /*0x927feb*/
      }
    }
    else
    {
      *a2 = 1; /*0x927fff*/
      return a2; /*0x927ff9*/
    }
  }
  else
  {
    *a2 = 0; /*0x927f49*/
    return a2; /*0x927f43*/
  }
}
