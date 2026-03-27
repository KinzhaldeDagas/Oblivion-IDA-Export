BOOL sub_52B6A0()
{
  BOOL result; // eax

  TESModel_SetModelPath(dword_B36380, (char *)sRaceMaleUpperBodyModel);
  TESModel_SetModelPath(dword_B36398, (char *)dword_B36318);
  TESModel_SetModelPath(dword_B363B0, (char *)dword_B36320);
  TESModel_SetModelPath(dword_B363C8, (char *)dword_B36328);
  TESModel_SetModelPath(dword_B363F8, (char *)dword_B36330);
  TESModel_SetModelPath(dword_B36410, (char *)dword_B36338);
  TESModel_SetModelPath(dword_B36428, (char *)dword_B36340);
  TESModel_SetModelPath(dword_B36440, (char *)dword_B36348);
  TESModel_SetModelPath((unsigned int *)&unk_B36470, (char *)dword_B36350);
  TESModel_SetModelPath((unsigned int *)&unk_B36488, (char *)dword_B36358);
  TESModel_SetModelPath((unsigned int *)&unk_B364A0, (char *)dword_B36360);
  TESModel_SetModelPath((unsigned int *)&unk_B364B8, (char *)dword_B36368);
  result = TESModel_SetModelPath((unsigned int *)&unk_B364D0, (char *)dword_B36370);
  byte_B3630C = 1;
  return result;
}
