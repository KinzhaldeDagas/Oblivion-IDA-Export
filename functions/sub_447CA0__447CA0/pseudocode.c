void __usercall sub_447CA0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // ebx
  int i; // esi
  TESObjectCELL *v7; // ecx
  int v8; // esi
  TESObjectCELL *v9; // eax

  v5 = *(_DWORD *)(a1 + 0xCC); /*0x447ca5*/
  for ( i = 0; i < v5; ++i ) /*0x447caf*/
  {
    v7 = *(TESObjectCELL **)(*(_DWORD *)(a1 + 0xC4) + 4 * i); /*0x447cb7*/
    if ( v7 ) /*0x447cbc*/
      sub_4CB8C0(v7, a2, a3, a4, 1, 1); /*0x447cc2*/
  }
  v8 = a1 + 0xC; /*0x447cce*/
  if ( a1 != 0xFFFFFFF4 ) /*0x447cd3*/
  {
    do /*0x447cf4*/
    {
      if ( *(_DWORD *)v8 ) /*0x447cd5*/
      {
        v9 = (TESObjectCELL *)sub_4EF1E0(*(_DWORD **)v8); /*0x447cdb*/
        if ( v9 ) /*0x447ce2*/
          sub_4CB8C0(v9, a2, a3, a4, 1, 1); /*0x447cea*/
      }
      v8 = *(_DWORD *)(v8 + 4); /*0x447cef*/
    }
    while ( v8 ); /*0x447cf4*/
  }
}
