char __thiscall sub_704030(_DWORD *this, int a2)
{
  char result; // al
  unsigned int i; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int j; // esi
  int v9; // eax
  int v10; // eax

  result = sub_700A70(a2); /*0x704039*/
  if ( result ) /*0x704040*/
  {
    for ( i = 0; i < *((unsigned __int16 *)this + 0x13); ++i ) /*0x70404a*/
    {
      v5 = *(_DWORD *)(*(this + 8) + 4 * i); /*0x704053*/
      if ( v5 ) /*0x704058*/
      {
        v6 = *(_DWORD *)(v5 + 8); /*0x70405a*/
        if ( v6 ) /*0x70405f*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2); /*0x704069*/
      }
    }
    v7 = *(this + 0xB); /*0x704076*/
    if ( v7 ) /*0x70407b*/
    {
      for ( j = 0; j < *(unsigned __int16 *)(v7 + 0xA); ++j ) /*0x70407f*/
      {
        v9 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4 * j); /*0x704088*/
        if ( v9 ) /*0x70408d*/
        {
          v10 = *(_DWORD *)(v9 + 8); /*0x70408f*/
          if ( v10 ) /*0x704094*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x24))(v10, a2); /*0x70409e*/
        }
        v7 = *(this + 0xB); /*0x7040a0*/
      }
    }
    return 1; /*0x7040b0*/
  }
  return result; /*0x704042*/
}
