void __thiscall sub_54ADE0(int **this, char a2, char a3, char a4, char a5)
{
  void (__thiscall ***i)(_DWORD, int); // ecx
  int *v7; // ecx
  int v8; // eax
  bool v9; // zf
  void (__thiscall ***j)(_DWORD, int); // ecx
  int *v11; // ecx
  int v12; // eax
  void (__thiscall ***k)(_DWORD, int); // ecx
  int *v14; // ecx
  int v15; // eax
  void (__thiscall ***m)(_DWORD, int); // ecx
  int *v17; // ecx
  int v18; // eax

  if ( a2 )
  {
    if ( *(this + 0xC) )
    {
      for ( i = (void (__thiscall ***)(_DWORD, int))(*(this + 0xA))[2];
            i;
            i = (void (__thiscall ***)(_DWORD, int))(*(this + 0xA))[2] )
      {
        (**i)(i, 1);
        v7 = *(this + 0xA);
        v8 = *v7;
        v9 = *v7 == 0;
        *(this + 0xA) = (int *)*v7;
        if ( v9 )
          *(this + 0xB) = 0;
        else
          *(_DWORD *)(v8 + 4) = 0;
        ((void (__thiscall *)(int **, int *))(*(this + 9))[2])(this + 9, v7);
        *(this + 0xC) = (int *)((char *)*(this + 0xC) + 0xFFFFFFFF);
        if ( !*(this + 0xC) )
          break;
      }
    }
  }
  if ( a4 )
  {
    if ( *(this + 0x23) )
    {
      for ( j = (void (__thiscall ***)(_DWORD, int))(*(this + 0x21))[2];
            j;
            j = (void (__thiscall ***)(_DWORD, int))(*(this + 0x21))[2] )
      {
        (**j)(j, 1);
        v11 = *(this + 0x21);
        v12 = *v11;
        v9 = *v11 == 0;
        *(this + 0x21) = (int *)*v11;
        if ( v9 )
          *(this + 0x22) = 0;
        else
          *(_DWORD *)(v12 + 4) = 0;
        ((void (__thiscall *)(int **, int *))(*(this + 0x20))[2])(this + 0x20, v11);
        *(this + 0x23) = (int *)((char *)*(this + 0x23) + 0xFFFFFFFF);
        if ( !*(this + 0x23) )
          break;
      }
    }
  }
  if ( a3 )
  {
    if ( *(this + 0x3A) )
    {
      for ( k = (void (__thiscall ***)(_DWORD, int))(*(this + 0x38))[2];
            k;
            k = (void (__thiscall ***)(_DWORD, int))(*(this + 0x38))[2] )
      {
        (**k)(k, 1);
        v14 = *(this + 0x38);
        v15 = *v14;
        v9 = *v14 == 0;
        *(this + 0x38) = (int *)*v14;
        if ( v9 )
          *(this + 0x39) = 0;
        else
          *(_DWORD *)(v15 + 4) = 0;
        ((void (__thiscall *)(int **, int *))(*(this + 0x37))[2])(this + 0x37, v14);
        *(this + 0x3A) = (int *)((char *)*(this + 0x3A) + 0xFFFFFFFF);
        if ( !*(this + 0x3A) )
          break;
      }
    }
  }
  if ( a5 )
  {
    if ( *(this + 0x51) )
    {
      for ( m = (void (__thiscall ***)(_DWORD, int))(*(this + 0x4F))[2];
            m;
            m = (void (__thiscall ***)(_DWORD, int))(*(this + 0x4F))[2] )
      {
        (**m)(m, 1);
        v17 = *(this + 0x4F);
        v18 = *v17;
        v9 = *v17 == 0;
        *(this + 0x4F) = (int *)*v17;
        if ( v9 )
          *(this + 0x50) = 0;
        else
          *(_DWORD *)(v18 + 4) = 0;
        ((void (__thiscall *)(int **, int *))(*(this + 0x4E))[2])(this + 0x4E, v17);
        *(this + 0x51) = (int *)((char *)*(this + 0x51) + 0xFFFFFFFF);
        if ( !*(this + 0x51) )
          break;
      }
    }
  }
}
