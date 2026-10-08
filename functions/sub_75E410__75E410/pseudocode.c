errno_t __thiscall sub_75E410(const char **this, int a2, int *a3)
{
  const char *v4; // ebx
  unsigned int v5; // kr00_4
  char *v6; // eax

  NiSingleInterpController_CopyMembers((float *)this, a2, a3); /*0x75e41f*/
  v4 = *(this + 0x10); /*0x75e427*/
  FormHeapFree(*(_DWORD *)(a2 + 0x40)); /*0x75e42b*/
  v5 = strlen(v4); /*0x75e435*/
  v6 = (char *)FormHeapAlloc(v5 + 1); /*0x75e447*/
  *(_DWORD *)(a2 + 0x40) = v6; /*0x75e44f*/
  return strcpy_s(v6, v5 + 1, v4); /*0x75e45a*/
}
