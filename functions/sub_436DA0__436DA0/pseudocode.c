errno_t __thiscall sub_436DA0(_DWORD *this, char *Str)
{
  errno_t result; // eax
  const char *v4; // eax
  char *v5; // eax
  Ni2DBuffer *v6; // eax

  result = *(this + 1);
  if ( result )
  {
    v4 = *(const char **)(result + 8);
    if ( v4 )
    {
      v5 = strchr(v4, 0x5F);
      if ( v5 )
        *v5 = 0;
    }
    v6 = (Ni2DBuffer *)sub_51B490(*(this + 1), Str);
    NiSmartPointer_Set__((Ni2DBuffer **)this + 2, v6);
    return sub_434930((unsigned int *)*(this + 1), Str);
  }
  return result;
}
