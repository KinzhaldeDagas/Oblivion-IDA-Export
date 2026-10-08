// Wrapper for ScriptEffectFinish: calls ScriptRunner_RunEvent with start=0, finish=1, elapsedSeconds=0.0.
char __userpurge ScriptEffect_RunFinishEvent@<al>(
        Script *a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        TESObjectREFR *a5,
        char **a6)
{
  ScriptRunner **Singleton; // eax

  Singleton = ScriptRunner_GetSingleton(); /*0x4f9f49*/
  return ScriptRunner_RunEvent(Singleton, a2, a3, a1, a5, a6, 0, 0, 0, 1, 0.0); /*0x4f9f55*/
}
