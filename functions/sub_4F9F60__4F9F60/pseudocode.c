// Wrapper for ScriptEffectUpdate: calls ScriptRunner_RunEvent with start=0, finish=0, elapsedSeconds=delta.
char __userpurge ScriptEffect_RunUpdateEvent@<al>(
        Script *a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        TESObjectREFR *a5,
        char **a6,
        float a11)
{
  ScriptRunner **Singleton; // eax

  Singleton = ScriptRunner_GetSingleton(); /*0x4f9f7b*/
  return ScriptRunner_RunEvent(Singleton, a2, a3, a1, a5, a6, 0, 0, 0, 0, a11); /*0x4f9f87*/
}
