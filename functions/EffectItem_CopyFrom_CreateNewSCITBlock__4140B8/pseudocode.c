int __userpurge EffectItem_CopyFrom_::CreateNewSCITBlock@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // eax

  if ( *(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 0x98) != 0x46464553 || *(_DWORD *)(a2 + 0x18) == a1 )
    return EffectItem_CopyFrom_::Done(a4);
  __asm { fstp    st }
  v8 = FormHeapAlloc(0x18u);
  if ( v8 == a1 )
  {
    v8 = 0;
  }
  else
  {
    *(_DWORD *)(v8 + 8) = a1;
    *(_WORD *)(v8 + 0xC) = a1;
    *(_WORD *)(v8 + 0xE) = a1;
  }
  *(_DWORD *)(a3 + 0x18) = v8;
  return EffectItem_CopyFrom_::CopySCITScript(a4);
}
