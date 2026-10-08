void __thiscall sub_8A1390(_DWORD *this)
{
  int v2; // ecx
  int v3; // esi
  void (__stdcall *v4)(volatile LONG *); // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( this ) /*0x8a1395*/
  {
    v2 = *(this + 2); /*0x8a1397*/
    if ( v2 ) /*0x8a139c*/
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x1C))(v2); /*0x8a13a6*/
      if ( v3 ) /*0x8a13aa*/
      {
        v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x8a13ad*/
        do /*0x8a13da*/
        {
          v5 = *(this + 2); /*0x8a13b3*/
          --v3; /*0x8a13b6*/
          if ( v5 && (v6 = *(_DWORD *)(*(_DWORD *)(v5 + 0x10) + 8 * v3)) != 0 ) /*0x8a13c5*/
            v7 = *(_DWORD *)(v6 + 8); /*0x8a13c7*/
          else
            v7 = 0; /*0x8a13cc*/
          if ( v7 ) /*0x8a13d0*/
            v4((volatile LONG *)(v7 + 4)); /*0x8a13d6*/
        }
        while ( v3 ); /*0x8a13da*/
      }
    }
  }
}
