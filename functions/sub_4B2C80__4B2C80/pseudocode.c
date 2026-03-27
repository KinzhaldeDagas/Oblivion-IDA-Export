int sub_4B2C80()
{
  int v0; // eax
  int v1; // edx
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  unsigned int v5; // eax

  v0 = 0;
  if ( dword_B08314 )
  {
    v1 = dword_B08318;
    while ( !*(_DWORD *)(v1 + 4 * v0) )
    {
      if ( ++v0 >= (unsigned int)dword_B08314 )
        goto LABEL_5;
    }
    v2 = *(_DWORD **)(v1 + 4 * v0);
  }
  else
  {
LABEL_5:
    v2 = 0;
  }
  v3 = v2;
  while ( v3 )
  {
    v4 = (_DWORD *)v3[2];
    if ( *v3 )
    {
      v3 = (_DWORD *)*v3;
    }
    else
    {
      v5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(off_B08310 + 4))(&off_B08310, v3[1]) + 1;
      if ( v5 >= dword_B08314 )
      {
LABEL_13:
        v3 = 0;
      }
      else
      {
        while ( 1 )
        {
          v3 = *(_DWORD **)(dword_B08318 + 4 * v5);
          if ( v3 )
            break;
          if ( ++v5 >= dword_B08314 )
            goto LABEL_13;
        }
      }
    }
    if ( v4 )
    {
      sub_46D450(v4);
      FormHeapFree((unsigned int)v4);
    }
  }
  return NiTMap_Clear(&off_B08310);
}
