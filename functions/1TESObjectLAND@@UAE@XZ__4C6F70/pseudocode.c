void __thiscall TESObjectLAND::~TESObjectLAND(TESForm *this)
{
  bool v2; // zf
  unsigned int *v3; // esi
  int v4; // ecx
  int v5; // esi

  this->vtbl = (TESFormVtbl *)&TESObjectLAND::`vftable'{for `TESObjectLAND'}; /*0x4c6f9a*/
  *((_DWORD *)this + 6) = &TESObjectLAND::`vftable'{for `TESChildCell'}; /*0x4c6fa0*/
  sub_4C6280((unsigned int **)this); /*0x4c6fad*/
  v2 = unk_B35BE0-- == 1; /*0x4c6fb2*/
  if ( v2 ) /*0x4c6fb9*/
  {
    FormHeapFree(unk_B35BC8[0]); /*0x4c6fc5*/
    FormHeapFree((unsigned int)unk_B35BCC); /*0x4c6fd1*/
    FormHeapFree(unk_B35BD0); /*0x4c6fdd*/
    FormHeapFree(unk_B35BD4); /*0x4c6fe8*/
    FormHeapFree(unk_B35BD8); /*0x4c6ff4*/
    v3 = (unsigned int *)unk_B35BB8; /*0x4c6ffc*/
    do /*0x4c7015*/
      FormHeapFree(*v3++); /*0x4c7004*/
    while ( (int)v3 < (int)unk_B35BC8 ); /*0x4c7015*/
    v4 = unk_B35BE4; /*0x4c7017*/
    v2 = unk_B35BE4 == 0; /*0x4c701d*/
    unk_B35BDC = 0; /*0x4c701f*/
    if ( !v2 ) /*0x4c7025*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x10))(v4, 1); /*0x4c702e*/
    v5 = unk_B35BEC; /*0x4c7030*/
    v2 = unk_B35BEC == 0; /*0x4c7036*/
    unk_B35BE4 = 0; /*0x4c7038*/
    if ( !v2 ) /*0x4c703e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x4c7044*/
      {
        if ( v5 ) /*0x4c7050*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4c705a*/
      }
      unk_B35BEC = 0; /*0x4c705c*/
    }
  }
  j_TESForm_ClearComponentReferences(this); /*0x4c7064*/
  TESForm_destr(this); /*0x4c7073*/
}
