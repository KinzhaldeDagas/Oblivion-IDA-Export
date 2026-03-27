void __thiscall sub_530930(unsigned int **this, int a2)
{
  int v2; // ebp
  char **v3; // esi
  _DWORD *v4; // eax
  BSStringT *v5; // edi
  unsigned int **v6; // esi
  unsigned int **v7; // eax
  bool v8; // zf
  BSStringT **v9; // eax

  sub_5308E0(this);
  v2 = a2;
  while ( v2 )
  {
    v3 = *(char ***)v2;
    if ( !*(_DWORD *)v2 )
      break;
    v2 = *(_DWORD *)(v2 + 4);
    v4 = (_DWORD *)FormHeapAlloc(0x18u);
    v5 = v4 ? (BSStringT *)sub_52E150(v4) : 0;
    sub_52E110(v5, v3);
    if ( v5 )
    {
      v6 = this;
      v7 = this + 1;
      if ( *(this + 1) )
      {
        do
        {
          v6 = (unsigned int **)*v7;
          v8 = (*v7)[1] == 0;
          v7 = (unsigned int **)(*v7 + 1);
        }
        while ( !v8 );
      }
      if ( *v6 )
      {
        v9 = (BSStringT **)FormHeapAlloc(8u);
        if ( v9 )
        {
          *v9 = v5;
          v9[1] = 0;
          v6[1] = (unsigned int *)v9;
        }
        else
        {
          v6[1] = 0;
        }
      }
      else
      {
        *v6 = (unsigned int *)v5;
      }
    }
  }
}
