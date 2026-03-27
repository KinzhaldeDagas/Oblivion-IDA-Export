void *__stdcall sub_5A8090(void *a1, void *a2)
{
  void *result; // eax

  result = a1;
  if ( a1 == (void *)1 )
  {
    dword_B3B350 = (int)a2;
    return a2;
  }
  else if ( a1 == (void *)3 )
  {
    Player_HUDHealthBarTile_ = a2;
  }
  else if ( a1 == (void *)2 )
  {
    dword_B3B354 = (int)a2;
  }
  return result;
}
