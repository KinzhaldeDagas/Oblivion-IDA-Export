0x589BB0: push    0FFFFFFFFh
0x589BB2: push    offset SEH_589DF0
0x589BB7: mov     eax, large fs:0
0x589BBD: push    eax
0x589BBE: push    ecx
0x589BBF: push    esi
0x589BC0: push    edi
0x589BC1: mov     eax, ds:0B30AACh
0x589BC6: xor     eax, esp
0x589BC8: push    eax
0x589BC9: lea     eax, [esp+1Ch+var_C]
0x589BCD: mov     large fs:0, eax
0x589BD3: mov     esi, ecx
0x589BD5: mov     eax, [esi+10h]
0x589BD8: xor     edi, edi
0x589BDA: cmp     [eax+4], edi
0x589BDD: jz      short loc_589C43
0x589BDF: nop
0x589BE0: mov     ecx, [esi+10h]
0x589BE3: mov     eax, [ecx+4]
0x589BE6: cmp     eax, edi
0x589BE8: jz      short loc_589C3B
0x589BEA: mov     ecx, [eax]
0x589BEC: cmp     ecx, edi
0x589BEE: jz      short loc_589BF6
0x589BF0: mov     ecx, [ecx]
0x589BF2: cmp     ecx, edi
0x589BF4: jnz     short loc_589BF0
0x589BF6: mov     ecx, [eax]
0x589BF8: cmp     ecx, edi
0x589BFA: jz      short loc_589C02
0x589BFC: mov     edx, [eax+4]
0x589BFF: mov     [ecx+4], edx
0x589C02: mov     ecx, [eax+4]
0x589C05: cmp     ecx, edi
0x589C07: jz      short loc_589C0D
0x589C09: mov     edx, [eax]
0x589C0B: mov     [ecx], edx
0x589C0D: mov     ecx, [eax+10h]
0x589C10: cmp     ecx, edi
0x589C12: jz      short loc_589C1A
0x589C14: mov     edx, [eax+14h]
0x589C17: mov     [ecx+14h], edx
0x589C1A: mov     ecx, [eax+14h]
0x589C1D: cmp     ecx, edi
0x589C1F: jz      short loc_589C27
0x589C21: mov     edx, [eax+10h]
0x589C24: mov     [ecx+10h], edx
0x589C27: push    eax
0x589C28: mov     [eax], edi
0x589C2A: mov     [eax+4], edi
0x589C2D: mov     [eax+10h], edi
0x589C30: mov     [eax+14h], edi
0x589C33: call    FormHeapFree
0x589C38: add     esp, 4
0x589C3B: mov     eax, [esi+10h]
0x589C3E: cmp     [eax+4], edi
0x589C41: jnz     short loc_589BE0
0x589C43: mov     ecx, [esi+10h]
0x589C46: cmp     ecx, edi
0x589C48: jz      short loc_589C58
0x589C4A: call    sub_5888E0
0x589C4F: push    ecx
0x589C50: call    FormHeapFree
0x589C55: add     esp, 4
0x589C58: mov     ecx, [esi+14h]
0x589C5B: mov     [esi+10h], edi
0x589C5E: cmp     [ecx+14h], edi
0x589C61: jz      short loc_589CC6
0x589C63: mov     edx, [esi+14h]
0x589C66: mov     eax, [edx+14h]
0x589C69: cmp     eax, edi
0x589C6B: jz      short loc_589CBE
0x589C6D: mov     ecx, [eax]
0x589C6F: cmp     ecx, edi
0x589C71: jz      short loc_589C79
0x589C73: mov     ecx, [ecx]
0x589C75: cmp     ecx, edi
0x589C77: jnz     short loc_589C73
0x589C79: mov     ecx, [eax]
0x589C7B: cmp     ecx, edi
0x589C7D: jz      short loc_589C85
0x589C7F: mov     edx, [eax+4]
0x589C82: mov     [ecx+4], edx
0x589C85: mov     ecx, [eax+4]
0x589C88: cmp     ecx, edi
0x589C8A: jz      short loc_589C90
0x589C8C: mov     edx, [eax]
0x589C8E: mov     [ecx], edx
0x589C90: mov     ecx, [eax+10h]
0x589C93: cmp     ecx, edi
0x589C95: jz      short loc_589C9D
0x589C97: mov     edx, [eax+14h]
0x589C9A: mov     [ecx+14h], edx
0x589C9D: mov     ecx, [eax+14h]
0x589CA0: cmp     ecx, edi
0x589CA2: jz      short loc_589CAA
0x589CA4: mov     edx, [eax+10h]
0x589CA7: mov     [ecx+10h], edx
0x589CAA: push    eax
0x589CAB: mov     [eax], edi
0x589CAD: mov     [eax+4], edi
0x589CB0: mov     [eax+10h], edi
0x589CB3: mov     [eax+14h], edi
0x589CB6: call    FormHeapFree
0x589CBB: add     esp, 4
0x589CBE: mov     eax, [esi+14h]
0x589CC1: cmp     [eax+14h], edi
0x589CC4: jnz     short loc_589C63
0x589CC6: mov     ecx, [esi+14h]
0x589CC9: cmp     ecx, edi
0x589CCB: jz      short loc_589CDB
0x589CCD: call    sub_5888E0
0x589CD2: push    ecx
0x589CD3: call    FormHeapFree
0x589CD8: add     esp, 4
0x589CDB: mov     [esi+14h], edi
0x589CDE: mov     eax, [esi+8]
0x589CE1: push    eax
0x589CE2: call    FormHeapFree
0x589CE7: fldz
0x589CE9: mov     [esi+8], edi
0x589CEC: mov     [esi+0Eh], di
0x589CF0: mov     [esi+0Ch], di
0x589CF4: fstp    dword ptr [esi+4]
0x589CF7: mov     [esi], edi
0x589CF9: mov     ecx, [esi+8]
0x589CFC: push    ecx
0x589CFD: call    FormHeapFree
0x589D02: add     esp, 8
0x589D05: mov     [esi+8], edi
0x589D08: mov     [esi+0Eh], di
0x589D0C: mov     [esi+0Ch], di
0x589D10: mov     ecx, [esp+1Ch+var_C]
0x589D14: mov     large fs:0, ecx
0x589D1B: pop     ecx
0x589D1C: pop     edi
0x589D1D: pop     esi
0x589D1E: add     esp, 10h
0x589D21: retn
