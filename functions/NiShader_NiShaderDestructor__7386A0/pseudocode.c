unsigned int *__thiscall NiShader::NiShaderDestructor(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2);
  *this = (unsigned int)&NiShader::`vftable';
  FormHeapFree(v4);
  *this = (unsigned int)&NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
