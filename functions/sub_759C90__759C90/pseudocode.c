char __thiscall sub_759C90(NiTriBasedGeomData *this, int a2)
{
  unsigned __int16 v4; // bx
  int v5; // eax

  if ( !sub_73F270(this, a2) ) /*0x759c99*/
    return 0; /*0x759ca0*/
  if ( !*((_DWORD *)this + 0x18) ) /*0x759cae*/
  {
    if ( !*(_DWORD *)(a2 + 0x60) ) /*0x759cba*/
      goto LABEL_7; /*0x759cbe*/
    return 0; /*0x759ca6*/
  }
  if ( !*(_DWORD *)(a2 + 0x60) ) /*0x759cb4*/
    return 0; /*0x759cb4*/
LABEL_7:
  v4 = 0; /*0x759cc0*/
  if ( *((_WORD *)this + 0x24) ) /*0x759cc3*/
  {
    while ( sub_75F7C0((float *)(0x1C * v4 + *((_DWORD *)this + 0x17)), 0x1C * v4 + *(_DWORD *)(a2 + 0x5C)) ) /*0x759ceb*/
    {
      v5 = *((_DWORD *)this + 0x18); /*0x759cf4*/
      if ( v5 ) /*0x759cf9*/
      {
        if ( *(float *)(*(_DWORD *)(a2 + 0x60) + 4 * v4) != *(float *)(v5 + 4 * v4) ) /*0x759d0b*/
          break; /*0x759d0b*/
      }
      if ( ++v4 >= *((_WORD *)this + 0x24) ) /*0x759d14*/
        goto LABEL_12; /*0x759d14*/
    }
  }
  else
  {
LABEL_12:
    if ( *((_WORD *)this + 0x32) == *(_WORD *)(a2 + 0x64) && *((_WORD *)this + 0x33) == *(_WORD *)(a2 + 0x66) ) /*0x759d28*/
      return 1; /*0x759d30*/
  }
  return 0; /*0x759ca5*/
}
