bool __userpurge sub_776D80@<al>(int this@<ecx>, int a2@<esi>, int a3)
{
  size_t v6; // [esp-8h] [ebp-8h]

  HIDWORD(v6) = a2;
  LODWORD(v6) = *(_DWORD *)(this + 0x4C);
  memcpy(*(void **)(this + 0x48), *(const void **)(this + 0x40), v6);
  *(_DWORD *)(this + 0x48) = 0;
  *(_DWORD *)(this + 0x4C) = 0;
  if ( (*(_DWORD *)(this + 0xFC))-- == 1 )
    *(_DWORD *)(this + 0xF8) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x80));
  return (*(int (__stdcall **)(int))(*(_DWORD *)a3 + 0x30))(a3) >= 0;
}
