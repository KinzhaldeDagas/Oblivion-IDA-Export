0x65C8F0: mov     eax, [esp+arg_0]
0x65C8F4: test    eax, eax
0x65C8F6: jz      short AVCollection_Add___Done
0x65C8F8: mov     dl, [eax]
0x65C8FA: mov     byte ptr [esp+arg_0], dl
0x65C8FE: movsx   edx, dl
0x65C901: cmp     edx, 38h; switch 57 cases
0x65C904: ja      short AVCollection_Add___AVCollection_Add_ToList; jumptable 0065C90D default case, cases 1-3,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C906: movzx   edx, ds:byte_65C968[edx]
0x65C90D: jmp     ds:jpt_65C90D[edx*4]; switch jump
0x65C914: mov     ecx, [ecx+8]; jumptable 0065C90D case 9
0x65C917: fld     dword ptr [eax+4]
0x65C91A: push    eax
0x65C91B: fstp    dword ptr [ecx+4]
0x65C91E: call    FormHeapFree
0x65C923: add     esp, 4
