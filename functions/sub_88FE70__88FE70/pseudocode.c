_OWORD *__thiscall sub_88FE70(int this, int a2)
{
  _OWORD *result; // eax

  result = (_OWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x28) + 0x1C) & 0x3F);
  if ( (_BYTE)result == 0x14 )
  {
    ++*(_DWORD *)(this + 0x64);
    if ( *(_BYTE *)(this + 0x61) )
      return sub_64B3A0((_DWORD *)(this - 0x1F0), &Vector3_InitValue_);
  }
  return result;
}
