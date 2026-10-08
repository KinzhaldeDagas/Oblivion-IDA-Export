_DWORD *__thiscall sub_6C6910(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  unsigned __int16 v8; // cx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // cx
  int v14; // esi
  int v15; // [esp+14h] [ebp-14h]
  int v16; // [esp+18h] [ebp-10h]
  _DWORD *v17; // [esp+2Ch] [ebp+4h]

  result = sub_700010(a2, (int)&stru_B3CD7C); /*0x6c6942*/
  v4 = result; /*0x6c6947*/
  v5 = 0; /*0x6c6949*/
  v17 = result; /*0x6c694d*/
  if ( result ) /*0x6c6951*/
    result = (_DWORD *)InterlockedIncrement(result + 1); /*0x6c6957*/
  if ( v4 ) /*0x6c6963*/
  {
    v6 = *(_DWORD *)(*(this + 0x10) + 0x7C); /*0x6c696f*/
    v16 = v6; /*0x6c6972*/
    v15 = 0; /*0x6c6976*/
    if ( *(this + 3) ) /*0x6c6969*/
    {
      while ( 1 ) /*0x6c6984*/
      {
        v7 = *(this + 6); /*0x6c6984*/
        v8 = *(_WORD *)(v7 + v5 + 4); /*0x6c6987*/
        v9 = v5 + v7; /*0x6c698c*/
        if ( v8 == 0xFFFF ) /*0x6c6993*/
          v10 = 0; /*0x6c69a1*/
        else
          v10 = *(_DWORD *)(*(_DWORD *)v9 + 8) + v8; /*0x6c699d*/
        v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x4C))(v6, v10); /*0x6c69ac*/
        if ( v11 ) /*0x6c69b0*/
        {
          v12 = *((_WORD *)v4 + 0x22); /*0x6c69b2*/
          v13 = 0; /*0x6c69b6*/
          if ( v12 ) /*0x6c69bb*/
          {
            v14 = v4[0x10]; /*0x6c69bd*/
            while ( *(_DWORD *)(v14 + 4 * v13) != v11 ) /*0x6c69c6*/
            {
              if ( ++v13 >= v12 ) /*0x6c69ce*/
                goto LABEL_15; /*0x6c69ce*/
            }
            if ( v13 == word_A7A160 ) /*0x6c6a28*/
            {
LABEL_15:
              v4 = v17; /*0x6c69d0*/
              goto LABEL_16; /*0x6c69d0*/
            }
            v4 = v17; /*0x6c6a2d*/
            *(_DWORD *)(v5 + *(this + 5) + 8) = v17[0xF] + 0x30 * v13; /*0x6c6a3f*/
          }
        }
LABEL_16:
        result = (_DWORD *)(v15 + 1); /*0x6c69d8*/
        v5 += 0x10; /*0x6c69db*/
        if ( (unsigned int)++v15 >= *(this + 3) ) /*0x6c69e5*/
          break; /*0x6c69e5*/
        v6 = v16; /*0x6c6980*/
      }
    }
  }
  if ( v4 ) /*0x6c69f1*/
  {
    result = (_DWORD *)InterlockedDecrement(v4 + 1); /*0x6c69f7*/
    if ( !result ) /*0x6c69ff*/
      return (*(_DWORD *(__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x6c6a09*/
  }
  return result; /*0x6c6a0b*/
}
