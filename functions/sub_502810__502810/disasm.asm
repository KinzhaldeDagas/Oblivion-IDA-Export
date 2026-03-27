0x502810: push    ecx
0x502811: mov     ecx, [esp+4+l]
0x502815: mov     edx, [esp+4+arg_10]
0x502819: push    esi
0x50281A: mov     esi, [esp+8+a4]
0x50281E: lea     eax, [esp+8+var_4]
0x502822: push    eax; UInt16
0x502823: mov     eax, [esp+0Ch+arg_C]
0x502827: push    ecx; l
0x502828: mov     ecx, [esp+10h+a3]
0x50282C: push    edx; a6
0x50282D: mov     edx, [esp+14h+arg_4]
0x502831: push    eax; a5
0x502832: mov     eax, [esp+18h+a1]
0x502836: push    esi; a4
0x502837: push    ecx; a3
0x502838: push    edx; a2
0x502839: push    eax; a1
0x50283A: mov     dword ptr [esp+28h+var_4], 0
0x502842: call    Script_ExtractArgs
0x502847: add     esp, 20h
0x50284A: test    al, al
0x50284C: jnz     short loc_502851
0x50284E: pop     esi
0x50284F: pop     ecx
0x502850: retn
0x502851: mov     ecx, [esp+8+arg_18]
0x502855: mov     edx, dword ptr [esp+8+var_4]
0x502859: push    ecx
0x50285A: push    0
0x50285C: push    edx
0x50285D: push    esi
0x50285E: call    AI_GetDetected
0x502863: add     esp, 10h
0x502866: pop     esi
0x502867: pop     ecx
0x502868: retn
