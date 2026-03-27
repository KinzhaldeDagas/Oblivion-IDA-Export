int *__thiscall sub_7DB050(int *this, int a2)
{
  int v3; // eax
  int v4; // eax
  char *v5; // ecx
  _BYTE *v6; // edx
  char v7; // al
  int v9; // [esp-8h] [ebp-88h]
  char v10[100]; // [esp+Ch] [ebp-74h] BYREF
  int v11; // [esp+7Ch] [ebp-4h]

  *(this + 3) = 0x25;
  *(this + 2) = (int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,ShaderBufferEntry *>::`vftable';
  *(this + 5) = 0;
  v3 = FormHeapAlloc(0x94u);
  v9 = 4 * *(this + 3);
  *(this + 4) = v3;
  _memset(v3, 0, v9);
  *((_BYTE *)this + 0x18) = 1;
  *(this + 2) = (int)&NiTStringPointerMap<ShaderBufferEntry *>::`vftable';
  v11 = 0;
  *(this + 1) = 0;
  *this = 0;
  if ( a2 > 0 )
  {
    _sprintf(v10, "shaderpackage%03i.sdp", a2);
    v4 = FormHeapAlloc(strlen(v10) + 1);
    *this = v4;
    v5 = v10;
    v6 = (_BYTE *)v4;
    do
    {
      v7 = *v5;
      *v6++ = *v5++;
    }
    while ( v7 );
  }
  return this;
}
