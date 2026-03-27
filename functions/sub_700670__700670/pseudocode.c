bool __thiscall sub_700670(NiTriBasedGeomData *this, int a2)
{
  const char *v4; // edi

  if ( !a2 )
    return 0;
  v4 = *(const char **)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  return strcmp(this->__vftable->super.super.GetType(this)->name, v4) == 0;
}
