double __userpurge sub_6440B0@<st0>(char ***this@<ecx>, double a2@<st1>, double result@<st0>, Actor *a4)
{
  TargetData *v5; // edi
  int v6; // eax
  void *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  Atmosphere *v10; // ecx
  int v11; // edi
  char v12; // al
  int v13; // eax
  int ProcessLevel; // eax
  int v15; // edx

  v5 = 0; /*0x6440b9*/
  if ( !*(this + 0xB) ) /*0x6440bb*/
    ((void (__thiscall *)(char ***, Actor *))(*this)[0x156])(this, a4); /*0x6440c9*/
  v6 = (int)*(this + 0xB); /*0x6440cb*/
  if ( v6 && (v5 = (TargetData *)(*(this + 2))[0xA], *((_BYTE *)*(this + 2) + 0x20) == 8) ) /*0x6440de*/
  {
    switch ( *(_BYTE *)((*(int (**)(void))(*(_DWORD *)v6 + 0x170))() + 4) ) /*0x6440ff*/
    {
      case 0x12: /*0x6440ff*/
      case 0x17: /*0x6440ff*/
      case 0x18: /*0x6440ff*/
      case 0x1C: /*0x6440ff*/
      case 0x1D: /*0x6440ff*/
      case 0x1E: /*0x6440ff*/
      case 0x1F: /*0x6440ff*/
      case 0x20: /*0x6440ff*/
      case 0x23: /*0x6440ff*/
      case 0x24: /*0x6440ff*/
      case 0x25: /*0x6440ff*/
      case 0x32: /*0x6440ff*/
      case 0x33: /*0x6440ff*/
        goto LABEL_8;
      case 0x1A: /*0x6440ff*/
        v7 = (void *)(*((int (__thiscall **)(_DWORD))**(this + 0xB) + 0x5C))(*(this + 0xB)); /*0x64411f*/
        v8 = OblivionDynamicCast( /*0x644122*/
               v7,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESObjectLIGH `RTTI Type Descriptor',
               0);
        if ( v8 && (v8[0x1F] & 2) == 0 ) /*0x644136*/
          goto LABEL_8; /*0x644136*/
        break; /*0x644136*/
      default:
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( v5 && sub_569E60(v5).form || (v9 = (int)*(this + 2), (*(_DWORD *)(v9 + 0x1C) & 4) != 0) ) /*0x644168*/
    {
      v10 = (Atmosphere *)(*(this + 2))[0xA]; /*0x644171*/
      v11 = 1; /*0x644176*/
      if ( v10 ) /*0x64417b*/
      {
        if ( Shared_GetPointerAtOffset08(v10) ) /*0x64417d*/
          v11 = (int)Shared_GetPointerAtOffset08((Atmosphere *)(*(this + 2))[0xA]); /*0x644191*/
      }
      if ( ((unsigned __int8 (__usercall *)@<al>(char ***@<ecx>, Actor *, int, double@<st0>))(*this)[0x155])( /*0x64419f*/
             this,
             a4,
             v11,
             result) )
      {
        result = sub_566DC0( /*0x6441b5*/
                   (TESPackage *)*(this + 2),
                   kTerrainLODQuadRayDirectionZ,
                   a2,
                   a4,
                   0,
                   kTerrainLODQuadRayDirectionZ);
        if ( v12 || *((_BYTE *)*(this + 2) + 0x20) != 3 ) /*0x6441c5*/
        {
          v13 = (int)*(this + 2); /*0x6441d7*/
          if ( *(_DWORD *)(v13 + 0x18) != 0x1A || *(_DWORD *)(v13 + 0x30) ) /*0x6441e0*/
            ((void (__thiscall *)(char ***, Actor *, int))(*this)[0x62])(this, a4, 1); /*0x6441f7*/
          else
            ((void (__thiscall *)(char ***, Actor *, int))(*this)[0x62])(this, a4, 2); /*0x6441e8*/
        }
        else
        {
          ((void (__thiscall *)(char ***, _DWORD))(*this)[0x5F])(this, 0); /*0x6441d3*/
        }
        if ( *((_BYTE *)*(this + 2) + 0x20) == 2 ) /*0x644200*/
          ((void (__thiscall *)(char ***, Actor *))(*this)[0x142])(this, a4); /*0x644211*/
      }
      else
      {
        ProcessLevel = Actor::GetProcessLevel(a4); /*0x64421b*/
        v15 = (int)*this; /*0x644223*/
        if ( ProcessLevel >= 2 ) /*0x644225*/
          return ((double (__thiscall *)(char ***, Actor *, int))*(_DWORD *)(v15 + 0x51C))(this, a4, 1); /*0x64424a*/
        else
          return ((double (__thiscall *)(_DWORD, _DWORD, _DWORD))*(_DWORD *)(v15 + 0x6C))(this, a4, flt_A71E4C); /*0x644237*/
      }
    }
    else if ( *(_DWORD *)(v9 + 0x18) == 0x1A ) /*0x644256*/
    {
      ((void (__thiscall *)(char ***, Actor *, int))(*this)[0x62])(this, a4, 2); /*0x644269*/
    }
    else
    {
LABEL_8:
      ((void (__thiscall *)(char ***, Actor *, int))(*this)[0x62])(this, a4, 1); /*0x644138*/
    }
  }
  return result; /*0x644147*/
}
