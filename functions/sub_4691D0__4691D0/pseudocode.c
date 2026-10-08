void __userpurge sub_4691D0(
        int this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        char *a5,
        int a6,
        int a7)
{
  int v7; // edi
  unsigned int v8; // eax
  void *v9; // eax
  int v10; // [esp-8h] [ebp-Ch]

  v7 = a6; /*0x4691d1*/
  if ( a6 == 1 ) /*0x4691d8*/
  {
    LOWORD(v8) = *(_WORD *)(this + 0x28); /*0x4691da*/
    if ( (_WORD)v8 == 0xFFFF ) /*0x4691e2*/
      v8 = strlen(*(const char **)(this + 0x24)); /*0x4691e8*/
    else
      v8 = (unsigned __int16)v8; /*0x4691fe*/
    if ( !v8 ) /*0x469203*/
      v7 = 0; /*0x469205*/
  }
  v10 = this + 0x18 * v7 + 8; /*0x469213*/
  v9 = OblivionDynamicCast( /*0x469223*/
         (void *)this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBipedModelForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
         0);
  TESBipedModelForm_GetBodyPartModel____(a5, st5_0, st6_0, st7_0, v9, v10, a7); /*0x469230*/
}
