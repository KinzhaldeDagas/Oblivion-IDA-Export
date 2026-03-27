0x85ABD0: push    0FFFFFFFFh
0x85ABD2: push    offset SEH_85ABD0
0x85ABD7: mov     eax, large fs:0
0x85ABDD: push    eax
0x85ABDE: push    esi
0x85ABDF: mov     eax, ds:0B30AACh
0x85ABE4: xor     eax, esp
0x85ABE6: push    eax
0x85ABE7: lea     eax, [esp+14h+var_C]
0x85ABEB: mov     large fs:0, eax
0x85ABF1: mov     esi, ecx
0x85ABF3: mov     eax, [esi+54h]
0x85ABF6: test    eax, eax
0x85ABF8: jnz     loc_85ACAA
0x85ABFE: push    10h; Size
0x85AC00: call    FormHeapAlloc
0x85AC05: add     esp, 4
0x85AC08: cmp     byte ptr [esp+14h+arg_8], 0
0x85AC0D: mov     [esp+14h+arg_8], eax
0x85AC11: jz      short loc_85AC3A
0x85AC13: test    eax, eax
0x85AC15: mov     [esp+14h+var_4], 0
0x85AC1D: jz      short loc_85AC8F
0x85AC1F: mov     ecx, [esp+14h+arg_0]
0x85AC23: push    0
0x85AC25: push    0
0x85AC27: push    1
0x85AC29: push    167h
0x85AC2E: push    ecx
0x85AC2F: push    eax
0x85AC30: call    sub_7E2370
0x85AC35: add     esp, 18h
0x85AC38: jmp     short loc_85AC91
0x85AC3A: cmp     byte ptr [esp+14h+arg_4], 0
0x85AC3F: jnz     short loc_85AC68
0x85AC41: test    eax, eax
0x85AC43: mov     [esp+14h+var_4], 1
0x85AC4B: jz      short loc_85AC8F
0x85AC4D: mov     ecx, [esp+14h+arg_0]
0x85AC51: push    0
0x85AC53: push    0
0x85AC55: push    1
0x85AC57: push    165h
0x85AC5C: push    ecx
0x85AC5D: push    eax
0x85AC5E: call    sub_7E2370
0x85AC63: add     esp, 18h
0x85AC66: jmp     short loc_85AC91
0x85AC68: test    eax, eax
0x85AC6A: mov     [esp+14h+var_4], 2
0x85AC72: jz      short loc_85AC8F
0x85AC74: mov     ecx, [esp+14h+arg_0]
0x85AC78: push    0
0x85AC7A: push    0
0x85AC7C: push    1
0x85AC7E: push    166h
0x85AC83: push    ecx
0x85AC84: push    eax
0x85AC85: call    sub_7E2370
0x85AC8A: add     esp, 18h
0x85AC8D: jmp     short loc_85AC91
0x85AC8F: xor     eax, eax
0x85AC91: lea     edx, [esp+14h+arg_8]
0x85AC95: push    edx
0x85AC96: lea     ecx, [esi+48h]
0x85AC99: mov     [esp+18h+var_4], 0FFFFFFFFh
0x85ACA1: mov     [esp+18h+arg_8], eax
0x85ACA5: call    sub_5B1E20
0x85ACAA: mov     ecx, [esp+14h+var_C]
0x85ACAE: mov     large fs:0, ecx
0x85ACB5: pop     ecx
0x85ACB6: pop     esi
0x85ACB7: add     esp, 0Ch
0x85ACBA: retn    0Ch
