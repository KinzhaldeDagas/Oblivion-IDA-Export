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

  if ( !a6 )
    return 0;
  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      v10 = a3;
      if ( !p_objectList->next && !p_objectList->refr )
        break;
      refr = p_objectList->refr;
      p_objectList = p_objectList->next;
      if ( v10 != dbl_A3A5B0 )
      {
        v12 = refr->vtbl->GetPos(refr);
        if ( sub_480520(v12, a2, a3) >= 0 )
          continue;
        v10 = a3;
      }
      if ( a5 != dbl_A3A5B0 && (a5 != v10 || !sub_8AA350(a2, a4)) )
      {
        v13 = refr->vtbl->GetPos(refr);
        if ( sub_480520(v13, a4, a5) >= 0 )
          continue;
      }
      if ( a6(refr, a7) )
      {
        sub_496F50(&stru_B35C80, this);
        return 0;
      }
    }
    while ( p_objectList );
  }
  sub_496F50(&stru_B35C80, this);
  return 1;
}
