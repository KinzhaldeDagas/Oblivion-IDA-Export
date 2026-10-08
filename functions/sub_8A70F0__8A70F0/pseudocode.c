_DWORD *__cdecl sub_8A70F0(int a1)
{
  _DWORD *result; // eax
  int v2; // edx
  int v3; // ecx

  if ( a1 ) /*0x8a70f7*/
    ++*(_DWORD *)(a1 + 0xC); /*0x8a70f9*/
  result = (_DWORD *)unk_BA7D98; /*0x8a70fc*/
  if ( unk_BA7D98 ) /*0x8a70fc*/
  {
    v2 = result[3]; /*0x8a7105*/
    v3 = unk_BA7D98; /*0x8a7108*/
    result += 3; /*0x8a710a*/
    *result = --v2; /*0x8a7110*/
    if ( !v2 ) /*0x8a7112*/
      result = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x34))(v3, 1); /*0x8a7118*/
  }
  unk_BA7D98 = a1; /*0x8a711b*/
  return result; /*0x8a7121*/
}
