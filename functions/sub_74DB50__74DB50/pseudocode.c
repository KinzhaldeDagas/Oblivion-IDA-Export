char __thiscall sub_74DB50(const char **this, int a2, int a3)
{
  int v3; // ebp
  unsigned int v5; // eax
  unsigned int v6; // esi
  int v7; // ecx
  NiAVObject *v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // edi

  v3 = a3; /*0x74db56*/
  LOBYTE(v5) = sub_752C40(this, a2, (_DWORD **)a3); /*0x74db5f*/
  v6 = 0; /*0x74db64*/
  if ( *((_WORD *)this + 0x11) ) /*0x74db66*/
  {
    do /*0x74dbbb*/
    {
      v7 = *(_DWORD *)&(*(this + 7))[4 * v6]; /*0x74db73*/
      if ( v7 ) /*0x74db78*/
      {
        v8 = (NiAVObject *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x18))(v7, v3); /*0x74db80*/
        sub_74D8C0(a2, &a3, v6, v8); /*0x74db8d*/
        v9 = (void (__thiscall ***)(_DWORD, int))a3; /*0x74db92*/
        if ( a3 ) /*0x74db98*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) ) /*0x74db9e*/
            (**v9)(v9, 1); /*0x74dbb0*/
        }
      }
      v5 = *((unsigned __int16 *)this + 0x11); /*0x74dbb2*/
      ++v6; /*0x74dbb6*/
    }
    while ( v6 < v5 ); /*0x74dbbb*/
  }
  return v5; /*0x74dbbe*/
}
