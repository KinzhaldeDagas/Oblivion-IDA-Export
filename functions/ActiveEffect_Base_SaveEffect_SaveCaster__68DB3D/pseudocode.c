int __usercall ActiveEffect_Base_SaveEffect_::SaveCaster@<eax>(
        int a1@<ebp>,
        int a2,
        int a3,
        int FormID,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  void *v11; // ecx

  v11 = *(void **)(a1 + 0x24);
  FormID = 0;
  if ( v11 )
    FormID = MagicCaster_GetFormID(v11);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&FormID, 4u);
  return ActiveEffect_Base_SaveEffect_::SaveTarget(a1, 0, a2, a3, FormID, a5, a6, a7, a8, a9, a10, a11);
}
