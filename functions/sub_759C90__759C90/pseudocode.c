char __thiscall sub_759C90(NiTriBasedGeomData *this, int a2)
{
  unsigned __int16 v4; // bx
  int v5; // eax

  if ( !sub_73F270(this, a2) )
    return 0;
  if ( !*((_DWORD *)this + 0x18) )
  {
    if ( !*(_DWORD *)(a2 + 0x60) )
      goto LABEL_7;
    return 0;
  }
  if ( !*(_DWORD *)(a2 + 0x60) )
    return 0;
LABEL_7:
  v4 = 0;
  if ( *((_WORD *)this + 0x24) )
  {
    while ( sub_75F7C0((float *)(0x1C * v4 + *((_DWORD *)this + 0x17)), 0x1C * v4 + *(_DWORD *)(a2 + 0x5C)) )
    {
      v5 = *((_DWORD *)this + 0x18);
      if ( v5 )
      {
        if ( *(float *)(*(_DWORD *)(a2 + 0x60) + 4 * v4) != *(float *)(v5 + 4 * v4) )
          break;
      }
      if ( ++v4 >= *((_WORD *)this + 0x24) )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( *((_WORD *)this + 0x32) == *(_WORD *)(a2 + 0x64) && *((_WORD *)this + 0x33) == *(_WORD *)(a2 + 0x66) )
      return 1;
  }
  return 0;
}
