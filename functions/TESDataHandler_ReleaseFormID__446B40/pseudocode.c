void __thiscall TESDataHandler_ReleaseFormID(_DWORD *this, int a2)
{
  if ( a2 ) /*0x446b46*/
  {
    if ( (a2 & 0xFF000000) == 0xFF000000 && a2 == *(this + 0x230) - 1 && (a2 & 0xFFFFFFu) > 0x7FF ) /*0x446b73*/
      *(this + 0x230) = a2; /*0x446b75*/
    TESDataHandler_ReleaseFormID_::Done(a2); /*0x446b76*/
  }
  else
  {
    TESDataHandler_ReleaseFormID_::Done(0); /*0x446b46*/
  }
}
