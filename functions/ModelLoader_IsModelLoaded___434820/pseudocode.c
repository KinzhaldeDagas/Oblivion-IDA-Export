unsigned int __fastcall ModelLoader_IsModelLoaded__(_DWORD *a1, int a2, int a3)
{
  int v3; // ecx
  char v4; // al
  _DWORD *v6; // [esp+8h] [ebp-4h] BYREF

  v6 = a1;
  v3 = *a1;
  v6 = 0;
  v4 = (*(int (__thiscall **)(int, int, _DWORD **))(*(_DWORD *)v3 + 4))(v3, a3, &v6);
  return v4 != 0 ? (unsigned int)v6 : 0;
}
