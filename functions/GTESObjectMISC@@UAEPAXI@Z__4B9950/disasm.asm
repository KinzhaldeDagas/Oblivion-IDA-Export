0x4B9950: push    esi
0x4B9951: mov     esi, ecx
0x4B9953: call    ??1TESObjectMISC@@UAE@XZ; TESObjectMISC::~TESObjectMISC(void)
0x4B9958: test    byte ptr [esp+4+arg_0], 1
0x4B995D: jz      short loc_4B9968
0x4B995F: push    esi
0x4B9960: call    FormHeapFree
0x4B9965: add     esp, 4
0x4B9968: mov     eax, esi
0x4B996A: pop     esi
0x4B996B: retn    4
