int __userpurge sub_776C90@<eax>(char *this@<ecx>, int a2, int a3, size_t Size, int a5)
{
  int (__stdcall *v6)(int, int, _DWORD, void **, _DWORD); // eax
  DWORD CurrentThreadId; // eax
  void *v9; // ecx
  bool v10; // cf
  size_t v11; // [esp+4h] [ebp-14h]
  void *Src; // [esp+14h] [ebp-4h] BYREF

  v6 = *(int (__stdcall **)(int, int, _DWORD, void **, _DWORD))(*(_DWORD *)a2 + 0x2C);
  Src = 0;
  if ( v6(a2, a3, Size, &Src, HIDWORD(Size)) < 0 )
    return 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  CurrentThreadId = GetCurrentThreadId();
  ++*((_DWORD *)this + 0x3F);
  v9 = Src;
  *((_DWORD *)this + 0x3E) = CurrentThreadId;
  v10 = *((_DWORD *)this + 0x11) < (unsigned int)Size;
  *((_DWORD *)this + 0x12) = v9;
  *((_DWORD *)this + 0x13) = Size;
  if ( v10 )
  {
    FormHeapFree(*((_DWORD *)this + 0x10));
    *((_DWORD *)this + 0x10) = FormHeapAlloc(Size);
    *((_DWORD *)this + 0x11) = Size;
  }
  if ( (Size & 0x300000000000LL) == 0 )
  {
    LODWORD(v11) = Size;
    memcpy(*((void **)this + 0x10), Src, v11);
  }
  return *((_DWORD *)this + 0x10);
}
