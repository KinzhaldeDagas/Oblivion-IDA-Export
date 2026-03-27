0x73EB90: push    ecx
0x73EB91: push    ebx
0x73EB92: mov     ebx, [esp+8+arg_0]
0x73EB96: push    esi
0x73EB97: push    edi
0x73EB98: push    ebx
0x73EB99: mov     esi, ecx
0x73EB9B: call    sub_6EBA80
0x73EBA0: push    ebx
0x73EBA1: lea     ecx, [esi+8]
0x73EBA4: call    sub_716EA0
0x73EBA9: push    ebx
0x73EBAA: lea     ecx, [esi+18h]
0x73EBAD: call    sub_716EA0
0x73EBB2: mov     eax, [ebx+21Ch]
0x73EBB8: push    1
0x73EBBA: lea     ecx, [esp+14h+var_4]
0x73EBBE: push    ecx
0x73EBBF: push    4
0x73EBC1: lea     edx, [esp+1Ch+arg_0]
0x73EBC5: push    edx
0x73EBC6: push    eax
0x73EBC7: mov     eax, [eax+4]
0x73EBCA: mov     [esp+24h+var_4], 4
0x73EBD2: call    eax
0x73EBD4: mov     ecx, [esp+24h+arg_0]
0x73EBD8: add     esp, 14h
0x73EBDB: push    ecx
0x73EBDC: mov     ecx, esi
0x73EBDE: call    sub_73E6A0
0x73EBE3: xor     edi, edi
0x73EBE5: cmp     [esp+10h+arg_0], edi
0x73EBE9: jbe     short loc_73EC20
0x73EBEB: jmp     short loc_73EBF0
0x73EBED: align 10h
0x73EBF0: mov     ecx, [esi+2Ch]
0x73EBF3: mov     eax, [ebx+21Ch]
0x73EBF9: push    1
0x73EBFB: lea     edx, [esp+14h+var_4]
0x73EBFF: push    edx
0x73EC00: push    4
0x73EC02: lea     edx, [ecx+edi*4]
0x73EC05: push    edx
0x73EC06: push    eax
0x73EC07: mov     eax, [eax+4]
0x73EC0A: mov     [esp+24h+var_4], 4
0x73EC12: call    eax
0x73EC14: add     edi, 1
0x73EC17: add     esp, 14h
0x73EC1A: cmp     edi, [esp+10h+arg_0]
0x73EC1E: jb      short loc_73EBF0
0x73EC20: pop     edi
0x73EC21: pop     esi
0x73EC22: pop     ebx
0x73EC23: pop     ecx
0x73EC24: retn    4
