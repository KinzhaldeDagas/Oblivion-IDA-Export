// Verified: initializes the 12-byte TESRegionDataList header: firstData null, overflowNodes null, ownsData byte set from constructor argument.
_DWORD *__thiscall sub_4A43E0(_DWORD *this, char a2)
{
  *this = 0; /*0x4a43e6*/
  *(this + 1) = 0; /*0x4a43ec*/
  *((_BYTE *)this + 8) = a2; /*0x4a43f3*/
  return this; /*0x4a43f6*/
}
