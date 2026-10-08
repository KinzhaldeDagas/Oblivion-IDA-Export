0x65C8F0: mov     eax, [esp+entry]
0x65C8F4: test    eax, eax
0x65C8F6: jz      short AVCollection_Add___Done
0x65C8F8: mov     dl, [eax]
0x65C8FA: mov     byte ptr [esp+entry], dl
0x65C8FE: movsx   edx, dl
0x65C901: cmp     edx, 38h; switch 57 cases
0x65C904: ja      short AVCollection_Add___AVCollection_Add_ToList; jumptable 0065C90D default case, cases 1-3,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C906: movzx   edx, ds:byte_65C968[edx]
0x65C90D: jmp     ds:jpt_65C90D[edx*4]; switch jump
0x65C914: mov     ecx, [ecx+8]; jumptable 0065C90D case 9
0x65C917: fld     dword ptr [eax+4]
0x65C91A: push    eax
0x65C91B: fstp    dword ptr [ecx+4]
0x65C91E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x65C923: add     esp, 4
0x65C926: retn    4
0x65C929: mov     edx, [ecx+0Ch]; jumptable 0065C90D case 10
0x65C92C: fld     dword ptr [eax+4]
0x65C92F: push    eax
0x65C930: fstp    dword ptr [edx+4]
0x65C933: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x65C938: add     esp, 4
0x65C93B: retn    4
0x65C93E: push    eax; jumptable 0065C90D cases 0,4-8,11,13,26,33,36,40,41,46-49,56
0x65C93F: mov     eax, [esp+4+entry]
0x65C943: push    eax; actorValue
0x65C944: call    AVCollection_AddToArray
0x65C949: retn    4
0x65C94C: mov     [esp+entry], eax; jumptable 0065C90D default case, cases 1-3,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C950: jmp     BSSimpleList_PushFront
