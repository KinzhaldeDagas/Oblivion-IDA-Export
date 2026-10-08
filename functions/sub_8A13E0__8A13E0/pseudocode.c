void __thiscall sub_8A13E0(_DWORD *this)
{
  int v2; // ecx
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // eax
  int v6; // eax
  int v7; // esi

  if ( this ) /*0x8a13e5*/
  {
    v2 = *(this + 2); /*0x8a13e7*/
    if ( v2 ) /*0x8a13ec*/
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x1C))(v2); /*0x8a13f6*/
      if ( v3 ) /*0x8a13fa*/
      {
        v4 = InterlockedDecrement; /*0x8a13fd*/
        do /*0x8a1439*/
        {
          v5 = *(this + 2); /*0x8a1404*/
          --v3; /*0x8a1407*/
          if ( v5 && (v6 = *(_DWORD *)(*(_DWORD *)(v5 + 0x10) + 8 * v3)) != 0 ) /*0x8a1416*/
            v7 = *(_DWORD *)(v6 + 8); /*0x8a1418*/
          else
            v7 = 0; /*0x8a141d*/
          if ( v7 ) /*0x8a1421*/
          {
            if ( !v4((volatile LONG *)(v7 + 4)) ) /*0x8a1427*/
              (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x8a1435*/
          }
        }
        while ( v3 ); /*0x8a1439*/
      }
    }
  }
}
