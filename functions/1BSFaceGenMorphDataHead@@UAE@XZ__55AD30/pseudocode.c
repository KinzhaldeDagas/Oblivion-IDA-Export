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

  *(_DWORD *)this = &BSFaceGenMorphDataHead::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    for ( i = 0; i < 0x34; i += 4 )
    {
      v3 = (void (__thiscall ****)(_DWORD, int))(i + *((_DWORD *)this + 2));
      if ( *v3 )
      {
        v4 = *v3;
        if ( v4 )
          (**v4)(v4, 1);
      }
    }
    FormHeapFree(*((_DWORD *)this + 2));
  }
  if ( *((_DWORD *)this + 3) )
  {
    for ( j = 0; j < 0x44; j += 4 )
    {
      v6 = (void (__thiscall ****)(_DWORD, int))(j + *((_DWORD *)this + 3));
      if ( *v6 )
      {
        v7 = *v6;
        if ( v7 )
          (**v7)(v7, 1);
      }
    }
    FormHeapFree(*((_DWORD *)this + 3));
  }
  if ( *((_DWORD *)this + 4) )
  {
    for ( k = 0; k < 0x40; k += 4 )
    {
      v9 = (void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 4) + k);
      if ( *v9 )
      {
        v10 = *v9;
        if ( v10 )
          (**v10)(v10, 1);
      }
    }
    FormHeapFree(*((_DWORD *)this + 4));
  }
  v11 = *((void (__thiscall *****)(_DWORD, int))this + 5);
  if ( v11 )
  {
    if ( *v11 )
    {
      v12 = *v11;
      if ( v12 )
        (**v12)(v12, 1);
    }
    FormHeapFree(*((_DWORD *)this + 5));
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
