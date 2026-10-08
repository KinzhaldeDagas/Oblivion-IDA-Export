void __userpurge EffectItem_CopyFrom_::CopySCITSchool(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // ecx

  v4 = *(_DWORD *)(a2 + 0x18); /*0x414121*/
  if ( v4 == a1 ) /*0x414126*/
    v5 = *(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 0x64); /*0x414130*/
  else
    v5 = *(_DWORD *)(v4 + 4); /*0x414128*/
  v6 = *(_DWORD *)(a3 + 0x18); /*0x414133*/
  if ( v6 != a1 ) /*0x41413e*/
  {
    *(_DWORD *)(v6 + 4) = v5; /*0x414140*/
    *(float *)(a3 + 0x20) = -1.0; /*0x414143*/
  }
  EffectItem_CopyFrom_::CopySCIT_VFX(a1, a2, a3, a4); /*0x414144*/
}
