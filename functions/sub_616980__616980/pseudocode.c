double __userpurge sub_616980@<st0>(
        _DWORD *this@<ecx>,
        double result@<st0>,
        double a3@<st2>,
        float *a4,
        int a5,
        int a6)
{
  int *v8; // eax
  int v9; // ebp
  char v10; // al
  int *v11; // edx
  int *v12; // eax
  char v13; // al
  int **v14; // ebx
  int **v15; // eax
  int *v16; // esi
  int v17; // edx
  int v18; // eax
  int **v19; // esi
  float v20; // [esp+4h] [ebp-1Ch]
  float v21; // [esp+4h] [ebp-1Ch]
  char v22; // [esp+1Bh] [ebp-5h]
  int *v23; // [esp+1Ch] [ebp-4h]

  v8 = (int *)*(this + 0x20); /*0x61698d*/
  v9 = 0; /*0x616993*/
  v22 = 0; /*0x616999*/
  v23 = 0; /*0x61699e*/
  if ( v8 && a5 == 4 ) /*0x6169a7*/
  {
    v10 = CombatController_CanUseSpellAgainstCurrentTarget(this, v8, a6, 1); /*0x6169b3*/
    v11 = (int *)*(this + 0x20); /*0x6169ba*/
    if ( v10 ) /*0x6169c0*/
    {
LABEL_4:
      sub_5E0970((void *)*(this + 0xF), *v11); /*0x6169c2*/
      v20 = result; /*0x6169ce*/
      result = sub_546CA0(v20); /*0x6169d1*/
      *a4 = a3; /*0x6169dd*/
      return result; /*0x6169ec*/
    }
    v23 = (int *)*(this + 0x20); /*0x6169ef*/
    v22 = 1; /*0x6169f3*/
  }
  v12 = (int *)*(this + 0x1F); /*0x6169f8*/
  if ( v12 && a5 == 3 ) /*0x616a02*/
  {
    v13 = CombatController_CanUseSpellAgainstCurrentTarget(this, v12, a6, 1); /*0x616a0e*/
    v11 = (int *)*(this + 0x1F); /*0x616a15*/
    if ( v13 ) /*0x616a18*/
      goto LABEL_4; /*0x616a18*/
    v23 = (int *)*(this + 0x1F); /*0x616a44*/
    v22 = 1; /*0x616a48*/
  }
  else
  {
    if ( a5 == 4 ) /*0x616a52*/
    {
      v14 = (int **)*(this + 0x17); /*0x616a54*/
      goto LABEL_14; /*0x616a57*/
    }
    if ( a5 != 3 ) /*0x616a5c*/
      return result; /*0x616a5c*/
  }
  v14 = (int **)*(this + 0x18); /*0x616a62*/
LABEL_14:
  if ( !v14 ) /*0x616a67*/
    return result; /*0x616a67*/
  v15 = v14; /*0x616a6d*/
  do /*0x616a7c*/
  {
    if ( *v15 ) /*0x616a70*/
      ++v9; /*0x616a74*/
    v15 = (int **)v15[1]; /*0x616a77*/
  }
  while ( v15 ); /*0x616a7c*/
  if ( v9 == 1 ) /*0x616a81*/
  {
    v16 = *v14; /*0x616a83*/
    goto LABEL_38; /*0x616a85*/
  }
  if ( !v9 ) /*0x616a8c*/
    return result; /*0x616a8c*/
  v17 = Game_RandomLargeInteger(0) % (2 * v9); /*0x616a9e*/
  if ( v17 >= v9 ) /*0x616aa5*/
    goto LABEL_34; /*0x616aa5*/
  if ( v17 ) /*0x616aa9*/
  {
    v18 = 0; /*0x616ac8*/
    v19 = v14; /*0x616acc*/
    if ( v17 > 0 ) /*0x616ace*/
    {
      while ( v19 ) /*0x616ad2*/
      {
        v19 = (int **)v19[1]; /*0x616ad4*/
        if ( ++v18 >= v17 ) /*0x616adc*/
          goto LABEL_30; /*0x616adc*/
      }
      goto LABEL_34; /*0x616ad2*/
    }
LABEL_30:
    if ( v19 && CombatController_CanUseSpellAgainstCurrentTarget(this, *v19, a6, 1) ) /*0x616aee*/
    {
      v16 = *v19; /*0x616af7*/
      goto LABEL_33; /*0x616af7*/
    }
LABEL_34:
    v16 = (int *)v14; /*0x616afd*/
    while ( *v16 && !CombatController_CanUseSpellAgainstCurrentTarget(this, (int *)*v16, a6, 1) ) /*0x616b16*/
    {
      v16 = (int *)v16[1]; /*0x616b18*/
      if ( !v16 ) /*0x616b1d*/
        goto LABEL_38; /*0x616b1d*/
    }
    v16 = (int *)*v16; /*0x616b3e*/
LABEL_38:
    if ( !v16 ) /*0x616b21*/
      return result; /*0x616b21*/
    goto LABEL_39; /*0x616b21*/
  }
  if ( CombatController_CanUseSpellAgainstCurrentTarget(this, *v14, a6, 1) ) /*0x616ab7*/
    v16 = *v14; /*0x616ac0*/
  else
    v16 = 0; /*0x616ac4*/
LABEL_33:
  if ( !v16 ) /*0x616afb*/
    goto LABEL_34; /*0x616afb*/
LABEL_39:
  if ( v16 != v23 || !v22 ) /*0x616b2e*/
  {
    sub_5E0970((void *)*(this + 0xF), *v16); /*0x616b4c*/
    v21 = result; /*0x616b57*/
    result = sub_546CA0(v21); /*0x616b5c*/
    *a4 = a3; /*0x616b6c*/
    if ( *v16 ) /*0x616b6e*/
    {
      if ( !sub_419D90((char *)*v16) ) /*0x616b77*/
        MagicItem_LoadVFXModels((char *)*v16, 0); /*0x616b84*/
    }
  }
  return result; /*0x6169e5*/
}
