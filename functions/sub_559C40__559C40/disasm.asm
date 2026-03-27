0x559C40: push    0FFFFFFFFh
0x559C42: push    offset SEH_559C40
0x559C47: mov     eax, large fs:0
0x559C4D: push    eax
0x559C4E: sub     esp, 8
0x559C51: push    ebx
0x559C52: push    ebp
0x559C53: push    esi
0x559C54: push    edi
0x559C55: mov     eax, ds:0B30AACh
0x559C5A: xor     eax, esp
0x559C5C: push    eax
0x559C5D: lea     eax, [esp+28h+var_C]
0x559C61: mov     large fs:0, eax
0x559C67: mov     edi, ecx
0x559C69: mov     ebx, ds:0A2813Ch
0x559C6F: push    0; Comperand
0x559C71: lea     esi, [edi+18h]
0x559C74: push    1; Exchange
0x559C76: push    esi; Destination
0x559C77: mov     [esp+34h+var_14], esi
0x559C7B: call    ebx ; InterlockedCompareExchange
0x559C7D: test    eax, eax
0x559C7F: setz    al
0x559C82: mov     [esp+28h+var_10], al
0x559C86: test    al, al
0x559C88: mov     [esp+28h+var_4], 0
0x559C90: jz      short loc_559CC1
0x559C92: mov     eax, [edi+0Ch]
0x559C95: test    eax, eax
0x559C97: jz      short loc_559CBA
0x559C99: mov     ebp, [eax+8]
0x559C9C: test    ebp, ebp
0x559C9E: jz      short loc_559CBA
0x559CA0: mov     ecx, ebp
0x559CA2: call    sub_559A70
0x559CA7: push    ebp
0x559CA8: call    FormHeapFree
0x559CAD: mov     eax, [edi+0Ch]
0x559CB0: add     esp, 4
0x559CB3: mov     dword ptr [eax+8], 0
0x559CBA: push    1; Comperand
0x559CBC: push    0; Exchange
0x559CBE: push    esi; Destination
0x559CBF: call    ebx ; InterlockedCompareExchange
0x559CC1: mov     ecx, [esp+28h+var_C]
0x559CC5: mov     large fs:0, ecx
0x559CCC: pop     ecx
0x559CCD: pop     edi
0x559CCE: pop     esi
0x559CCF: pop     ebp
0x559CD0: pop     ebx
0x559CD1: add     esp, 14h
0x559CD4: retn
