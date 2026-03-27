void __thiscall sub_52B3F0(_DWORD *this, Data *a1)
{
  char v3; // dl
  char Dst[4]; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  if ( a1 )
  {
    if ( TESFile_GetChunkType(a1) == 0x41545351 )
    {
      *(_DWORD *)Dst = 0;
      v5 = 0;
      TESFile_GetChunkData(a1, Dst, 0);
      v3 = v5;
      *(this + 3) = *(_DWORD *)Dst;
      *(_BYTE *)this = v3;
    }
  }
}
