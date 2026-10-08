0x65DEF0: push    esi
0x65DEF1: mov     esi, ecx
0x65DEF3: mov     ecx, [esi+5ACh]
0x65DEF9: test    ecx, ecx
0x65DEFB: jz      short loc_65DF30
0x65DEFD: mov     eax, [esp+4+arg_0]
0x65DF01: push    eax
0x65DF02: call    BSSimpleList_Remove
0x65DF07: mov     ecx, [esi+5ACh]
0x65DF0D: cmp     dword ptr [ecx], 0
0x65DF10: jnz     short loc_65DF30
0x65DF12: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x65DF17: mov     ecx, [esi+5ACh]
0x65DF1D: push    ecx
0x65DF1E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x65DF23: add     esp, 4
0x65DF26: mov     dword ptr [esi+5ACh], 0
0x65DF30: pop     esi
0x65DF31: retn    4
