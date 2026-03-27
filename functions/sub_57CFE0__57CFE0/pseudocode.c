unsigned int __userpurge sub_57CFE0@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        signed int a5,
        char a6)
{
  int v6; // esi
  _DWORD *v7; // ebx
  char v10; // cl
  int v11; // edx
  int *v12; // eax
  int v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  bool v16; // zf
  _BYTE *GlobalScriptStateObj; // eax

  v6 = a1;
  v7 = (_DWORD *)(a1 + 0xE0);
  if ( !*(_DWORD *)(a1 + 0xE0) )
    return 0xFFFFFFFF;
  while ( 2 )
  {
    if ( a6 )
      goto LABEL_35;
    v10 = 0;
    v11 = 0;
    v12 = (int *)(v6 + 0xE4);
    while ( !v10 || v12[0xFFFFFFFF] <= 0x3E9 )
    {
      if ( v12[0xFFFFFFFF] == a5 )
      {
        v10 = 1;
      }
      else if ( !v10 )
      {
        goto LABEL_12;
      }
      if ( *v12 > 0x3E9 )
      {
        ++v11;
        break;
      }
LABEL_12:
      if ( *v12 == a5 )
      {
        v10 = 1;
      }
      else if ( !v10 )
      {
        goto LABEL_16;
      }
      if ( v12[1] > 0x3E9 )
      {
        v11 += 2;
        break;
      }
LABEL_16:
      if ( v12[1] == a5 )
      {
        v10 = 1;
      }
      else if ( !v10 )
      {
        goto LABEL_20;
      }
      if ( v12[2] > 0x3E9 )
      {
        v11 += 3;
        break;
      }
LABEL_20:
      if ( v12[2] == a5 )
      {
        v10 = 1;
      }
      else if ( !v10 )
      {
        goto LABEL_24;
      }
      if ( v12[3] > 0x3E9 )
      {
        v11 += 4;
        break;
      }
LABEL_24:
      if ( v12[3] == a5 )
        v10 = 1;
      v11 += 5;
      v12 += 5;
      if ( v11 >= 0xA )
        break;
    }
    if ( !v10 )
      return 0xFFFFFFFF;
    if ( v11 < 0xA && a5 != 3 )
      return 0xFFFFFFFE;
LABEL_35:
    v13 = 0;
    v14 = v7;
    v15 = v7;
    do
    {
      if ( *v14 == a5 )
        ++v15;
      v16 = *v15 == 0;
      *v14 = *v15;
      if ( v16 )
        break;
      ++v13;
      ++v14;
      ++v15;
    }
    while ( v13 < 0xA );
    if ( *v7 != 3 || *(_DWORD *)(a1 + 0xE4) )
    {
      if ( v13 <= 0 )
      {
        if ( a5 == 1 )
          sub_57CC00(0xE9, a2, a3, a4);
        *(_BYTE *)(a1 + 8) = 4;
        if ( a5 == 0x3F3 || a5 == 0x3E9 )
        {
          byte_B42D54 = 0;
          return 0;
        }
        else
        {
          byte_B42D54 = 1;
          return 0;
        }
      }
      else
      {
        if ( v13 == 1 && (*v7 == 0x3F3 || *v7 == 0x3E9) )
          byte_B42D54 = 1;
        return *(_DWORD *)(a1 + 4 * v13 + 0xDC);
      }
    }
    else
    {
      if ( GetGlobalScriptStateObj__(0) )
      {
        GlobalScriptStateObj = (_BYTE *)GetGlobalScriptStateObj__(1);
        sub_5859C0(GlobalScriptStateObj, 0xE9, a2, a3, a4);
      }
      a6 = 0;
      a5 = 3;
      if ( *v7 )
      {
        v6 = a1;
        continue;
      }
      return 0xFFFFFFFF;
    }
  }
}
