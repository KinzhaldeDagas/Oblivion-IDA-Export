int __thiscall sub_4A44D0(int *this, int a2)
{
  int v2; // esi
  int v4; // eax
  char v5; // cl
  int v6; // eax
  int v7; // ebp
  int v8; // ebx
  _DWORD *v9; // edi
  int v10; // ebx
  _DWORD *v11; // edi
  _DWORD *v12; // eax
  int *v14; // [esp+8h] [ebp-4h]

  v2 = a2;
  v14 = this;
  if ( !a2 )
  {
    v4 = FormHeapAlloc(0xCu);
    if ( v4 )
    {
      v5 = *((_BYTE *)this + 8);
      *(_DWORD *)v4 = 0;
      *(_DWORD *)(v4 + 4) = 0;
      *(_BYTE *)(v4 + 8) = v5;
    }
    else
    {
      v4 = 0;
    }
    v2 = v4;
  }
  if ( this )
  {
    do
    {
      if ( *(_BYTE *)(v2 + 8) )
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)*v14 + 0x10))(*v14);
        v7 = v6;
        if ( v6 )
        {
          v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0xC))(v6);
          v9 = (_DWORD *)v2;
          while ( !*v9 || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v9 + 0xC))(*v9) != v8 )
          {
            v9 = (_DWORD *)v9[1];
            if ( !v9 )
              goto LABEL_20;
          }
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
        }
      }
      else
      {
        v7 = *v14;
        if ( *v14 )
        {
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0xC))(v7);
          v11 = (_DWORD *)v2;
          while ( !*v11 || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v11 + 0xC))(*v11) != v10 )
          {
            v11 = (_DWORD *)v11[1];
            if ( !v11 )
            {
LABEL_20:
              if ( *(_DWORD *)v2 )
              {
                v12 = (_DWORD *)FormHeapAlloc(8u);
                if ( v12 )
                {
                  *v12 = *(_DWORD *)v2;
                  v12[1] = 0;
                }
                else
                {
                  v12 = 0;
                }
                v12[1] = *(_DWORD *)(v2 + 4);
                *(_DWORD *)(v2 + 4) = v12;
              }
              *(_DWORD *)v2 = v7;
              break;
            }
          }
        }
      }
      v14 = (int *)v14[1];
    }
    while ( v14 );
  }
  return v2;
}
