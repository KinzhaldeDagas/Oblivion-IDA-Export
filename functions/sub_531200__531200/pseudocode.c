int *__thiscall sub_531200(TESForm *this, unsigned int *a2, char a3)
{
  int *result; // eax
  int *v5; // esi
  _DWORD *v6; // ecx
  bool v7; // zf
  char *v8; // eax

  FormHeapFree(*a2);
  *a2 = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_WORD *)a2 + 2) = 0;
  result = sub_530C40(this);
  v5 = result;
  if ( result )
  {
    do
    {
      v6 = (_DWORD *)*v5;
      v7 = *v5 == 0;
      v5 = (int *)v5[1];
      if ( !v7 )
      {
        v8 = sub_52E100(v6);
        result = (int *)BSStringT_Append((BSStringT *)a2, v8);
        if ( v5 )
        {
          if ( *v5 )
            result = (int *)BSStringT_Append((BSStringT *)a2, " | ");
        }
      }
    }
    while ( !a3 && v5 );
  }
  return result;
}
