void __thiscall sub_520620(TESForm *this)
{
  int v2; // edi
  unsigned int *v3; // ecx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  TESObjectREFR *v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax

  j_TESForm_ClearComponentReferences(this); /*0x520623*/
  sub_56A750((BSSimpleList_VoidPtr *)this + 6); /*0x52062b*/
  if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x520635*/
  {
    v2 = *((_DWORD *)this + 0x10); /*0x52063f*/
    if ( v2 ) /*0x520644*/
    {
      v3 = *(unsigned int **)(v2 + 0x3C); /*0x520646*/
      if ( v3 ) /*0x52064b*/
      {
        v4 = sub_494E90(v3, (int)this); /*0x52064e*/
        sub_5204F0((TESObjectREFR **)v2, v4); /*0x520656*/
      }
    }
    else
    {
      v5 = (unsigned int *)sub_521730((_DWORD *)dword_B361CC[0x3D], this); /*0x520665*/
      v6 = (TESObjectREFR *)v5; /*0x52066a*/
      if ( v5 ) /*0x52066e*/
      {
        v7 = sub_494E90(v5, (int)this); /*0x520674*/
        v8 = v7; /*0x520679*/
        if ( v7 != 0xFFFFFFFF ) /*0x52067e*/
        {
          v9 = sub_494ED0(v6, v7 + 1); /*0x520686*/
          if ( v9 ) /*0x52068d*/
            *(_DWORD *)(v9 + 0x44) = *((_DWORD *)this + 0x11); /*0x520692*/
          sub_5304C0(v6, v8); /*0x520698*/
          sub_5A56F0((unsigned int *)v6); /*0x5206a2*/
        }
      }
    }
  }
}
