char __thiscall sub_4303F0(HINSTANCE *this, HINSTANCE a2)
{
  char v3; // bl
  HINSTANCE v5; // eax
  unsigned int v6; // [esp-4h] [ebp-10h]

  v3 = 1; /*0x4303fc*/
  if ( a2 == *(this + 3) ) /*0x4303fe*/
    return 1; /*0x430402*/
  NiFile_Seek((int)this, 0, BSFile_FilePos_Beg); /*0x430410*/
  NiFile_Flush((int)this); /*0x430417*/
  FormHeapFree((unsigned int)*(this + 6)); /*0x430420*/
  *(this + 3) = a2; /*0x43042e*/
  v5 = (HINSTANCE)Ctl3dAutoSubclass(a2); /*0x430431*/
  *(this + 6) = v5; /*0x430438*/
  if ( !v5 ) /*0x43043b*/
  {
    v6 = dword_B045D0; /*0x430445*/
    *(this + 3) = (HINSTANCE)dword_B045D0; /*0x430446*/
    *(this + 6) = (HINSTANCE)FormHeapAlloc(v6); /*0x430451*/
    v3 = 0; /*0x430454*/
  }
  *(this + 0x52) = 0; /*0x430457*/
  *(this + 0x53) = 0; /*0x430461*/
  return v3; /*0x430400*/
}
