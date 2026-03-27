0x65E490: cmp     byte ptr ds:0B3BB06h, 0
0x65E497: push    esi
0x65E498: mov     esi, [esp+4+a2]
0x65E49C: push    edi
0x65E49D: mov     edi, ecx
0x65E49F: jz      short loc_65E4BC
0x65E4A1: fild    [esp+8+arg_4]
0x65E4A5: fcomp   dword ptr ds:0A2FAA8h
0x65E4AB: fnstsw  ax
0x65E4AD: test    ah, 5
0x65E4B0: jp      short loc_65E4BC
0x65E4B2: cmp     esi, 8
0x65E4B5: jl      short loc_65E4BC
0x65E4B7: cmp     esi, 0Ah
0x65E4BA: jle     short loc_65E523
0x65E4BC: mov     eax, [esp+8+arg_4]
0x65E4C0: push    ebx
0x65E4C1: push    ebp
0x65E4C2: mov     ebp, [esp+10h+arg_8]
0x65E4C6: push    ebp
0x65E4C7: push    eax
0x65E4C8: push    esi
0x65E4C9: call    sub_5E2510
0x65E4CE: mov     ebx, eax
0x65E4D0: mov     [esp+10h+arg_4], ebx
0x65E4D4: fild    [esp+10h+arg_4]
0x65E4D8: push    0
0x65E4DA: push    ecx
0x65E4DB: mov     ecx, edi
0x65E4DD: fstp    [esp+18h+arg_4]
0x65E4E1: fld     [esp+18h+arg_4]
0x65E4E5: fstp    [esp+18h+var_18]
0x65E4E8: push    esi
0x65E4E9: push    2
0x65E4EB: call    Player_ModAVModifierf
0x65E4F0: push    esi; a2
0x65E4F1: call    sub_57A6F0
0x65E4F6: add     esp, 4
0x65E4F9: cmp     esi, 8
0x65E4FC: jnz     short loc_65E517
0x65E4FE: test    ebx, ebx
0x65E500: jge     short loc_65E517
0x65E502: mov     edx, [edi]
0x65E504: fld     [esp+10h+arg_4]
0x65E508: mov     eax, [edx+3B8h]
0x65E50E: push    ecx
0x65E50F: fstp    [esp+14h+var_14]
0x65E512: push    ebp
0x65E513: mov     ecx, edi
0x65E515: call    eax
0x65E517: push    0
0x65E519: push    esi
0x65E51A: mov     ecx, edi
0x65E51C: call    sub_5E2670
0x65E521: pop     ebp
0x65E522: pop     ebx
0x65E523: pop     edi
0x65E524: pop     esi
0x65E525: retn    0Ch
