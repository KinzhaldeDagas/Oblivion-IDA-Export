0x436FF0: push    ecx
0x436FF1: push    esi
0x436FF2: mov     esi, ecx
0x436FF4: cmp     dword ptr [esi+24h], 0
0x436FF8: jz      short loc_437041
0x436FFA: push    edi
0x436FFB: push    offset dword_B33A14; lpAddend
0x437000: call    ds:InterlockedIncrement
0x437006: mov     edx, [esi+14h]
0x437009: movzx   edi, ax
0x43700C: mov     eax, [esi+10h]
0x43700F: mov     cl, 10h
0x437011: call    __allshr
0x437016: mov     edx, [esi]
0x437018: mov     byte ptr [esp+0Ch+var_4], al
0x43701C: mov     eax, [esi+24h]
0x43701F: mov     eax, [eax+0Ch]
0x437022: mov     ecx, [esp+0Ch+var_4]
0x437026: push    edi
0x437027: and     eax, 7FFFFFFFh
0x43702C: push    ecx
0x43702D: push    eax
0x43702E: mov     eax, [edx+2Ch]
0x437031: mov     ecx, esi
0x437033: call    eax
0x437035: mov     ecx, esi
0x437037: push    eax
0x437038: call    sub_436560
0x43703D: pop     edi
0x43703E: pop     esi
0x43703F: pop     ecx
0x437040: retn
0x437041: pop     esi
0x437042: add     esp, 4
0x437045: jmp     sub_4365F0
