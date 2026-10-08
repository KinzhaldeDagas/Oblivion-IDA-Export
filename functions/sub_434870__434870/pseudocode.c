// Model-loader map lookup by path/key. Returns the model record from the loader's internal map or 0; used to gate generated KF candidates before they are added to animation lists.
int __fastcall sub_434870(int a1, int a2, int a3)
{
  int v3; // ecx
  char v4; // al
  int v6; // [esp+8h] [ebp-4h] BYREF

  v6 = a1; /*0x434870*/
  v3 = *(_DWORD *)(a1 + 4); /*0x434871*/
  v6 = 0; /*0x43487c*/
  v4 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)v3 + 4))(v3, a3, &v6); /*0x43488a*/
  return v4 != 0 ? v6 : 0;
}
