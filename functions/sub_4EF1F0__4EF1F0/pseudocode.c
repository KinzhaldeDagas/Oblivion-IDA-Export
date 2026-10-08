TESObjectCELL *__thiscall sub_4EF1F0(TESWorldSpace *this)
{
  TESForm *v2; // eax
  TESForm *v3; // eax

  if ( !this->persistentCell ) /*0x4ef214*/
  {
    v2 = (TESForm *)FormHeapAlloc(0x58u); /*0x4ef21c*/
    if ( v2 ) /*0x4ef232*/
      v3 = TESObjectCELL_constr(v2); /*0x4ef236*/
    else
      v3 = 0; /*0x4ef23d*/
    this->persistentCell = (TESObjectCELL *)v3; /*0x4ef24b*/
    sub_4CCBA0((TESObjectCELL *)v3, 1); /*0x4ef24e*/
    sub_4CA710(this->persistentCell); /*0x4ef256*/
  }
  return this->persistentCell; /*0x4ef25e*/
}
