void __thiscall sub_69DC90(TESObjectREFR **this, int a2)
{
  void *v3; // ecx
  TESObjectREFR *DwordAtOffset40; // eax
  int v5; // eax
  void *v6; // ebx
  signed int v7; // eax
  int v8; // eax

  v3 = *(this + 7); /*0x69dc93*/
  if ( v3 ) /*0x69dc98*/
  {
    DwordAtOffset40 = (TESObjectREFR *)Shared_GetDwordAtOffset40(v3); /*0x69dc9b*/
    *(this + 3) = DwordAtOffset40; /*0x69dca6*/
    if ( a2 ) /*0x69dca9*/
    {
      if ( DwordAtOffset40 ) /*0x69dcad*/
      {
        if ( GetObjectPointerAt_054(DwordAtOffset40) ) /*0x69dcb1*/
        {
          v5 = *(_DWORD *)(a2 + 0x1C); /*0x69dcba*/
          if ( !v5 || (v6 = *(void **)(v5 + 0x1C), GetObjectPointerAt_054(*(this + 3)) != v6) ) /*0x69dcd0*/
          {
            v7 = sub_4C9C80(*(this + 3), (float *)(a2 + 0x88)); /*0x69dcdc*/
            v8 = sub_441800((TESObjectCELL *)*(this + 3), v7, 3u); /*0x69dce7*/
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x84))(v8, a2, 1); /*0x69dcf9*/
          }
        }
      }
    }
  }
}
