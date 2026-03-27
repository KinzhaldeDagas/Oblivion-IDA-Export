int __thiscall sub_46D750(_BYTE *this, Data *a1, _DWORD *a3, const char *a4)
{
  UInt32 length; // ecx
  int result; // eax
  unsigned int v6; // esi
  char v7[12]; // [esp+0h] [ebp-14h] BYREF
  _BYTE *v8; // [esp+Ch] [ebp-8h]

  v8 = this;
  length = a1->currentChunk.length;
  result = 0xAAAAAAAB * length;
  v6 = length / 0x18;
  if ( !(length % 0x18) )
  {
    if ( v6 )
    {
      _alloca_();
      _memset(v7, 0, 0x18 * v6);
      TESFile_GetChunkData(a1, v7, 0x18 * v6);
      return sub_46D610(v8, (int)v7, v6, a3, a4);
    }
  }
  return result;
}
