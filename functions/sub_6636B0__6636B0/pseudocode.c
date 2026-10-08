void sub_6636B0()
{
  Actor **v0; // edi
  Actor **v1; // esi

  v0 = sub_6758E0((ActorProcessManager *)&qword_B3BB2C[0x75], (TESObjectREFR *)reference, 0xC, 0); /*0x6636cc*/
  v1 = v0; /*0x6636d0*/
  LOBYTE(reference->unk738) = 0; /*0x6636d2*/
  if ( v0 ) /*0x6636d9*/
  {
    while ( !*v1 || !(*v1)->vtbl->super.super.IsActor((TESObjectREFR *)*v1) || !*v1 || !Actor_IsGuardClass(*v1) ) /*0x663701*/
    {
      v1 = (Actor **)v1[1]; /*0x663703*/
      if ( !v1 ) /*0x663708*/
      {
        BSSimpleList_Clear(v0); /*0x66370c*/
        FormHeapFree((unsigned int)v0); /*0x663712*/
        return; /*0x66371c*/
      }
    }
    LOBYTE(reference->unk738) = 1; /*0x663723*/
    BSSimpleList_Clear(v0); /*0x66372c*/
    FormHeapFree((unsigned int)v0); /*0x663732*/
  }
}
