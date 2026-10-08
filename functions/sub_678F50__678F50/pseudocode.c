LONG __thiscall sub_678F50(int *this, int a2, LONG a3)
{
  LONG result; // eax
  int *v4; // esi
  LONG v5; // edi
  char v6; // bl
  int *v7; // ebx
  const char *v8; // ebp
  int v9; // edi
  int (__thiscall ***v10)(_DWORD, int); // esi

  result = 0; /*0x678f53*/
  v4 = this + 0x12; /*0x678f58*/
  if ( *(this + 0x13) ) /*0x678f55*/
  {
    v5 = a3; /*0x678f71*/
  }
  else
  {
    v5 = 0; /*0x678f62*/
    result = 1; /*0x678f66*/
    if ( !*v4 ) /*0x678f64*/
    {
      v6 = 1; /*0x678f6d*/
      goto LABEL_6; /*0x678f6f*/
    }
  }
  v6 = 0; /*0x678f75*/
LABEL_6:
  if ( (result & 1) != 0 ) /*0x678f79*/
  {
    if ( v5 ) /*0x678f7d*/
    {
      result = InterlockedDecrement((volatile LONG *)(v5 + 4)); /*0x678f83*/
      if ( !result ) /*0x678f8b*/
        result = (**(int (__thiscall ***)(LONG, int))v5)(v5, 1); /*0x678f95*/
    }
  }
  if ( !v6 ) /*0x678f99*/
  {
    v7 = v4; /*0x678f9f*/
    if ( v4 ) /*0x678fa3*/
    {
      v8 = (const char *)a3; /*0x678faa*/
      do /*0x679045*/
      {
        v9 = *NodeVoid_GetDataAddRef(v7, &a3); /*0x678fbc*/
        result = a3; /*0x678fbe*/
        if ( a3 ) /*0x678fc4*/
        {
          v10 = (int (__thiscall ***)(_DWORD, int))a3; /*0x678fc6*/
          result = InterlockedDecrement((volatile LONG *)(a3 + 4)); /*0x678fcc*/
          if ( !result ) /*0x678fd4*/
            result = (**v10)(v10, 1); /*0x678fe2*/
        }
        if ( v9 ) /*0x678fe6*/
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x678fef*/
          if ( result ) /*0x678ff3*/
          {
            while ( (float *)result != &qword_B3BB2C[0x166] ) /*0x678ffa*/
            {
              result = *(_DWORD *)(result + 4); /*0x678ffc*/
              if ( !result ) /*0x679001*/
                goto LABEL_24; /*0x679001*/
            }
            if ( *(_DWORD *)(v9 + 0x1C) == a2 ) /*0x67900c*/
            {
              result = strcmp(*(const char **)(v9 + 0x2C), v8); /*0x679017*/
              if ( !result ) /*0x67903a*/
                *(_BYTE *)(v9 + 0x24) = 1; /*0x67903c*/
            }
          }
        }
LABEL_24:
        v7 = (int *)v7[1]; /*0x679040*/
      }
      while ( v7 ); /*0x679045*/
    }
  }
  return result; /*0x67904c*/
}
