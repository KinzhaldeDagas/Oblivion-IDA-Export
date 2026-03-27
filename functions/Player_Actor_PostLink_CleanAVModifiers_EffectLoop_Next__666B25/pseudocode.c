// positive sp value has been detected, the output may be wrong!
int __usercall Player_Actor_PostLink_CleanAVModifiers_::EffectLoop_Next@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3,
        int a4,
        char a5)
{
  void **v5; // edi
  int result; // eax
  _BYTE v7[288]; // [esp-120h] [ebp-120h] BYREF

  v5 = *(void ***)(a2 + 4);
  if ( v5 )
    return Player_Actor_PostLink_CleanAVModifiers_::EffectLoop_Test(v5, a3, a4, a5);
  qmemcpy((void *)(a1 + 0x204), v7, 0x120u);
  return result;
}
