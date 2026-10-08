bool __thiscall sub_453970(_DWORD *this, TESObjectCELL *a2, TESChildCELL *a3, int a4)
{
  TESObjectREFR *v5; // esi
  _DWORD *v6; // ecx
  TESObjectREFRVtbl *vtbl; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  _DWORD *v9; // eax
  int refID; // [esp-Ch] [ebp-10h]

  if ( (*(this + 6) & 0x800) != 0 ) /*0x45397b*/
  {
    v5 = (TESObjectREFR *)a3; /*0x45397e*/
    if ( a3 ) /*0x453984*/
    {
      if ( Shared_GetDwordAtOffset40(a3) ) /*0x453988*/
      {
        if ( (TESObjectCELL *)Shared_GetDwordAtOffset40(v5) != a2 ) /*0x45399c*/
        {
          v6 = (_DWORD *)*this; /*0x4539a6*/
          refID = v5->member.super.refID; /*0x4539a8*/
          a3 = 0; /*0x4539a9*/
          NiTMap_GetAt(v6, refID, &a3); /*0x4539b1*/
          if ( a3 ) /*0x4539bc*/
            vtbl = (TESObjectREFRVtbl *)a3->vtbl; /*0x4539be*/
          else
            LOBYTE(vtbl) = 0; /*0x4539c2*/
          if ( ((unsigned __int8)vtbl & 0xC) != 0 ) /*0x4539c6*/
          {
            DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v5); /*0x4539cb*/
            TESObjectCELL_RemoveReference(DwordAtOffset40, v5); /*0x4539d2*/
          }
        }
      }
    }
  }
  v9 = this + 8; /*0x4539d8*/
  if ( this != (_DWORD *)0xFFFFFFE0 ) /*0x4539de*/
  {
    do /*0x4539ed*/
    {
      if ( *v9 == a4 ) /*0x4539e6*/
        break; /*0x4539e6*/
      v9 = (_DWORD *)v9[1]; /*0x4539e8*/
    }
    while ( v9 ); /*0x4539ed*/
  }
  return v9 != 0; /*0x4539dd*/
}
