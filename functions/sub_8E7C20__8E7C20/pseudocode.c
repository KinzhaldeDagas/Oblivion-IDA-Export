void __thiscall sub_8E7C20(int *this, _WORD *a2)
{
  _DWORD *v3; // eax
  int *v4; // ecx

  v3 = (_DWORD *)*(this + 7); /*0x8e7c23*/
  if ( v3 ) /*0x8e7c28*/
  {
    if ( *(this + 2) ) /*0x8e7c2a*/
      sub_89BE60(this, v3); /*0x8e7c33*/
    sub_8BC730((int (__stdcall ***)(signed int))*(this + 7)); /*0x8e7c3b*/
    *(this + 7) = 0; /*0x8e7c40*/
  }
  *(this + 7) = (int)a2; /*0x8e7c4b*/
  sub_8BC720(a2); /*0x8e7c4e*/
  v4 = (int *)*(this + 2); /*0x8e7c53*/
  if ( v4 ) /*0x8e7c58*/
    sub_899990(v4, (int)this, *(this + 7)); /*0x8e7c5f*/
}
