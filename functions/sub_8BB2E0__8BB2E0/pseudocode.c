int __userpurge sub_8BB2E0@<eax>(_DWORD *this@<ecx>, unsigned int a2@<esi>, void *Str, size_t Count)
{
  unsigned int v5; // eax
  int v6; // esi
  size_t v8; // [esp-10h] [ebp-14h]
  FILE *v9; // [esp+0h] [ebp-4h]

  v5 = *(this + 2);
  if ( !v5 )
    return 0;
  HIDWORD(v8) = Count;
  LODWORD(v8) = 1;
  v6 = fwrite(Str, v8, __PAIR64__(a2, v5), v9);
  if ( v6 <= 0 )
    sub_8BB320((int)this);
  return v6;
}
