0x627660: push    esi
0x627661: mov     esi, ecx
0x627663: call    ??1FleePackage@@UAE@XZ; 3DTheft: FleePackage destructor frees list at +0x58/+0x16 and then runs TESPackage destructor; confirms allocation must cover fields through at least +0x65.
0x627668: test    byte ptr [esp+4+arg_0], 1
0x62766D: jz      short loc_627678
0x62766F: push    esi
0x627670: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x627675: add     esp, 4
0x627678: mov     eax, esi
0x62767A: pop     esi
0x62767B: retn    4
