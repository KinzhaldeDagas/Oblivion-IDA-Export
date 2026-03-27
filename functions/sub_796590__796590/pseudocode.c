unsigned int **__thiscall sub_796590(char *this, int *a2)
{
  unsigned int *v2; // esi
  int v4; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v4 = *a2;
  v2 = (unsigned int *)(this + 0xA8);
  v5 = a2[1];
  v6 = a2[2];
  sub_785F30((unsigned int *)this + 0x2A, &v4);
  sub_785F30(v2, &v5);
  return sub_785F30(v2, &v6);
}
