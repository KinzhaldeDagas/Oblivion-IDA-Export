int __usercall Setting_SetStringValue_::GetValueLen@<eax>(
        char *a1@<edi>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  return Setting_SetStringValue_::AllocNewSpace(strlen(a1) + a2 + 1, a3, a4);
}
