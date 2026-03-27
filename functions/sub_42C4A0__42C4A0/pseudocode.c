unsigned int __userpurge sub_42C4A0@<eax>(FILE **this@<ecx>, char *Dst, size_t Size)
{
  unsigned int v3; // ebx
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // ebp
  FILE *v9; // eax
  _BYTE v10[12]; // [esp-8h] [ebp-18h]

  v3 = Size;
  v5 = (int)*(this + 5);
  v6 = (unsigned int)*(this + 4) - v5;
  v7 = 0;
  if ( (unsigned int)Size > v6 )
  {
    if ( v6 )
    {
      *(_DWORD *)&v10[4] = (char *)*(this + 4) - v5;
      memcpy(Dst, (char *)*(this + 6) + v5, *(size_t *)&v10[4]);
      Dst += v6;
      v3 = Size - v6;
      v7 = v6;
    }
    *(this + 4) = 0;
    *(this + 5) = 0;
    *(_DWORD *)&v10[4] = v7;
    if ( v3 > (unsigned int)*(this + 3) )
    {
      *(_DWORD *)v10 = v3;
      return v7 + sub_42C3E0(this, Dst, *(size_t *)v10, *(int *)&v10[8]);
    }
    *(_DWORD *)v10 = *(this + 3);
    v9 = (FILE *)sub_42C3E0(this, *(this + 6), *(size_t *)v10, *(int *)&v10[8]);
    *(this + 4) = v9;
    if ( (unsigned int)v9 < v3 )
      v3 = (unsigned int)v9;
  }
  *(_DWORD *)&v10[4] = v3;
  memcpy(Dst, (char *)*(this + 6) + (_DWORD)*(this + 5), *(size_t *)&v10[4]);
  *(this + 5) = (FILE *)((char *)*(this + 5) + v3);
  return v3 + v7;
}
