char __thiscall sub_4303F0(HINSTANCE *this, HINSTANCE a2)
{
  char v3; // bl
  HINSTANCE v5; // eax
  unsigned int v6; // [esp-4h] [ebp-10h]

  v3 = 1;
  if ( a2 == *(this + 3) )
    return 1;
  NiFile_Seek((int)this, 0, BSFile_FilePos_Beg);
  NiFile_Flush((int)this);
  FormHeapFree((unsigned int)*(this + 6));
  *(this + 3) = a2;
  v5 = (HINSTANCE)Ctl3dAutoSubclass(a2);
  *(this + 6) = v5;
  if ( !v5 )
  {
    v6 = dword_B045D0;
    *(this + 3) = (HINSTANCE)dword_B045D0;
    *(this + 6) = (HINSTANCE)FormHeapAlloc(v6);
    v3 = 0;
  }
  *(this + 0x52) = 0;
  *(this + 0x53) = 0;
  return v3;
}
