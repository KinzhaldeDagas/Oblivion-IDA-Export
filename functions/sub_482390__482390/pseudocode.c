TESObjectCELL *__userpurge sub_482390@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        int a5,
        int a6,
        int a7)
{
  TESObjectCELL *result; // eax
  int v8; // esi

  result = (TESObjectCELL *)(a7 + a6 * *(this + 3)); /*0x482398*/
  v8 = *(this + 4) + 8 * (_DWORD)result; /*0x4823a0*/
  if ( *(_DWORD *)v8 ) /*0x4823a3*/
  {
    sub_4D63A0(*(TESObjectCELL **)v8, st5_0, st6_0, st7_0, a5); /*0x4823ae*/
    return sub_49A000(*(_DWORD **)(v8 + 4), *(TESObjectCELL **)v8); /*0x4823b9*/
  }
  return result; /*0x4823be*/
}
