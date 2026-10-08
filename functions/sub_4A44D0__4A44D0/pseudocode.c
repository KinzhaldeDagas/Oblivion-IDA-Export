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

  v2 = a2; /*0x4a44d2*/
  v14 = this; /*0x4a44db*/
  if ( !a2 ) /*0x4a44df*/
  {
    v4 = FormHeapAlloc(0xCu); /*0x4a44e3*/
    if ( v4 ) /*0x4a44ed*/
    {
      v5 = *((_BYTE *)this + 8); /*0x4a44ef*/
      *(_DWORD *)v4 = 0; /*0x4a44f2*/
      *(_DWORD *)(v4 + 4) = 0; /*0x4a44f4*/
      *(_BYTE *)(v4 + 8) = v5; /*0x4a44f7*/
    }
    else
    {
      v4 = 0; /*0x4a44fc*/
    }
    v2 = v4; /*0x4a44fe*/
  }
  if ( this ) /*0x4a4502*/
  {
    do /*0x4a45d2*/
    {
      if ( *(_BYTE *)(v2 + 8) ) /*0x4a4510*/
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)*v14 + 0x10))(*v14); /*0x4a4521*/
        v7 = v6; /*0x4a4523*/
        if ( v6 ) /*0x4a4527*/
        {
          v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0xC))(v6); /*0x4a4537*/
          v9 = (_DWORD *)v2; /*0x4a4539*/
          while ( !*v9 || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v9 + 0xC))(*v9) != v8 ) /*0x4a454f*/
          {
            v9 = (_DWORD *)v9[1]; /*0x4a4551*/
            if ( !v9 ) /*0x4a4556*/
              goto LABEL_20; /*0x4a4556*/
          }
          (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x4a4563*/
        }
      }
      else
      {
        v7 = *v14; /*0x4a4567*/
        if ( *v14 ) /*0x4a4567*/
        {
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0xC))(v7); /*0x4a4577*/
          v11 = (_DWORD *)v2; /*0x4a4579*/
          while ( !*v11 || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v11 + 0xC))(*v11) != v10 ) /*0x4a458f*/
          {
            v11 = (_DWORD *)v11[1]; /*0x4a4591*/
            if ( !v11 ) /*0x4a4596*/
            {
LABEL_20:
              if ( *(_DWORD *)v2 ) /*0x4a4598*/
              {
                v12 = (_DWORD *)FormHeapAlloc(8u); /*0x4a459f*/
                if ( v12 ) /*0x4a45a9*/
                {
                  *v12 = *(_DWORD *)v2; /*0x4a45ad*/
                  v12[1] = 0; /*0x4a45af*/
                }
                else
                {
                  v12 = 0; /*0x4a45b8*/
                }
                v12[1] = *(_DWORD *)(v2 + 4); /*0x4a45bd*/
                *(_DWORD *)(v2 + 4) = v12; /*0x4a45c0*/
              }
              *(_DWORD *)v2 = v7; /*0x4a45c3*/
              break; /*0x4a45c3*/
            }
          }
        }
      }
      v14 = (int *)v14[1]; /*0x4a45c5*/
    }
    while ( v14 ); /*0x4a45d2*/
  }
  return v2; /*0x4a45da*/
}
