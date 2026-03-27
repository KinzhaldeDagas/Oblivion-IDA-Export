0x584670: push    ebx
0x584671: push    esi
0x584672: mov     esi, [esp+8+Str]
0x584676: push    edi
0x584677: push    offset SubStr; SubStr
0x58467C: push    esi; Str
0x58467D: call    _strstr
0x584682: xor     ebx, ebx
0x584684: add     esp, 8
0x584687: cmp     eax, ebx
0x584689: jz      short loc_5846A7
0x58468B: jmp     short loc_584690
0x58468D: align 10h
0x584690: add     eax, 1
0x584693: push    offset SubStr; SubStr
0x584698: push    eax; Str
0x584699: mov     esi, eax
0x58469B: call    _strstr
0x5846A0: add     esp, 8
0x5846A3: cmp     eax, ebx
0x5846A5: jnz     short loc_584690
0x5846A7: lea     eax, [esp+0Ch+Str]
0x5846AB: push    eax
0x5846AC: push    esi
0x5846AD: mov     ecx, offset off_B13948
0x5846B2: mov     [esp+14h+Str], ebx
0x5846B6: call    NiTMap_GetAt
0x5846BB: mov     edi, [esp+0Ch+Str]
0x5846BF: cmp     edi, ebx
0x5846C1: jz      short loc_5846DF
0x5846C3: mov     eax, [edi+4]
0x5846C6: cmp     eax, ebx
0x5846C8: jz      short loc_5846D3
0x5846CA: push    eax
0x5846CB: call    FormHeapFree
0x5846D0: add     esp, 4
0x5846D3: push    edi
0x5846D4: mov     [edi+4], ebx
0x5846D7: call    FormHeapFree
0x5846DC: add     esp, 4
0x5846DF: push    esi
0x5846E0: mov     ecx, offset off_B13948
0x5846E5: call    NiTMap_RemoveAt
0x5846EA: lea     ecx, [esp+0Ch+Str]
0x5846EE: push    ecx
0x5846EF: push    esi
0x5846F0: mov     ecx, offset off_B1395C
0x5846F5: mov     [esp+14h+Str], ebx
0x5846F9: call    NiTMap_GetAt
0x5846FE: mov     edi, [esp+0Ch+Str]
0x584702: cmp     edi, ebx
0x584704: jz      short loc_58472A
0x584706: mov     eax, [esp+0Ch+arg_4]
0x58470A: cmp     eax, ebx
0x58470C: jz      short loc_58471A
0x58470E: cmp     [edi+10h], bl
0x584711: jz      short loc_58471A
0x584713: mov     [edi+10h], bl
0x584716: mov     byte ptr [eax+1Ch], 1
0x58471A: mov     ecx, edi
0x58471C: call    sub_58CDB0
0x584721: push    edi
0x584722: call    FormHeapFree
0x584727: add     esp, 4
0x58472A: push    esi
0x58472B: mov     ecx, offset off_B1395C
0x584730: call    NiTMap_RemoveAt
0x584735: pop     edi
0x584736: pop     esi
0x584737: pop     ebx
0x584738: retn
