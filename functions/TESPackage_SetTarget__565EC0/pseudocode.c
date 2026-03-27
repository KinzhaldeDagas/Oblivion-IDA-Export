void __thiscall TESPackage_SetTarget(_DWORD *this, unsigned __int8 *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( a2 )
  {
    if ( !*(this + 0xA) )
    {
      v3 = (_DWORD *)FormHeapAlloc(0xCu);
      if ( v3 )
        v4 = TESPackage_TargetData_constr(v3);
      else
        v4 = 0;
      *(this + 0xA) = v4;
    }
    TESPackage_TargetData_CopyFrom((unsigned __int8 *)*(this + 0xA), a2);
  }
  else
  {
    TESPackage_SetTarget_::ClearTargetData(0);
  }
}
