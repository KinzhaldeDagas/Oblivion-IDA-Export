bool __thiscall sub_700670(NiTriBasedGeomData *this, int a2)
{
  const char *v4; // edi

  if ( !a2 ) /*0x700679*/
    return 0; /*0x70067b*/
  v4 = *(const char **)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x700689*/
  return strcmp(this->__vftable->super.super.GetType(this)->name, v4) == 0; /*0x70067d*/
}
