int __thiscall sub_4BCCB0(_DWORD *this, int a2)
{
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int *v4; // esi
  int v5; // edi
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  int v10; // ebp
  int v11; // eax

  sub_4392E0(this, a2);
  if ( !(_BYTE)a2 )
  {
    v3 = InterlockedDecrement;
    v4 = (int *)(*(this + 0xB) + 0x20);
    v5 = *v4;
    if ( *v4 )
    {
      if ( !v3((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      *v4 = 0;
    }
    v6 = *(this + 0xB);
    v7 = *(_DWORD *)(v6 + 0x1C);
    v8 = (_DWORD *)(v6 + 0x1C);
    if ( v7 )
    {
      if ( !v3((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      *v8 = 0;
    }
  }
  v9 = (_DWORD *)*(this + 0xB);
  v10 = *(this + 0xA);
  v11 = sub_4EF1D0(*v9, v9[1]);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x10))(v10, v11);
}
