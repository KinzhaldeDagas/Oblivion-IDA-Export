char __thiscall TESObjectCELL_LessThan(_BYTE *this, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // eax
  int (__thiscall ***v4)(_DWORD); // edi
  int v5; // ebx
  int v6; // eax
  unsigned __int8 *v8; // ecx
  _DWORD *v9; // eax
  int v10; // eax
  void *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // edi
  char v14; // cl
  char v15; // al
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // ebp
  unsigned int v19; // ebp
  unsigned int CellGroupSubBlockLabel; // ebp
  unsigned int v21; // ebp

  v2 = a2; /*0x4cdc90*/
  switch ( a2[4] ) /*0x4cdcac*/
  {
    case '0': /*0x4cdcac*/
      v12 = OblivionDynamicCast( /*0x4cdda1*/
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectCELL `RTTI Type Descriptor',
              0);
      v13 = v12; /*0x4cdda6*/
      if ( !v12 ) /*0x4cddad*/
        goto LABEL_34; /*0x4cddad*/
      v14 = *(this + 0x24) & 1; /*0x4cddb6*/
      if ( v14 && (v12[9] & 1) == 0 ) /*0x4cddbf*/
        return 1; /*0x4cddbf*/
      v15 = v12[9] & 1; /*0x4cddc8*/
      if ( v14 != v15 ) /*0x4cddcc*/
        goto LABEL_34; /*0x4cddcc*/
      if ( v14 ) /*0x4cddd4*/
        goto LABEL_27; /*0x4cddd4*/
      v16 = *((_DWORD *)this + 0x14); /*0x4cddd6*/
      v17 = 0; /*0x4cddd9*/
      if ( !v15 ) /*0x4cdddd*/
        v17 = v13[0x14]; /*0x4cdddf*/
      if ( v16 != v17 ) /*0x4cdde4*/
        return (*(char (__thiscall **)(int, int))(*(_DWORD *)v16 + 0x34))(v16, v17); /*0x4cddec*/
      if ( ((*((_DWORD *)this + 2) & 0x400) != 0) != ((v13[2] & 0x400) != 0) ) /*0x4cde0d*/
        return (*((_DWORD *)this + 2) & 0x400) != 0; /*0x4cde17*/
LABEL_27:
      v18 = sub_4CA5F0((int)v13); /*0x4cde1d*/
      if ( sub_4CA5F0((int)this) >= v18 ) /*0x4cde2f*/
      {
        v19 = sub_4CA5F0((int)v13); /*0x4cde3a*/
        if ( sub_4CA5F0((int)this) != v19 /*0x4cde73*/
          || (CellGroupSubBlockLabel = TESObjectCELL_GetCellGroupSubBlockLabel(v13),
              TESObjectCELL_GetCellGroupSubBlockLabel(this) >= CellGroupSubBlockLabel)
          && ((v21 = TESObjectCELL_GetCellGroupSubBlockLabel(v13), TESObjectCELL_GetCellGroupSubBlockLabel(this) != v21)
           || *((_DWORD *)this + 3) >= v13[3]) )
        {
LABEL_34:
          JUMPOUT(0x4CDE8A); /*0x4cde8a*/
        }
      }
      return 1;
    case '1': /*0x4cdcac*/
    case '2': /*0x4cdcac*/
    case '3': /*0x4cdcac*/
    case '4': /*0x4cdcac*/
    case '6': /*0x4cdcac*/
      v4 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast( /*0x4cdcc7*/
                                           a2,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESChildCell `RTTI Type Descriptor',
                                           0);
      if ( (_BYTE *)(**v4)(v4) == this ) /*0x4cdcd6*/
        return 1; /*0x4cdcd6*/
      v5 = *(_DWORD *)this; /*0x4cdce0*/
      v6 = (**v4)(v4); /*0x4cdce4*/
      return (*(char (__thiscall **)(_BYTE *, int))(v5 + 0x34))(this, v6); /*0x4cdcf4*/
    case '5': /*0x4cdcac*/
      if ( (*(this + 0x24) & 1) != 0 ) /*0x4cdcfb*/
        return 1; /*0x4cdcfb*/
      v8 = *((unsigned __int8 **)this + 0x14); /*0x4cdd01*/
      return (*(char (__thiscall **)(unsigned __int8 *, unsigned __int8 *))(*(_DWORD *)v8 + 0x34))(v8, v2); /*0x4cdd01*/
    case '7': /*0x4cdcac*/
      v9 = OblivionDynamicCast( /*0x4cdd24*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESTerrainLODQuadRoot `RTTI Type Descriptor',
             0);
      if ( (*(this + 0x24) & 1) != 0 ) /*0x4cdd30*/
        return 1; /*0x4cdd30*/
      v10 = v9[1]; /*0x4cdd36*/
      if ( v10 ) /*0x4cdd3b*/
        v2 = *(unsigned __int8 **)(v10 + 0x10); /*0x4cdd3d*/
      else
        v2 = 0; /*0x4cdd42*/
      v8 = *((unsigned __int8 **)this + 0x14); /*0x4cdd44*/
      if ( v2 == v8 ) /*0x4cdd49*/
        return 0; /*0x4cdd49*/
      return (*(char (__thiscall **)(unsigned __int8 *, unsigned __int8 *))(*(_DWORD *)v8 + 0x34))(v8, v2); /*0x4cdd49*/
    case '8': /*0x4cdcac*/
      v11 = OblivionDynamicCast( /*0x4cdd65*/
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESRoad `RTTI Type Descriptor',
              0);
      if ( (*(this + 0x24) & 1) != 0 ) /*0x4cdd71*/
        return 1; /*0x4cdd71*/
      v2 = *((unsigned __int8 **)v11 + 0xB); /*0x4cdd77*/
      v8 = *((unsigned __int8 **)this + 0x14); /*0x4cdd7a*/
      if ( v2 == v8 ) /*0x4cdd7f*/
        return 0; /*0x4cdd4b*/
      else
        return (*(char (__thiscall **)(unsigned __int8 *, unsigned __int8 *))(*(_DWORD *)v8 + 0x34))(v8, v2); /*0x4cdd81*/
    default:
      JUMPOUT(0x4CDE80); /*0x4cde80*/
  }
}
