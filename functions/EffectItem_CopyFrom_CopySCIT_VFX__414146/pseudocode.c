void __userpurge EffectItem_CopyFrom_::CopySCIT_VFX(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  v4 = *(_DWORD *)(a2 + 0x18);
  if ( v4 == a1 )
    v5 = 0;
  else
    v5 = *(_DWORD *)(v4 + 0x10);
  v6 = *(_DWORD *)(a3 + 0x18);
  if ( v6 != a1 )
    *(_DWORD *)(v6 + 0x10) = v5;
  if ( *(_DWORD *)(a2 + 0x18) != a1 )
    JUMPOUT(0x414172);
  EffectItem_CopyFrom_::CopySCIT_Hostile(a1, a2, a3, a4);
}
