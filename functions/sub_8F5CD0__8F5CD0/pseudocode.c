int __thiscall sub_8F5CD0(_DWORD *this, char *a2, signed int a3)
{
  signed int v4; // ebp
  signed int v6; // edi
  int v7; // eax
  char *v8; // ebx
  int v9; // edx
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  char *v14; // [esp+14h] [ebp+4h]

  v4 = a3;
  v6 = *(this + 5) - *(this + 4);
  if ( a3 <= v6 )
  {
LABEL_9:
    sub_8B1890((void *)(*(this + 4) + *(this + 3)), a2, v4);
    *(this + 4) += v4;
    return a3;
  }
  else
  {
    while ( 1 )
    {
      sub_8B1890((void *)(*(this + 3) + *(this + 4)), a2, v6);
      v7 = *(this + 2);
      v8 = &a2[v6];
      v9 = v6 + *(this + 4);
      v4 -= v6;
      v10 = 0;
      v14 = v8;
      *(this + 4) = v9;
      v11 = v9;
      if ( v7 )
      {
        if ( v9 <= 0 )
        {
LABEL_6:
          *(this + 4) = 0;
        }
        else
        {
          while ( 1 )
          {
            v12 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 2) + 0xC))(
                    *(this + 2),
                    v10 + *(this + 3),
                    v11 - v10);
            v10 += v12;
            if ( !v12 )
              break;
            if ( v10 >= v11 )
              goto LABEL_6;
          }
        }
      }
      if ( v10 != v11 )
        return a3 - v4;
      a2 = v14;
      v6 = *(this + 5) - *(this + 4);
      if ( v4 <= v6 )
        goto LABEL_9;
    }
  }
}
