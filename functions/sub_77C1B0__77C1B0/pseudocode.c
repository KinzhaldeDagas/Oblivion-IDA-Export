_DWORD *__userpurge sub_77C1B0@<eax>(_DWORD *this@<ecx>, char *Src, int a3, size_t Size, void *a5)
{
  rsize_t v7; // [esp-8h] [ebp-10h]
  char *v8; // [esp+0h] [ebp-8h]
  void *v9; // [esp+0h] [ebp-8h]

  *this = &NiRefObject::`vftable';
  *(this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  HIDWORD(v7) = Src;
  LODWORD(v7) = 0;
  *this = &NiD3DGlobalConstantEntry::`vftable';
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 3) = sub_7825F0((int)(this + 2), v7, v8);
  *(this + 4) = a3;
  sub_782680(this, Size, v9);
  return this;
}
