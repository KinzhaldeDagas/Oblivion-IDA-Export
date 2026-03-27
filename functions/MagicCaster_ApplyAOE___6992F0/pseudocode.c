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
    Area = EffectItem_GetArea(*(_DWORD **)(a3 + 0xC));
    if ( Area > 0 )
    {
      v24 = Double_To_SInt32(fMagicUnitsPerFoot * a12 * (double)Area);
      v13 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x20))(this);
      if ( v13 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 0x190))(v13) )
        LODWORD(a12) = this + 0xFFFFFFA4;
      else
        a12 = 0.0;
      for ( i = *a11; a10; a10 = (float **)a10[1] )
      {
        v14 = *a10;
        if ( !*a10 )
          break;
        v15 = (MagicTarget *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v14 + 0x124))(*a10);
        v16 = (int (__thiscall ***)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int))v15;
        v17 = 0;
        v18 = v15 ? MagicTarget_GetParentActor(v15) : 0;
        if ( a12 != 0.0 )
          v17 = v18 == (Actor *)LODWORD(a12);
        if ( v16 )
        {
          if ( !v17 && v16 != a8 )
          {
            if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v14 + 0x154))(v14) )
            {
              if ( (double)v24 >= sub_4D7E30(v14, (float *)&a5) && (!v18 || !Actor_IsGhost(v18)) )
              {
                v19 = a9;
                if ( !a9
                  || (*(unsigned __int8 (__thiscall **)(int, int (__thiscall ***)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int), int))(*(_DWORD *)a9 + 0x21C))(
                       a9,
                       v16,
                       a3) )
                {
                  if ( (unsigned __int8)sub_6990B0(this, v16, a5, a6, a7, a2, a3, 1) )
                  {
                    if ( v19 )
                      (*(void (__thiscall **)(int, int (__thiscall ***)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int), int))(*(_DWORD *)v19 + 0x20C))(
                        v19,
                        v16,
                        a3);
                    if ( !a8
                      && !i
                      && a12 != 0.0
                      && (!(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2)
                       || (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2) == 5) )
                    {
                      v20 = a12;
                      *a11 = 1;
                      i = 1;
                      v21 = (void (__thiscall **)(float, int, int, _DWORD))(*(_DWORD *)LODWORD(v20) + 0x39C);
                      SchoolAV = EffectItemList_GetSchoolAV();
                      (*v21)(COERCE_FLOAT(LODWORD(v20)), SchoolAV, 1, 0.0);
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
