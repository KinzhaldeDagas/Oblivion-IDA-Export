ObjectType __thiscall sub_64F650(_DWORD *this)
{
  ObjectType result; // eax
  ObjectType v3; // esi
  TargetData *v4; // ecx
  int v5; // ecx

  result.objectCode = (*(int (__thiscall **)(_DWORD *))(*this + 0x184))(this);
  v3.form = result.form;
  if ( result.objectCode )
  {
    v4 = *(TargetData **)(result.objectCode + 0x28);
    if ( v4 )
    {
      result.form = sub_569E60(v4).form;
      if ( result.objectCode )
      {
        result.form = sub_569E60(*(TargetData **)(v3.objectCode + 0x28)).form;
        if ( (*(_DWORD *)(result.objectCode + 8) & 0x20) == 0 )
        {
          v5 = *(this + 0xB);
          if ( v5 )
          {
            if ( result.objectCode != v5 )
              *(this + 0xB) = result.objectCode;
          }
        }
      }
    }
  }
  return result;
}
