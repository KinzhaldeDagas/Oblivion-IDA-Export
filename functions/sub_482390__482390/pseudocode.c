TESObjectREFRMembr *__userpurge sub_482390@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        int a5,
        int a6,
        int a7)
{
  TESObjectREFRMembr *result; // eax
  TESObjectCELL **v8; // esi

  result = (TESObjectREFRMembr *)(a7 + a6 * *(this + 3));
  v8 = (TESObjectCELL **)(*(this + 4) + 8 * (_DWORD)result);
  if ( *v8 )
  {
    sub_4D63A0(*v8, st5_0, st6_0, st7_0, a5);
    return sub_49A000(v8[1], *v8);
  }
  return result;
}
