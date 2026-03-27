0x410C40: push    ecx
0x410C41: push    ebx; ArgList
0x410C42: xor     ebx, ebx
0x410C44: cmp     ObjectPtr, ebx
0x410C4A: jz      short loc_410C83
0x410C4C: cmp     dword_B3342C, ebx
0x410C52: jz      short loc_410C61
0x410C54: push    offset aTryingToPauseA; "Trying to pause a movie while another m"...
0x410C59: call    PrintError
0x410C5E: add     esp, 4
0x410C61: mov     eax, ObjectPtr
0x410C66: mov     ecx, [eax]
0x410C68: push    1
0x410C6A: push    ecx
0x410C6B: call    ds:_BinkPause@8; BinkPause(x,x)
0x410C71: mov     edx, ObjectPtr
0x410C77: mov     dword_B3342C, edx
0x410C7D: mov     ObjectPtr, ebx
0x410C83: cmp     byte_B33431, bl
0x410C89: jz      short loc_410CA3
0x410C8B: mov     ecx, dword_B33440
0x410C91: cmp     ecx, ebx
0x410C93: jz      short loc_410CA3
0x410C95: mov     dword_B33440, ebx
0x410C9B: mov     byte_B33431, bl
0x410CA1: jmp     short loc_410CD8
0x410CA3: push    28h ; '('; Size
0x410CA5: call    FormHeapAlloc
0x410CAA: add     esp, 4
0x410CAD: cmp     eax, ebx
0x410CAF: jz      short loc_410CD4
0x410CB1: fld1
0x410CB3: mov     [eax], ebx
0x410CB5: fstp    dword ptr [eax+14h]
0x410CB8: mov     [eax+4], ebx
0x410CBB: fldz
0x410CBD: mov     [eax+8], ebx
0x410CC0: fst     dword ptr [eax+18h]
0x410CC3: mov     [eax+0Ch], ebx
0x410CC6: fstp    dword ptr [eax+1Ch]
0x410CC9: mov     [eax+10h], ebx
0x410CCC: mov     [eax+20h], ebx
0x410CCF: mov     [eax+24h], bl
0x410CD2: jmp     short loc_410CD6
0x410CD4: xor     eax, eax
0x410CD6: mov     ecx, eax
0x410CD8: mov     eax, [esp+8+arg_4]
0x410CDC: mov     edx, [esp+8+arg_0]
0x410CE0: push    eax
0x410CE1: push    edx
0x410CE2: mov     ObjectPtr, ecx
0x410CE8: call    sub_4105F0
0x410CED: cmp     al, bl
0x410CEF: mov     [esp+8+var_1], al
0x410CF3: pop     ebx
0x410CF4: jnz     short loc_410CFF
0x410CF6: call    sub_410B00
0x410CFB: mov     al, [esp+4+var_1]
0x410CFF: pop     ecx
0x410D00: retn
