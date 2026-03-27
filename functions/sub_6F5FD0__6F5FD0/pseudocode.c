char __userpurge sub_6F5FD0@<al>(_DWORD *this@<ecx>, void *Str, size_t Size, size_t Count)
{
  int v6; // [esp-1Ch] [ebp-24h] BYREF
  void *v7; // [esp-18h] [ebp-20h]
  int v8; // [esp-14h] [ebp-1Ch]
  int v9; // [esp-10h] [ebp-18h]
  int v10; // [esp-Ch] [ebp-14h]
  _BYTE v11[12]; // [esp-8h] [ebp-10h]
  FILE *v12; // [esp+4h] [ebp-4h]

  if ( !*(this + 0xF) )
    return 0;
  *(_DWORD *)&v11[4] = *(this + 0xF);
  if ( (unsigned int)fwrite(Str, Size, *(size_t *)&v11[4], v12) != HIDWORD(Size) )
  {
    *(_QWORD *)v11 = 0xF00000000LL;
    LOBYTE(v7) = 0;
    sub_414420((int)&v6, this + 1, 0, 0xFFFFFFFF);
    sub_6F6BF0(6, v6, v7, v8, v9, v10, *(size_t *)v11, *(int *)&v11[8]);
    if ( *(this + 0xF) )
      fclose((FILE *)*(this + 0xF));
    *(_DWORD *)&v11[4] = 0;
    sub_414500(this + 1, (int)(this + 1), EmptyString, *(rsize_t *)&v11[4]);
    *(this + 0xF) = 0;
    return 0;
  }
  return 1;
}
