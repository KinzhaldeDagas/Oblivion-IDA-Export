_DWORD *sub_410B00()
{
  unsigned int v0; // esi
  _DWORD *result; // eax

  v0 = ObjectPtr;
  if ( ObjectPtr )
  {
    if ( *(_DWORD *)ObjectPtr )
      BinkClose(*(_DWORD *)ObjectPtr);
    if ( *(_DWORD *)(v0 + 8) )
      sub_410110(*(_DWORD **)(v0 + 8));
    *(float *)(v0 + 0x14) = 1.0;
    *(_DWORD *)v0 = 0;
    *(_DWORD *)(v0 + 4) = 0;
    *(float *)(v0 + 0x18) = 0.0;
    *(_DWORD *)(v0 + 8) = 0;
    *(float *)(v0 + 0x1C) = 0.0;
    *(_DWORD *)(v0 + 0xC) = 0;
    *(_DWORD *)(v0 + 0x10) = 0;
    *(_DWORD *)(v0 + 0x20) = 0;
    *(_BYTE *)(v0 + 0x24) = 0;
    FormHeapFree(v0);
    ObjectPtr = 0;
  }
  result = (_DWORD *)dword_B3342C;
  if ( dword_B3342C )
  {
    ObjectPtr = dword_B3342C;
    dword_B3342C = 0;
    return (_DWORD *)BinkPause(*result, 0);
  }
  return result;
}
