void __thiscall sub_52B3F0(_DWORD *this, Data *a1)
{
  char v3; // dl
  char Dst[4]; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  if ( a1 ) /*0x52b3fd*/
  {
    if ( TESFile_GetChunkType(a1) == 0x41545351 ) /*0x52b40b*/
    {
      *(_DWORD *)Dst = 0; /*0x52b410*/
      v5 = 0; /*0x52b414*/
      TESFile_GetChunkData(a1, Dst, 0); /*0x52b41f*/
      v3 = v5; /*0x52b428*/
      *(this + 3) = *(_DWORD *)Dst; /*0x52b42c*/
      *(_BYTE *)this = v3; /*0x52b42f*/
    }
  }
}
