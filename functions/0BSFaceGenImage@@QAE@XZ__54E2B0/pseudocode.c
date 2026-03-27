BSFaceGenImage *__thiscall BSFaceGenImage::BSFaceGenImage(BSFaceGenImage *this, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx

  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &BSFaceGenImage::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  v3 = *((_DWORD *)this + 2);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *((_DWORD *)this + 2) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v4 = *((_DWORD *)this + 2);
  if ( v4 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x4C))(v4);
    v6 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 7) = v5;
    *((_DWORD *)this + 8) = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x50))(v6);
  }
  else
  {
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 7) = 0;
  }
  return this;
}
