char *__thiscall sub_46D4F0(void *this, char *Str)
{
  char *v2; // eax
  char *v3; // edx
  char v4; // cl
  char *result; // eax

  v2 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x14))(this); /*0x46d4f6*/
  v3 = Str; /*0x46d4fc*/
  do /*0x46d50c*/
  {
    v4 = *v2; /*0x46d500*/
    *v3++ = *v2++; /*0x46d502*/
  }
  while ( v4 ); /*0x46d50c*/
  result = strrchr(Str, 0x2E); /*0x46d511*/
  if ( result ) /*0x46d51c*/
  {
    *(_DWORD *)result = a_far_nif; /*0x46d524*/
    *((_DWORD *)result + 1) = dword_A3C160; /*0x46d52c*/
    result[8] = byte_A3C164; /*0x46d535*/
  }
  return result; /*0x46d51b*/
}
