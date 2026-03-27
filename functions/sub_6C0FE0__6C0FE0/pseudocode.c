void __cdecl sub_6C0FE0(int *a1)
{
  if ( a1 )
  {
    _LN21(a1, 0x40u, a1[0xFFFFFFFF], TESTexture::ClearComponentReferences);
    FormHeapFree((unsigned int)(a1 + 0xFFFFFFFF));
  }
}
