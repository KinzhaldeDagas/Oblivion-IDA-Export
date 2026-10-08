unsigned int __thiscall sub_712AE0(unsigned int *this)
{
  void (__cdecl *v2)(int, unsigned int *, int, int *, int); // eax
  int v3; // eax
  unsigned int v4; // eax
  unsigned int result; // eax
  unsigned int i; // ebx
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // [esp-14h] [ebp-2Ch]
  int v11; // [esp-14h] [ebp-2Ch]
  unsigned int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  v10 = *(this + 0x87); /*0x712afc*/
  v2 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v10 + 4); /*0x712afd*/
  v13 = 4; /*0x712b00*/
  v2(v10, &v12, 4, &v13, 1); /*0x712b08*/
  v3 = *(this + 0x8E); /*0x712b0a*/
  if ( *(this + 0x8F) == v3 ) /*0x712b1c*/
  {
    if ( v3 ) /*0x712b20*/
      v4 = 2 * v3; /*0x712b22*/
    else
      v4 = 1; /*0x712b26*/
    sub_6E8CA0(this + 0x8D, v4); /*0x712b2e*/
  }
  *(_DWORD *)(*(this + 0x8D) + 4 * *(this + 0x8F)) = v12; /*0x712b3c*/
  result = v12; /*0x712b3f*/
  ++*(this + 0x8F); /*0x712b43*/
  for ( i = 0; i < result; ++i ) /*0x712b4b*/
  {
    v11 = *(this + 0x87); /*0x712b67*/
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 4); /*0x712b68*/
    v13 = 4; /*0x712b6b*/
    v7(v11, &v14, 4, &v13, 1); /*0x712b73*/
    v8 = *(this + 0x8A); /*0x712b75*/
    if ( *(this + 0x8B) == v8 ) /*0x712b7e*/
    {
      if ( v8 ) /*0x712b82*/
        v9 = 2 * v8; /*0x712b84*/
      else
        v9 = 1; /*0x712b88*/
      sub_6E8CA0(this + 0x89, v9); /*0x712b90*/
    }
    *(_DWORD *)(*(this + 0x89) + 4 * *(this + 0x8B)) = v14; /*0x712b9e*/
    result = v12; /*0x712ba1*/
    ++*(this + 0x8B); /*0x712ba5*/
  }
  return result; /*0x712bb0*/
}
