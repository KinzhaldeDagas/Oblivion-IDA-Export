0x597AF0: push    esi
0x597AF1: mov     esi, ecx
0x597AF3: call    ??1ContainerMenu@@UAE@XZ; ContainerMenu::~ContainerMenu(void)
0x597AF8: test    byte ptr [esp+4+arg_0], 1
0x597AFD: jz      short loc_597B08
0x597AFF: push    esi
0x597B00: call    FormHeapFree
0x597B05: add     esp, 4
0x597B08: mov     eax, esi
0x597B0A: pop     esi
0x597B0B: retn    4
