0x55EF30: sub     esp, 0Ch
0x55EF33: mov     edx, [esp+0Ch+Comperand]
0x55EF37: push    ebx
0x55EF38: push    ebp
0x55EF39: mov     ebp, ds:0A2813Ch
0x55EF3F: push    esi
0x55EF40: mov     esi, ecx
0x55EF42: mov     eax, [esi]
0x55EF44: mov     ecx, [eax+0Ch]
0x55EF47: lea     eax, [ecx+edx*4]
0x55EF4A: push    edi
0x55EF4B: mov     [esp+1Ch+var_4], eax
0x55EF4F: mov     ebx, 1
0x55EF54: mov     ecx, [esp+1Ch+var_4]
0x55EF58: mov     [esi+10h], ecx
0x55EF5B: mov     edx, ecx
0x55EF5D: mov     eax, [edx]
0x55EF5F: mov     [esi+14h], eax
0x55EF62: mov     ecx, [esi+14h]
0x55EF65: mov     edx, [esi+8]
0x55EF68: and     ecx, 0FFFFFFFEh
0x55EF6B: mov     [edx], ecx
0x55EF6D: mov     eax, [esi+14h]
0x55EF70: and     eax, 0FFFFFFFEh
0x55EF73: mov     [esp+1Ch+var_C], eax
0x55EF77: mov     eax, [esp+1Ch+var_C]
0x55EF7B: and     eax, 0FFFFFFFEh
0x55EF7E: mov     [esp+1Ch+var_C], eax
0x55EF82: mov     eax, [esi+10h]
0x55EF85: mov     eax, [eax]
0x55EF87: mov     ecx, [esp+1Ch+var_C]
0x55EF8B: cmp     eax, ecx
0x55EF8D: jnz     short loc_55EF54
0x55EF8F: nop
0x55EF90: mov     edx, [esi+14h]
0x55EF93: test    edx, 0FFFFFFFEh
0x55EF99: jz      loc_55F08E
0x55EF9F: mov     eax, [esi+14h]
0x55EFA2: and     eax, 0FFFFFFFEh
0x55EFA5: mov     ecx, [eax+8]
0x55EFA8: mov     [esi+18h], ecx
0x55EFAB: mov     edx, [esi+18h]
0x55EFAE: mov     eax, [esi+4]
0x55EFB1: and     edx, 0FFFFFFFEh
0x55EFB4: mov     [eax], edx
0x55EFB6: mov     ecx, [esi+18h]
0x55EFB9: mov     eax, [esi+14h]
0x55EFBC: and     eax, 0FFFFFFFEh
0x55EFBF: mov     edx, [eax+8]
0x55EFC2: cmp     ecx, edx
0x55EFC4: jnz     short loc_55EF54
0x55EFC6: mov     eax, [esi+14h]
0x55EFC9: and     eax, 0FFFFFFFEh
0x55EFCC: mov     ecx, [eax+4]
0x55EFCF: mov     eax, [esi+14h]
0x55EFD2: and     eax, 0FFFFFFFEh
0x55EFD5: mov     [esp+1Ch+Comperand], eax
0x55EFD9: mov     edx, [esp+1Ch+Comperand]
0x55EFDD: mov     eax, [esi+10h]
0x55EFE0: mov     eax, [eax]
0x55EFE2: and     edx, 0FFFFFFFEh
0x55EFE5: mov     [esp+1Ch+Comperand], edx
0x55EFE9: mov     edx, [esp+1Ch+Comperand]
0x55EFED: cmp     eax, edx
0x55EFEF: jnz     loc_55EF54
0x55EFF5: mov     eax, [esi+18h]
0x55EFF8: test    bl, al
0x55EFFA: jnz     short loc_55F021
0x55EFFC: mov     edx, [esp+1Ch+arg_4]
0x55F000: cmp     ecx, [edx]
0x55F002: jz      loc_55F09A
0x55F008: mov     eax, [esi+14h]
0x55F00B: and     eax, 0FFFFFFFEh
0x55F00E: add     eax, 8
0x55F011: mov     [esi+10h], eax
0x55F014: mov     ecx, [esi+14h]
0x55F017: mov     edx, [esi+0Ch]
0x55F01A: and     ecx, 0FFFFFFFEh
0x55F01D: mov     [edx], ecx
0x55F01F: jmp     short loc_55F078
0x55F021: mov     eax, [esi+18h]
0x55F024: and     eax, 0FFFFFFFEh
0x55F027: mov     [esp+1Ch+Exchange], eax
0x55F02B: mov     eax, [esp+1Ch+Exchange]
0x55F02F: mov     edi, [esp+1Ch+Comperand]
0x55F033: and     eax, 0FFFFFFFEh
0x55F036: mov     [esp+1Ch+Exchange], eax
0x55F03A: mov     eax, [esp+1Ch+Exchange]
0x55F03E: mov     ecx, [esi+10h]
0x55F041: push    edi; Comperand
0x55F042: push    eax; Exchange
0x55F043: push    ecx; Destination
0x55F044: call    ebp ; InterlockedCompareExchange
0x55F046: cmp     eax, edi
0x55F048: jnz     loc_55EF54
0x55F04E: mov     eax, [esi+14h]
0x55F051: and     eax, 0FFFFFFFEh
0x55F054: mov     dword ptr [eax+4], 0
0x55F05B: mov     ecx, [esi+1Ch]
0x55F05E: mov     [eax+4], ecx
0x55F061: add     [esi+20h], ebx
0x55F064: mov     edx, [esi]
0x55F066: mov     [esi+1Ch], eax
0x55F069: mov     eax, [esi+20h]
0x55F06C: cmp     eax, [edx+10h]
0x55F06F: jnz     short loc_55F078
0x55F071: mov     ecx, esi
0x55F073: call    sub_435FE0
0x55F078: mov     eax, [esi+18h]
0x55F07B: mov     [esi+14h], eax
0x55F07E: mov     ecx, [esi+18h]
0x55F081: mov     edx, [esi+8]
0x55F084: and     ecx, 0FFFFFFFEh
0x55F087: mov     [edx], ecx
0x55F089: jmp     loc_55EF90
0x55F08E: pop     edi
0x55F08F: pop     esi
0x55F090: pop     ebp
0x55F091: xor     al, al
0x55F093: pop     ebx
0x55F094: add     esp, 0Ch
0x55F097: retn    8
0x55F09A: pop     edi
0x55F09B: pop     esi
0x55F09C: pop     ebp
0x55F09D: mov     al, bl
0x55F09F: pop     ebx
0x55F0A0: add     esp, 0Ch
0x55F0A3: retn    8
