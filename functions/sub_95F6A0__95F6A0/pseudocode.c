float *sub_95F6A0()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x20u);
  if ( v0 )
    return sub_95F620(v0, &Vector3_InitValue_, (float *)&dword_B258DC);
  else
    return 0;
}
