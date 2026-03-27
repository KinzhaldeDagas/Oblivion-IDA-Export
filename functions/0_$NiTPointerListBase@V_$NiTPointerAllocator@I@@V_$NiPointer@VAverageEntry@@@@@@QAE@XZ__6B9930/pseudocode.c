void __thiscall NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>(
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>> *this)
{
  NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>> *v1; // esi
  unsigned int v2; // ebp
  unsigned int v3; // ebx
  _DWORD *v4; // eax
  unsigned int v5; // edi
  _DWORD *v6; // ecx
  int v7; // esi
  _DWORD *v8; // esi
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  bool v12; // zf
  _DWORD *v13; // ebp
  int v14; // esi
  _DWORD *v15; // eax
  int **i; // esi
  int v18; // [esp+18h] [ebp-20h] BYREF
  void **v19; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD *v20; // [esp+20h] [ebp-18h]
  int v21; // [esp+24h] [ebp-14h]
  int v22; // [esp+28h] [ebp-10h]
  int v23; // [esp+34h] [ebp-4h]

  v1 = this;
  v2 = *((_DWORD *)this + 7);
  if ( v2 > 1 )
  {
    v3 = FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v2);
    v4 = *((_DWORD **)v1 + 5);
    v5 = 0;
    if ( v4 )
    {
      v6 = (_DWORD *)v3;
      do
      {
        *v6 = v4[2];
        v4 = (_DWORD *)*v4;
        ++v6;
      }
      while ( v4 );
    }
    unknown_libname_60(v3, v2, 4, sub_6B9640);
    v22 = 0;
    v20 = 0;
    v21 = 0;
    v19 = &NiTPointerList<NiPointer<AverageEntry>>::`vftable';
    v23 = 0;
    do
    {
      v18 = *(_DWORD *)(v3 + 4 * v5);
      v7 = v18;
      if ( v18 )
        InterlockedIncrement((volatile LONG *)(v18 + 4));
      LOBYTE(v23) = 1;
      sub_749800(&v19, &v18);
      LOBYTE(v23) = 0;
      if ( v7 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      }
      ++v5;
    }
    while ( v5 < v2 );
    FormHeapFree(v3);
    v8 = *((_DWORD **)this + 5);
    v9 = (_DWORD *)((char *)this + 0x10);
    while ( v8 )
    {
      v10 = v8;
      v8 = (_DWORD *)*v8;
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v9 + 8))(v9, v10);
    }
    v11 = v20;
    v12 = v20 == 0;
    *((_DWORD *)this + 7) = 0;
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 6) = 0;
    v13 = v11;
    if ( !v12 )
    {
      do
      {
        v18 = v13[2];
        v14 = v18;
        if ( v18 )
          InterlockedIncrement((volatile LONG *)(v18 + 4));
        LOBYTE(v23) = 2;
        sub_749800(v9, &v18);
        LOBYTE(v23) = 0;
        if ( v14 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
            (**(void (__thiscall ***)(int, int))v14)(v14, 1);
        }
        v13 = (_DWORD *)*v13;
      }
      while ( v13 );
      v11 = v20;
    }
    v19 = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::`vftable';
    v23 = 3;
    while ( v11 )
    {
      v15 = v11;
      v11 = (_DWORD *)*v11;
      ((void (__thiscall *)(void ***, _DWORD *))v19[2])(&v19, v15);
    }
    v1 = this;
    v22 = 0;
    v20 = 0;
    v21 = 0;
    v23 = 0xFFFFFFFF;
    v19 = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::`vftable';
  }
  for ( i = *((int ***)v1 + 5); i; i = (int **)*i )
    NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>(i[2]);
}
