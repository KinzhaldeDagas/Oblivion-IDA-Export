char __thiscall sub_65AB80(NiObjectNET **this)
{
  char v2; // al
  NiObjectNET *v3; // esi
  char v4; // bl

  v2 = ((int (__thiscall *)(NiObjectNET **))(*this)[0x13].vtbl)(this); /*0x65ab8c*/
  v3 = *(this + 0xF); /*0x65ab8e*/
  v4 = v2; /*0x65ab93*/
  if ( v3 ) /*0x65ab95*/
  {
    sub_88CD50(v3, 1, 0); /*0x65ab9c*/
    return v4 | 1; /*0x65aba4*/
  }
  return v4; /*0x65aba7*/
}
