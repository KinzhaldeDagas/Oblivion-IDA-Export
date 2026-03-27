int sub_9F0F40()
{
  GameSetting_ConstrAndReg(
    (int *)&unk_B386B8,
    (int)"sAutoSaveDisabledDueToLackOfSpace",
    (int)"Save location full. Disabling Autosave.");
  return atexit(sub_A21490);
}
