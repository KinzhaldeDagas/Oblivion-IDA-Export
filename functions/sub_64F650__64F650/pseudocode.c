ObjectType __thiscall sub_64F650(_DWORD *this)
{
  ObjectType result; // eax
  ObjectType v3; // esi
  TargetData *v4; // ecx
  int v5; // ecx

  result.objectCode = (*(int (__thiscall **)(_DWORD *))(*this + 0x184))(this); /*0x64f65c*/
  v3.form = result.form; /*0x64f65e*/
  if ( result.objectCode ) /*0x64f662*/
  {
    v4 = *(TargetData **)(result.objectCode + 0x28); /*0x64f664*/
    if ( v4 ) /*0x64f669*/
    {
      result.form = sub_569E60(v4).form; /*0x64f66b*/
      if ( result.objectCode ) /*0x64f672*/
      {
        result.form = sub_569E60(*(TargetData **)(v3.objectCode + 0x28)).form; /*0x64f677*/
        if ( (*(_DWORD *)(result.objectCode + 8) & 0x20) == 0 ) /*0x64f685*/
        {
          v5 = *(this + 0xB); /*0x64f687*/
          if ( v5 ) /*0x64f68c*/
          {
            if ( result.objectCode != v5 ) /*0x64f690*/
              *(this + 0xB) = result.objectCode; /*0x64f692*/
          }
        }
      }
    }
  }
  return result; /*0x64f695*/
}
