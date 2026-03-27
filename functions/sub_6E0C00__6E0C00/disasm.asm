0x6E0C00: push    0FFFFFFFFh
0x6E0C02: push    offset SEH_6E0C00
0x6E0C07: mov     eax, large fs:0
0x6E0C0D: push    eax
0x6E0C0E: push    ecx
0x6E0C0F: push    esi
0x6E0C10: push    edi
0x6E0C11: mov     eax, ds:0B30AACh
0x6E0C16: xor     eax, esp
0x6E0C18: push    eax
0x6E0C19: lea     eax, [esp+1Ch+var_C]
0x6E0C1D: mov     large fs:0, eax
0x6E0C23: mov     edi, ecx
0x6E0C25: mov     esi, [esp+1Ch+arg_0]
0x6E0C29: push    esi
0x6E0C2A: call    sub_75E480
0x6E0C2F: cmp     dword ptr [esi+0D8h], 0A010068h
0x6E0C39: jnb     loc_6E0CC2
0x6E0C3F: mov     ecx, esi
0x6E0C41: call    sub_7124A0
0x6E0C46: mov     esi, eax
0x6E0C48: test    esi, esi
0x6E0C4A: mov     [esp+1Ch+arg_0], esi
0x6E0C4E: jz      short loc_6E0C5A
0x6E0C50: lea     eax, [esi+4]
0x6E0C53: push    eax; lpAddend
0x6E0C54: call    dword ptr ds:0A28078h
0x6E0C5A: push    20h ; ' '; Size
0x6E0C5C: mov     [esp+20h+var_4], 0
0x6E0C64: call    FormHeapAlloc
0x6E0C69: add     esp, 4
0x6E0C6C: mov     [esp+1Ch+var_10], eax
0x6E0C70: test    eax, eax
0x6E0C72: mov     byte ptr [esp+1Ch+var_4], 1
0x6E0C77: jz      short loc_6E0C83
0x6E0C79: push    esi
0x6E0C7A: mov     ecx, eax
0x6E0C7C: call    sub_6DA160
0x6E0C81: jmp     short loc_6E0C85
0x6E0C83: xor     eax, eax
0x6E0C85: add     edi, 3Ch ; '<'
0x6E0C88: push    eax; a2
0x6E0C89: mov     ecx, edi; this
0x6E0C8B: mov     byte ptr [esp+20h+var_4], 0
0x6E0C90: call    NiSmartPointer_Set??
0x6E0C95: mov     ecx, [edi]
0x6E0C97: mov     edx, [ecx]
0x6E0C99: mov     eax, [edx+7Ch]
0x6E0C9C: call    eax
0x6E0C9E: test    esi, esi
0x6E0CA0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6E0CA8: jz      short loc_6E0CC2
0x6E0CAA: lea     ecx, [esi+4]
0x6E0CAD: push    ecx; lpAddend
0x6E0CAE: call    dword ptr ds:0A2807Ch
0x6E0CB4: test    eax, eax
0x6E0CB6: jnz     short loc_6E0CC2
0x6E0CB8: mov     edx, [esi]
0x6E0CBA: mov     eax, [edx]
0x6E0CBC: push    1
0x6E0CBE: mov     ecx, esi
0x6E0CC0: call    eax
0x6E0CC2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6E0CC6: mov     large fs:0, ecx
0x6E0CCD: pop     ecx
0x6E0CCE: pop     edi
0x6E0CCF: pop     esi
0x6E0CD0: add     esp, 10h
0x6E0CD3: retn    4
