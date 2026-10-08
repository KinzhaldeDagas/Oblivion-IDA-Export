// Verified explored boundary: operates on manager+38 actor-fixup list, NOT deferred deletion list+30. RTTI-casts entries to Actor, evaluates packages and performs other actor/position callbacks; frees list nodes while draining. Full callback policy Unknown; no evidence this drains deletion queue.
void __usercall sub_45C320(
        BSSimpleList_VoidPtr *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        double a4@<st2>,
        double a5@<st1>,
        double x@<st0>)
{
  BSSimpleList_VoidPtr *v6; // edi
  BSSimpleList_VoidPtr *v7; // esi
  TESObjectREFR *v8; // eax
  TESObjectREFR *v9; // esi
  double v10; // st7
  TESObjectREFRVtbl *vtbl; // ecx
  int *v12; // eax
  int v13; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  int *v15; // eax
  BSSimpleList_VoidPtr::NodeVoid *next; // eax
  BSSimpleList_VoidPtr *v17; // [esp+10h] [ebp-14h]
  int v18[3]; // [esp+18h] [ebp-Ch] BYREF

  v6 = a1; /*0x45c327*/
  a1[3].firstNode.data = (void *)((int)a1[3].firstNode.data | 8); /*0x45c329*/
  v7 = a1 + 7; /*0x45c32d*/
  if ( a1 != (BSSimpleList_VoidPtr *)0xFFFFFFC8 ) /*0x45c336*/
  {
    while ( !BSSimpleList_IsEmpty(v7) ) /*0x45c349*/
    {
      v8 = (TESObjectREFR *)OblivionDynamicCast( /*0x45c360*/
                              v7->firstNode.data,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &Actor `RTTI Type Descriptor',
                              0);
      v9 = v8; /*0x45c365*/
      if ( v8 ) /*0x45c36c*/
      {
        v10 = EvaluatePackage(v8, a2, a3, (int)v6, x, a4, a5); /*0x45c374*/
        x = sub_5ED860((int *)v9, *(float *)&a2, a3, (int)v6, a4, a5, v10); /*0x45c37b*/
        vtbl = v9[1].vtbl; /*0x45c380*/
        if ( vtbl ) /*0x45c385*/
        {
          if ( !(*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, double@<st0>, double@<st1>, double@<st2>))vtbl->super.super.InitializeComponent /*0x45c390*/
                 + 2))(
                  vtbl,
                  x,
                  a5,
                  a4) )
          {
            x = v9->member.rot.x; /*0x45c39a*/
            if ( x == dbl_A3A5B0 ) /*0x45c3a8*/
            {
              v12 = (int *)v9->vtbl->GetPos(v9); /*0x45c3b4*/
              v13 = *v12; /*0x45c3b6*/
              a2 = v12[1]; /*0x45c3b8*/
              a3 = v12[2]; /*0x45c3bb*/
              if ( Shared_GetDwordAtOffset40(v9) ) /*0x45c3c0*/
              {
                DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v9); /*0x45c3d1*/
                v15 = Actor_ChoosePathGridSteeringPosition( /*0x45c3eb*/
                        v9,
                        v18,
                        v13,
                        a2,
                        *(float *)&a3,
                        DwordAtOffset40,
                        COERCE_FLOAT(1),
                        0,
                        0);
                v13 = *v15; /*0x45c3f0*/
                a2 = v15[1]; /*0x45c3f2*/
                a3 = v15[2]; /*0x45c3f5*/
              }
              TESObjectREFR_SetPosition(v9, *(float *)&v13, *(float *)&a2, *(float *)&a3); /*0x45c407*/
              x = 0.0; /*0x45c40c*/
              TESObjectREFR_SetRotationX(v9, 0.0); /*0x45c414*/
              v6 = v17; /*0x45c419*/
            }
          }
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))v9[1].vtbl->super.super.InitializeComponent /*0x45c428*/
           + 6))(
            v9[1].vtbl,
            v9,
            1);
        }
      }
      next = v6[7].firstNode.next; /*0x45c42a*/
      v7 = v6 + 7; /*0x45c42f*/
      if ( next ) /*0x45c432*/
      {
        v6[7].firstNode.next = next->next; /*0x45c437*/
        v7->firstNode.data = next->data; /*0x45c43d*/
        FormHeapFree((unsigned int)next); /*0x45c43f*/
      }
      else
      {
        v7->firstNode.data = 0; /*0x45c44c*/
      }
    }
  }
  v6[3].firstNode.data = (void *)((int)v6[3].firstNode.data & ~8u); /*0x45c457*/
}
