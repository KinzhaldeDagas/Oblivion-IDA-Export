// positive sp value has been detected, the output may be wrong!
void __usercall _free_locale_::_LN12_4(_DWORD *a1@<esi>)
{
  void *v1; // [esp-4h] [ebp-8h]

  *a1 = 0xBAADF00D;
  a1[1] = 0xBAADF00D;
  free(v1);
}
