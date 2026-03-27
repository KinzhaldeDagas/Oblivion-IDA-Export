BSAnimGroupSequence *__thiscall BSAnimGroupSequence::BSAnimGroupSequence(BSAnimGroupSequence *this, int a2, int a3)
{
  int v4; // ebp
  int v5; // edi
  const char *v6; // ebp
  unsigned int v7; // kr00_4
  char *v8; // eax
  _DWORD *v10; // [esp+18h] [ebp-1Ch] BYREF
  void (__thiscall ***v11)(_DWORD, int); // [esp+1Ch] [ebp-18h]
  int v12; // [esp+30h] [ebp-4h]

  sub_6C7FB0(this, *(char **)(a3 + 8), 0, 1, 0);
  *(_DWORD *)this = &BSAnimGroupSequence::`vftable';
  v12 = 0;
  *((_DWORD *)this + 0x1A) = 0;
  LOBYTE(v12) = 1;
  if ( a2 )
  {
    *((_DWORD *)this + 0x1A) = a2;
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v4 = *(_DWORD *)(a3 + 0x20);
  v5 = *((_DWORD *)this + 8);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *((_DWORD *)this + 8) = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
  *((_DWORD *)this + 0x18) = *(_DWORD *)(a3 + 0x60);
  v6 = *(const char **)(a3 + 0x5C);
  FormHeapFree(*((_DWORD *)this + 0x17));
  *((_DWORD *)this + 0x17) = 0;
  if ( v6 )
  {
    v7 = strlen(v6);
    v8 = (char *)FormHeapAlloc(v7 + 1);
    *((_DWORD *)this + 0x17) = v8;
    strcpy_s(v8, v7 + 1, v6);
  }
  sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)&v10);
  LOBYTE(v12) = 2;
  sub_6C9420((unsigned int *)a3, (int)this, &v10);
  LOBYTE(v12) = 1;
  if ( v10 )
    (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1);
  if ( v11 )
    (**v11)(v11, 1);
  return this;
}
