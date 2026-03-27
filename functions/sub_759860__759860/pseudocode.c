_DWORD *__thiscall sub_759860(_WORD *this, unsigned __int16 a2)
{
  unsigned __int16 v3; // si
  _DWORD *result; // eax

  v3 = *(this + 0x24) - 1;
  result = sub_73EFB0((int)this, a2);
  if ( a2 != v3 )
  {
    result = (_DWORD *)v3;
    qmemcpy((void *)(*((_DWORD *)this + 0x17) + 0x1C * a2), (const void *)(*((_DWORD *)this + 0x17) + 0x1C * v3), 0x1Cu);
    if ( *((_DWORD *)this + 0x18) )
      *(float *)(*((_DWORD *)this + 0x18) + 4 * a2) = *(float *)(*((_DWORD *)this + 0x18) + 4 * v3);
  }
  return result;
}
