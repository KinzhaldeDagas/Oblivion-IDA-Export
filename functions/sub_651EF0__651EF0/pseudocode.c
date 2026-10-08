void __thiscall sub_651EF0(_DWORD *this, TESChildCELL *a2)
{
  _DWORD *v3; // eax
  UInt32 DwordAtOffset40; // eax
  int v5; // esi
  TESObjectCELL *i; // ebx
  TESObjectREFR *v7; // edi

  if ( a2 ) /*0x651ef9*/
  {
    v3 = (_DWORD *)*(this + 0x5C); /*0x651efb*/
    if ( v3 ) /*0x651f03*/
    {
      if ( v3[1] || *v3 ) /*0x651f0b*/
      {
        DwordAtOffset40 = Shared_GetDwordAtOffset40(a2); /*0x651f11*/
        v5 = *(this + 0x5C); /*0x651f16*/
        for ( i = (TESObjectCELL *)DwordAtOffset40; v5; v5 = *(_DWORD *)(v5 + 4) ) /*0x651f20*/
        {
          if ( !*(_DWORD *)(v5 + 4) && !*(_DWORD *)v5 ) /*0x651f29*/
            break; /*0x651f2c*/
          v7 = *(TESObjectREFR **)v5; /*0x651f2e*/
          if ( *(_DWORD *)v5 ) /*0x651f2e*/
          {
            if ( (TESObjectCELL *)Shared_GetDwordAtOffset40(*(void **)v5) != i ) /*0x651f3d*/
            {
              if ( i ) /*0x651f41*/
              {
                sub_4D38F0(i, v7); /*0x651f46*/
                sub_6748B0(&qword_B3BB2C[0x75], (MobileObject *)v7); /*0x651f51*/
              }
            }
          }
        }
      }
    }
  }
}
