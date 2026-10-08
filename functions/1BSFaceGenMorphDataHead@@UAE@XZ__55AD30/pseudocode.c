void __thiscall BSFaceGenMorphDataHead::~BSFaceGenMorphDataHead(BSFaceGenMorphDataHead *this)
{
  unsigned int i; // esi
  void (__thiscall ****v3)(_DWORD, int); // eax
  void (__thiscall ***v4)(_DWORD, int); // eax
  unsigned int j; // esi
  void (__thiscall ****v6)(_DWORD, int); // eax
  void (__thiscall ***v7)(_DWORD, int); // eax
  unsigned int k; // esi
  void (__thiscall ****v9)(_DWORD, int); // eax
  void (__thiscall ***v10)(_DWORD, int); // eax
  void (__thiscall ****v11)(_DWORD, int); // eax
  void (__thiscall ***v12)(_DWORD, int); // eax

  *(_DWORD *)this = &BSFaceGenMorphDataHead::`vftable'; /*0x55ad59*/
  if ( *((_DWORD *)this + 2) ) /*0x55ad5f*/
  {
    for ( i = 0; i < 0x34; i += 4 ) /*0x55ad6d*/
    {
      v3 = (void (__thiscall ****)(_DWORD, int))(i + *((_DWORD *)this + 2)); /*0x55ad73*/
      if ( *v3 ) /*0x55ad75*/
      {
        v4 = *v3; /*0x55ad7a*/
        if ( v4 ) /*0x55ad7e*/
          (**v4)(v4, 1); /*0x55ad88*/
      }
    }
    FormHeapFree(*((_DWORD *)this + 2)); /*0x55ad96*/
  }
  if ( *((_DWORD *)this + 3) ) /*0x55ad9e*/
  {
    for ( j = 0; j < 0x44; j += 4 ) /*0x55ada4*/
    {
      v6 = (void (__thiscall ****)(_DWORD, int))(j + *((_DWORD *)this + 3)); /*0x55adad*/
      if ( *v6 ) /*0x55ada9*/
      {
        v7 = *v6; /*0x55adb2*/
        if ( v7 ) /*0x55adb6*/
          (**v7)(v7, 1); /*0x55adc0*/
      }
    }
    FormHeapFree(*((_DWORD *)this + 3)); /*0x55adce*/
  }
  if ( *((_DWORD *)this + 4) ) /*0x55add6*/
  {
    for ( k = 0; k < 0x40; k += 4 ) /*0x55addc*/
    {
      v9 = (void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 4) + k); /*0x55ade7*/
      if ( *v9 ) /*0x55ade3*/
      {
        v10 = *v9; /*0x55adec*/
        if ( v10 ) /*0x55adf0*/
          (**v10)(v10, 1); /*0x55adfa*/
      }
    }
    FormHeapFree(*((_DWORD *)this + 4)); /*0x55ae08*/
  }
  v11 = *((void (__thiscall *****)(_DWORD, int))this + 5); /*0x55ae10*/
  if ( v11 ) /*0x55ae15*/
  {
    if ( *v11 ) /*0x55ae17*/
    {
      v12 = *v11; /*0x55ae1c*/
      if ( v12 ) /*0x55ae20*/
        (**v12)(v12, 1); /*0x55ae2a*/
    }
    FormHeapFree(*((_DWORD *)this + 5)); /*0x55ae30*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x55ae3d*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x55ae43*/
}
