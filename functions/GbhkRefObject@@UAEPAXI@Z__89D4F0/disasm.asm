0x89D4F0: push    esi
0x89D4F1: mov     esi, ecx
0x89D4F3: call    ??1bhkRefObject@@UAE@XZ; bhkRefObject::~bhkRefObject(void)
0x89D4F8: test    byte ptr [esp+4+arg_0], 1
0x89D4FD: jz      short loc_89D508
0x89D4FF: push    esi
0x89D500: call    FormHeapFree
0x89D505: add     esp, 4
0x89D508: mov     eax, esi
0x89D50A: pop     esi
0x89D50B: retn    4
