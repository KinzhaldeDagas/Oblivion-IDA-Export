int __thiscall sub_929B90(void *this)
{
  __m128 *v2; // eax
  char v4[525]; // [esp+Fh] [ebp-211h] BYREF
  int v5; // [esp+21Ch] [ebp-4h]

  v5 = __security_cookie; /*0x929ba9*/
  v2 = (__m128 *)(*(int (__thiscall **)(void *, _DWORD, char *))(*(_DWORD *)this + 0x28))(this, 0, &v4[1]); /*0x929bb6*/
  if ( *sub_950B10(v4, v2 + 1, v2 + 2, v2 + 3, dword_B3060C) == 1 ) /*0x929bde*/
    return 0; /*0x929be0*/
  else
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x24))(this, 0); /*0x929bf9*/
}
