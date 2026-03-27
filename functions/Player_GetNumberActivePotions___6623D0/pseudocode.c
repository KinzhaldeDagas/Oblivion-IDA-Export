int __thiscall Player_GetNumberActivePotions_(_DWORD *this)
{
  int (__stdcall *v2)(int); // edx
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int *v6; // esi
  int v7; // edi
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  _DWORD *i; // eax
  char v13; // bl
  unsigned int *v14; // ecx
  int v15; // edi
  int v16; // eax
  unsigned int v17; // edx
  _DWORD *v18; // eax
  _BYTE v20[12]; // [esp+0h] [ebp-2Ch] BYREF
  _BYTE *v21; // [esp+Ch] [ebp-20h]
  unsigned int *v22; // [esp+10h] [ebp-1Ch]
  _DWORD *v23; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  _DWORD *v26; // [esp+20h] [ebp-Ch]
  int v27; // [esp+24h] [ebp-8h]

  v2 = *(int (__stdcall **)(int))(*this + 0x284);
  v3 = 0;
  v23 = this;
  v27 = 0;
  v4 = v2(0x13);
  v5 = Calc_AlchemyMaxPotions(v4);
  v6 = (int *)*(this + 0x7E);
  v7 = v5;
  v24 = v5;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *v6;
      if ( !v6[1] )
        break;
      if ( v8 )
        goto LABEL_6;
LABEL_8:
      v6 = (int *)v6[1];
      if ( !v6 )
      {
LABEL_9:
        v27 = v3;
        goto LABEL_10;
      }
    }
    if ( !v8 )
      goto LABEL_9;
LABEL_6:
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x18))(v8) == 7 )
      ++v3;
    goto LABEL_8;
  }
LABEL_10:
  _alloca_();
  v21 = v20;
  _alloca_();
  v22 = (unsigned int *)v20;
  if ( v20 )
  {
    if ( v7 > 0 )
    {
      memset(v20, 0, 4 * ((unsigned int)(4 * v7) >> 2));
      memset(v20, 0, 4 * ((unsigned int)(4 * v7) >> 2));
    }
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v23[0x1A] + 8))(v23 + 0x1A);
    v26 = v9;
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *v9;
        if ( v9[1] )
        {
          v11 = v10 ? *(_DWORD *)(v10 + 8) : 0;
        }
        else
        {
          if ( !v10 )
            return v27;
          v11 = *(_DWORD *)(v10 + 8);
        }
        if ( v11 && (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v11 + 0x18))(v11) == 7 )
        {
          for ( i = (_DWORD *)v23[0x7E]; i; i = (_DWORD *)i[1] )
          {
            if ( *i == v11 )
              goto LABEL_42;
          }
          v13 = 0;
          v25 = 0;
          if ( v24 > 0 )
            break;
        }
LABEL_42:
        v26 = (_DWORD *)v9[1];
        if ( !v26 )
          return v27;
        v9 = v26;
      }
      v14 = v22;
      v15 = v21 - (_BYTE *)v22;
      while ( 1 )
      {
        if ( v13 )
        {
LABEL_41:
          v9 = v26;
          goto LABEL_42;
        }
        v16 = *(unsigned int *)((char *)v14 + v15);
        if ( v16 )
        {
          if ( v16 != v11 )
            goto LABEL_40;
          v17 = 0;
          v18 = (_DWORD *)(v16 + 0x10);
          if ( !v18 )
            goto LABEL_40;
          do
          {
            if ( *v18 )
              ++v17;
            v18 = (_DWORD *)v18[1];
          }
          while ( v18 );
          if ( *v14 >= v17 )
            goto LABEL_40;
          ++*v14;
        }
        else
        {
          ++v27;
          *(unsigned int *)((char *)v14 + v15) = v11;
          *v14 = 1;
        }
        v13 = 1;
LABEL_40:
        ++v14;
        if ( ++v25 >= v24 )
          goto LABEL_41;
      }
    }
  }
  return v27;
}
