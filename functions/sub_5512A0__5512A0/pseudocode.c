unsigned int __thiscall sub_5512A0(unsigned int **this)
{
  char v1; // dl
  unsigned int *v2; // eax
  unsigned int v3; // esi
  unsigned int v5; // [esp+4h] [ebp-8h] BYREF
  __int16 v6; // [esp+8h] [ebp-4h]
  __int16 v7; // [esp+Ah] [ebp-2h]

  v1 = 0;
  v5 = 0;
  v2 = *(this + 3);
  if ( !v2 )
  {
    FormHeapFree(0);
    v5 = 0;
    v7 = 0;
    v6 = 0;
    v2 = &v5;
    v1 = 1;
  }
  v3 = *v2;
  if ( (v1 & 1) != 0 )
    FormHeapFree(v5);
  return v3;
}
