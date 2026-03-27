void __thiscall sub_58BDD0(float *this)
{
  int i; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // ecx
  char *v6; // eax
  int v7; // eax
  _WORD *v8; // edx
  _DWORD *v9; // esi
  float *j; // edx
  float *v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // ecx

  if ( !*(_BYTE *)(*(_DWORD *)this + 5) )
  {
    for ( i = *(_DWORD *)(*((_DWORD *)this + 5) + 0x14); i; i = *(_DWORD *)(i + 0x14) )
    {
      if ( sub_589770((int)this) )
      {
        v3 = *(_DWORD **)i;
        v4 = (_DWORD *)i;
        if ( *(_DWORD *)i )
        {
          do
          {
            v4 = v3;
            v3 = (_DWORD *)*v3;
          }
          while ( v3 );
        }
        v5 = *((_DWORD *)this + 2);
        if ( v5 && (v6 = *(char **)(v4[2] + 8)) != 0 )
          v7 = _strcmp(v6, *((char **)this + 2));
        else
          v7 = 2 * (v5 == 0) - 1;
        if ( v7 )
        {
          BSStringT_Set((BSStringT *)(v4[2] + 8), *((const char **)this + 2), 0);
          *(float *)(v4[2] + 4) = 0.0;
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v4[2] + 0xC))(*(_DWORD *)v4[2]) == 0x387 )
            *(_DWORD *)(*(_DWORD *)v4[2] + 0x2C) |= 2u;
          v8 = (_WORD *)v4[2];
          if ( v8[0xC] == 0xFE6 )
            *(_DWORD *)(*(_DWORD *)v8 + 0x2C) |= 0x20u;
        }
      }
      else
      {
        *(float *)(i + 8) = *(this + 1);
      }
    }
    v9 = *(_DWORD **)(*((_DWORD *)this + 5) + 0x14);
    for ( j = 0; v9; j = v11 )
    {
      v11 = 0;
      if ( v9[3] )
      {
        v12 = (_DWORD *)*v9;
        v13 = v9;
        if ( *v9 )
        {
          do
          {
            v13 = v12;
            v12 = (_DWORD *)*v12;
          }
          while ( v12 );
        }
        v11 = (float *)v13[2];
        if ( v11 )
        {
          if ( v11 != j )
            DoActionEnumeration(v11, 0);
        }
      }
      v9 = (_DWORD *)v9[5];
    }
  }
}
