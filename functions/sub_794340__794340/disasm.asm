0x794340: push    0FFFFFFFFh
0x794342: push    offset SEH_794340
0x794347: mov     eax, large fs:0
0x79434D: push    eax
0x79434E: sub     esp, 44h
0x794351: push    ebx
0x794352: push    ebp
0x794353: push    esi
0x794354: push    edi
0x794355: mov     eax, ds:0B30AACh
0x79435A: xor     eax, esp
0x79435C: push    eax
0x79435D: lea     eax, [esp+64h+var_C]
0x794361: mov     large fs:0, eax
0x794367: mov     ebp, ecx
0x794369: mov     esi, [esp+64h+arg_0]
0x79436D: mov     ecx, esi
0x79436F: call    sub_78EB40
0x794374: jmp     short loc_794380
0x794376: align 10h
0x794380: add     eax, 0FFFFE0BEh; switch 8 cases
0x794385: cmp     eax, 7
0x794388: ja      def_79438E; jumptable 0079438E default case
0x79438E: jmp     ds:jpt_79438E[eax*4]; switch jump
0x794395: mov     ecx, esi; jumptable 0079438E case 8002
0x794397: call    sub_78EB40
0x79439C: mov     [ebp+0], eax
0x79439F: jmp     loc_794427
0x7943A4: lea     edi, [ebp+4]; jumptable 0079438E case 8003
0x7943A7: mov     ebx, 0Dh
0x7943AC: lea     esp, [esp+0]
0x7943B0: mov     ecx, esi
0x7943B2: call    sub_78EB10
0x7943B7: fstp    dword ptr [edi]
0x7943B9: add     edi, 4
0x7943BC: sub     ebx, 1
0x7943BF: jnz     short loc_7943B0
0x7943C1: jmp     short loc_794427
0x7943C3: mov     ecx, esi; jumptable 0079438E case 8004
0x7943C5: call    sub_78EB40
0x7943CA: mov     [ebp+38h], eax
0x7943CD: jmp     short loc_794427
0x7943CF: lea     edi, [ebp+3Ch]; jumptable 0079438E case 8005
0x7943D2: mov     ebx, 0Dh
0x7943D7: mov     ecx, esi
0x7943D9: call    sub_78EB10
0x7943DE: fstp    dword ptr [edi]
0x7943E0: add     edi, 4
0x7943E3: sub     ebx, 1
0x7943E6: jnz     short loc_7943D7
0x7943E8: jmp     short loc_794427
0x7943EA: mov     ecx, esi; jumptable 0079438E case 8006
0x7943EC: call    sub_78EB10
0x7943F1: fstp    dword ptr [ebp+70h]
0x7943F4: jmp     short loc_794427
0x7943F6: mov     ecx, esi; jumptable 0079438E case 8007
0x7943F8: call    sub_78EB40
0x7943FD: mov     [ebp+74h], eax
0x794400: jmp     short loc_794427
0x794402: mov     ecx, esi; jumptable 0079438E case 8008
0x794404: call    sub_78EB40
0x794409: mov     [ebp+78h], eax
0x79440C: jmp     short loc_794427
0x79440E: lea     edi, [ebp+7Ch]; jumptable 0079438E case 8009
0x794411: mov     ebx, 0Dh
0x794416: mov     ecx, esi
0x794418: call    sub_78EB10
0x79441D: fstp    dword ptr [edi]
0x79441F: add     edi, 4
0x794422: sub     ebx, 1
0x794425: jnz     short loc_794416
0x794427: mov     ecx, esi
0x794429: call    sub_78EB40
0x79442E: cmp     eax, 1F41h
0x794433: jnz     loc_794380
0x794439: mov     ecx, [esp+64h+var_C]
0x79443D: mov     large fs:0, ecx
0x794444: pop     ecx
0x794445: pop     edi
0x794446: pop     esi
0x794447: pop     ebp
0x794448: pop     ebx
0x794449: add     esp, 50h
0x79444C: retn    4
0x79444F: push    1Eh; jumptable 0079438E default case
0x794451: xor     ebx, ebx
0x794453: push    offset aMalformedLight; "malformed lighting information"
0x794458: lea     ecx, [esp+6Ch+var_50]
0x79445C: mov     [esp+6Ch+var_38], 0Fh
0x794464: mov     [esp+6Ch+var_3C], ebx
0x794468: mov     [esp+6Ch+var_4C], bl
0x79446C: call    sub_414500
0x794471: push    ebx
0x794472: lea     eax, [esp+68h+var_50]
0x794476: push    eax
0x794477: lea     ecx, [esp+6Ch+var_34]
0x79447B: mov     [esp+6Ch+var_4], ebx
0x79447F: call    sub_789190
0x794484: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x794489: lea     ecx, [esp+68h+var_34]
0x79448D: push    ecx
0x79448E: call    ThrowException??
