0x5C3440: push    0FFFFFFFFh
0x5C3442: push    offset SEH_5C3440
0x5C3447: mov     eax, large fs:0
0x5C344D: push    eax
0x5C344E: push    ecx
0x5C344F: push    ebx
0x5C3450: push    esi
0x5C3451: push    edi
0x5C3452: mov     eax, ds:0B30AACh
0x5C3457: xor     eax, esp
0x5C3459: push    eax
0x5C345A: lea     eax, [esp+20h+var_C]
0x5C345E: mov     large fs:0, eax
0x5C3464: mov     esi, ecx
0x5C3466: mov     edi, [esp+20h+arg_8]
0x5C346A: mov     ebx, [esp+20h+a2]
0x5C346E: push    edi; unsigned __int8 *
0x5C346F: sub     esp, 8
0x5C3472: mov     ecx, esp; this
0x5C3474: xor     eax, eax
0x5C3476: mov     [esp+2Ch+var_10], esp
0x5C347A: push    eax; a3
0x5C347B: push    ebx; a2
0x5C347C: mov     [esp+34h+var_4], 1
0x5C3484: mov     [ecx], eax
0x5C3486: mov     [ecx+4], ax
0x5C348A: mov     [ecx+6], ax
0x5C348E: call    BSStringT_Set
0x5C3493: mov     ecx, esi
0x5C3495: call    sub_5C3110
0x5C349A: mov     ecx, eax
0x5C349C: call    sub_589930
0x5C34A1: push    ebx
0x5C34A2: mov     esi, eax
0x5C34A4: call    FormHeapFree
0x5C34A9: push    edi
0x5C34AA: call    FormHeapFree
0x5C34AF: add     esp, 8
0x5C34B2: mov     eax, esi
0x5C34B4: mov     ecx, [esp+20h+var_C]
0x5C34B8: mov     large fs:0, ecx
0x5C34BF: pop     ecx
0x5C34C0: pop     edi
0x5C34C1: pop     esi
0x5C34C2: pop     ebx
0x5C34C3: add     esp, 10h
0x5C34C6: retn    10h
