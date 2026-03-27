int __userpurge sub_43FFF0@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        char a5,
        TESWorldSpace *a6)
{
  int v6; // ebp
  unsigned int i; // esi
  void **v9; // ecx

  v6 = 0;
  for ( i = 0; i < uExteriorCellBuffer; ++i )
  {
    v9 = (void **)(*(this + 0xF) + 4 * i);
    if ( *v9 )
    {
      if ( a5 && *v9 )
      {
        switch ( *((_BYTE *)*v9 + 0x26) )
        {
          case 5:
          case 6:
            continue;
          default:
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        if ( !sub_4CA030(*v9) && (!a6 || TESObjectCELL_GetWorldSpace(*(TESObjectCELL **)(*(this + 0xF) + 4 * i)) == a6) )
        {
          sub_447BA0(st5_0, st6_0, a4, *(TESObjectCELL **)(*(this + 0xF) + 4 * i));
          *(_DWORD *)(*(this + 0xF) + 4 * i) = 0;
          ++v6;
        }
      }
    }
  }
  return v6;
}
