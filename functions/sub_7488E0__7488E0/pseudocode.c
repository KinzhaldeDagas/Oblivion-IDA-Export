int __userpurge sub_7488E0@<eax>(_DWORD *this@<ecx>, void *Dst, size_t Size)
{
  int v4; // ecx
  int v5; // edi
  size_t v7; // [esp-4h] [ebp-Ch]

  v4 = *(this + 4);
  v5 = Size;
  if ( (unsigned int)Size > *(this + 5) - v4 )
    v5 = *(this + 5) - v4;
  LODWORD(v7) = v5;
  memcpy(Dst, (const void *)(v4 + *(this + 3)), v7);
  *(this + 4) += v5;
  return v5;
}
