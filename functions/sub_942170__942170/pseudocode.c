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
  int *v23; // edi
  int v24; // esi
  int v25; // ebx
  int **v26; // eax
  _DWORD *v27; // ebx
  const char *v28; // eax
  const char **v29; // eax
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

  v5 = *((_BYTE *)a2 + 0xC); /*0x942185*/
  v6 = (char *)(a3 + *((unsigned __int16 *)a2 + 9)); /*0x94218e*/
  Format = v6; /*0x942193*/
  if ( v5 != 0x14 || *((_BYTE *)a2 + 0xD) != 2 || *(_DWORD *)v6 ) /*0x94219f*/
  {
    sub_8BBEE0(a4, "\n%s<hkparam name=\"%s\"", *Args, *a2); /*0x9421eb*/
    switch ( *((_BYTE *)a2 + 0xC) ) /*0x9421ff*/
    {
      case 0x16: /*0x9421ff*/
      case 0x17: /*0x9421ff*/
      case 0x1A: /*0x9421ff*/
        sub_8BBEE0(a4, " numelements=\"%i\"", *((_DWORD *)v6 + 1)); /*0x94220a*/
        break; /*0x94220a*/
      case 0x1B: /*0x9421ff*/
        sub_8BBEE0(a4, " numelements=\"%i\"", *((_DWORD *)v6 + 2)); /*0x942216*/
        break; /*0x942216*/
      default:
        break;
    }
    sub_8BBEE0(a4, ">"); /*0x942224*/
    switch ( *((_BYTE *)a2 + 0xC) ) /*0x942241*/
    {
      case 1: /*0x942241*/
      case 2: /*0x942241*/
      case 3: /*0x942241*/
      case 4: /*0x942241*/
      case 5: /*0x942241*/
      case 6: /*0x942241*/
      case 7: /*0x942241*/
      case 8: /*0x942241*/
      case 9: /*0x942241*/
      case 0xA: /*0x942241*/
      case 0xB: /*0x942241*/
      case 0xC: /*0x942241*/
      case 0xD: /*0x942241*/
      case 0xE: /*0x942241*/
      case 0xF: /*0x942241*/
      case 0x10: /*0x942241*/
      case 0x11: /*0x942241*/
      case 0x12: /*0x942241*/
        v40 = sub_940B70((signed __int16 *)a2); /*0x942251*/
        if ( !v40 ) /*0x942255*/
          v40 = 1; /*0x942257*/
        v8 = 0; /*0x94226b*/
        *(_DWORD *)v46 = 0; /*0x94226d*/
        for ( Format = (char *)(sub_940B80((int)a2) / v40); v8 < v40; *(_DWORD *)v46 = v8 ) /*0x94227b*/
        {
          if ( *((_BYTE *)a2 + 0xC) == 2 ) /*0x942285*/
          {
            sub_8BBEE0(a4, "%c", *v6); /*0x942291*/
          }
          else
          {
            if ( v8 ) /*0x94229d*/
            {
              v9 = "\n"; /*0x9422aa*/
              if ( v8 % 0x32u ) /*0x9422a8*/
                v9 = word_A36430; /*0x9422b3*/
              sub_8BBEE0(a4, v9); /*0x9422ba*/
            }
            sub_941760(*((unsigned __int8 *)a2 + 0xC), (int)a5, (int **)a4, (float *)v6); /*0x9422cf*/
            v8 = *(_DWORD *)v46; /*0x9422d4*/
          }
          v6 = &v6[(_DWORD)Format]; /*0x9422e0*/
          ++v8; /*0x9422e2*/
        }
        goto LABEL_86; /*0x9422e9*/
      case 0x13: /*0x942241*/
        sub_8BBEE0(a4, "<!-- zero %s -->", *a2); /*0x9422f9*/
        goto LABEL_86; /*0x942301*/
      case 0x14: /*0x942241*/
        v10 = sub_940B70((signed __int16 *)a2); /*0x94230f*/
        if ( !v10 ) /*0x942311*/
          v10 = 1; /*0x942313*/
        v11 = 0; /*0x94231b*/
        if ( *((_BYTE *)a2 + 0xD) == 2 ) /*0x942323*/
        {
          *(_DWORD *)v46 = 0; /*0x94232b*/
          if ( v10 > 0 ) /*0x94232f*/
          {
            while ( 1 ) /*0x942340*/
            {
              v12 = *(char **)&v6[4 * v11]; /*0x942340*/
              if ( v12 ) /*0x942345*/
              {
                if ( *v12 ) /*0x94234d*/
                {
                  do /*0x9423e4*/
                  {
                    switch ( *v12 ) /*0x94236c*/
                    {
                      case '"': /*0x94236c*/
                      case '&': /*0x94236c*/
                      case '\'': /*0x94236c*/
                      case '<': /*0x94236c*/
                      case '>': /*0x94236c*/
                        sub_918390((_DWORD **)a4); /*0x94237b*/
                        v13 = *v12; /*0x942380*/
                        v14 = "<&lt;"; /*0x942382*/
                        v47 = "<&lt;"; /*0x94238a*/
                        v48[0] = ">&gt;"; /*0x94238e*/
                        v48[1] = "&&amp;"; /*0x942396*/
                        v48[2] = "\"&quot;"; /*0x94239e*/
                        v48[3] = "'&apos;"; /*0x9423a6*/
                        v48[4] = 0; /*0x9423ae*/
                        v15 = 0; /*0x9423b6*/
                        break; /*0x9423b6*/
                      default:
                        continue;
                    }
                    while ( *v14 != v13 ) /*0x9423ba*/
                    {
                      v14 = (const char *)v48[v15++]; /*0x9423bc*/
                      if ( !v14 ) /*0x9423c3*/
                        goto LABEL_36; /*0x9423c3*/
                    }
                    sub_8B1860((const char *)(v48[v15 - 1] + 1)); /*0x9423cd*/
                    sub_918390((_DWORD **)a4); /*0x9423d9*/
LABEL_36:
                    ; /*0x9423de*/
                  }
                  while ( *++v12 ); /*0x9423e4*/
                  v11 = *(_DWORD *)v46; /*0x9423ea*/
                }
                sub_918390((_DWORD **)a4); /*0x9423f4*/
              }
              else
              {
                sub_8BBDB0((int **)a4, "&#0;"); /*0x942402*/
              }
              *(_DWORD *)v46 = ++v11; /*0x94240e*/
              if ( v11 >= v10 ) /*0x942412*/
                break; /*0x942412*/
              v6 = Format; /*0x942337*/
            }
          }
        }
        else if ( v10 > 0 ) /*0x94241f*/
        {
          do /*0x942489*/
          {
            if ( *(_DWORD *)&v6[4 * v11] ) /*0x942425*/
            {
              (*(void (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)a5 + 0x10))(a5, v46, *(_DWORD *)&v6[4 * v11]); /*0x94243b*/
              v17 = word_A36430; /*0x942443*/
              if ( v11 >= v10 - 1 ) /*0x942448*/
                v17 = EmptyString; /*0x94244a*/
              sub_8BBEE0(a4, "%s%s", *(const char **)v46, v17); /*0x94245b*/
              v18 = (_DWORD *)(*(_DWORD *)v46 - 0xC); /*0x942467*/
              v19 = *(_DWORD *)(*(_DWORD *)v46 - 4) - 1; /*0x94246d*/
              *(_DWORD *)(*(_DWORD *)v46 - 0xC + 8) = v19; /*0x94246e*/
              if ( v19 < 0 ) /*0x942471*/
                sub_8B1930(v18); /*0x942473*/
            }
            else
            {
              sub_8BBDB0((int **)a4, "null"); /*0x942481*/
            }
            ++v11; /*0x942486*/
          }
          while ( v11 < v10 ); /*0x942489*/
        }
LABEL_86:
        JUMPOUT(0x9427FF); /*0x9427ff*/
      case 0x15: /*0x942241*/
        v20 = sub_940B70((signed __int16 *)a2); /*0x942492*/
        v21 = v20 <= 0; /*0x942497*/
        if ( !v20 ) /*0x942499*/
        {
          v20 = 1; /*0x94249b*/
          v21 = 0; /*0x9424a0*/
        }
        if ( !v21 ) /*0x9424a2*/
        {
          v22 = v20; /*0x9424a8*/
          do /*0x9424bd*/
          {
            sub_8BBDB0((int **)a4, "&null;"); /*0x9424b7*/
            --v22; /*0x9424bc*/
          }
          while ( v22 ); /*0x9424bd*/
        }
        goto LABEL_86; /*0x9424bd*/
      case 0x16: /*0x942241*/
      case 0x17: /*0x942241*/
      case 0x1A: /*0x942241*/
        sub_941F30((int)Format, (const void **)Args, (unsigned __int8 *)a2, (int **)a4, a5); /*0x9424d3*/
        goto LABEL_86; /*0x9424db*/
      case 0x18: /*0x942241*/
        v23 = (int *)sub_953130(a2); /*0x9424ea*/
        v24 = sub_940D20(a2, v6); /*0x9424f6*/
        Format = 0; /*0x9424fb*/
        if ( sub_953160(v23, v24, &Format) ) /*0x942503*/
          sub_8BBEE0(a4, "INVALID_VALUE_%i", v24); /*0x942526*/
        else
          sub_8BBEE0(a4, Format); /*0x942512*/
        goto LABEL_86; /*0x94251a*/
      case 0x19: /*0x942241*/
        sub_941B90(1, (const void **)Args); /*0x942538*/
        Format = (char *)sub_90D1F0(a2); /*0x942546*/
        v41 = sub_940B70((signed __int16 *)a2); /*0x942551*/
        if ( !v41 ) /*0x942555*/
          v41 = 1; /*0x942557*/
        v25 = sub_953130(Format); /*0x942568*/
        if ( v41 > 0 ) /*0x942570*/
        {
          *(_DWORD *)v46 = v41; /*0x942572*/
          do /*0x9425a3*/
          {
            sub_941CE0((const void **)Args, Format, (int)v6, a4, a5); /*0x942590*/
            v6 += v25; /*0x94259c*/
            --*(_DWORD *)v46; /*0x94259f*/
          }
          while ( *(_DWORD *)v46 ); /*0x9425a3*/
        }
        sub_941B90(0xFFFFFFFF, (const void **)Args); /*0x9425a8*/
        v38 = *Args; /*0x9425af*/
        v26 = sub_8BBD90((_DWORD **)a4, 0xA); /*0x9425b4*/
        sub_8BBDB0(v26, v38); /*0x9425bb*/
        goto LABEL_86; /*0x9425c0*/
      case 0x1B: /*0x942241*/
        v27 = *(_DWORD **)v6; /*0x9425c5*/
        sub_941B90(1, (const void **)Args); /*0x9425cc*/
        sub_8BBEE0(a4, "\n%s<!-- Homogeneous Class -->", *Args); /*0x9425da*/
        Format = *(char **)(a4 + 8); /*0x9425ea*/
        v39 = (const char *)sub_90D1E0(unk_BA8788); /*0x9425f3*/
        v28 = (const char *)sub_90D1E0(v27); /*0x9425f6*/
        sub_941BF0(a5, (int)Format, v28, v39); /*0x942608*/
        for ( i = 0; i < sub_90D240(unk_BA8788); ++i ) /*0x942621*/
        {
          v29 = (const char **)sub_90D260(unk_BA8788, i); /*0x942637*/
          sub_942170(Args, v29, (int)v27, a4, a5); /*0x94263e*/
        }
        sub_941C90((const char **)a5, *(_DWORD *)(a4 + 8)); /*0x94266a*/
        sub_8BBEE0(a4, "\n%s<!-- Homogeneous Data -->", *Args); /*0x942678*/
        *(_DWORD *)v46 = sub_953130(v27); /*0x942687*/
        v43 = *((_DWORD *)v6 + 1); /*0x94268e*/
        v30 = *((_DWORD *)v6 + 2); /*0x942692*/
        Format = 0; /*0x942697*/
        if ( v30 > 0 ) /*0x94269f*/
        {
          do /*0x9426d7*/
          {
            sub_941CE0((const void **)Args, v27, v43, a4, a5); /*0x9426b3*/
            v43 += *(_DWORD *)v46; /*0x9426c9*/
            v31 = *((_DWORD *)v6 + 2); /*0x9426cd*/
            ++Format; /*0x9426d3*/
          }
          while ( (int)Format < v31 ); /*0x9426d7*/
        }
        sub_941B90(0xFFFFFFFF, (const void **)Args); /*0x9426dc*/
        goto LABEL_86; /*0x9426e1*/
      case 0x1C: /*0x942241*/
        v44 = sub_940B70((signed __int16 *)a2); /*0x9426ef*/
        if ( !v44 ) /*0x9426f3*/
          v44 = 1; /*0x9426f5*/
        for ( j = 0; j < v44; ++j ) /*0x942705*/
        {
          if ( *(_DWORD *)&v6[8 * j] ) /*0x942712*/
          {
            if ( *(_DWORD *)&v6[8 * j + 4] ) /*0x94271d*/
            {
              (*(void (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)a5 + 0x10))(a5, v46, *(_DWORD *)&v6[8 * j]); /*0x942733*/
              (*(void (__thiscall **)(void *, char **, _DWORD))(*(_DWORD *)a5 + 0x10))( /*0x942744*/
                a5,
                &Format,
                *(_DWORD *)&v6[8 * j + 4]);
              v33 = word_A36430; /*0x942750*/
              if ( j + 1 >= v44 ) /*0x942755*/
                v33 = EmptyString; /*0x942757*/
              sub_8BBEE0(a4, "(%s %s%s)", *(const char **)v46, Format, v33); /*0x94276d*/
              v34 = Format + 0xFFFFFFF4; /*0x942779*/
              v35 = *((_DWORD *)Format + 0xFFFFFFFF) - 1; /*0x94277f*/
              *(_DWORD *)&Format[0xFFFFFFFC] = v35; /*0x942780*/
              if ( v35 < 0 ) /*0x942783*/
                sub_8B1930(v34); /*0x942785*/
              v36 = (_DWORD *)(*(_DWORD *)v46 - 0xC); /*0x942791*/
              v37 = *(_DWORD *)(*(_DWORD *)v46 - 4) - 1; /*0x942794*/
              *(_DWORD *)(*(_DWORD *)v46 - 0xC + 8) = v37; /*0x942795*/
              if ( v37 < 0 ) /*0x942798*/
                sub_8B1930(v36); /*0x94279a*/
            }
          }
        }
        goto LABEL_86; /*0x9427a6*/
      default:
        JUMPOUT(0x9427AE); /*0x9427ae*/
    }
  }
  return sub_8BBEE0(a4, "\n%s<!-- <hkparam name=\"%s\">(null)</hkparam> -->", *Args, *a2); /*0x9421c6*/
}
