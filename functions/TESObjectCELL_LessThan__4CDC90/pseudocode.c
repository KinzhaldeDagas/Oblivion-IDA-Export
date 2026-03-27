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
  unsigned int v20; // ebp
  unsigned int v21; // ebp

  v2 = a2;
  switch ( a2[4] )
  {
    case '0':
      v12 = OblivionDynamicCast(
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectCELL `RTTI Type Descriptor',
              0);
      v13 = v12;
      if ( !v12 )
        goto LABEL_34;
      v14 = *(this + 0x24) & 1;
      if ( v14 && (v12[9] & 1) == 0 )
        return 1;
      v15 = v12[9] & 1;
      if ( v14 != v15 )
        goto LABEL_34;
      if ( v14 )
        goto LABEL_27;
      v16 = *((_DWORD *)this + 0x14);
      v17 = 0;
      if ( !v15 )
        v17 = v13[0x14];
      if ( v16 != v17 )
        return (*(char (__thiscall **)(int, int))(*(_DWORD *)v16 + 0x34))(v16, v17);
      if ( ((*((_DWORD *)this + 2) & 0x400) != 0) != ((v13[2] & 0x400) != 0) )
        return (*((_DWORD *)this + 2) & 0x400) != 0;
LABEL_27:
      v18 = sub_4CA5F0((int)v13);
      if ( sub_4CA5F0((int)this) >= v18 )
      {
        v19 = sub_4CA5F0((int)v13);
        if ( sub_4CA5F0((int)this) != v19
          || (v20 = sub_4CA640((int)v13), sub_4CA640((int)this) >= v20)
          && ((v21 = sub_4CA640((int)v13), sub_4CA640((int)this) != v21) || *((_DWORD *)this + 3) >= v13[3]) )
        {
LABEL_34:
          JUMPOUT(0x4CDE8A);
        }
      }
      return 1;
    case '1':
    case '2':
    case '3':
    case '4':
    case '6':
      v4 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast(
                                           a2,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESChildCell `RTTI Type Descriptor',
                                           0);
      if ( (_BYTE *)(**v4)(v4) == this )
        return 1;
      v5 = *(_DWORD *)this;
      v6 = (**v4)(v4);
      return (*(char (__thiscall **)(_BYTE *, int))(v5 + 0x34))(this, v6);
    case '5':
      if ( (*(this + 0x24) & 1) != 0 )
        return 1;
      v8 = *((unsigned __int8 **)this + 0x14);
      return (*(char (__thiscall **)(unsigned __int8 *, unsigned __int8 *))(*(_DWORD *)v8 + 0x34))(v8, v2);
    case '7':
      v9 = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESTerrainLODQuadRoot `RTTI Type Descriptor',
             0);
      if ( (*(this + 0x24) & 1) != 0 )
        return 1;
      v10 = v9[1];
      if ( v10 )
        v2 = *(unsigned __int8 **)(v10 + 0x10);
      else
        v2 = 0;
      v8 = *((unsigned __int8 **)this + 0x14);
      if ( v2 == v8 )
        return 0;
      return (*(char (__thiscall **)(unsigned __int8 *, unsigned __int8 *))(*(_DWORD *)v8 + 0x34))(v8, v2);
    case '8':
      v11 = OblivionDynamicCast(
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESRoad `RTTI Type Descriptor',
              0);
      if ( (*(this + 0x24) & 1) != 0 )
        return 1;
      v2 = *((unsigned __int8 **)v11 + 0xB);
      v8 = *((unsigned __int8 **)this + 0x14);
      if ( v2 == v8 )
        return 0;
      else
        return (*(char (__thiscall **)(unsigned __int8 *, unsigned __int8 *))(*(_DWORD *)v8 + 0x34))(v8, v2);
    default:
      JUMPOUT(0x4CDE80);
  }
}
