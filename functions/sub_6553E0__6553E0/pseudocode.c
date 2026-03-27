char __thiscall sub_6553E0(_DWORD *this, TESObjectREFR *arg0, float arg4)
{
  int *v5; // eax
  int v6; // edx
  BSExtraDataVtbl *Owner; // eax
  TESPackage *v8; // ebx
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // ebp
  TESObjectCELL *v10; // eax
  double v11; // st7
  float *v12; // eax
  TESObjectREFR **v13; // esi
  BSSimpleList_VoidPtr *next; // ebx
  TESObjectREFR *data; // edi
  TESObjectREFR **v16; // eax
  TESObjectREFR **v17; // ebx
  TESChildCELL *v18; // ecx
  TESObjectREFR **v19; // eax
  TESObjectREFR **i; // edi
  TESObjectREFR *v21; // ebp
  TESObjectREFR *v22; // esi
  bool v23; // zf
  int a2[3]; // [esp+24h] [ebp-18h] BYREF
  char v26[12]; // [esp+30h] [ebp-Ch] BYREF
  TESObjectCELL *ParentCell; // [esp+40h] [ebp+4h]
  TESChildCELL *v28; // [esp+40h] [ebp+4h]
  float a3; // [esp+44h] [ebp+8h]
  char v30; // [esp+44h] [ebp+8h]

  byte_B3BA80 = LOBYTE(arg4);
  ParentCell = TESObjectREFR_GetParentCell(arg0);
  v5 = (int *)arg0->vtbl->GetPos(arg0);
  a2[0] = *v5;
  a2[1] = v5[1];
  v6 = *this;
  a2[2] = v5[2];
  Owner = (BSExtraDataVtbl *)(*(int (__thiscall **)(_DWORD *))(v6 + 0x184))(this);
  v8 = (TESPackage *)Owner;
  if ( Owner )
  {
    CompareTo = Owner[4].CompareTo;
    if ( CompareTo
      && sub_569740((char *)Owner[4].CompareTo) == 1
      && (v10 = (TESObjectCELL *)sub_569800(CompareTo), TESObjectCELL_IsInterior(v10)) )
    {
      v11 = flt_A32048;
    }
    else
    {
      v11 = flt_A6DD10;
    }
    a3 = v11;
    v12 = (float *)sub_566B30(v8, (int)v26, (Actor *)arg0);
    sub_446B90(
      ParentCell,
      (float *)a2,
      a3,
      v12,
      a3,
      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_6505D0,
      (int)arg0);
    v13 = (TESObjectREFR **)(this + 0x2C);
    BSSimpleList_Clear(v13);
    next = &stru_B3BA9C;
    do
    {
      data = (TESObjectREFR *)next->firstNode.data;
      if ( !next->firstNode.data )
        break;
      if ( *v13 )
      {
        v16 = (TESObjectREFR **)FormHeapAlloc(8u);
        if ( v16 )
        {
          *v16 = *v13;
          v16[1] = 0;
        }
        else
        {
          v16 = 0;
        }
        v16[1] = v13[1];
        v13[1] = (TESObjectREFR *)v16;
      }
      *v13 = data;
      next = (BSSimpleList_VoidPtr *)next->firstNode.next;
    }
    while ( next );
    LOBYTE(Owner) = BSSimpleList_Clear(&stru_B3BA9C);
    v17 = v13;
    if ( v13 )
    {
      v18 = 0;
      v19 = v13;
      do
      {
        if ( *v19 )
          v18 = (TESChildCELL *)((char *)v18 + 1);
        v19 = (TESObjectREFR **)v19[1];
      }
      while ( v19 );
      v28 = v18;
      LOBYTE(Owner) = 1;
      if ( v18 )
      {
        while ( (_BYTE)Owner )
        {
          v30 = 0;
          for ( i = v17; i; i = (TESObjectREFR **)i[1] )
          {
            v21 = *v17;
            v22 = *i;
            Owner = TESObjectREFR_GetOwner(*v17);
            if ( !Owner )
            {
              Owner = TESObjectREFR_GetOwner(v22);
              if ( Owner )
              {
                if ( v22 )
                  *v17 = v22;
                if ( v21 )
                  *i = v21;
                v30 = 1;
              }
            }
          }
          v23 = v28 == (TESChildCELL *)1;
          v28 = (TESChildCELL *)((char *)v28 + 0xFFFFFFFF);
          v17 = (TESObjectREFR **)v17[1];
          if ( v23 )
            break;
          LOBYTE(Owner) = v30;
        }
      }
    }
  }
  return (char)Owner;
}
