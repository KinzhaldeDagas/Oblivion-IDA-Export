BOOL sub_52B6A0()
{
  BOOL result; // eax

  TESModel_SetModelPath(unk_B36380, (char *)MEMORY[0xB36310].value); /*0x52b6ab*/
  TESModel_SetModelPath(unk_B36398, (char *)stru_B36318.value); /*0x52b6bc*/
  TESModel_SetModelPath(unk_B363B0, (char *)stru_B36320.value); /*0x52b6cd*/
  TESModel_SetModelPath(unk_B363C8, (char *)stru_B36328.value); /*0x52b6dd*/
  TESModel_SetModelPath(unk_B363F8, (char *)stru_B36330.value); /*0x52b6ee*/
  TESModel_SetModelPath(unk_B36410, (char *)stru_B36338.value); /*0x52b6ff*/
  TESModel_SetModelPath(unk_B36428, (char *)stru_B36340.value); /*0x52b70f*/
  TESModel_SetModelPath(unk_B36440, (char *)stru_B36348.value); /*0x52b720*/
  TESModel_SetModelPath((unsigned int *)&unk_B36470, (char *)stru_B36350.value); /*0x52b731*/
  TESModel_SetModelPath((unsigned int *)&unk_B36488, (char *)stru_B36358.value); /*0x52b741*/
  TESModel_SetModelPath((unsigned int *)&unk_B364A0, (char *)stru_B36360.value); /*0x52b752*/
  TESModel_SetModelPath((unsigned int *)&unk_B364B8, (char *)stru_B36368.value); /*0x52b763*/
  result = TESModel_SetModelPath((unsigned int *)&unk_B364D0, (char *)stru_B36370.value); /*0x52b773*/
  unk_B3630C = 1; /*0x52b778*/
  return result; /*0x52b77f*/
}
