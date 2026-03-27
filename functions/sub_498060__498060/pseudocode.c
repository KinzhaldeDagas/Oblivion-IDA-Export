char __cdecl sub_498060(int *a1)
{
  int v1; // ecx
  float v3[4]; // [esp+0h] [ebp-10h] BYREF

  dword_B350DC = *a1;
  v1 = dword_B350D8;
  dword_B350E0 = a1[1];
  dword_B350E4 = a1[2];
  if ( !v1 )
    return 0;
  v3[0] = *(float *)&dword_B350DC;
  v3[1] = *(float *)&dword_B350E0;
  v3[2] = *(float *)&dword_B350E4;
  v3[3] = 0.0;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v1 + 0x60))(v1, v3);
  return 1;
}
