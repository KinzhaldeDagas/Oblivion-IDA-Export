int __cdecl sub_942170(const char **Args, const char **a2, int a3, int a4, void *a5)
{
  char v5; // al
  char *v6; // esi
  int v8; // edi
  char *v9; // eax
  int v10; // edi
  int v11; // ebx
  char *v12; // esi
  char v13; // dl
  const char *v14; // eax
  int v15; // ecx
  const char *v17; // eax
  _DWORD *v18; // ecx
  int v19; // eax
  int v20; // eax
  bool v21; // cc
  int v22; // esi
  _DWORD *v23; // edi
  int v24; // esi
  int v25; // ebx
  int **v26; // eax
  _DWORD *v27; // ebx
  const char *v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int j; // edi
  const char *v33; // eax
  char *v34; // ecx
  int v35; // eax
  _DWORD *v36; // ecx
  int v37; // eax
  const char *v38; // [esp-4h] [ebp-238h]
  const char *v39; // [esp-4h] [ebp-238h]
  int v40; // [esp+10h] [ebp-224h]
  int v41; // [esp+10h] [ebp-224h]
  int i; // [esp+10h] [ebp-224h]
  int v43; // [esp+10h] [ebp-224h]
  int v44; // [esp+10h] [ebp-224h]
  char *Format; // [esp+14h] [ebp-220h] BYREF
  char v46[4]; // [esp+18h] [ebp-21Ch] BYREF
  const char *v47; // [esp+1Ch] [ebp-218h]
  _DWORD v48[133]; // [esp+20h] [ebp-214h]

  v5 = *((_BYTE *)a2 + 0xC);
  v6 = (char *)(a3 + *((unsigned __int16 *)a2 + 9));
  Format = v6;
  if ( v5 != 0x14 || *((_BYTE *)a2 + 0xD) != 2 || *(_DWORD *)v6 )
  {
    sub_8BBEE0(a4, "\n%s<hkparam name=\"%s\"", *Args, *a2);
    switch ( *((_BYTE *)a2 + 0xC) )
    {
      case 0x16:
      case 0x17:
      case 0x1A:
        sub_8BBEE0(a4, " numelements=\"%i\"", *((_DWORD *)v6 + 1));
        break;
      case 0x1B:
        sub_8BBEE0(a4, " numelements=\"%i\"", *((_DWORD *)v6 + 2));
        break;
      default:
        break;
    }
    sub_8BBEE0(a4, ">");
    switch ( *((_BYTE *)a2 + 0xC) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
        v40 = sub_940B70((signed __int16 *)a2);
        if ( !v40 )
          v40 = 1;
        v8 = 0;
        *(_DWORD *)v46 = 0;
        for ( Format = (char *)(sub_940B80((int)a2) / v40); v8 < v40; *(_DWORD *)v46 = v8 )
        {
          if ( *((_BYTE *)a2 + 0xC) == 2 )
          {
            sub_8BBEE0(a4, "%c", *v6);
          }
          else
          {
            if ( v8 )
            {
              v9 = "\n";
              if ( v8 % 0x32u )
                v9 = word_A36430;
              sub_8BBEE0(a4, v9);
            }
            sub_941760(*((unsigned __int8 *)a2 + 0xC), (int)a5, (int **)a4, (float *)v6);
            v8 = *(_DWORD *)v46;
          }
          v6 = &v6[(_DWORD)Format];
          ++v8;
        }
        goto LABEL_86;
      case 0x13:
        sub_8BBEE0(a4, "<!-- zero %s -->", *a2);
        goto LABEL_86;
      case 0x14:
        v10 = sub_940B70((signed __int16 *)a2);
        if ( !v10 )
          v10 = 1;
        v11 = 0;
        if ( *((_BYTE *)a2 + 0xD) == 2 )
        {
          *(_DWORD *)v46 = 0;
          if ( v10 > 0 )
          {
            while ( 1 )
            {
              v12 = *(char **)&v6[4 * v11];
              if ( v12 )
              {
                if ( *v12 )
                {
                  do
                  {
                    switch ( *v12 )
                    {
                      case '"':
                      case '&':
                      case '\'':
                      case '<':
                      case '>':
                        sub_918390((_DWORD **)a4);
                        v13 = *v12;
                        v14 = "<&lt;";
                        v47 = "<&lt;";
                        v48[0] = ">&gt;";
                        v48[1] = "&&amp;";
                        v48[2] = "\"&quot;";
                        v48[3] = "'&apos;";
                        v48[4] = 0;
                        v15 = 0;
                        break;
                      default:
                        continue;
                    }
                    while ( *v14 != v13 )
                    {
                      v14 = (const char *)v48[v15++];
                      if ( !v14 )
                        goto LABEL_36;
                    }
                    sub_8B1860((const char *)(v48[v15 - 1] + 1));
                    sub_918390((_DWORD **)a4);
LABEL_36:
                    ;
                  }
                  while ( *++v12 );
                  v11 = *(_DWORD *)v46;
                }
                sub_918390((_DWORD **)a4);
              }
              else
              {
                sub_8BBDB0((int **)a4, "&#0;");
              }
              *(_DWORD *)v46 = ++v11;
              if ( v11 >= v10 )
                break;
              v6 = Format;
            }
          }
        }
        else if ( v10 > 0 )
        {
          do
          {
            if ( *(_DWORD *)&v6[4 * v11] )
            {
              (*(void (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)a5 + 0x10))(a5, v46, *(_DWORD *)&v6[4 * v11]);
              v17 = word_A36430;
              if ( v11 >= v10 - 1 )
                v17 = EmptyString;
              sub_8BBEE0(a4, "%s%s", *(const char **)v46, v17);
              v18 = (_DWORD *)(*(_DWORD *)v46 - 0xC);
              v19 = *(_DWORD *)(*(_DWORD *)v46 - 4) - 1;
              *(_DWORD *)(*(_DWORD *)v46 - 0xC + 8) = v19;
              if ( v19 < 0 )
                sub_8B1930(v18);
            }
            else
            {
              sub_8BBDB0((int **)a4, "null");
            }
            ++v11;
          }
          while ( v11 < v10 );
        }
LABEL_86:
        JUMPOUT(0x9427FF);
      case 0x15:
        v20 = sub_940B70((signed __int16 *)a2);
        v21 = v20 <= 0;
        if ( !v20 )
        {
          v20 = 1;
          v21 = 0;
        }
        if ( !v21 )
        {
          v22 = v20;
          do
          {
            sub_8BBDB0((int **)a4, "&null;");
            --v22;
          }
          while ( v22 );
        }
        goto LABEL_86;
      case 0x16:
      case 0x17:
      case 0x1A:
        sub_941F30((int)Format, (const void **)Args, (unsigned __int8 *)a2, (int **)a4, (int)a5);
        goto LABEL_86;
      case 0x18:
        v23 = (_DWORD *)sub_953130(a2);
        v24 = sub_940D20(a2, v6);
        Format = 0;
        if ( sub_953160(v23, v24, &Format) )
          sub_8BBEE0(a4, "INVALID_VALUE_%i", v24);
        else
          sub_8BBEE0(a4, Format);
        goto LABEL_86;
      case 0x19:
        sub_941B90(1, (const void **)Args);
        Format = (char *)sub_90D1F0(a2);
        v41 = sub_940B70((signed __int16 *)a2);
        if ( !v41 )
          v41 = 1;
        v25 = sub_953130(Format);
        if ( v41 > 0 )
        {
          *(_DWORD *)v46 = v41;
          do
          {
            sub_941CE0((const void **)Args, Format, (int)v6, a4, (int)a5);
            v6 += v25;
            --*(_DWORD *)v46;
          }
          while ( *(_DWORD *)v46 );
        }
        sub_941B90(0xFFFFFFFF, (const void **)Args);
        v38 = *Args;
        v26 = sub_8BBD90((_DWORD **)a4, 0xA);
        sub_8BBDB0(v26, v38);
        goto LABEL_86;
      case 0x1B:
        v27 = *(_DWORD **)v6;
        sub_941B90(1, (const void **)Args);
        sub_8BBEE0(a4, "\n%s<!-- Homogeneous Class -->", *Args);
        Format = *(char **)(a4 + 8);
        v39 = (const char *)sub_90D1E0(dword_BA8788);
        v28 = (const char *)sub_90D1E0(v27);
        sub_941BF0(a5, (int)Format, v28, v39);
        for ( i = 0; i < sub_90D240(dword_BA8788); ++i )
        {
          v29 = sub_90D260(dword_BA8788, i);
          sub_942170((int)Args, v29, (int)v27, a4, (int)a5);
        }
        sub_941C90((const char **)a5, *(_DWORD *)(a4 + 8));
        sub_8BBEE0(a4, "\n%s<!-- Homogeneous Data -->", *Args);
        *(_DWORD *)v46 = sub_953130(v27);
        v43 = *((_DWORD *)v6 + 1);
        v30 = *((_DWORD *)v6 + 2);
        Format = 0;
        if ( v30 > 0 )
        {
          do
          {
            sub_941CE0((const void **)Args, v27, v43, a4, (int)a5);
            v43 += *(_DWORD *)v46;
            v31 = *((_DWORD *)v6 + 2);
            ++Format;
          }
          while ( (int)Format < v31 );
        }
        sub_941B90(0xFFFFFFFF, (const void **)Args);
        goto LABEL_86;
      case 0x1C:
        v44 = sub_940B70((signed __int16 *)a2);
        if ( !v44 )
          v44 = 1;
        for ( j = 0; j < v44; ++j )
        {
          if ( *(_DWORD *)&v6[8 * j] )
          {
            if ( *(_DWORD *)&v6[8 * j + 4] )
            {
              (*(void (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)a5 + 0x10))(a5, v46, *(_DWORD *)&v6[8 * j]);
              (*(void (__thiscall **)(void *, char **, _DWORD))(*(_DWORD *)a5 + 0x10))(
                a5,
                &Format,
                *(_DWORD *)&v6[8 * j + 4]);
              v33 = word_A36430;
              if ( j + 1 >= v44 )
                v33 = EmptyString;
              sub_8BBEE0(a4, "(%s %s%s)", *(const char **)v46, Format, v33);
              v34 = Format + 0xFFFFFFF4;
              v35 = *((_DWORD *)Format + 0xFFFFFFFF) - 1;
              *(_DWORD *)&Format[0xFFFFFFFC] = v35;
              if ( v35 < 0 )
                sub_8B1930(v34);
              v36 = (_DWORD *)(*(_DWORD *)v46 - 0xC);
              v37 = *(_DWORD *)(*(_DWORD *)v46 - 4) - 1;
              *(_DWORD *)(*(_DWORD *)v46 - 0xC + 8) = v37;
              if ( v37 < 0 )
                sub_8B1930(v36);
            }
          }
        }
        goto LABEL_86;
      default:
        JUMPOUT(0x9427AE);
    }
  }
  return sub_8BBEE0(a4, "\n%s<!-- <hkparam name=\"%s\">(null)</hkparam> -->", *Args, *a2);
}
