char __userpurge sub_4F9F00@<al>(Script *a1@<ecx>, double a2@<st1>, double a3@<st0>, TESObjectREFR *a5, char **a6)
{
  ScriptRunner **Singleton; // eax

  Singleton = ScriptRunner_GetSingleton();
  return Script_RunEvent__(Singleton, a2, a3, a1, a5, a6, 0, 0, 1, 0, 0.0);
}
