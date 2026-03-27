_DWORD *__thiscall sub_46E460(_DWORD *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(this + 1);
  if ( result )
    return TESForm_PutCurrentChunkData4(0x4D414E52, result[3]);
  return result;
}
