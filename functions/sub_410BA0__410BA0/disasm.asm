0x410BA0: push    ebx
0x410BA1: xor     ebx, ebx
0x410BA3: cmp     [esp+4+arg_18], bl
0x410BA7: jnz     short loc_410C05
0x410BA9: call    sub_410340
0x410BAE: cmp     byte_B33431, bl
0x410BB4: jz      short loc_410BCD
0x410BB6: mov     eax, dword_B33440
0x410BBB: cmp     eax, ebx
0x410BBD: jz      short loc_410BCD
0x410BBF: mov     dword_B33440, ebx
0x410BC5: mov     byte_B33431, bl
0x410BCB: jmp     short loc_410C00
0x410BCD: push    28h ; '('; Size
0x410BCF: call    FormHeapAlloc
0x410BD4: add     esp, 4
0x410BD7: cmp     eax, ebx
0x410BD9: jz      short loc_410BFE
0x410BDB: fld1
0x410BDD: mov     [eax], ebx
0x410BDF: fstp    dword ptr [eax+14h]
0x410BE2: mov     [eax+4], ebx
0x410BE5: fldz
0x410BE7: mov     [eax+8], ebx
0x410BEA: fst     dword ptr [eax+18h]
0x410BED: mov     [eax+0Ch], ebx
0x410BF0: fstp    dword ptr [eax+1Ch]
0x410BF3: mov     [eax+10h], ebx
0x410BF6: mov     [eax+20h], ebx
0x410BF9: mov     [eax+24h], bl
0x410BFC: jmp     short loc_410C00
0x410BFE: xor     eax, eax
0x410C00: mov     ObjectPtr, eax
0x410C05: mov     eax, [esp+4+arg_14]
0x410C09: mov     ecx, [esp+4+arg_10]
0x410C0D: mov     edx, [esp+4+arg_C]
0x410C11: push    eax; float
0x410C12: mov     eax, [esp+8+arg_8]
0x410C16: push    ecx; int
0x410C17: mov     ecx, [esp+0Ch+arg_4]
0x410C1B: push    edx; int
0x410C1C: mov     edx, dword ptr [esp+10h+ArgList]
0x410C20: push    eax; int
0x410C21: push    ecx; int
0x410C22: mov     ecx, ObjectPtr
0x410C28: push    edx; ArgList
0x410C29: call    sub_410A70
0x410C2E: mov     bl, al
0x410C30: call    sub_410B00
0x410C35: mov     al, bl
0x410C37: pop     ebx
0x410C38: retn
