_DWORD *__userpurge sub_6440B0@<eax>(char ***this@<ecx>, double a2@<st1>, Actor *a3)
{
  TargetData *v4; // edi
  int v5; // eax
  void *v6; // eax
  _DWORD *result; // eax
  int v8; // eax
  Atmosphere *v9; // ecx
  int v10; // edi
  char v11; // al
  int v12; // eax
  int ProcessLevel; // eax
  int v14; // edx

  v4 = 0;
  if ( !*(this + 0xB) )
    ((void (__thiscall *)(char ***, Actor *))(*this)[0x156])(this, a3);
  v5 = (int)*(this + 0xB);
  if ( v5 && (v4 = (TargetData *)(*(this + 2))[0xA], *((_BYTE *)*(this + 2) + 0x20) == 8) )
  {
    switch ( *(_BYTE *)((*(int (**)(void))(*(_DWORD *)v5 + 0x170))() + 4) )
    {
      case 0x12:
      case 0x17:
      case 0x18:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x32:
      case 0x33:
        return (_DWORD *)((int (__thiscall *)(char ***, Actor *, int))(*this)[0x62])(this, a3, 1);
      case 0x1A:
        v6 = (void *)(*((int (__thiscall **)(_DWORD))**(this + 0xB) + 0x5C))(*(this + 0xB));
        result = OblivionDynamicCast(
                   v6,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectLIGH `RTTI Type Descriptor',
                   0);
        if ( result && (result[0x1F] & 2) == 0 )
          return (_DWORD *)((int (__thiscall *)(char ***, Actor *, int))(*this)[0x62])(this, a3, 1);
        break;
      default:
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( v4 && sub_569E60(v4).form || (v8 = (int)*(this + 2), (*(_DWORD *)(v8 + 0x1C) & 4) != 0) )
    {
      v9 = (Atmosphere *)(*(this + 2))[0xA];
      v10 = 1;
      if ( v9 )
      {
        if ( sub_452A60(v9) )
          v10 = (int)sub_452A60((Atmosphere *)(*(this + 2))[0xA]);
      }
      if ( ((unsigned __int8 (__thiscall *)(char ***, Actor *, int))(*this)[0x155])(this, a3, v10) )
      {
        sub_566DC0((TESPackage *)*(this + 2), flt_A30634, a2, a3, 0, flt_A30634);
        if ( v11 || *((_BYTE *)*(this + 2) + 0x20) != 3 )
        {
          v12 = (int)*(this + 2);
          if ( *(_DWORD *)(v12 + 0x18) != 0x1A || *(_DWORD *)(v12 + 0x30) )
            result = (_DWORD *)((int (__thiscall *)(char ***, Actor *, int))(*this)[0x62])(this, a3, 1);
          else
            result = (_DWORD *)((int (__thiscall *)(char ***, Actor *, int))(*this)[0x62])(this, a3, 2);
        }
        else
        {
          result = (_DWORD *)((int (__thiscall *)(char ***, _DWORD))(*this)[0x5F])(this, 0);
        }
        if ( *((_BYTE *)*(this + 2) + 0x20) == 2 )
          return (_DWORD *)((int (__thiscall *)(char ***, Actor *))(*this)[0x142])(this, a3);
      }
      else
      {
        ProcessLevel = Actor::GetProcessLevel(a3);
        v14 = (int)*this;
        if ( ProcessLevel >= 2 )
          return (_DWORD *)(*(int (__thiscall **)(char ***, Actor *, int))(v14 + 0x51C))(this, a3, 1);
        else
          return (_DWORD *)(*(int (__thiscall **)(char ***, Actor *, float))(v14 + 0x6C))(this, a3, flt_A71E4C);
      }
    }
    else if ( *(_DWORD *)(v8 + 0x18) == 0x1A )
    {
      return (_DWORD *)((int (__thiscall *)(char ***, Actor *, int))(*this)[0x62])(this, a3, 2);
    }
    else
    {
      return (_DWORD *)((int (__thiscall *)(_DWORD, _DWORD, _DWORD))(*this)[0x62])(this, a3, 1);
    }
  }
  return result;
}
