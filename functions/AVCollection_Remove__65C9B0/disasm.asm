0x65C9B0: push    esi
0x65C9B1: mov     esi, [esp+4+arg_0]
0x65C9B5: test    esi, esi
0x65C9B7: jz      short loc_65CA02
0x65C9B9: mov     al, [esi]
0x65C9BB: movsx   edx, al
0x65C9BE: cmp     edx, 38h; switch 57 cases
0x65C9C1: ja      short AVCollection_Remove___AVCollection_Remove_FromList; jumptable 0065C9CA default case, cases 1-3,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C9C3: movzx   edx, ds:byte_65CA18[edx]
0x65C9CA: jmp     ds:jpt_65C9CA[edx*4]; switch jump
0x65C9D1: fldz; jumptable 0065C9CA case 9
0x65C9D3: mov     eax, [ecx+8]
0x65C9D6: fstp    dword ptr [eax+4]
0x65C9D9: pop     esi
0x65C9DA: retn    4
0x65C9DD: fldz; jumptable 0065C9CA case 10
0x65C9DF: mov     ecx, [ecx+0Ch]
0x65C9E2: fstp    dword ptr [ecx+4]
0x65C9E5: pop     esi
0x65C9E6: retn    4
0x65C9E9: pop     esi; jumptable 0065C9CA cases 0,4-8,11,13,26,33,36,40,41,46-49,56
0x65C9EA: mov     [esp+arg_0], eax
0x65C9EE: jmp     AVCollection_RemoveArrayNode
0x65C9F3: push    esi; jumptable 0065C9CA default case, cases 1-3,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C9F4: call    BSSimpleList_Remove
0x65C9F9: push    esi
0x65C9FA: call    FormHeapFree
0x65C9FF: add     esp, 4
0x65CA02: pop     esi
0x65CA03: retn    4
