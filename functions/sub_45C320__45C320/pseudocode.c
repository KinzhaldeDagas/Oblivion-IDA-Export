void __usercall sub_45C320(
        BSSimpleList_VoidPtr *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        double a4@<st2>,
        double a5@<st1>,
        double x@<st0>)
{
  int v6; // edi
  BSSimpleList_VoidPtr *v7; // esi
  TESObjectREFR *v8; // eax
  TESObjectREFR *v9; // esi
  TESObjectREFRVtbl *vtbl; // ecx
  int *v11; // eax
  int v12; // edi
  TESObjectCELL *ParentCell; // eax
  int *v14; // eax
  void **v15; // eax
  int v16; // [esp+10h] [ebp-14h]
  int v17[3]; // [esp+18h] [ebp-Ch] BYREF

  v6 = (int)a1;
  a1[3].firstNode.data = (void *)((int)a1[3].firstNode.data | 8);
  v7 = a1 + 7;
  if ( a1 != (BSSimpleList_VoidPtr *)0xFFFFFFC8 )
  {
    while ( !BSSimpleList_IsEmpty(v7) )
    {
      v8 = (TESObjectREFR *)OblivionDynamicCast(
                              v7->firstNode.data,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &Actor `RTTI Type Descriptor',
                              0);
      v9 = v8;
      if ( v8 )
      {
        x = EvaluatePackage(v8, a2, a3, v6, x, a4, a5);
        sub_5ED860((int)v9, *(float *)&a2, a3, v6, a4, a5);
        vtbl = v9[1].vtbl;
        if ( vtbl )
        {
          if ( !(*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, double@<st0>, double@<st1>, double@<st2>))vtbl->super.super.InitializeComponent
                 + 2))(
                  vtbl,
                  x,
                  a5,
                  a4) )
          {
            x = v9->member.rot.x;
            if ( x == dbl_A3A5B0 )
            {
              v11 = (int *)v9->vtbl->GetPos(v9);
              v12 = *v11;
              a2 = v11[1];
              a3 = v11[2];
              if ( TESObjectREFR_GetParentCell(v9) )
              {
                ParentCell = TESObjectREFR_GetParentCell(v9);
                v14 = (int *)sub_5E2E20(v9, (int)v17, v12, a2, a3, (int)ParentCell, COERCE_FLOAT(1), 0.0, 0);
                v12 = *v14;
                a2 = v14[1];
                a3 = v14[2];
              }
              TESObjectREFR_SetPosition(v9, *(float *)&v12, *(float *)&a2, *(float *)&a3);
              x = 0.0;
              sub_4D89D0(0.0);
              v6 = v16;
            }
          }
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))v9[1].vtbl->super.super.InitializeComponent
           + 6))(
            v9[1].vtbl,
            v9,
            1);
        }
      }
      v15 = *(void ***)(v6 + 0x3C);
      v7 = (BSSimpleList_VoidPtr *)(v6 + 0x38);
      if ( v15 )
      {
        *(_DWORD *)(v6 + 0x3C) = v15[1];
        v7->firstNode.data = *v15;
        FormHeapFree((unsigned int)v15);
      }
      else
      {
        v7->firstNode.data = 0;
      }
    }
  }
  *(_DWORD *)(v6 + 0x18) &= ~8u;
}
