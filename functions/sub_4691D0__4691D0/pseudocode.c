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

  v7 = a6;
  if ( a6 == 1 )
  {
    LOWORD(v8) = *(_WORD *)(this + 0x28);
    if ( (_WORD)v8 == 0xFFFF )
      v8 = strlen(*(const char **)(this + 0x24));
    else
      v8 = (unsigned __int16)v8;
    if ( !v8 )
      v7 = 0;
  }
  v10 = this + 0x18 * v7 + 8;
  v9 = OblivionDynamicCast(
         (void *)this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBipedModelForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
         0);
  TESBipedModelForm_GetBodyPartModel____(a5, st5_0, st6_0, st7_0, v9, v10, a7);
}
