char **__userpurge sub_77C1B0@<eax>(char **this@<ecx>, char *Src, char *a3, size_t Size, void *a5)
{
  rsize_t v7; // [esp-8h] [ebp-10h]
  void *v8; // [esp+0h] [ebp-8h]

  *this = (char *)&NiRefObject::`vftable'; /*0x77c1bb*/
  *(this + 1) = 0; /*0x77c1c1*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x77c1c4*/
  HIDWORD(v7) = Src; /*0x77c1ce*/
  LODWORD(v7) = 0; /*0x77c1d2*/
  *this = (char *)&NiD3DGlobalConstantEntry::`vftable'; /*0x77c1d4*/
  *(this + 2) = 0; /*0x77c1da*/
  *(this + 3) = 0; /*0x77c1dc*/
  *(this + 4) = 0; /*0x77c1df*/
  *(this + 5) = 0; /*0x77c1e2*/
  *(this + 6) = 0; /*0x77c1e5*/
  *(this + 3) = (char *)sub_7825F0(this + 2, v7); /*0x77c1f8*/
  *(this + 4) = a3; /*0x77c203*/
  sub_782680(this, Size, v8); /*0x77c206*/
  return this; /*0x77c20b*/
}
