unsigned int __userpurge sub_42C4A0@<eax>(FILE **this@<ecx>, char *Dst, size_t Size)
{
  unsigned int v3; // ebx
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // ebp
  FILE *v9; // eax
  _BYTE v10[12]; // [esp-8h] [ebp-18h]

  v3 = Size; /*0x42c4a1*/
  v5 = (int)*(this + 5); /*0x42c4a9*/
  v6 = (unsigned int)*(this + 4) - v5; /*0x42c4b0*/
  v7 = 0; /*0x42c4b2*/
  if ( (unsigned int)Size > v6 ) /*0x42c4b6*/
  {
    if ( v6 ) /*0x42c4ba*/
    {
      *(_DWORD *)&v10[4] = (char *)*(this + 4) - v5; /*0x42c4c3*/
      memcpy(Dst, (char *)*(this + 6) + v5, *(size_t *)&v10[4]); /*0x42c4c8*/
      Dst += v6; /*0x42c4d2*/
      v3 = Size - v6; /*0x42c4d6*/
      v7 = v6; /*0x42c4d8*/
    }
    *(this + 4) = 0; /*0x42c4dc*/
    *(this + 5) = 0; /*0x42c4df*/
    *(_DWORD *)&v10[4] = v7; /*0x42c4e7*/
    if ( v3 > (unsigned int)*(this + 3) ) /*0x42c4ea*/
    {
      *(_DWORD *)v10 = v3; /*0x42c4f0*/
      return v7 + sub_42C3E0(this, Dst, *(size_t *)v10, *(int *)&v10[8]); /*0x42c4fd*/
    }
    *(_DWORD *)v10 = *(this + 3); /*0x42c500*/
    v9 = (FILE *)sub_42C3E0(this, *(this + 6), *(size_t *)v10, *(int *)&v10[8]); /*0x42c505*/
    *(this + 4) = v9; /*0x42c50c*/
    if ( (unsigned int)v9 < v3 ) /*0x42c50f*/
      v3 = (unsigned int)v9; /*0x42c511*/
  }
  *(_DWORD *)&v10[4] = v3; /*0x42c51d*/
  memcpy(Dst, (char *)*(this + 6) + (_DWORD)*(this + 5), *(size_t *)&v10[4]); /*0x42c520*/
  *(this + 5) = (FILE *)((char *)*(this + 5) + v3); /*0x42c525*/
  return v3 + v7; /*0x42c4f7*/
}
