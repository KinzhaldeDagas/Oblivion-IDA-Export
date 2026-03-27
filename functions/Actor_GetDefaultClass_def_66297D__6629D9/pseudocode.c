int __usercall Actor_GetDefaultClass_::def_66297D@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  void *v4; // eax
  void *v5; // edx

  switch ( a4 )
  {
    case 3:
      if ( a3 > 3 || a2 > 3 )
        goto Actor_GetDefaultClass___def_6629E1;
      v5 = (void *)iClassBard;
      goto LABEL_12;
    case 4:
      if ( a3 == 2 )
        v4 = TESDataHandler_LookupTESClassByFormID((void *)iClassMonk);
      else
        v4 = TESDataHandler_LookupTESClassByFormID((void *)iClassPilgrim);
      goto LABEL_13;
    case 5:
      if ( a3 == 1 )
      {
        v4 = TESDataHandler_LookupTESClassByFormID((void *)iClassAssassin);
      }
      else
      {
        v5 = (void *)iClassAcrobat;
LABEL_12:
        v4 = TESDataHandler_LookupTESClassByFormID(v5);
      }
LABEL_13:
      *(_DWORD *)(a1 + 0x650) = v4;
      return Actor_GetDefaultClass_::def_6629E1();
    case 6:
      v4 = TESDataHandler_LookupTESClassByFormID((void *)iClassAgent);
      goto LABEL_13;
    default:
Actor_GetDefaultClass___def_6629E1:
      JUMPOUT(0x662A3E);
  }
}
