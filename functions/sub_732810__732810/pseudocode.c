int __thiscall sub_732810(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v5)(int, NiPropertyState **, int, int *, int); // edx
  NiPropertyState *v6; // eax
  int v7; // edi
  int (__cdecl *v8)(int, UInt32, int, int *, int); // eax
  int result; // eax
  int v10; // [esp-28h] [ebp-38h]
  int v11; // [esp-14h] [ebp-24h]
  UInt32 v12; // [esp-10h] [ebp-20h]
  int v13; // [esp-Ch] [ebp-1Ch]
  NiPropertyState *v14; // [esp+8h] [ebp-8h] BYREF
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x732815*/
  sub_7008A0(this, a2); /*0x73281c*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x732835*/
  v4 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v11 + 4); /*0x732836*/
  v15 = 1; /*0x732839*/
  v4(v11, &a2, 1, &v15, 1); /*0x732841*/
  LOBYTE(this->members.accumulator) = (_BYTE)a2 != 0; /*0x732852*/
  v5 = *(void (__cdecl **)(int, NiPropertyState **, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x73285b*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x732865*/
  v15 = 4; /*0x732866*/
  v5(v10, &v14, 4, &v15, 1); /*0x73286e*/
  if ( v14 != this->members.propertyState )
  {
    FormHeapFree(this->members.pad014[0]); /*0x732880*/
    v6 = v14; /*0x732885*/
    this->members.propertyState = v14; /*0x73288b*/
    this->members.pad014[0] = FormHeapAlloc((unsigned __int64)(unsigned int)v6 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (_DWORD)v6);
  }
  v7 = *(_DWORD *)(v2 + 0x21C); /*0x7328ae*/
  v8 = *(int (__cdecl **)(int, UInt32, int, int *, int))(v7 + 4); /*0x7328bb*/
  v13 = 4 * (int)this->members.propertyState; /*0x7328c2*/
  v12 = this->members.pad014[0]; /*0x7328c3*/
  v15 = 1; /*0x7328c5*/
  result = v8(v7, v12, v13, &v15, 1); /*0x7328cd*/
  if ( renderer ) /*0x7328cf*/
    return ((int (__thiscall *)(NiDX9Renderer *, NiRenderer *))renderer->__vftable->super.CreatePalette)(renderer, this); /*0x7328e5*/
  return result; /*0x7328e7*/
}
