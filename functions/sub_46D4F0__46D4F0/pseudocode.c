char *__thiscall sub_46D4F0(void *this, char *Str)
{
  char *v2; // eax
  char *v3; // edx
  char v4; // cl
  char *result; // eax

  v2 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x14))(this);
  v3 = Str;
  do
  {
    v4 = *v2;
    *v3++ = *v2++;
  }
  while ( v4 );
  result = strrchr(Str, 0x2E);
  if ( result )
  {
    *(_DWORD *)result = a_far_nif;
    *((_DWORD *)result + 1) = dword_A3C160;
    result[8] = byte_A3C164;
  }
  return result;
}
