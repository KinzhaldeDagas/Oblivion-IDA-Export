void __thiscall sub_615480(int *this, int a2)
{
  int *v2; // ebp
  int *v3; // edi
  int v4; // esi
  bool v5; // zf
  _DWORD *v6; // eax
  int v7; // ecx

  if ( *(this + 0x5E) > 0 ) /*0x615487*/
  {
    v2 = this + 0x57; /*0x61548e*/
    v3 = this + 0x57; /*0x615495*/
    if ( this != (int *)0xFFFFFEA4 ) /*0x615499*/
    {
      do /*0x61550b*/
      {
        v4 = *v3; /*0x6154a1*/
        v5 = *v3 == 0; /*0x6154a3*/
        v3 = (int *)v3[1]; /*0x6154a5*/
        if ( !v5 ) /*0x6154a8*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x330))(v4) ) /*0x6154b4*/
          {
            v6 = *(_DWORD **)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x330))(v4) + 0x40); /*0x6154c6*/
            if ( v6 ) /*0x6154cb*/
            {
              do /*0x6154d0*/
              {
                v7 = v6[1]; /*0x6154d0*/
                if ( !v7 && !*v6 ) /*0x6154d7*/
                  break; /*0x6154d7*/
                if ( *(_DWORD *)*v6 == a2 ) /*0x6154df*/
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x370))(v4, a2) ) /*0x6154f4*/
                  {
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x340))(v4, a2); /*0x615505*/
                    v3 = v2; /*0x615507*/
                  }
                  break; /*0x615507*/
                }
                v6 = (_DWORD *)v6[1]; /*0x6154e1*/
              }
              while ( v7 ); /*0x6154d0*/
            }
          }
        }
      }
      while ( v3 ); /*0x61550b*/
    }
  }
}
