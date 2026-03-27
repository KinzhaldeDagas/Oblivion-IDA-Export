char __stdcall sub_765290(_DWORD *a1)
{
  _DWORD *v1; // ebx
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // esi
  _DWORD *v8; // ebx
  int v9; // ebp
  int v10; // edi
  _DWORD *v11; // esi
  int v12; // [esp+8h] [ebp-4h]

  v1 = a1;
  v2 = a1[9];
  v12 = v2;
  if ( v2 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) )
    {
      v3 = (*(int (__thiscall **)(_DWORD *))(*a1 + 4))(a1);
      if ( v3 )
      {
        while ( (_UNKNOWN *)v3 != &unk_BAA880 )
        {
          v3 = *(_DWORD *)(v3 + 4);
          if ( !v3 )
            goto LABEL_6;
        }
        v8 = a1 + 0x11;
        v9 = 6;
        do
        {
          v10 = *(_DWORD *)(*v8 + 0x10);
          v11 = (_DWORD *)(*v8 + 0x10);
          if ( v10 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
              (**(void (__thiscall ***)(int, int))v10)(v10, 1);
            *v11 = 0;
          }
          ++v8;
          --v9;
        }
        while ( v9 );
        v2 = v12;
        v1 = a1;
      }
      else
      {
LABEL_6:
        v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x54))(a1);
        v5 = *(_DWORD *)(v4 + 0x10);
        v6 = (_DWORD *)(v4 + 0x10);
        if ( v5 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
            (**(void (__thiscall ***)(int, int))v5)(v5, 1);
          *v6 = 0;
        }
      }
    }
    v1[9] = 0;
    (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  return 1;
}
