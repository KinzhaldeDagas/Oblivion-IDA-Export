void __stdcall sub_763050(_DWORD *a1)
{
  unsigned int v1; // [esp-8h] [ebp-Ch]

  FormHeapFree(a1[8]);
  v1 = a1[0xA];
  a1[7] = 0;
  a1[9] = 4;
  a1[8] = 0;
  FormHeapFree(v1);
  a1[0xA] = 0;
}
