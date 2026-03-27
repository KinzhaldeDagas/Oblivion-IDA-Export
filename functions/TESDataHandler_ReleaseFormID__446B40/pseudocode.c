int __thiscall TESDataHandler_ReleaseFormID(_DWORD *this, int a2)
{
  if ( !a2 )
    return TESDataHandler_ReleaseFormID_::Done(0);
  if ( (a2 & 0xFF000000) == 0xFF000000 && a2 == *(this + 0x230) - 1 && (a2 & 0xFFFFFFu) > 0x7FF )
    *(this + 0x230) = a2;
  return TESDataHandler_ReleaseFormID_::Done(a2);
}
