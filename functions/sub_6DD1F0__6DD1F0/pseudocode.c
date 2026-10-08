int __thiscall sub_6DD1F0(NiTriBasedGeomData *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  result = sub_715E40(this, a2); /*0x6dd1f9*/
  v4 = *((_DWORD *)this + 0x12); /*0x6dd1fe*/
  if ( v4 ) /*0x6dd203*/
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x38))(v4, a2); /*0x6dd20b*/
  v5 = *((_DWORD *)this + 0x13); /*0x6dd20d*/
  if ( v5 ) /*0x6dd212*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, a2); /*0x6dd21a*/
  return result; /*0x6dd21c*/
}
