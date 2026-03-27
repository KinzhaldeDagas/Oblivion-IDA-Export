void __cdecl sub_4EA160(int a1, float arg4, int a3, NiTMap_TESCELL *a4, int a5)
{
  TESWorldSpace *CurrentWorldspace; // edi
  TESWorldSpace *v6; // esi
  double v7; // st7
  double v8; // st7
  float v9; // ebp
  int v10; // ebx
  float *vtbl; // ecx
  TES *v12; // eax
  TESObjectCELL *v13; // [esp+24h] [ebp-2Ch] BYREF
  float v14; // [esp+28h] [ebp-28h]
  NiTMap_Entry_TESCELL *v15[2]; // [esp+2Ch] [ebp-24h] BYREF
  int a2; // [esp+34h] [ebp-1Ch] BYREF
  float v17; // [esp+38h] [ebp-18h]
  int v18; // [esp+4Ch] [ebp-4h]

  if ( !byte_B09B48 && !TES->currentInteriorCell )
  {
    CurrentWorldspace = TES::GetCurrentWorldspace(TES);
    v6 = CurrentWorldspace;
    if ( CurrentWorldspace )
    {
      for ( ;
            TESWorldSpace_GetParentWorldpsace(CurrentWorldspace);
            CurrentWorldspace = TESWorldSpace_GetParentWorldpsace(CurrentWorldspace) )
      {
        ;
      }
      if ( sub_4EF2D0(v6, 4) || !byte_B3608F )
      {
        if ( sub_4EF2D0(v6, 4) )
        {
          if ( byte_B3608F )
          {
LABEL_14:
            if ( !(_BYTE)a5 )
            {
              sub_43F720(TES, &a2, 0.0);
              sub_7B4520(&a2);
            }
            v15[1] = 0;
            a2 = a1;
            v18 = 0;
            v17 = arg4;
            *(float *)v15 = sqrt(dbl_A3D0C0);
            v14 = COERCE_FLOAT(sub_483850());
            v7 = (double)SLODWORD(v14);
            if ( v14 < 0.0 )
              v7 = v7 + flt_A2FC78;
            *(float *)v15 = v7 * dbl_A37650 * *(float *)v15;
            v8 = flt_B09AF8;
            if ( *(float *)v15 >= v8 )
              v8 = *(float *)v15;
            v14 = v8;
            v15[0] = (NiTMap_Entry_TESCELL *)sub_6A9030(a4);
            if ( v15[0] )
            {
              v9 = v17;
              v10 = a2;
              do
              {
                v13 = 0;
                sub_452600(a4, v15, (void **)&a2, &v13);
                vtbl = (float *)v13->vtbl;
                v12 = TES;
                if ( byte_B3608F && !v12->currentInteriorCell && CurrentWorldspace == a4[1].vtbl )
                  sub_4ED430(vtbl, (int)v12->LandLOD, v14, *(float *)&v10, v9, a5);
                else
                  sub_4ECAE0(vtbl, (volatile LONG *)v12->LandLOD);
              }
              while ( v15[0] );
            }
            NiAVObject_InitializePropertyState((NiAVObject *)TES->LandLOD);
            NiNode_UpdateDynamicEffectState(TES->LandLOD);
            NiAVObject_UpdateNiAVObject((NiAVObject *)TES->LandLOD, 0.0, 1);
            return;
          }
          if ( !byte_B02D70 )
            return;
          sub_4EB0E0(1);
        }
      }
      else
      {
        sub_4EB0E0(0);
        sub_4BDD40();
        sub_4BDCD0();
      }
    }
    if ( !byte_B3608F )
      return;
    goto LABEL_14;
  }
}
