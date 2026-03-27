char __thiscall sub_52A960(TESQuest *this, const char *a2)
{
  char **v3; // edi
  int v4; // eax
  char v6[12]; // [esp+0h] [ebp-10h] BYREF

  strlen(a2);
  _alloca_();
  strcpy(v6, a2);
  v3 = (char **)(this + 4);
  if ( v6 && *v3 )
    v4 = _strcmp(*v3, v6);
  else
    v4 = 2 * (v6 == 0) - 1;
  if ( !v4 )
    return 0;
  BSStringT_Set((BSStringT *)this + 0xC, v6, 0);
  return 1;
}
