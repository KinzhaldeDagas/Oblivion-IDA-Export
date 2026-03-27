0x65E300: cmp     byte ptr ds:0B3BB06h, 0
0x65E307: push    esi
0x65E308: mov     esi, [esp+4+a2]
0x65E30C: push    edi
0x65E30D: mov     edi, ecx
0x65E30F: jz      short loc_65E330
0x65E311: fild    [esp+8+arg_4]
0x65E315: fcomp   dword ptr ds:0A2FAA8h
0x65E31B: fnstsw  ax
0x65E31D: test    ah, 5
0x65E320: jp      short loc_65E330
0x65E322: cmp     esi, 8
0x65E325: jl      short loc_65E330
0x65E327: cmp     esi, 0Ah
0x65E32A: jle     loc_65E3B6
0x65E330: mov     eax, [esp+8+arg_4]
0x65E334: push    ebx
0x65E335: push    ebp
0x65E336: mov     ebp, [esp+10h+arg_8]
0x65E33A: push    ebp
0x65E33B: push    eax
0x65E33C: push    esi
0x65E33D: call    sub_5E2510
0x65E342: cmp     esi, 0FFFFFFFFh
0x65E345: mov     ebx, eax
0x65E347: mov     [esp+10h+arg_4], ebx
0x65E34B: fild    [esp+10h+arg_4]
0x65E34F: fstp    [esp+10h+arg_4]
0x65E353: fld     [esp+10h+arg_4]
0x65E357: fstp    [esp+10h+a2]
0x65E35B: jz      short loc_65E383
0x65E35D: fld     [esp+10h+a2]
0x65E361: push    1; int
0x65E363: sub     esp, 8
0x65E366: fstp    [esp+1Ch+var_18]; float
0x65E36A: fld     dword ptr [edi+esi*4+324h]
0x65E371: fstp    [esp+1Ch+var_1C]; float
0x65E374: call    Player_ModAVNode
0x65E379: fstp    dword ptr [edi+esi*4+324h]
0x65E380: add     esp, 0Ch
0x65E383: push    esi; a2
0x65E384: call    sub_57A6F0
0x65E389: add     esp, 4
0x65E38C: cmp     esi, 8
0x65E38F: jnz     short loc_65E3AA
0x65E391: test    ebx, ebx
0x65E393: jge     short loc_65E3AA
0x65E395: mov     edx, [edi]
0x65E397: fld     [esp+10h+arg_4]
0x65E39B: mov     eax, [edx+3B8h]
0x65E3A1: push    ecx
0x65E3A2: fstp    [esp+14h+var_14]
0x65E3A5: push    ebp
0x65E3A6: mov     ecx, edi
0x65E3A8: call    eax
0x65E3AA: push    0
0x65E3AC: push    esi
0x65E3AD: mov     ecx, edi
0x65E3AF: call    sub_5E2670
0x65E3B4: pop     ebp
0x65E3B5: pop     ebx
0x65E3B6: pop     edi
0x65E3B7: pop     esi
0x65E3B8: retn    0Ch
