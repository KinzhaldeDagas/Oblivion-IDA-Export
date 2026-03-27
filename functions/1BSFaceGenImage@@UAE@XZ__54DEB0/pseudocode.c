void __thiscall BSFaceGenImage::~BSFaceGenImage(BSFaceGenImage *this)
{
  char *v2; // edi
  bool v3; // cc
  unsigned int *v4; // esi
  unsigned int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // [esp+18h] [ebp-14h] BYREF
  int v9; // [esp+28h] [ebp-4h]

  *(_DWORD *)this = &BSFaceGenImage::`vftable';
  v2 = *((char **)this + 5);
  v3 = *((_DWORD *)this + 4) <= (unsigned int)v2;
  v4 = (unsigned int *)((char *)this + 0xC);
  v9 = 2;
  if ( !v3 )
    _invalid_parameter_noinfo();
  v5 = v4[1];
  if ( v5 > v4[2] )
    _invalid_parameter_noinfo();
  sub_6F14D0(v4, &v8, (int)v4, v5, (int)v4, v2);
  v6 = *((_DWORD *)this + 2);
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 2) = 0;
  }
  if ( v4[1] )
    FormHeapFree(v4[1]);
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v7 = *((_DWORD *)this + 2);
  LOBYTE(v9) = 0;
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
