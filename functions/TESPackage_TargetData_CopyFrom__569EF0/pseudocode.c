void __thiscall TESPackage_TargetData_CopyFrom(unsigned __int8 *this, unsigned __int8 *a2)
{
  int v2; // eax
  int v3; // eax
  char v4; // dl
  int v5; // eax
  int v6; // eax

  if ( a2 ) /*0x569ef7*/
  {
    v2 = *a2; /*0x569ef9*/
    if ( *this != v2 ) /*0x569f01*/
    {
      *this = v2; /*0x569f03*/
      if ( !(_BYTE)v2 || (unsigned int)(unsigned __int8)v2 - 1 <= 1 ) /*0x569f10*/
        *((_DWORD *)this + 1) = 0; /*0x569f17*/
    }
    if ( *a2 ) /*0x569f1e*/
      v3 = 0; /*0x569f28*/
    else
      v3 = *((_DWORD *)a2 + 1); /*0x569f23*/
    v4 = *this; /*0x569f2a*/
    if ( !*this ) /*0x569f2a*/
      *((_DWORD *)this + 1) = v3; /*0x569f30*/
    if ( *a2 == 1 ) /*0x569f36*/
      v5 = *((_DWORD *)a2 + 1); /*0x569f38*/
    else
      v5 = 0; /*0x569f3d*/
    if ( v4 == 1 ) /*0x569f42*/
      *((_DWORD *)this + 1) = v5; /*0x569f44*/
    if ( *a2 == 2 ) /*0x569f4a*/
      v6 = *((_DWORD *)a2 + 1); /*0x569f4c*/
    else
      v6 = 0; /*0x569f51*/
    if ( v4 == 2 ) /*0x569f56*/
      *((_DWORD *)this + 1) = v6; /*0x569f58*/
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2); /*0x569f5e*/
  }
}
