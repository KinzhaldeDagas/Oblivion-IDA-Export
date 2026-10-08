void __thiscall MagicCaster_ApplyAOE__(
        char *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int (__thiscall ***a8)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int),
        int a9,
        float **a10,
        char *a11,
        float a12)
{
  int v13; // eax
  float *v14; // edi
  MagicTarget *v15; // eax
  int (__thiscall ***v16)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int); // esi
  bool v17; // bl
  Actor *v18; // ebp
  int v19; // edi
  float v20; // edi
  void (__thiscall **v21)(float, int, int, _DWORD); // esi
  int SchoolAV; // eax
  int Area; // [esp+24h] [ebp-8h]
  int v24; // [esp+24h] [ebp-8h]
  char i; // [esp+38h] [ebp+Ch]

  if ( a4 )
  {
    Area = EffectItem_GetArea(*(_DWORD **)(a3 + 0xC)); /*0x699316*/
    if ( Area > 0 )
    {
      v24 = Double_To_SInt32(MEMORY[0xB37DB8][0] * a12 * (double)Area); /*0x699335*/
      v13 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x20))(this); /*0x69933e*/
      if ( v13 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 0x190))(v13) ) /*0x69934e*/
        LODWORD(a12) = this + 0xFFFFFFA4; /*0x699357*/
      else
        a12 = 0.0; /*0x69935d*/
      for ( i = *a11; a10; a10 = (float **)a10[1] )
      {
        v14 = *a10; /*0x699384*/
        if ( !*a10 ) /*0x699384*/
          break; /*0x699388*/
        v15 = (MagicTarget *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v14 + 0x124))(*a10); /*0x699398*/
        v16 = (int (__thiscall ***)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int))v15; /*0x69939a*/
        v17 = 0; /*0x69939c*/
        v18 = v15 ? MagicTarget_GetParentActor(v15) : 0;
        if ( a12 != 0.0 ) /*0x6993b5*/
          v17 = v18 == (Actor *)LODWORD(a12); /*0x6993b9*/
        if ( v16 ) /*0x6993be*/
        {
          if ( !v17 && v16 != a8 ) /*0x6993d0*/
          {
            if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v14 + 0x154))(v14) ) /*0x6993e0*/
            {
              if ( (double)v24 >= TESObjectREFR::GetDistanceToPoint(v14, (float *)&a5) && (!v18 || !Actor_IsGhost(v18)) ) /*0x69940d*/
              {
                v19 = a9; /*0x69941a*/
                if ( !a9 /*0x699432*/
                  || (*(unsigned __int8 (__thiscall **)(int, int (__thiscall ***)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int), int))(*(_DWORD *)a9 + 0x21C))(
                       a9,
                       v16,
                       a3) )
                {
                  if ( (unsigned __int8)sub_6990B0(this, v16, a5, a6, a7, a2, a3, 1) ) /*0x699462*/
                  {
                    if ( v19 ) /*0x69946d*/
                      (*(void (__thiscall **)(int, int (__thiscall ***)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int), int))(*(_DWORD *)v19 + 0x20C))( /*0x69947b*/
                        v19,
                        v16,
                        a3);
                    if ( !a8 /*0x6994ad*/
                      && !i
                      && a12 != 0.0
                      && (!(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2)
                       || (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2) == 5) )
                    {
                      v20 = a12; /*0x6994b5*/
                      *a11 = 1; /*0x6994ba*/
                      i = 1; /*0x6994c7*/
                      v21 = (void (__thiscall **)(float, int, int, _DWORD))(*(_DWORD *)LODWORD(v20) + 0x39C);// Advance the actor vtable pointer to Player_ModExperience (+0x39C); this adjusted-pointer form is why ordinary function xrefs miss the later call. /*0x6994cc*/
                      SchoolAV = EffectItemList_GetSchoolAV(); /*0x6994d2*/
                      (*v21)(COERCE_FLOAT(LODWORD(v20)), SchoolAV, 1, 0.0);// Eligible area magic application: resolved school AV, useValue1, identity scale (0.0). /*0x6994dc*/
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
