int __userpurge EffectSetting_CopyFrom_::AssignNewFormID@<eax>(TESForm *a1@<esi>, int a2)
{
  int FormID; // eax

  FormID = TESDataHandler_ReserveNextFormID((_DWORD *)TESDataHandler);
  TESForm_SetFormID(a1, FormID, 1);
  return EffectSetting_CopyFrom_::Done(a2);
}
