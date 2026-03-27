0x529760: push    esi
0x529761: lea     esi, [ecx+40h]
0x529764: test    esi, esi
0x529766: jz      short loc_5297B6
0x529768: push    edi
0x529769: lea     esp, [esp+0]
0x529770: mov     ecx, esi
0x529772: call    BSSimpleList_IsEmpty
0x529777: test    al, al
0x529779: jnz     short loc_5297B5
0x52977B: mov     edi, [esi]
0x52977D: test    edi, edi
0x52977F: jz      short loc_529791
0x529781: mov     ecx, edi
0x529783: call    sub_52B300
0x529788: push    edi
0x529789: call    FormHeapFree
0x52978E: add     esp, 4
0x529791: mov     eax, [esi+4]
0x529794: test    eax, eax
0x529796: jz      short loc_5297AD
0x529798: mov     ecx, [eax+4]
0x52979B: mov     [esi+4], ecx
0x52979E: mov     edx, [eax]
0x5297A0: push    eax
0x5297A1: mov     [esi], edx
0x5297A3: call    FormHeapFree
0x5297A8: add     esp, 4
0x5297AB: jmp     short loc_529770
0x5297AD: mov     dword ptr [esi], 0
0x5297B3: jmp     short loc_529770
0x5297B5: pop     edi
0x5297B6: pop     esi
0x5297B7: retn
