void __thiscall sub_526F00(_WORD *this)
{
  unsigned __int16 v2; // ax
  FaceGenHeadParameters *v3; // edi
  bool v4; // zf
  FaceGenHeadParameters *v5; // eax

  v2 = *(this + 0xFD); /*0x526f03*/
  if ( v2 ) /*0x526f0d*/
  {
    v3 = *(FaceGenHeadParameters **)(*((_DWORD *)this + 0x7D) + 4 * v2 - 4); /*0x526f24*/
    FaceGenHeadParameters_Copy(v3, (FaceGenHeadParameters *)(*((_DWORD *)this + 0x3A) + 0x29C)); /*0x526f30*/
    v4 = (*(int (__thiscall **)(_WORD *, int))(*(_DWORD *)this + 0x128))(this, 0x45) == 0; /*0x526f46*/
    v5 = (FaceGenHeadParameters *)(this + 0xB4); /*0x526f48*/
    if ( v4 ) /*0x526f4e*/
      v5 = (FaceGenHeadParameters *)(this + 0x84); /*0x526f50*/
    FaceGenHeadParameters_Copy(v3 + 1, v5); /*0x526f5b*/
    sub_405020((int)(this + 0xF8), (unsigned __int16)*(this + 0xFD) - 1); /*0x526f76*/
    if ( v3 ) /*0x526f7d*/
    {
      sub_526E70((char *)v3); /*0x526f81*/
      FormHeapFree((unsigned int)v3); /*0x526f87*/
    }
    sub_521BE0(this + 0xF8); /*0x526f94*/
  }
}
