void __thiscall sub_8A13E0(_DWORD *this)
{
  int v2; // ecx
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // eax
  int v6; // eax
  int v7; // esi

  if ( this )
  {
    v2 = *(this + 2);
    if ( v2 )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x1C))(v2);
      if ( v3 )
      {
        v4 = InterlockedDecrement;
        do
        {
          v5 = *(this + 2);
          --v3;
          if ( v5 && (v6 = *(_DWORD *)(*(_DWORD *)(v5 + 0x10) + 8 * v3)) != 0 )
            v7 = *(_DWORD *)(v6 + 8);
          else
            v7 = 0;
          if ( v7 )
          {
            if ( !v4((volatile LONG *)(v7 + 4)) )
              (**(void (__thiscall ***)(int, int))v7)(v7, 1);
          }
        }
        while ( v3 );
      }
    }
  }
}
