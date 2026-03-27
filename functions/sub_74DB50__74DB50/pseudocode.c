char __thiscall sub_74DB50(_DWORD *this, int a2, int a3)
{
  int v3; // ebp
  unsigned int v5; // eax
  unsigned int v6; // esi
  int v7; // ecx
  int v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // edi

  v3 = a3;
  LOBYTE(v5) = sub_752C40(this, a2, (_DWORD **)a3);
  v6 = 0;
  if ( *((_WORD *)this + 0x11) )
  {
    do
    {
      v7 = *(_DWORD *)(*(this + 7) + 4 * v6);
      if ( v7 )
      {
        v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x18))(v7, v3);
        sub_74D8C0(a2, &a3, v6, v8);
        v9 = (void (__thiscall ***)(_DWORD, int))a3;
        if ( a3 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) )
            (**v9)(v9, 1);
        }
      }
      v5 = *((unsigned __int16 *)this + 0x11);
      ++v6;
    }
    while ( v6 < v5 );
  }
  return v5;
}
