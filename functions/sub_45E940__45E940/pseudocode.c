unsigned __int8 __thiscall sub_45E940(void *this, char *a2)
{
  unsigned __int8 result; // al
  size_t v4; // [esp-4h] [ebp-10h]
  size_t v5; // [esp-4h] [ebp-10h]
  unsigned __int8 Src; // [esp+Bh] [ebp-1h] BYREF

  Src = 0;
  if ( a2 )
    Src = strlen(a2);
  LODWORD(v4) = 1;
  SaveLoad_SaveData((int)this, &Src, v4);
  result = Src;
  if ( Src )
  {
    LODWORD(v5) = Src;
    return (unsigned __int8)SaveLoad_SaveData((int)this, a2, v5);
  }
  return result;
}
