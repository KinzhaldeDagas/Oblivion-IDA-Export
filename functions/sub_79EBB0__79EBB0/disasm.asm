0x79EBB0: push    ebp
0x79EBB1: mov     ebp, esp
0x79EBB3: push    0FFFFFFFFh
0x79EBB5: push    offset SEH_79EBB0
0x79EBBA: mov     eax, large fs:0
0x79EBC0: push    eax
0x79EBC1: sub     esp, 1Ch
0x79EBC4: push    ebx
0x79EBC5: push    esi
0x79EBC6: push    edi
0x79EBC7: mov     eax, ds:0B30AACh
0x79EBCC: xor     eax, ebp
0x79EBCE: push    eax
0x79EBCF: lea     eax, [ebp+var_C]
0x79EBD2: mov     large fs:0, eax
0x79EBD8: mov     [ebp+var_10], esp
0x79EBDB: mov     esi, ecx
0x79EBDD: mov     [ebp+var_14], esi
0x79EBE0: mov     eax, [ebp+arg_C]
0x79EBE3: push    eax
0x79EBE4: lea     ecx, [ebp+var_28]
0x79EBE7: call    sub_7A3580
0x79EBEC: mov     ecx, [esi+4]
0x79EBEF: xor     eax, eax
0x79EBF1: cmp     ecx, eax
0x79EBF3: mov     [ebp+var_4], eax
0x79EBF6: jnz     short loc_79EBFC
0x79EBF8: xor     ebx, ebx
0x79EBFA: jmp     short loc_79EC04
0x79EBFC: mov     ebx, [esi+0Ch]
0x79EBFF: sub     ebx, ecx
0x79EC01: sar     ebx, 4
0x79EC04: mov     edi, [ebp+arg_8]
0x79EC07: cmp     edi, eax
0x79EC09: jz      loc_79EE16
0x79EC0F: cmp     ecx, eax
0x79EC11: jz      short loc_79EC1B
0x79EC13: mov     eax, [esi+8]
0x79EC16: sub     eax, ecx
0x79EC18: sar     eax, 4
0x79EC1B: mov     edx, 0FFFFFFFh
0x79EC20: sub     edx, eax
0x79EC22: cmp     edx, edi
0x79EC24: jnb     short loc_79EC2B
0x79EC26: call    sub_790B90
0x79EC2B: test    ecx, ecx
0x79EC2D: jnz     short loc_79EC33
0x79EC2F: xor     eax, eax
0x79EC31: jmp     short loc_79EC3B
0x79EC33: mov     eax, [esi+8]
0x79EC36: sub     eax, ecx
0x79EC38: sar     eax, 4
0x79EC3B: add     eax, edi
0x79EC3D: cmp     ebx, eax
0x79EC3F: jnb     loc_79ED55
0x79EC45: mov     eax, ebx
0x79EC47: shr     eax, 1
0x79EC49: mov     edx, 0FFFFFFFh
0x79EC4E: sub     edx, eax
0x79EC50: cmp     edx, ebx
0x79EC52: jnb     short loc_79EC58
0x79EC54: xor     ebx, ebx
0x79EC56: jmp     short loc_79EC5A
0x79EC58: add     ebx, eax
0x79EC5A: test    ecx, ecx
0x79EC5C: jnz     short loc_79EC62
0x79EC5E: xor     eax, eax
0x79EC60: jmp     short loc_79EC6A
0x79EC62: mov     eax, [esi+8]
0x79EC65: sub     eax, ecx
0x79EC67: sar     eax, 4
0x79EC6A: add     eax, edi
0x79EC6C: cmp     ebx, eax
0x79EC6E: jnb     short loc_79EC83
0x79EC70: test    ecx, ecx
0x79EC72: jnz     short loc_79EC78
0x79EC74: xor     eax, eax
0x79EC76: jmp     short loc_79EC80
0x79EC78: mov     eax, [esi+8]
0x79EC7B: sub     eax, ecx
0x79EC7D: sar     eax, 4
0x79EC80: lea     ebx, [eax+edi]
0x79EC83: push    0
0x79EC85: push    ebx; char *
0x79EC86: call    sub_794550
0x79EC8B: mov     ecx, [esi+4]
0x79EC8E: mov     byte ptr [ebp+var_18], 0
0x79EC92: mov     edx, [ebp+var_18]
0x79EC95: push    edx
0x79EC96: mov     [ebp+arg_8], eax
0x79EC99: mov     edx, [ebp+arg_8]
0x79EC9C: push    edx
0x79EC9D: push    esi
0x79EC9E: push    eax
0x79EC9F: mov     [ebp+arg_C], eax
0x79ECA2: mov     eax, [ebp+arg_4]
0x79ECA5: push    eax
0x79ECA6: push    ecx
0x79ECA7: mov     byte ptr [ebp+var_4], 1
0x79ECAB: call    sub_795ED0
0x79ECB0: add     esp, 20h
0x79ECB3: lea     ecx, [ebp+var_28]
0x79ECB6: push    ecx
0x79ECB7: push    edi
0x79ECB8: push    eax
0x79ECB9: mov     ecx, esi
0x79ECBB: mov     [ebp+arg_8], eax
0x79ECBE: call    sub_79E3C0
0x79ECC3: mov     ecx, [esi+8]
0x79ECC6: mov     byte ptr [ebp+var_18], 0
0x79ECCA: mov     edx, [ebp+var_18]
0x79ECCD: push    edx
0x79ECCE: mov     [ebp+arg_8], eax
0x79ECD1: mov     edx, [ebp+arg_8]
0x79ECD4: push    edx
0x79ECD5: push    esi
0x79ECD6: push    eax
0x79ECD7: mov     eax, [ebp+arg_4]
0x79ECDA: push    ecx
0x79ECDB: push    eax
0x79ECDC: call    sub_795ED0
0x79ECE1: mov     ecx, [esi+4]
0x79ECE4: add     esp, 18h
0x79ECE7: test    ecx, ecx
0x79ECE9: jnz     short loc_79ECEF
0x79ECEB: xor     eax, eax
0x79ECED: jmp     short loc_79ECF7
0x79ECEF: mov     eax, [esi+8]
0x79ECF2: sub     eax, ecx
0x79ECF4: sar     eax, 4
0x79ECF7: add     edi, eax
0x79ECF9: test    ecx, ecx
0x79ECFB: jz      short loc_79ED18
0x79ECFD: mov     edx, [ebp+arg_8]
0x79ED00: mov     eax, [esi+8]
0x79ED03: push    edx
0x79ED04: push    esi
0x79ED05: push    eax
0x79ED06: push    ecx
0x79ED07: call    sub_794FC0
0x79ED0C: mov     ecx, [esi+4]
0x79ED0F: push    ecx
0x79ED10: call    FormHeapFree
0x79ED15: add     esp, 14h
0x79ED18: mov     eax, [ebp+arg_C]
0x79ED1B: shl     ebx, 4
0x79ED1E: add     ebx, eax
0x79ED20: shl     edi, 4
0x79ED23: add     edi, eax
0x79ED25: mov     [esi+0Ch], ebx
0x79ED28: mov     [esi+8], edi
0x79ED2B: mov     [esi+4], eax
0x79ED2E: jmp     loc_79EE16
0x79ED33: mov     edx, [ebp+arg_8]
0x79ED36: mov     esi, [ebp+arg_C]
0x79ED39: mov     ecx, [ebp+var_14]
0x79ED3C: push    edx
0x79ED3D: push    esi
0x79ED3E: call    sub_795820
0x79ED43: push    esi
0x79ED44: call    FormHeapFree
0x79ED49: add     esp, 4
0x79ED4C: push    0
0x79ED4E: push    0
0x79ED50: call    ThrowException??
0x79ED55: mov     eax, [esi+8]
0x79ED58: mov     ebx, [ebp+arg_4]
0x79ED5B: mov     ecx, eax
0x79ED5D: sub     ecx, ebx
0x79ED5F: sar     ecx, 4
0x79ED62: cmp     ecx, edi
0x79ED64: mov     [ebp+var_18], eax
0x79ED67: jnb     short loc_79EDDF
0x79ED69: mov     ecx, edi
0x79ED6B: shl     ecx, 4
0x79ED6E: mov     [ebp+arg_C], ecx
0x79ED71: add     ecx, ebx
0x79ED73: push    ecx
0x79ED74: push    eax
0x79ED75: push    ebx
0x79ED76: mov     ecx, esi
0x79ED78: call    sub_796980
0x79ED7D: mov     eax, [esi+8]
0x79ED80: mov     ecx, eax
0x79ED82: sub     ecx, ebx
0x79ED84: sar     ecx, 4
0x79ED87: lea     edx, [ebp+var_28]
0x79ED8A: push    edx
0x79ED8B: sub     edi, ecx
0x79ED8D: push    edi
0x79ED8E: push    eax
0x79ED8F: mov     ecx, esi
0x79ED91: mov     byte ptr [ebp+var_4], 3
0x79ED95: call    sub_79E3C0
0x79ED9A: mov     eax, [ebp+arg_C]
0x79ED9D: add     [esi+8], eax
0x79EDA0: mov     esi, [esi+8]
0x79EDA3: lea     edx, [ebp+var_28]
0x79EDA6: push    edx
0x79EDA7: sub     esi, eax
0x79EDA9: push    esi
0x79EDAA: push    ebx
0x79EDAB: mov     [ebp+var_4], 0
0x79EDB2: call    sub_79BE50
0x79EDB7: add     esp, 0Ch
0x79EDBA: jmp     short loc_79EE16
0x79EDBC: mov     ecx, [ebp+var_14]
0x79EDBF: mov     eax, [ebp+arg_8]
0x79EDC2: mov     edx, [ecx+8]
0x79EDC5: shl     eax, 4
0x79EDC8: add     edx, eax
0x79EDCA: push    edx
0x79EDCB: mov     edx, [ebp+arg_4]
0x79EDCE: add     eax, edx
0x79EDD0: push    eax
0x79EDD1: call    sub_795820
0x79EDD6: push    0
0x79EDD8: push    0
0x79EDDA: call    ThrowException??
0x79EDDF: shl     edi, 4
0x79EDE2: mov     ecx, edi
0x79EDE4: push    eax
0x79EDE5: mov     edi, eax
0x79EDE7: sub     edi, ecx
0x79EDE9: push    eax
0x79EDEA: mov     [ebp+arg_C], ecx
0x79EDED: push    edi
0x79EDEE: mov     ecx, esi
0x79EDF0: call    sub_796980
0x79EDF5: mov     [esi+8], eax
0x79EDF8: mov     eax, [ebp+var_18]
0x79EDFB: push    eax
0x79EDFC: push    edi
0x79EDFD: push    ebx
0x79EDFE: call    sub_79E750
0x79EE03: mov     edx, [ebp+arg_C]
0x79EE06: lea     ecx, [ebp+var_28]
0x79EE09: push    ecx
0x79EE0A: add     edx, ebx
0x79EE0C: push    edx
0x79EE0D: push    ebx
0x79EE0E: call    sub_79BE50
0x79EE13: add     esp, 18h
0x79EE16: mov     eax, [ebp+var_24]
0x79EE19: test    eax, eax
0x79EE1B: jz      short loc_79EE26
0x79EE1D: push    eax
0x79EE1E: call    FormHeapFree
0x79EE23: add     esp, 4
0x79EE26: mov     ecx, [ebp+var_C]
0x79EE29: mov     large fs:0, ecx
0x79EE30: pop     ecx
0x79EE31: pop     edi
0x79EE32: pop     esi
0x79EE33: pop     ebx
0x79EE34: mov     esp, ebp
0x79EE36: pop     ebp
0x79EE37: retn    10h
