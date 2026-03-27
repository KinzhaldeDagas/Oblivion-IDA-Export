void __thiscall sub_615480(int *this, int a2)
{
  int *v2; // ebp
  int *v3; // edi
  int v4; // esi
  bool v5; // zf
  _DWORD *v6; // eax
  int v7; // ecx

  if ( *(this + 0x5E) > 0 )
  {
    v2 = this + 0x57;
    v3 = this + 0x57;
    if ( this != (int *)0xFFFFFEA4 )
    {
      do
      {
        v4 = *v3;
        v5 = *v3 == 0;
        v3 = (int *)v3[1];
        if ( !v5 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x330))(v4) )
          {
            v6 = *(_DWORD **)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x330))(v4) + 0x40);
            if ( v6 )
            {
              do
              {
                v7 = v6[1];
                if ( !v7 && !*v6 )
                  break;
                if ( *(_DWORD *)*v6 == a2 )
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x370))(v4, a2) )
                  {
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x340))(v4, a2);
                    v3 = v2;
                  }
                  break;
                }
                v6 = (_DWORD *)v6[1];
              }
              while ( v7 );
            }
          }
        }
      }
      while ( v3 );
    }
  }
}
