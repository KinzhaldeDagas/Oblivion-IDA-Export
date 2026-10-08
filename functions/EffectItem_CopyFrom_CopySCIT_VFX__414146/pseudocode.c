void __userpurge EffectItem_CopyFrom_::CopySCIT_VFX(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  v4 = *(_DWORD *)(a2 + 0x18); /*0x414146*/
  if ( v4 == a1 ) /*0x41414b*/
    v5 = 0; /*0x414152*/
  else
    v5 = *(_DWORD *)(v4 + 0x10); /*0x41414d*/
  v6 = *(_DWORD *)(a3 + 0x18); /*0x414154*/
  if ( v6 != a1 ) /*0x414159*/
    *(_DWORD *)(v6 + 0x10) = v5; /*0x41415b*/
  if ( *(_DWORD *)(a2 + 0x18) != a1 ) /*0x414163*/
    JUMPOUT(0x414172); /*0x414172*/
  EffectItem_CopyFrom_::CopySCIT_Hostile(a1, a2, a3, a4); /*0x414163*/
}
