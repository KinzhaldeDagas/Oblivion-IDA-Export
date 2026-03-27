int __usercall Actor_GetDefaultClass_::def_662919@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  void *v4; // eax
  void *v5; // edx

  switch ( a2 )
  {
    case 3:
      if ( a3 != 2 || a4 != 2 )
        goto Actor_GetDefaultClass___def_66297D;
      v5 = (void *)iClassNightblade;
      goto LABEL_12;
    case 4:
      if ( a4 == 2 )
        v4 = TESDataHandler_LookupTESClassByFormID((void *)iClassWitchhunter);
      else
        v4 = TESDataHandler_LookupTESClassByFormID((void *)iClassSpellsword);
      goto LABEL_13;
    case 5:
      if ( a4 == 2 )
      {
        v4 = TESDataHandler_LookupTESClassByFormID((void *)iClassHealer);
      }
      else
      {
        v5 = (void *)iClassBattlemage;
LABEL_12:
        v4 = TESDataHandler_LookupTESClassByFormID(v5);
      }
LABEL_13:
      *(_DWORD *)(a1 + 0x650) = v4;
      return Actor_GetDefaultClass_::def_66297D(a1, a2, a3, a4);
    case 6:
      v4 = TESDataHandler_LookupTESClassByFormID((void *)iClassSorcerer);
      goto LABEL_13;
    default:
Actor_GetDefaultClass___def_66297D:
      JUMPOUT(0x6629D9);
  }
}
