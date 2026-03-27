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

  j_TESForm_ClearComponentReferences(this);
  sub_56A750((void **)this + 0xC);
  if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
  {
    v2 = *((_DWORD *)this + 0x10);
    if ( v2 )
    {
      v3 = *(unsigned int **)(v2 + 0x3C);
      if ( v3 )
      {
        v4 = sub_494E90(v3, (int)this);
        sub_5204F0((TESObjectREFR **)v2, v4);
      }
    }
    else
    {
      v5 = (unsigned int *)sub_521730(this);
      v6 = (TESObjectREFR *)v5;
      if ( v5 )
      {
        v7 = sub_494E90(v5, (int)this);
        v8 = v7;
        if ( v7 != 0xFFFFFFFF )
        {
          v9 = sub_494ED0(v6, v7 + 1);
          if ( v9 )
            *(_DWORD *)(v9 + 0x44) = *((_DWORD *)this + 0x11);
          sub_5304C0(v6, v8);
          sub_5A56F0(v6);
        }
      }
    }
  }
}
