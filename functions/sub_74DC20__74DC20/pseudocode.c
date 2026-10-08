void __thiscall sub_74DC20(char *this, _DWORD *a2)
{
  unsigned int v3; // ebx
  MEF_RefPointerArray16 *v4; // ebp
  unsigned int i; // edi
  NiAVObject *v6; // esi
  NiAVObject *element; // [esp+10h] [ebp-4h] BYREF

  sub_752CB0(a2); /*0x74dc2c*/
  v3 = sub_7124D0(a2); /*0x74dc38*/
  v4 = (MEF_RefPointerArray16 *)(this + 0x18); /*0x74dc3a*/
  NiTObjectArray_Resize16((MEF_RefPointerArray16 *)(this + 0x18), v3); /*0x74dc40*/
  for ( i = 0; i < v3; ++i ) /*0x74dc49*/
  {
    v6 = (NiAVObject *)sub_7124A0(a2); /*0x74dc59*/
    element = v6; /*0x74dc5d*/
    if ( v6 ) /*0x74dc61*/
      InterlockedIncrement((volatile LONG *)&v6->members); /*0x74dc67*/
    NiTObjectArray_SetAt(v4, i, (void **)&element); /*0x74dc75*/
    if ( v6 ) /*0x74dc7c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x74dc82*/
        v6->vtbl->super.super.Destructor((NiRefObject *)v6, 1); /*0x74dc94*/
    }
  }
}
