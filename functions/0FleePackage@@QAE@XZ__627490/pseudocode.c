// 3DTheft: dynamic FleePackage constructor. With (sourceRef,0,0), builds a flee package targeted against sourceRef, marks dynamic, sets procedureArrayIndex=0x13, and initializes extended fields through offset 0x65.
FleePackage *__thiscall FleePackage::FleePackage(FleePackage *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax
  TESPackage *v6; // edi
  int v7; // ebp
  _DWORD *v8; // eax
  unsigned __int8 *v9; // edi
  unsigned __int8 *v10; // ecx
  _DWORD *v11; // eax
  double v12; // st7
  float z; // eax

  TESPackage::TESPackage((TESPackage *)this); /*0x6274bd*/
  *(_DWORD *)this = &FleePackage::`vftable'; /*0x6274c4*/
  *((_DWORD *)this + 0x15) = 0; /*0x6274d2*/
  *((_DWORD *)this + 0x16) = 0; /*0x6274d5*/
  TESPackage_SetType_((TESPackage *)this, 0x10); /*0x6274d8*/
  *((_DWORD *)this + 7) |= 6u; /*0x6274dd*/
  if ( !a2 ) /*0x6274e5*/
    goto LABEL_23; /*0x6274e5*/
  v5 = (_DWORD *)FormHeapAlloc(0xCu); /*0x6274ed*/
  if ( v5 ) /*0x627500*/
    v6 = (TESPackage *)TESPackage_LocationData_constr(v5); /*0x627509*/
  else
    v6 = 0; /*0x62750d*/
  if ( a3 ) /*0x62751b*/
  {
    if ( !a4 ) /*0x62753d*/
    {
      TESPackage_LocationData_SetType(v6, 1); /*0x627555*/
      sub_569810(v6, a3); /*0x627561*/
      goto LABEL_11; /*0x627561*/
    }
  }
  else if ( !a4 ) /*0x62751f*/
  {
    TESPackage_LocationData_SetType(v6, 0); /*0x627524*/
    v7 = a2; /*0x627529*/
    TESPackage_LocationData_SetReference(v6, a2); /*0x627530*/
    *((_BYTE *)this + 0x3C) = 1; /*0x627535*/
    goto LABEL_12; /*0x627539*/
  }
  TESPackage_LocationData_SetType(v6, 0); /*0x627542*/
  TESPackage_LocationData_SetReference(v6, a4); /*0x62754a*/
LABEL_11:
  v7 = a2; /*0x627566*/
  *((_BYTE *)this + 0x3C) = 0; /*0x62756a*/
LABEL_12:
  TESPackage_SetLocation(this, (char *)v6); /*0x62756d*/
  if ( v6 ) /*0x627577*/
  {
    TESPackage_LocationData_destr(v6); /*0x62757b*/
    FormHeapFree((unsigned int)v6); /*0x627581*/
  }
  v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x62758b*/
  if ( v8 ) /*0x62759e*/
    v9 = (unsigned __int8 *)TESPackage_TargetData_constr(v8); /*0x6275a7*/
  else
    v9 = 0; /*0x6275ab*/
  TESPackage_SetTarget(this, v9); /*0x6275b4*/
  if ( v9 ) /*0x6275bb*/
  {
    Shared_NoOpVirtual_60D0A0(v9); /*0x6275bf*/
    FormHeapFree((unsigned int)v9); /*0x6275c5*/
  }
  v10 = *((unsigned __int8 **)this + 0xA); /*0x6275cd*/
  *((_DWORD *)this + 6) = 0x13; /*0x6275d1*/
  TESPackage_TargetData_SetType(v10, 0); /*0x6275d8*/
  TeSPackage_TargetData_SetTargetREFR(*((_DWORD **)this + 0xA), v7); /*0x6275e1*/
  v11 = (_DWORD *)((char *)this + 0x54); /*0x6275e6*/
  if ( this == (FleePackage *)0xFFFFFFAC ) /*0x6275eb*/
  {
LABEL_22:
    BSSimpleList_PushFront((_DWORD *)this + 0x15, v7); /*0x6275fb*/
  }
  else
  {
    while ( *v11 != v7 ) /*0x6275f2*/
    {
      v11 = (_DWORD *)v11[1]; /*0x6275f4*/
      if ( !v11 ) /*0x6275f9*/
        goto LABEL_22; /*0x6275f9*/
    }
  }
LABEL_23:
  sub_566830((unsigned int *)this, 1); /*0x627604*/
  v12 = kTerrainLODQuadRayDirectionZ; /*0x62760d*/
  *((_DWORD *)this + 0x10) = LODWORD(g_zeroNiPoint3.x); /*0x627619*/
  *((_DWORD *)this + 0x11) = LODWORD(g_zeroNiPoint3.y); /*0x627622*/
  z = g_zeroNiPoint3.z; /*0x627625*/
  *((float *)this + 0x13) = v12; /*0x62762a*/
  *((float *)this + 0x12) = z; /*0x62762d*/
  *((_BYTE *)this + 0x50) = 0; /*0x627630*/
  *((_DWORD *)this + 0x17) = 0; /*0x627633*/
  *((_DWORD *)this + 0x18) = 0; /*0x627636*/
  *((_BYTE *)this + 0x64) = 0; /*0x627639*/
  *((_BYTE *)this + 0x65) = 0; /*0x62763c*/
  return this; /*0x627641*/
}
