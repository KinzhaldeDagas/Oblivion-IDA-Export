char __cdecl sub_498060(int *a1)
{
  int v1; // ecx
  float v3[4]; // [esp+0h] [ebp-10h] BYREF

  *(_DWORD *)&MEMORY[0xB33E90][0x124C] = *a1; /*0x498066*/
  v1 = *(_DWORD *)&MEMORY[0xB33E90][0x1248]; /*0x49806f*/
  *(_DWORD *)&MEMORY[0xB33E90][0x1250] = a1[1]; /*0x498075*/
  *(_DWORD *)&MEMORY[0xB33E90][0x1254] = a1[2]; /*0x498083*/
  if ( !v1 ) /*0x498088*/
    return 0; /*0x4980be*/
  v3[0] = *(float *)&MEMORY[0xB33E90][0x124C]; /*0x498093*/
  v3[1] = *(float *)&MEMORY[0xB33E90][0x1250]; /*0x49809d*/
  v3[2] = *(float *)&MEMORY[0xB33E90][0x1254]; /*0x4980a7*/
  v3[3] = 0.0; /*0x4980ad*/
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v1 + 0x60))(v1, v3); /*0x4980b6*/
  return 1; /*0x4980ba*/
}
