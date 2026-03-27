void __thiscall sub_54ACA0(int **this, char a2, char a3, char a4, char a5)
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

  if ( a2 )
    ((void (__thiscall *)(int **))(*this)[0x35])(this);
  if ( a4 )
  {
    if ( *(this + 0x1A) )
    {
      for ( i = (void (__thiscall ***)(_DWORD, int))(*(this + 0x18))[2];
            i;
            i = (void (__thiscall ***)(_DWORD, int))(*(this + 0x18))[2] )
      {
        (**i)(i, 1);
        v7 = *(this + 0x18);
        v8 = *v7;
        v9 = *v7 == 0;
        *(this + 0x18) = (int *)*v7;
        if ( v9 )
          *(this + 0x19) = 0;
        else
          *(_DWORD *)(v8 + 4) = 0;
        ((void (__thiscall *)(int **, int *))(*(this + 0x17))[2])(this + 0x17, v7);
        *(this + 0x1A) = (int *)((char *)*(this + 0x1A) + 0xFFFFFFFF);
        if ( !*(this + 0x1A) )
          break;
      }
    }
  }
  if ( a3 )
  {
    if ( *(this + 0x31) )
    {
      for ( j = (void (__thiscall ***)(_DWORD, int))(*(this + 0x2F))[2];
            j;
            j = (void (__thiscall ***)(_DWORD, int))(*(this + 0x2F))[2] )
      {
        (**j)(j, 1);
        v11 = *(this + 0x2F);
        v12 = *v11;
        v9 = *v11 == 0;
        *(this + 0x2F) = (int *)*v11;
        if ( v9 )
          *(this + 0x30) = 0;
        else
          *(_DWORD *)(v12 + 4) = 0;
        ((void (__thiscall *)(int **, int *))(*(this + 0x2E))[2])(this + 0x2E, v11);
        *(this + 0x31) = (int *)((char *)*(this + 0x31) + 0xFFFFFFFF);
        if ( !*(this + 0x31) )
          break;
      }
    }
  }
  if ( a5 )
  {
    if ( *(this + 0x48) )
    {
      for ( k = (void (__thiscall ***)(_DWORD, int))(*(this + 0x46))[2];
            k;
            k = (void (__thiscall ***)(_DWORD, int))(*(this + 0x46))[2] )
      {
        (**k)(k, 1);
        v14 = *(this + 0x46);
        v15 = *v14;
        v9 = *v14 == 0;
        *(this + 0x46) = (int *)*v14;
        if ( v9 )
          *(this + 0x47) = 0;
        else
          *(_DWORD *)(v15 + 4) = 0;
        ((void (__thiscall *)(int **, int *))(*(this + 0x45))[2])(this + 0x45, v14);
        *(this + 0x48) = (int *)((char *)*(this + 0x48) + 0xFFFFFFFF);
        if ( !*(this + 0x48) )
          break;
      }
    }
  }
}
