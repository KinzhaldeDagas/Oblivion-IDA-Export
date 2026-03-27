char __thiscall sub_484BC0(ExtraDataList ***this, char a2)
{
  ExtraDataList **v2; // eax
  ExtraDataList *v3; // esi

  v2 = *this;
  if ( *this )
  {
    v3 = *v2;
    if ( *v2 )
    {
      LOBYTE(v2) = sub_422C40(*v2);
      if ( (_BYTE)v2 != 0xFF )
        LOBYTE(v2) = (unsigned __int8)sub_422BA0(v3, a2);
    }
  }
  return (char)v2;
}
