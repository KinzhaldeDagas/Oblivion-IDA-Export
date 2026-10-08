errno_t __thiscall sub_436DA0(_DWORD *this, char *Str)
{
  errno_t result; // eax
  const char *v4; // eax
  char *v5; // eax
  Ni2DBuffer *v6; // eax

  result = *(this + 1); /*0x436da3*/
  if ( result ) /*0x436da8*/
  {
    v4 = *(const char **)(result + 8); /*0x436daa*/
    if ( v4 ) /*0x436daf*/
    {
      v5 = strchr(v4, 0x5F); /*0x436db4*/
      if ( v5 ) /*0x436dbe*/
        *v5 = 0; /*0x436dc0*/
    }
    v6 = (Ni2DBuffer *)TESAnimGroup_ParseKFModel(*(this + 1), Str); /*0x436dcd*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 2, v6); /*0x436dd9*/
    return sub_434930((unsigned int *)*(this + 1), Str); /*0x436de2*/
  }
  return result; /*0x436de8*/
}
