void __thiscall sub_5B22E0(void **this, int a2)
{
  void **v2; // esi
  void **v3; // edi
  bool v4; // zf
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax

  if ( a2 )
  {
    v2 = this + 1;
    v3 = this;
    if ( *(this + 1) )
    {
      while ( !(unsigned __int8)ActvEffListEntry_CompareName(*v3, a2) )
      {
        v3 = (void **)*v2;
        v4 = *((_DWORD *)*v2 + 1) == 0;
        v2 = (void **)((char *)*v2 + 4);
        if ( v4 )
          goto LABEL_5;
      }
      goto LABEL_11;
    }
LABEL_5:
    if ( *v3 )
    {
      if ( (unsigned __int8)ActvEffListEntry_CompareName(*v3, a2) )
      {
LABEL_11:
        v7 = *v3;
        sub_5B2140(a2);
        v7[1] += v8;
        return;
      }
      v5 = (_DWORD *)FormHeapAlloc(8u);
      if ( v5 )
      {
        v6 = (_DWORD *)FormHeapAlloc(8u);
        if ( v6 )
          *v5 = sub_5B2190(v6, a2);
        else
          *v5 = 0;
        v5[1] = 0;
        v3[1] = v5;
      }
      else
      {
        v3[1] = 0;
      }
    }
    else
    {
      v9 = (_DWORD *)FormHeapAlloc(8u);
      if ( v9 )
        v10 = sub_5B2190(v9, a2);
      else
        v10 = 0;
      *v3 = v10;
      sub_5B2416(a2);
    }
  }
  else
  {
    sub_5B2416(0);
  }
}
