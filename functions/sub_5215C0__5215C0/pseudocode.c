char *__thiscall sub_5215C0(_DWORD *this, char *a2)
{
  char *v3; // edi
  char *result; // eax
  char *v5; // esi
  char *v6; // eax

  v3 = a2;
  result = 0;
  if ( a2 )
  {
    if ( *a2 )
    {
      a2 = 0;
      v5 = 0;
      if ( NiTMap_GetAt(this, (int)v3, &a2) )
      {
        if ( a2 )
          v5 = a2;
      }
      if ( !v5 )
      {
        v6 = (char *)FormHeapAlloc(0x24u);
        a2 = v6;
        if ( v6 )
          v5 = (char *)sub_521340(v6);
        else
          v5 = 0;
        BSStringT_Set((BSStringT *)v5 + 3, v3, 0);
        sub_452910((unsigned int *)v5, 1u);
        *((_DWORD *)v5 + 5) = 1;
        *((_DWORD *)v5 + 8) = sub_435830(v3, 1);
        sub_412D30(this, (int)v3, (TESForm *)v5);
      }
      return v5;
    }
  }
  return result;
}
