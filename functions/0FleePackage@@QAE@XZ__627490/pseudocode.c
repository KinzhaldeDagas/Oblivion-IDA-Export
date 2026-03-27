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
  float v13; // eax

  TESPackage::TESPackage((TESPackage *)this);
  *(_DWORD *)this = &FleePackage::`vftable';
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0;
  TESPackage_SetType_((TESPackage *)this, 0x10);
  *((_DWORD *)this + 7) |= 6u;
  if ( !a2 )
    goto LABEL_23;
  v5 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v5 )
    v6 = (TESPackage *)TESPackage_LocationData_constr(v5);
  else
    v6 = 0;
  if ( a3 )
  {
    if ( !a4 )
    {
      TESPackage_LocationData_SetType(v6, 1);
      sub_569810(v6, a3);
      goto LABEL_11;
    }
  }
  else if ( !a4 )
  {
    TESPackage_LocationData_SetType(v6, 0);
    v7 = a2;
    TESPackage_LocationData_SetReference(v6, a2);
    *((_BYTE *)this + 0x3C) = 1;
    goto LABEL_12;
  }
  TESPackage_LocationData_SetType(v6, 0);
  TESPackage_LocationData_SetReference(v6, a4);
LABEL_11:
  v7 = a2;
  *((_BYTE *)this + 0x3C) = 0;
LABEL_12:
  TESPackage_SetLocation(this, (char *)v6);
  if ( v6 )
  {
    TESPackage_LocationData_destr(v6);
    FormHeapFree((unsigned int)v6);
  }
  v8 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v8 )
    v9 = (unsigned __int8 *)TESPackage_TargetData_constr(v8);
  else
    v9 = 0;
  TESPackage_SetTarget(this, v9);
  if ( v9 )
  {
    TESTexture::ClearComponentReferences(v9);
    FormHeapFree((unsigned int)v9);
  }
  v10 = *((unsigned __int8 **)this + 0xA);
  *((_DWORD *)this + 6) = 0x13;
  TESPackage_TargetData_SetType(v10, 0);
  TeSPackage_TargetData_SetTargetREFR(*((_DWORD **)this + 0xA), v7);
  v11 = (_DWORD *)((char *)this + 0x54);
  if ( this == (FleePackage *)0xFFFFFFAC )
  {
LABEL_22:
    BSSimpleList_PushFront((_DWORD *)this + 0x15, v7);
  }
  else
  {
    while ( *v11 != v7 )
    {
      v11 = (_DWORD *)v11[1];
      if ( !v11 )
        goto LABEL_22;
    }
  }
LABEL_23:
  sub_566830((unsigned int *)this, 1);
  v12 = flt_A30634;
  *((float *)this + 0x10) = Vector3_InitValue_;
  *((float *)this + 0x11) = *(&Vector3_InitValue_ + 1);
  v13 = dword_B3F9B0;
  *((float *)this + 0x13) = v12;
  *((float *)this + 0x12) = v13;
  *((_BYTE *)this + 0x50) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_BYTE *)this + 0x64) = 0;
  *((_BYTE *)this + 0x65) = 0;
  return this;
}
