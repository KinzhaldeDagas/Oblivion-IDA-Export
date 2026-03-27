char __cdecl sub_4F5E60(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( TESDataHandler_g_PlayerRef->isMovingToNewSpace )
    *a4 = 1.0;
  return 1;
}
