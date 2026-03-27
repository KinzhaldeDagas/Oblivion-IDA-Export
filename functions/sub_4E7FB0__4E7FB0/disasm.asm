0x4E7FB0: push    ebx
0x4E7FB1: push    ebp
0x4E7FB2: mov     ebp, ecx
0x4E7FB4: push    esi
0x4E7FB5: lea     esi, [ebp+20h]
0x4E7FB8: xor     ebx, ebx
0x4E7FBA: test    esi, esi
0x4E7FBC: jz      short loc_4E8034
0x4E7FBE: push    edi
0x4E7FBF: nop
0x4E7FC0: cmp     dword ptr [esi+4], 0
0x4E7FC4: jnz     short loc_4E7FCB
0x4E7FC6: cmp     dword ptr [esi], 0
0x4E7FC9: jz      short loc_4E8033
0x4E7FCB: mov     edi, [esi]
0x4E7FCD: fld     dword ptr ds:0A379B4h
0x4E7FD3: mov     eax, [esp+10h+arg_0]
0x4E7FD7: push    ecx
0x4E7FD8: fstp    [esp+14h+var_14]; float
0x4E7FDB: push    eax; int
0x4E7FDC: lea     ecx, [edi+14h]
0x4E7FDF: push    ecx; int
0x4E7FE0: call    sub_47D810
0x4E7FE5: add     esp, 0Ch
0x4E7FE8: test    al, al
0x4E7FEA: jz      short loc_4E802A
0x4E7FEC: push    ebp
0x4E7FED: lea     ecx, [edi+20h]
0x4E7FF0: call    BSSimpleList_Remove
0x4E7FF5: test    ebx, ebx
0x4E7FF7: jz      short loc_4E8006
0x4E7FF9: push    edi
0x4E7FFA: mov     ecx, ebx
0x4E7FFC: call    BSSimpleList_Remove
0x4E8001: mov     esi, [ebx+4]
0x4E8004: jmp     short loc_4E802F
0x4E8006: mov     eax, [esi+4]
0x4E8009: test    eax, eax
0x4E800B: jz      short loc_4E8022
0x4E800D: mov     edx, [eax+4]
0x4E8010: mov     [esi+4], edx
0x4E8013: mov     ecx, [eax]
0x4E8015: push    eax
0x4E8016: mov     [esi], ecx
0x4E8018: call    FormHeapFree
0x4E801D: add     esp, 4
0x4E8020: jmp     short loc_4E802F
0x4E8022: mov     dword ptr [esi], 0
0x4E8028: jmp     short loc_4E802F
0x4E802A: mov     ebx, esi
0x4E802C: mov     esi, [esi+4]
0x4E802F: test    esi, esi
0x4E8031: jnz     short loc_4E7FC0
0x4E8033: pop     edi
0x4E8034: pop     esi
0x4E8035: pop     ebp
0x4E8036: pop     ebx
0x4E8037: retn    4
