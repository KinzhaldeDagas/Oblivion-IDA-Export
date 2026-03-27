// positive sp value has been detected, the output may be wrong!
void __userpurge TESContainer_GetBestWeapon_::ContentLoop_Next(int *a1@<ebp>, int a2@<edi>, int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
    TESContainer_GetBestWeapon_::ContentLoop(a1, v3);
  else
    TESContainer_GetBestWeapon_::Return(a3);
}
