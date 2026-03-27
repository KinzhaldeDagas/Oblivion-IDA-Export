0x517AA0: push    0FFFFFFFFh
0x517AA2: push    offset SEH_517AA0
0x517AA7: mov     eax, large fs:0
0x517AAD: push    eax
0x517AAE: push    ecx
0x517AAF: push    ebx
0x517AB0: push    esi
0x517AB1: push    edi
0x517AB2: mov     eax, ds:0B30AACh
0x517AB7: xor     eax, esp
0x517AB9: push    eax
0x517ABA: lea     eax, [esp+20h+var_C]
0x517ABE: mov     large fs:0, eax
0x517AC4: mov     esi, ecx
0x517AC6: mov     [esp+20h+var_10], esi
0x517ACA: fldz
0x517ACC: xor     edx, edx
0x517ACE: lea     ecx, [esi+18h]; this
0x517AD1: fstp    qword ptr [esi+8]
0x517AD4: mov     [esi], edx
0x517AD6: mov     [esi+10h], dl
0x517AD9: mov     [ecx], edx
0x517ADB: mov     [ecx+4], dx
0x517ADF: mov     [ecx+6], dx
0x517AE3: mov     eax, [esp+20h+arg_0]
0x517AE7: mov     edi, [eax]
0x517AE9: mov     [esi], edi
0x517AEB: fld     qword ptr [eax+8]
0x517AEE: fstp    qword ptr [esi+8]
0x517AF1: mov     bl, [eax+10h]
0x517AF4: mov     [esi+10h], bl
0x517AF7: mov     eax, [eax+18h]
0x517AFA: push    edx; a3
0x517AFB: push    eax; a2
0x517AFC: mov     [esp+28h+var_4], edx
0x517B00: call    BSStringT_Set
0x517B05: mov     eax, esi
0x517B07: mov     ecx, [esp+20h+var_C]
0x517B0B: mov     large fs:0, ecx
0x517B12: pop     ecx
0x517B13: pop     edi
0x517B14: pop     esi
0x517B15: pop     ebx
0x517B16: add     esp, 10h
0x517B19: retn    4
