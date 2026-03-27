ScriptRunner **__cdecl ScriptRunner_GetSingleton()
{
  if ( (*(_BYTE *)(&stru_B36208 + 1) & 1) == 0 )
  {
    *(&stru_B36208 + 1) = (ScriptRunner *)((unsigned int)*(&stru_B36208 + 1) | 1);
    stru_B36208 = 0;
    atexit(sub_A1C100);
  }
  return &stru_B36208;
}
