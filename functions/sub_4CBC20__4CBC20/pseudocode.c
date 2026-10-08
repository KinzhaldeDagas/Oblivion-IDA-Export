char __thiscall sub_4CBC20(
        TESObjectCELL *this,
        float *a2,
        float a3,
        float *a4,
        float a5,
        unsigned __int8 (__cdecl *a6)(TESObjectREFR *, int),
        int a7)
{
  ObjectListEntry *p_objectList; // edi
  double v10; // st7
  TESObjectREFR *refr; // esi
  float *v12; // eax
  float *v13; // eax

  if ( !a6 ) /*0x4cbc28*/
    return 0; /*0x4cbc2d*/
  sub_496EA0((char *)&unk_B35C80, this); /*0x4cbc39*/
  p_objectList = &this->members.objectList; /*0x4cbc3e*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cbc43*/
  {
    do /*0x4cbc50*/
    {
      v10 = a3; /*0x4cbc50*/
      if ( !p_objectList->next && !p_objectList->refr ) /*0x4cbc5a*/
        break; /*0x4cbc5a*/
      refr = p_objectList->refr; /*0x4cbc66*/
      p_objectList = p_objectList->next; /*0x4cbc68*/
      if ( v10 != dbl_A3A5B0 ) /*0x4cbc6f*/
      {
        v12 = refr->vtbl->GetPos(refr); /*0x4cbc84*/
        if ( sub_480520(v12, a2, a3) >= 0 ) /*0x4cbc91*/
          continue; /*0x4cbc91*/
        v10 = a3; /*0x4cbc93*/
      }
      if ( a5 != dbl_A3A5B0 && (a5 != v10 || !sub_8AA350(a2, a4)) ) /*0x4cbcb6*/
      {
        v13 = refr->vtbl->GetPos(refr); /*0x4cbcd2*/
        if ( sub_480520(v13, a4, a5) >= 0 ) /*0x4cbcdf*/
          continue; /*0x4cbcdf*/
      }
      if ( a6(refr, a7) ) /*0x4cbced*/
      {
        sub_496F50(&unk_B35C80, this); /*0x4cbd07*/
        return 0; /*0x4cbd12*/
      }
    }
    while ( p_objectList ); /*0x4cbc50*/
  }
  sub_496F50(&unk_B35C80, this); /*0x4cbd17*/
  return 1; /*0x4cbc2c*/
}
