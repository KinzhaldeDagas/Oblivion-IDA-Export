char __userpurge TESDataHandler_AddForm@<al>(
        TESWorldSpace **this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        unsigned __int8 *a5)
{
  TESObjectREFR *v7; // eax
  TESChildCELL *v8; // esi
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *currentInteriorCell; // ebx
  float *v11; // ebx
  int v12; // eax
  _DWORD *v13; // eax
  unsigned __int8 v14; // al
  const char *v15; // eax
  TESWorldSpace *CurrentWorldspace; // [esp+8h] [ebp-14h]

  if ( !a5 )
    return 0;
  switch ( a5[4] )
  {
    case 4u:
      BSSimpleList_PushFront(this + 0x1D, (int)a5);
      return 1;
    case 5u:
      BSSimpleList_PushFront(this + 0x15, (int)a5);
      return 1;
    case 6u:
      BSSimpleList_PushFront(this + 0x17, (int)a5);
      return 1;
    case 7u:
      BSSimpleList_PushFront(this + 0xD, (int)a5);
      return 1;
    case 8u:
      BSSimpleList_PushFront(this + 0xF, (int)a5);
      return 1;
    case 9u:
      BSSimpleList_PushFront(this + 0x11, (int)a5);
      return 1;
    case 0xAu:
      BSSimpleList_PushFront(this + 0x1B, (int)a5);
      return 1;
    case 0xDu:
      BSSimpleList_PushFront(this + 0x19, (int)a5);
      return 1;
    case 0xEu:
      BSSimpleList_PushFront(this + 0x13, (int)a5);
      return 1;
    case 0xFu:
      BSSimpleList_PushFront(this + 9, (int)a5);
      return 1;
    case 0x10u:
      BSSimpleList_PushFront(this + 0xB, (int)a5);
      return 1;
    case 0x11u:
      BSSimpleList_PushFront(this + 0x23, (int)a5);
      return 1;
    case 0x2Du:
      BSSimpleList_PushFront(this + 7, (int)a5);
      return 1;
    case 0x2Eu:
      BSSimpleList_PushFront(this + 5, (int)a5);
      return 1;
    case 0x2Fu:
      BSSimpleList_PushFront(&(*(this + 0x2F))->super, (int)a5);
      return 1;
    case 0x31u:
      v7 = (TESObjectREFR *)OblivionDynamicCast(
                              a5,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                              0);
      v8 = (TESChildCELL *)v7;
      if ( !v7 )
        return 1;
      ParentCell = TESObjectREFR_GetParentCell(v7);
      currentInteriorCell = ParentCell;
      if ( ParentCell )
      {
        if ( TESObjectCELL_IsInterior(ParentCell) )
          goto LABEL_33;
      }
      else
      {
        currentInteriorCell = TES->currentInteriorCell;
        if ( currentInteriorCell )
          goto LABEL_34;
      }
      v11 = (float *)(*((int (__usercall **)@<eax>(TESChildCELL *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v8->vtbl
                      + 0x5D))(
                       v8,
                       a4,
                       a3,
                       st5_0);
      CurrentWorldspace = TES::GetCurrentWorldspace(TES);
      v12 = (*((int (__thiscall **)(TESChildCELL *))v8->vtbl + 0x5D))(v8);
      a4 = *v11;
      currentInteriorCell = (TESObjectCELL *)sub_44A270(this, *v11, *(float *)(v12 + 4), CurrentWorldspace, 1);
LABEL_33:
      if ( !currentInteriorCell )
        return 1;
LABEL_34:
      sub_4D35D0(currentInteriorCell, st5_0, a3, a4, v8);
      if ( sub_4DB3C0(v8) )
        TESObjectREFR_SetPersistance((TESObjectREFR *)v8, st5_0, a3, 1);
      if ( !TESObjectREFR_IsTree((TESObjectREFR *)v8) )
        return 1;
      TESObjectREFR_SetVisibleWhenDistant_(v8, 1);
      return 1;
    case 0x35u:
      BSSimpleList_PushFront(this + 3, (int)a5);
      return 1;
    case 0x3Bu:
      BSSimpleList_PushFront(this + 0x21, (int)a5);
      return 1;
    case 0x3Du:
      BSSimpleList_PushFront(this + 1, (int)a5);
      return 1;
    case 0x3Eu:
      BSSimpleList_PushFront(this + 0x25, (int)a5);
      return 1;
    case 0x3Fu:
      BSSimpleList_PushFront(this + 0x27, (int)a5);
      return 1;
    case 0x41u:
      BSSimpleList_PushFront(this + 0x2D, (int)a5);
      return 1;
    case 0x42u:
      BSSimpleList_PushFront(this + 0x29, (int)a5);
      return 1;
    case 0x43u:
      BSSimpleList_PushFront(this + 0x2B, (int)a5);
      return 1;
    default:
      v13 = OblivionDynamicCast(
              a5,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObject `RTTI Type Descriptor',
              0);
      if ( v13 )
      {
        TESObjectListHead_AddObject(*this, v13);
        return 1;
      }
      else
      {
        v14 = a5[4];
        if ( v14 >= 0x45u )
          v15 = EmptyString;
        else
          v15 = *(const char **)(0xC * v14 + 0xB05E04);
        PrintError("Unknown form type '%s' encountered in AddFormToDataHandler.", v15);
        return 0;
      }
  }
}
