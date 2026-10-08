// positive sp value has been detected, the output may be wrong!
void __userpurge TESContainer_GetBestWeapon_::ContentLoop_Next(
        TESActorBase *a1@<ebp>,
        int a2@<edi>,
        int a3@<ebx>,
        int a4)
{
  int v4; // edi

  v4 = *(_DWORD *)(a2 + 4); /*0x469b1d*/
  if ( v4 ) /*0x469b22*/
    TESContainer_GetBestWeapon_::ContentLoop(a1, v4); /*0x469b22*/
  else
    TESContainer_GetBestWeapon_::Return(a3, a4); /*0x469b25*/
}
