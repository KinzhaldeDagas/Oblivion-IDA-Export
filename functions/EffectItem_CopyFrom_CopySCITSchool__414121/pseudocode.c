void __usercall EffectItem_CopyFrom_::CopySCITSchool(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx

  v3 = *(_DWORD *)(a2 + 0x18);
  if ( v3 == a1 )
    v4 = *(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 0x64);
  else
    v4 = *(_DWORD *)(v3 + 4);
  v5 = *(_DWORD *)(a3 + 0x18);
  if ( v5 != a1 )
  {
    *(_DWORD *)(v5 + 4) = v4;
    *(float *)(a3 + 0x20) = -1.0;
  }
  EffectItem_CopyFrom_::CopySCIT_VFX(a1, a2, a3);
}
