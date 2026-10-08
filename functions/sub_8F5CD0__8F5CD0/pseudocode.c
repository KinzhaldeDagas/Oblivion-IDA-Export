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

  v4 = a3; /*0x8f5cd6*/
  v6 = *(this + 5) - *(this + 4); /*0x8f5ce4*/
  if ( a3 <= v6 ) /*0x8f5ce8*/
  {
LABEL_9:
    sub_8B1890((void *)(*(this + 4) + *(this + 3)), a2, v4); /*0x8f5d5a*/
    *(this + 4) += v4; /*0x8f5d73*/
    return a3; /*0x8f5d76*/
  }
  else
  {
    while ( 1 ) /*0x8f5cfb*/
    {
      sub_8B1890((void *)(*(this + 3) + *(this + 4)), a2, v6); /*0x8f5cfb*/
      v7 = *(this + 2); /*0x8f5d03*/
      v8 = &a2[v6]; /*0x8f5d06*/
      v9 = v6 + *(this + 4); /*0x8f5d08*/
      v4 -= v6; /*0x8f5d0a*/
      v10 = 0; /*0x8f5d0f*/
      v14 = v8; /*0x8f5d13*/
      *(this + 4) = v9; /*0x8f5d17*/
      v11 = v9; /*0x8f5d1a*/
      if ( v7 ) /*0x8f5d1c*/
      {
        if ( v9 <= 0 ) /*0x8f5d20*/
        {
LABEL_6:
          *(this + 4) = 0; /*0x8f5d3f*/
        }
        else
        {
          while ( 1 ) /*0x8f5d32*/
          {
            v12 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 2) + 0xC))( /*0x8f5d32*/
                    *(this + 2),
                    v10 + *(this + 3),
                    v11 - v10);
            v10 += v12; /*0x8f5d35*/
            if ( !v12 ) /*0x8f5d39*/
              break; /*0x8f5d39*/
            if ( v10 >= v11 ) /*0x8f5d3d*/
              goto LABEL_6; /*0x8f5d3d*/
          }
        }
      }
      if ( v10 != v11 ) /*0x8f5d48*/
        return a3 - v4; /*0x8f5d86*/
      a2 = v14; /*0x8f5d50*/
      v6 = *(this + 5) - *(this + 4); /*0x8f5d54*/
      if ( v4 <= v6 ) /*0x8f5d58*/
        goto LABEL_9; /*0x8f5d58*/
    }
  }
}
