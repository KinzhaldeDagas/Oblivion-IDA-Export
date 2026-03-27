_DWORD *__thiscall sub_5F87F0(TESObjectREFR *this)
{
  _DWORD *result; // eax
  int v3; // eax
  _DWORD *v4; // edi
  TESObjectCELL *ParentCell; // esi
  int *v6; // eax

  result = this->member.niNode;
  if ( result )
  {
    sub_8AB8A0((int)result, 1.0);
    if ( *((_DWORD *)this + 0x16) )
    {
      v3 = (*(int (__thiscall **)(_DWORD, TESObjectREFR *))(**((_DWORD **)this + 0x16) + 0xE8))(
             *((_DWORD *)this + 0x16),
             this);
      if ( v3 )
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v3 + 0x9C))(v3, 0, 0);
    }
    sub_5E13D0(this, 1);
    result = MobileObject_GetCharProxy((MobileObject *)this);
    v4 = result;
    if ( result )
    {
      result = TESObjectREFR_GetParentCell(this);
      if ( result )
      {
        ParentCell = TESObjectREFR_GetParentCell(this);
        if ( TESObjectCELL_IsInterior(ParentCell) )
        {
          v6 = (int *)sub_424180(&ParentCell->members.extraData);
          return (_DWORD *)sub_895060(v4, v6);
        }
        else
        {
          return (_DWORD *)sub_895060(v4, (int *)bhkWorldM);
        }
      }
    }
  }
  return result;
}
