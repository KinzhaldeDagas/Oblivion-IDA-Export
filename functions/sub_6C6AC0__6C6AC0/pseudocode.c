void __thiscall sub_6C6AC0(_DWORD *this)
{
  unsigned int v2; // ebp
  int v3; // ebx
  int v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // esi
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = 0; /*0x6c6ac5*/
  if ( *(this + 3) ) /*0x6c6ac7*/
  {
    v3 = 0; /*0x6c6ace*/
    do /*0x6c6b21*/
    {
      v4 = v3 + *(this + 5); /*0x6c6ad3*/
      if ( *(_DWORD *)(v4 + 8) ) /*0x6c6ad5*/
      {
        (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v4 + 8) + 0x9C))( /*0x6c6af0*/
          *(_DWORD *)(v4 + 8),
          &v6,
          *(unsigned __int8 *)(v4 + 0xC));
        if ( v6 ) /*0x6c6af8*/
        {
          v5 = (void (__thiscall ***)(_DWORD, int))v6; /*0x6c6afa*/
          if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x6c6b00*/
            (**v5)(v5, 1); /*0x6c6b16*/
        }
      }
      ++v2; /*0x6c6b18*/
      v3 += 0x10; /*0x6c6b1b*/
    }
    while ( v2 < *(this + 3) ); /*0x6c6b21*/
  }
}
