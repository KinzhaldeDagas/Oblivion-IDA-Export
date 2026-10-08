char __thiscall sub_7000F0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  unsigned __int16 i; // bx
  Ni2DBuffer *v5; // ecx
  int v6; // esi
  Ni2DBuffer *v7; // ecx

  result = sub_700650(this, a2); /*0x7000f9*/
  if ( result ) /*0x700100*/
  {
    for ( i = 0; i < LOWORD(this->members.RenderTargets[3]); ++i ) /*0x70010a*/
    {
      v5 = this->members.RenderTargets[2]; /*0x700111*/
      v6 = *((_DWORD *)&v5->__vftable + i); /*0x700117*/
      if ( v6 ) /*0x70011c*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 0x4C))(*((_DWORD *)&v5->__vftable + i)) ) /*0x700125*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2); /*0x700133*/
      }
    }
    v7 = this->members.RenderTargets[1]; /*0x70013f*/
    if ( v7 ) /*0x700145*/
      (*((void (__thiscall **)(Ni2DBuffer *, int))v7->__vftable + 9))(v7, a2); /*0x70014d*/
    return 1; /*0x700150*/
  }
  return result; /*0x700102*/
}
