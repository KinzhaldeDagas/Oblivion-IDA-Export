unsigned int __fastcall ModelLoader_IsModelLoaded__(_DWORD *a1, int a2, int a3)
{
  int v3; // ecx
  char v4; // al
  _DWORD *v6; // [esp+8h] [ebp-4h] BYREF

  v6 = a1; /*0x434820*/
  v3 = *a1; /*0x434821*/
  v6 = 0; /*0x43482b*/
  v4 = (*(int (__thiscall **)(int, int, _DWORD **))(*(_DWORD *)v3 + 4))(v3, a3, &v6); /*0x434839*/
  return v4 != 0 ? (unsigned int)v6 : 0;
}
