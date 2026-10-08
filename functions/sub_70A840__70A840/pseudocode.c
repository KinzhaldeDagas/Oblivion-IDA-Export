// Pass222: Node child property propagation; clones inherited NiPropertyState before children.
UInt32 *__thiscall sub_70A840(_DWORD *this, Ni2DBuffer *a2)
{
  UInt32 *result; // eax
  unsigned int i; // edi
  int v5; // ecx
  Ni2DBuffer *v6; // esi

  result = sub_7077D0(this, (UInt32 *)&a2, a2, 1);// Fog property propagation decode: child propagation clones inherited NiPropertyState so B333E4 fog slot +0x0C flows down the scene graph. /*0x70a872*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i ) /*0x70a879*/
  {
    v5 = *(_DWORD *)(*(this + 0x2C) + 4 * i); /*0x70a896*/
    if ( v5 ) /*0x70a89b*/
      result = (UInt32 *)(*(int (__thiscall **)(int, Ni2DBuffer *))(*(_DWORD *)v5 + 0x6C))(v5, a2); /*0x70a8a7*/
  }
  v6 = a2; /*0x70a8b7*/
  if ( a2 ) /*0x70a8c5*/
  {
    result = (UInt32 *)InterlockedDecrement((volatile LONG *)&a2->members); /*0x70a8cb*/
    if ( !result ) /*0x70a8d3*/
    {
      if ( v6 ) /*0x70a8d7*/
        return (*(UInt32 *(__thiscall **)(Ni2DBuffer *, int))v6->__vftable)(v6, 1); /*0x70a8e1*/
    }
  }
  return result; /*0x70a8e3*/
}
