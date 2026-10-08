unsigned int __thiscall sub_713030(unsigned __int16 *this)
{
  void (__cdecl *v2)(int, unsigned int *, int, int *, int); // eax
  unsigned int result; // eax
  unsigned int i; // edi
  void (__cdecl *v5)(int, int *, int, int *, int); // edx
  size_t *v6; // eax
  unsigned int v7; // edx
  int v8; // [esp-14h] [ebp-40h]
  int v9; // [esp-14h] [ebp-40h]
  size_t v10; // [esp-4h] [ebp-30h]
  unsigned int v11; // [esp+10h] [ebp-1Ch] BYREF
  int v12; // [esp+14h] [ebp-18h] BYREF
  int v13; // [esp+18h] [ebp-14h] BYREF
  int Size; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v15; // [esp+28h] [ebp-4h]

  v8 = *((_DWORD *)this + 0x87); /*0x71306c*/
  v2 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v8 + 4); /*0x71306d*/
  v12 = 4; /*0x713070*/
  v2(v8, &v11, 4, &v12, 1); /*0x713078*/
  NiTArray_SetSize(this + 0x64, ++v11); /*0x713091*/
  v12 = 0; /*0x71309f*/
  result = NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x64), 0, &v12); /*0x7130a7*/
  for ( i = 1; i < v11; ++i ) /*0x7130b5*/
  {
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(*((_DWORD *)this + 0x87) + 4); /*0x7130c8*/
    v9 = *((_DWORD *)this + 0x87); /*0x7130d2*/
    v13 = 4; /*0x7130d3*/
    v5(v9, &Size, 4, &v13, 1); /*0x7130db*/
    v6 = (size_t *)FormHeapAlloc(0x10u); /*0x7130df*/
    v13 = (int)v6; /*0x7130e7*/
    v15 = 0; /*0x7130ed*/
    if ( v6 ) /*0x7130f5*/
    {
      LODWORD(v10) = Size; /*0x7130fb*/
      result = (unsigned int)sub_7329D0(v6, v10); /*0x7130fe*/
    }
    else
    {
      result = 0; /*0x713105*/
    }
    v7 = *(this + 0x69); /*0x713107*/
    v15 = 0xFFFFFFFF; /*0x71310d*/
    if ( i < v7 ) /*0x713115*/
    {
      if ( result ) /*0x71312b*/
      {
        if ( !*(_DWORD *)(*((_DWORD *)this + 0x33) + 4 * i) ) /*0x713130*/
          ++*(this + 0x6A); /*0x713136*/
      }
      else if ( *(_DWORD *)(*((_DWORD *)this + 0x33) + 4 * i) ) /*0x713140*/
      {
        --*(this + 0x6A); /*0x713146*/
      }
    }
    else
    {
      *(this + 0x69) = i + 1; /*0x71311c*/
      if ( result ) /*0x713120*/
        ++*(this + 0x6A); /*0x713122*/
    }
    *(_DWORD *)(*((_DWORD *)this + 0x33) + 4 * i) = result; /*0x71314f*/
  }
  return result; /*0x71315f*/
}
