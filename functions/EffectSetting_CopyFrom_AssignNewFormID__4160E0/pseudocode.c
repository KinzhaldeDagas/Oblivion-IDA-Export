void __userpurge EffectSetting_CopyFrom_::AssignNewFormID(TESForm *a1@<esi>, int a2)
{
  int FormID; // eax

  FormID = TESDataHandler_ReserveNextFormID((int *)g_TESDataHandler); /*0x4160e8*/
  TESForm_SetFormID(a1, FormID, 1); /*0x4160f0*/
  EffectSetting_CopyFrom_::Done(a2); /*0x4160f1*/
}
