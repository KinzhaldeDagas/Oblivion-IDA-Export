int __usercall Player_Actor_PostLink_CleanAVModifiers_::EffectLoop_Test@<eax>(void **a1@<edi>, int a2, int a3, char a4)
{
  int v4; // esi
  int *v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax

  v4 = (int)*a1;
  if ( !*a1 )
    JUMPOUT(0x666B30);
  if ( OblivionDynamicCast(
         (void *)v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
         &ValueModifierEffect `RTTI Type Descriptor',
         0) )
  {
    v5 = *(int **)(v4 + 0xC);
    v6 = *v5;
    if ( *v5 == 0x48534946 || v6 == 0x4853494C || v6 == 0x48535246 )
      v7 = v4;
    else
      v7 = 0;
    if ( *(_DWORD *)(v4 + 0x28) != 4 && (*(_DWORD *)(v5[7] + 0x58) & 2) != 0 )
    {
      v8 = v5[5];
      if ( v8 < 0x48 )
        *((float *)&a4 + v8) = *(float *)(v4 + 0x18) + *((float *)&a4 + v8);
      if ( v7 )
      {
        v9 = *(_DWORD *)(v7 + 0x3C);
        if ( v9 < 0x48 )
          *((float *)&a4 + v9) = *(float *)(v4 + 0x18) + *((float *)&a4 + v9);
      }
    }
  }
  return Player_Actor_PostLink_CleanAVModifiers_::EffectLoop_Next(a2, a3, a4);
}
