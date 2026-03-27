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

  result = sub_700010(a2, (int)dword_B3CD7C);
  v4 = result;
  v5 = 0;
  v17 = result;
  if ( result )
    result = (_DWORD *)InterlockedIncrement(result + 1);
  if ( v4 )
  {
    v6 = *(_DWORD *)(*(this + 0x10) + 0x7C);
    v16 = v6;
    v15 = 0;
    if ( *(this + 3) )
    {
      while ( 1 )
      {
        v7 = *(this + 6);
        v8 = *(_WORD *)(v7 + v5 + 4);
        v9 = v5 + v7;
        if ( v8 == 0xFFFF )
          v10 = 0;
        else
          v10 = *(_DWORD *)(*(_DWORD *)v9 + 8) + v8;
        v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x4C))(v6, v10);
        if ( v11 )
        {
          v12 = *((_WORD *)v4 + 0x22);
          v13 = 0;
          if ( v12 )
          {
            v14 = v4[0x10];
            while ( *(_DWORD *)(v14 + 4 * v13) != v11 )
            {
              if ( ++v13 >= v12 )
                goto LABEL_15;
            }
            if ( v13 == word_A7A160 )
            {
LABEL_15:
              v4 = v17;
              goto LABEL_16;
            }
            v4 = v17;
            *(_DWORD *)(v5 + *(this + 5) + 8) = v17[0xF] + 0x30 * v13;
          }
        }
LABEL_16:
        result = (_DWORD *)(v15 + 1);
        v5 += 0x10;
        if ( (unsigned int)++v15 >= *(this + 3) )
          break;
        v6 = v16;
      }
    }
  }
  if ( v4 )
  {
    result = (_DWORD *)InterlockedDecrement(v4 + 1);
    if ( !result )
      return (*(_DWORD *(__thiscall **)(_DWORD *, int))*v4)(v4, 1);
  }
  return result;
}
