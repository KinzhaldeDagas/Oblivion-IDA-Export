// Thin wrapper over ModelLoader_BuildFileListWildcard with archive lookup enabled. Power-attack/KF discovery uses this to enumerate candidate model paths.
char **__stdcall sub_434850(char *Str, char *a2, char **a3)
{
  return ModelLoader_BuildFileListWildcard(Str, a2, 1, a3); /*0x434869*/
}
