void __thiscall sub_46DD70(char **this, char *a2)
{
  char *v3; // eax

  if ( !TESModelList_ContainsModelPath(this, a2) ) /*0x46dd79*/
  {
    v3 = (char *)FormHeapAlloc(strlen(a2) + 1); /*0x46dd97*/
    strcpy(v3, a2); /*0x46dda1*/
    BSSimpleList_PushBack(this + 1, (int)v3); /*0x46ddb5*/
  }
}
