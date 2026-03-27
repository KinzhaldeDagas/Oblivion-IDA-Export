unsigned int **__thiscall sub_796260(char *this, int *a2)
{
  unsigned int *v3; // edi
  unsigned int **result; // eax
  unsigned int *v5; // esi
  int v6; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+8h] [ebp-8h] BYREF
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v6 = *a2;
  v7 = a2[1];
  v3 = (unsigned int *)(this + 0x68);
  v8 = a2[2];
  sub_785F30((unsigned int *)this + 0x1A, &v6);
  sub_785F30(v3, &v7);
  result = sub_785F30(v3, &v8);
  if ( *(this + 8) )
  {
    if ( *((_DWORD *)this + 5) == 1 )
    {
      v5 = (unsigned int *)(this + 0x78);
      sub_785F30(v5, &v6);
      sub_785F30(v5, &v7);
      return sub_785F30(v5, &v8);
    }
  }
  return result;
}
