int __thiscall sub_732810(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // edx
  int v6; // eax
  int v7; // edi
  int (__cdecl *v8)(int, UInt32, int, int *, int); // eax
  int result; // eax
  int v10; // [esp-28h] [ebp-38h]
  int v11; // [esp-14h] [ebp-24h]
  UInt32 v12; // [esp-10h] [ebp-20h]
  int v13; // [esp-Ch] [ebp-1Ch]
  int v14; // [esp+8h] [ebp-8h] BYREF
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_7008A0(this, a2);
  v11 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v11 + 4);
  v15 = 1;
  v4(v11, &a2, 1, &v15, 1);
  LOBYTE(this->members.accumulator) = (_BYTE)a2 != 0;
  v5 = *(void (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v10 = *(_DWORD *)(v2 + 0x21C);
  v15 = 4;
  v5(v10, &v14, 4, &v15, 1);
  if ( (NiPropertyState *)v14 != this->members.propertyState )
  {
    FormHeapFree(this->members.pad014[0]);
    v6 = v14;
    this->members.propertyState = (NiPropertyState *)v14;
    this->members.pad014[0] = FormHeapAlloc((unsigned __int64)(unsigned int)v6 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v6);
  }
  v7 = *(_DWORD *)(v2 + 0x21C);
  v8 = *(int (__cdecl **)(int, UInt32, int, int *, int))(v7 + 4);
  v13 = 4 * (int)this->members.propertyState;
  v12 = this->members.pad014[0];
  v15 = 1;
  result = v8(v7, v12, v13, &v15, 1);
  if ( g_Renderer )
    return ((int (__thiscall *)(NiDX9Renderer *, NiRenderer *))g_Renderer->__vftable->super.CreatePalette)(
             g_Renderer,
             this);
  return result;
}
