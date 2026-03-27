0x6D1BC0: push    0FFFFFFFFh
0x6D1BC2: push    offset SEH_6D5FE0
0x6D1BC7: mov     eax, large fs:0
0x6D1BCD: push    eax
0x6D1BCE: push    ebx
0x6D1BCF: push    esi
0x6D1BD0: push    edi
0x6D1BD1: mov     eax, ds:0B30AACh
0x6D1BD6: xor     eax, esp
0x6D1BD8: push    eax
0x6D1BD9: lea     eax, [esp+1Ch+var_C]
0x6D1BDD: mov     large fs:0, eax
0x6D1BE3: mov     esi, ecx
0x6D1BE5: movzx   eax, word ptr [esi+4Ah]
0x6D1BE9: mov     edi, [esp+1Ch+arg_4]
0x6D1BED: cmp     eax, edi
0x6D1BEF: ja      short loc_6D1BFD
0x6D1BF1: lea     ecx, [edi+1]
0x6D1BF4: push    ecx
0x6D1BF5: lea     ecx, [esi+40h]
0x6D1BF8: call    sub_523B10
0x6D1BFD: mov     ebx, [esp+1Ch+arg_0]
0x6D1C01: test    ebx, ebx
0x6D1C03: mov     [esp+1Ch+arg_4], ebx
0x6D1C07: jz      short loc_6D1C13
0x6D1C09: lea     edx, [ebx+4]
0x6D1C0C: push    edx; lpAddend
0x6D1C0D: call    dword ptr ds:0A28078h
0x6D1C13: movzx   eax, word ptr [esi+48h]
0x6D1C17: add     esi, 40h ; '@'
0x6D1C1A: cmp     edi, eax
0x6D1C1C: mov     [esp+1Ch+var_4], 0
0x6D1C24: jb      short loc_6D1C34
0x6D1C26: movzx   ecx, word ptr [esi+0Eh]
0x6D1C2A: add     ecx, edi
0x6D1C2C: push    ecx
0x6D1C2D: mov     ecx, esi
0x6D1C2F: call    sub_523B10
0x6D1C34: lea     edx, [esp+1Ch+arg_4]
0x6D1C38: push    edx
0x6D1C39: push    edi
0x6D1C3A: mov     ecx, esi
0x6D1C3C: call    sub_5254D0
0x6D1C41: test    ebx, ebx
0x6D1C43: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6D1C4B: jz      short loc_6D1C65
0x6D1C4D: lea     eax, [ebx+4]
0x6D1C50: push    eax; lpAddend
0x6D1C51: call    dword ptr ds:0A2807Ch
0x6D1C57: test    eax, eax
0x6D1C59: jnz     short loc_6D1C65
0x6D1C5B: mov     edx, [ebx]
0x6D1C5D: mov     eax, [edx]
0x6D1C5F: push    1
0x6D1C61: mov     ecx, ebx
0x6D1C63: call    eax
0x6D1C65: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6D1C69: mov     large fs:0, ecx
0x6D1C70: pop     ecx
0x6D1C71: pop     edi
0x6D1C72: pop     esi
0x6D1C73: pop     ebx
0x6D1C74: add     esp, 0Ch
0x6D1C77: retn    8
