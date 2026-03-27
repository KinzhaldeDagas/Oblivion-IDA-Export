_DWORD *__thiscall sub_4146B0(_DWORD *this, char *Src)
{
  rsize_t v3; // [esp-4h] [ebp-Ch]

  LODWORD(v3) = strlen(Src);
  return sub_414500(this, (int)(Src + 1), Src, v3);
}
