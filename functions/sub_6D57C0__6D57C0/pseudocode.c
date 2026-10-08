bool __thiscall sub_6D57C0(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // esi
  int v5; // ecx

  result = 0; /*0x6d5808*/
  if ( NiTimeController_IsEqual(this, a2) ) /*0x6d57c9*/
  {
    if ( *((_WORD *)this + 0x26) == *(_WORD *)(a2 + 0x4C) ) /*0x6d57e1*/
    {
      v4 = *(_DWORD *)(a2 + 0x50); /*0x6d57e3*/
      v5 = *((_DWORD *)this + 0x14); /*0x6d57e6*/
      if ( (v5 == 0) == (v4 == 0) /*0x6d5801*/
        && (!v5 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x2C))(v5, v4)) )
      {
        return 1; /*0x6d57d0*/
      }
    }
  }
  return result; /*0x6d57d2*/
}
