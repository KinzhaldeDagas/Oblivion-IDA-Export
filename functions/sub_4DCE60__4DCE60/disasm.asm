0x4DCE60: push    esi
0x4DCE61: mov     esi, ecx
0x4DCE63: cmp     dword ptr [esi+3Ch], 0
0x4DCE67: jz      loc_4DCF05
0x4DCE6D: mov     eax, [esi]
0x4DCE6F: mov     edx, [eax+168h]
0x4DCE75: push    ebx
0x4DCE76: push    ebp
0x4DCE77: push    edi; ArgList
0x4DCE78: call    edx
0x4DCE7A: mov     ecx, ds:0B333C4h
0x4DCE80: cmp     esi, ecx
0x4DCE82: mov     edi, eax
0x4DCE84: mov     ebx, 1
0x4DCE89: jnz     short loc_4DCE90
0x4DCE8B: mov     ebx, 2
0x4DCE90: mov     ebp, [esp+10h+arg_0]
0x4DCE94: jmp     short loc_4DCE9C
0x4DCE96: mov     ecx, ds:0B333C4h
0x4DCE9C: cmp     esi, ecx
0x4DCE9E: jnz     short loc_4DCEBB
0x4DCEA0: cmp     ebx, 1
0x4DCEA3: jnz     short loc_4DCEBB
0x4DCEA5: mov     al, [ecx+588h]
0x4DCEAB: mov     byte ptr [esp+10h+arg_0], al
0x4DCEAF: mov     edx, [esp+10h+arg_0]
0x4DCEB3: push    edx
0x4DCEB4: call    sub_6600D0
0x4DCEB9: mov     edi, eax
0x4DCEBB: test    edi, edi
0x4DCEBD: jz      short loc_4DCECE
0x4DCEBF: mov     eax, [esp+10h+arg_4]
0x4DCEC3: push    eax; int
0x4DCEC4: push    ebp; int
0x4DCEC5: mov     ecx, edi; int
0x4DCEC7: call    sub_47A640
0x4DCECC: jmp     short loc_4DCEDB
0x4DCECE: push    offset aCreaturesAreNo; "Creatures are not allowed to wear rings"...
0x4DCED3: call    PrintError
0x4DCED8: add     esp, 4
0x4DCEDB: sub     ebx, 1
0x4DCEDE: jnz     short loc_4DCE96
0x4DCEE0: mov     edx, [esi]
0x4DCEE2: mov     eax, [edx+190h]
0x4DCEE8: mov     ecx, esi
0x4DCEEA: call    eax
0x4DCEEC: test    al, al
0x4DCEEE: pop     edi
0x4DCEEF: pop     ebp
0x4DCEF0: pop     ebx
0x4DCEF1: jz      short loc_4DCF05
0x4DCEF3: mov     ecx, [esi+3Ch]
0x4DCEF6: push    ecx
0x4DCEF7: mov     ecx, esi
0x4DCEF9: call    sub_5EA1A0
0x4DCEFE: mov     ecx, esi; a1
0x4DCF00: call    sub_5EE1B0
0x4DCF05: pop     esi
0x4DCF06: retn    8
