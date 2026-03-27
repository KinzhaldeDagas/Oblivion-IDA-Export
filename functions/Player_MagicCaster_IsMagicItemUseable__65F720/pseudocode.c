char __stdcall Player_MagicCaster_IsMagicItemUseable(int a1, int a2, _DWORD *a3, int a4)
{
  char result; // al
  int v5; // edx
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = 0;
  result = Actor_MagicCaster_IsMagicItemUseable(a1, a2, &v6, a4);
  v5 = v6;
  if ( a3 )
    *a3 = v6;
  if ( result || v5 != 5 )
  {
    if ( g_GodMode )
      return 1;
  }
  return result;
}
