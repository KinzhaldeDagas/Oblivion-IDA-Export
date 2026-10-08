//
// [2026-10-06 directional distant pass] Copies {source path, template scene, form ID} into batch+18/+1C/+20 and clears property flag bits 400/800/1000. Callsite7B3D62 runs before the native scene is attached; filter TREE form IDs and descriptor+30 billboard flag to avoid ordinary static/grass batches.
int __thiscall sub_802A90(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx

  if ( a2 ) /*0x802a98*/
  {
    *(this + 6) = *a2; /*0x802a9d*/
    *(this + 7) = a2[1]; /*0x802aa3*/
    *(this + 8) = a2[2]; /*0x802aa9*/
  }
  v2 = *(this + 2); /*0x802aad*/
  *(_DWORD *)(v2 + 0x1C) &= ~0x400u; /*0x802ab0*/
  *(_DWORD *)(v2 + 0x24) = 0; /*0x802ab7*/
  result = *(this + 2); /*0x802aba*/
  *(_DWORD *)(result + 0x1C) &= ~0x800u; /*0x802abd*/
  *(_DWORD *)(result + 0x24) = 0; /*0x802ac4*/
  v4 = *(this + 2); /*0x802ac7*/
  *(_DWORD *)(v4 + 0x1C) &= ~0x1000u; /*0x802aca*/
  *(_DWORD *)(v4 + 0x24) = 0; /*0x802ad1*/
  return result; /*0x802ad4*/
}
