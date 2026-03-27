0x627660: push    esi
0x627661: mov     esi, ecx
0x627663: call    ??1FleePackage@@UAE@XZ; FleePackage::~FleePackage(void)
0x627668: test    byte ptr [esp+4+arg_0], 1
0x62766D: jz      short loc_627678
0x62766F: push    esi
0x627670: call    FormHeapFree
0x627675: add     esp, 4
0x627678: mov     eax, esi
0x62767A: pop     esi
0x62767B: retn    4
