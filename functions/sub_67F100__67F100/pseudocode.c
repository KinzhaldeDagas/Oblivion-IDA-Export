// Verified generic BSSimpleList head removal helper: advances the inline first-node header to its successor and frees the detached list node; if there is no successor, clears the head data pointer.
void __thiscall BSSimpleList_PopHeadWithoutPayloadFree(_DWORD *this)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)*(this + 1); /*0x67f100*/
  if ( v1 ) /*0x67f105*/
  {
    *(this + 1) = v1[1]; /*0x67f10a*/
    *this = *v1; /*0x67f110*/
    FormHeapFree((unsigned int)v1); /*0x67f112*/
  }
  else
  {
    *this = 0; /*0x67f11b*/
  }
}
