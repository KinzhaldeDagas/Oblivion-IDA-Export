// CustomAnimSupport decode: append KFFZ string if absent; heap-copies strlen+1 bytes.
void __thiscall TESAnimation_AddAnimation(char **this, char *a2)
{
  char *v3; // eax

  if ( !TESAnimation_HasAnimation(this, a2) ) /*0x468869*/
  {
    v3 = (char *)FormHeapAlloc(strlen(a2) + 1); /*0x468887*/
    strcpy(v3, a2); /*0x468891*/
    BSSimpleList_PushBack(this + 1, (int)v3); /*0x4688a5*/
  }
}
