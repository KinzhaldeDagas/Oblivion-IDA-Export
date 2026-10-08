int __usercall Player_Actor_PostLink_CleanAVModifiers_::EffectLoop_Test@<eax>(
        int *a1@<edi>,
        int a2@<ebp>,
        int a3,
        int a4,
        char a5)
{
  int v5; // esi
  int *v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax

  v5 = *a1; /*0x666aa4*/
  if ( !*a1 ) /*0x666aa8*/
    JUMPOUT(0x666B30); /*0x666b30*/
  if ( OblivionDynamicCast( /*0x666abd*/
         (void *)v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
         &ValueModifierEffect `RTTI Type Descriptor',
         0) )
  {
    v6 = *(int **)(v5 + 0xC); /*0x666ac9*/
    v7 = *v6; /*0x666acc*/
    if ( *v6 == 0x48534946 || v7 == 0x4853494C || v7 == 0x48535246 ) /*0x666ae1*/
      v8 = v5; /*0x666ae7*/
    else
      v8 = 0; /*0x666ae3*/
    if ( *(_DWORD *)(v5 + 0x28) != 4 && (*(_DWORD *)(v6[7] + 0x58) & 2) != 0 ) /*0x666af9*/
    {
      v9 = v6[5]; /*0x666afb*/
      if ( v9 < 0x48 ) /*0x666b01*/
        *((float *)&a5 + v9) = *(float *)(v5 + 0x18) + *((float *)&a5 + v9); /*0x666b0c*/
      if ( v8 ) /*0x666b10*/
      {
        v10 = *(_DWORD *)(v8 + 0x3C); /*0x666b12*/
        if ( v10 < 0x48 ) /*0x666b18*/
          *((float *)&a5 + v10) = *(float *)(v5 + 0x18) + *((float *)&a5 + v10); /*0x666b23*/
      }
    }
  }
  return Player_Actor_PostLink_CleanAVModifiers_::EffectLoop_Next(a2, (int)a1, a3, a4, a5);
}
