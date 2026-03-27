void __thiscall sub_46DD70(char **this, char *a2)
{
  char *v3; // eax

  if ( !sub_46DD20(this, a2) )
  {
    v3 = (char *)FormHeapAlloc(strlen(a2) + 1);
    strcpy(v3, a2);
    BSSimpleList_PushBack(this + 1, (int)v3);
  }
}
