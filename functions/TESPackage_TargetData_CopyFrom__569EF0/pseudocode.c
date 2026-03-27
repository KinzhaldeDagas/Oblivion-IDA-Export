void __thiscall TESPackage_TargetData_CopyFrom(unsigned __int8 *this, unsigned __int8 *a2)
{
  int v2; // eax
  int v3; // eax
  char v4; // dl
  int v5; // eax
  int v6; // eax

  if ( a2 )
  {
    v2 = *a2;
    if ( *this != v2 )
    {
      *this = v2;
      if ( !(_BYTE)v2 || (unsigned int)(unsigned __int8)v2 - 1 <= 1 )
        *((_DWORD *)this + 1) = 0;
    }
    if ( *a2 )
      v3 = 0;
    else
      v3 = *((_DWORD *)a2 + 1);
    v4 = *this;
    if ( !*this )
      *((_DWORD *)this + 1) = v3;
    if ( *a2 == 1 )
      v5 = *((_DWORD *)a2 + 1);
    else
      v5 = 0;
    if ( v4 == 1 )
      *((_DWORD *)this + 1) = v5;
    if ( *a2 == 2 )
      v6 = *((_DWORD *)a2 + 1);
    else
      v6 = 0;
    if ( v4 == 2 )
      *((_DWORD *)this + 1) = v6;
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  }
}
