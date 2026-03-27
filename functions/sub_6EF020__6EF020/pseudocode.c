char __thiscall sub_6EF020(char *this, int a2, int a3)
{
  unsigned int v3; // edi
  char *v4; // esi
  unsigned int v5; // ebp
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // edi
  unsigned int v17; // edx
  _DWORD *v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v23; // [esp-Ch] [ebp-5Ch]
  int v24; // [esp+4h] [ebp-4Ch]
  unsigned int v25; // [esp+8h] [ebp-48h]
  int v26; // [esp+Ch] [ebp-44h]
  int v27; // [esp+10h] [ebp-40h]
  int v28; // [esp+14h] [ebp-3Ch]
  unsigned int v29; // [esp+18h] [ebp-38h]
  int v30; // [esp+1Ch] [ebp-34h]
  int v31; // [esp+30h] [ebp-20h]
  unsigned int v32; // [esp+34h] [ebp-1Ch] BYREF
  unsigned int i; // [esp+38h] [ebp-18h]
  unsigned int v34; // [esp+3Ch] [ebp-14h]
  unsigned int v35; // [esp+40h] [ebp-10h]
  unsigned int v36; // [esp+44h] [ebp-Ch] BYREF
  char *v37; // [esp+48h] [ebp-8h]

  v37 = this;
  v34 = 0;
  while ( 2 )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, unsigned int *, int, int))(*(_DWORD *)a2 + 0x10))(a2, &v32, 4, 1) )
        return 0;
      v31 = v32;
      v3 = v34 + i;
      LOBYTE(v25) = 0;
      v4 = &v37[0x10 * v34 + 0x10 * i];
      v35 = v34 + i;
      sub_6EEEE0((char **)v4, v32, 0, 0, v23, 0, 0, 0, v24, v25, v26, v27, v28, 0, 0xFu);
      v5 = 0;
      if ( v32 )
      {
        v31 = 0;
        while ( 1 )
        {
          v6 = *((_DWORD *)v4 + 1);
          if ( !v6 || v5 >= (*((_DWORD *)v4 + 2) - v6) / 0x34 )
            _invalid_parameter_noinfo();
          v7 = *(_DWORD *)(a3 + 4 * v3);
          v8 = v31;
          v9 = (_DWORD *)(v31 + *((_DWORD *)v4 + 1));
          *(float *)&v30 = 0.0;
          v9[1] = v7;
          v29 = v7;
          *v9 = 1;
          sub_527160(v9 + 2, v29, v30);
          v10 = *((_DWORD *)v4 + 1);
          if ( !v10 || v5 >= (*((_DWORD *)v4 + 2) - v10) / 0x34 )
            _invalid_parameter_noinfo();
          v11 = *((_DWORD *)v4 + 1);
          v12 = *(_DWORD *)(v8 + v11 + 0xC);
          v13 = v8 + v11 + 8;
          if ( !v12 || !((*(_DWORD *)(v13 + 8) - v12) >> 2) )
            _invalid_parameter_noinfo();
          if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 0x10))(
                  a2,
                  *(_DWORD *)(v13 + 4),
                  4,
                  *(_DWORD *)(a3 + 4 * v35)) )
            return 0;
          if ( !(*(unsigned __int8 (__thiscall **)(int, unsigned int *, int, int))(*(_DWORD *)a2 + 0x10))(
                  a2,
                  &v36,
                  4,
                  1) )
            return 0;
          v14 = *((_DWORD *)v4 + 1);
          if ( !v14 || v5 >= (*((_DWORD *)v4 + 2) - v14) / 0x34 )
            _invalid_parameter_noinfo();
          v15 = *((_DWORD *)v4 + 1);
          v16 = v31;
          v17 = *(_DWORD *)(v31 + v15 + 0x2C);
          v18 = (_DWORD *)(v31 + v15 + 0x18);
          if ( v36 > v17 )
            sub_6EDAA0(v18, v31, v36 - v17, 0);
          else
            sub_4134E0(v18, v5, v36, 0xFFFFFFFF);
          v19 = *((_DWORD *)v4 + 1);
          if ( !v19 || v5 >= (*((_DWORD *)v4 + 2) - v19) / 0x34 )
            _invalid_parameter_noinfo();
          v20 = *((_DWORD *)v4 + 1);
          v21 = *(_DWORD *)(v16 + v20 + 0x30) < 0x10u ? v16 + v20 + 0x1C : *(_DWORD *)(v16 + v20 + 0x1C);
          if ( !(*(unsigned __int8 (__thiscall **)(int, int, int, unsigned int))(*(_DWORD *)a2 + 0x10))(a2, v21, 1, v36) )
            return 0;
          ++v5;
          v31 = v16 + 0x34;
          if ( v5 >= v32 )
            break;
          v3 = v35;
        }
      }
    }
    v34 += 2;
    if ( v34 < 4 )
      continue;
    break;
  }
  return 1;
}
