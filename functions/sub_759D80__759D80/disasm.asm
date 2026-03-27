0x759D80: push    ebx
0x759D81: push    esi
0x759D82: push    edi
0x759D83: push    68h ; 'h'; Size
0x759D85: mov     ebx, ecx
0x759D87: call    FormHeapAlloc
0x759D8C: mov     esi, eax
0x759D8E: xor     edi, edi
0x759D90: add     esp, 4
0x759D93: cmp     esi, edi
0x759D95: jz      short loc_759DC7
0x759D97: mov     ecx, esi
0x759D99: call    sub_73EE80
0x759D9E: mov     eax, [esp+0Ch+arg_0]
0x759DA2: push    eax
0x759DA3: push    esi
0x759DA4: mov     ecx, ebx
0x759DA6: mov     dword ptr [esi], offset ??_7NiPSysData@@6B@; const NiPSysData::`vftable'
0x759DAC: mov     [esi+5Ch], edi
0x759DAF: mov     [esi+60h], edi
0x759DB2: mov     [esi+64h], di
0x759DB6: mov     [esi+66h], di
0x759DBA: call    sub_759940
0x759DBF: pop     edi
0x759DC0: mov     eax, esi
0x759DC2: pop     esi
0x759DC3: pop     ebx
0x759DC4: retn    4
0x759DC7: mov     eax, [esp+0Ch+arg_0]
0x759DCB: push    eax
0x759DCC: xor     esi, esi
0x759DCE: push    esi
0x759DCF: mov     ecx, ebx
0x759DD1: call    sub_759940
0x759DD6: pop     edi
0x759DD7: mov     eax, esi
0x759DD9: pop     esi
0x759DDA: pop     ebx
0x759DDB: retn    4
