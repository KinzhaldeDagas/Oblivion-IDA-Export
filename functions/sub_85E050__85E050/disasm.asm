0x85E050: push    0FFFFFFFFh
0x85E052: push    offset SEH_85E160
0x85E057: mov     eax, large fs:0
0x85E05D: push    eax
0x85E05E: push    ebx
0x85E05F: push    ebp
0x85E060: push    esi
0x85E061: push    edi
0x85E062: mov     eax, ds:0B30AACh
0x85E067: xor     eax, esp
0x85E069: push    eax
0x85E06A: lea     eax, [esp+20h+var_C]
0x85E06E: mov     large fs:0, eax
0x85E074: mov     esi, ecx
0x85E076: mov     eax, [esp+20h+arg_8]
0x85E07A: mov     eax, [eax+10h]
0x85E07D: mov     edx, [esi]
0x85E07F: mov     edx, [edx+0BCh]
0x85E085: mov     edi, ds:0B477F0h
0x85E08B: push    eax
0x85E08C: mov     eax, [esp+24h+arg_0]
0x85E090: push    0
0x85E092: push    eax
0x85E093: call    edx
0x85E095: mov     eax, [edi+24h]
0x85E098: mov     ecx, [esp+20h+arg_C]
0x85E09C: mov     ebx, [eax]
0x85E09E: push    0
0x85E0A0: push    ecx
0x85E0A1: mov     ecx, esi
0x85E0A3: mov     [esp+28h+arg_8], ebx
0x85E0A7: call    sub_848FD0
0x85E0AC: mov     ebx, [ebx+4]
0x85E0AF: mov     ebp, eax
0x85E0B1: cmp     ebx, ebp
0x85E0B3: jz      short loc_85E0EA
0x85E0B5: test    ebx, ebx
0x85E0B7: jz      short loc_85E0D5
0x85E0B9: lea     edx, [ebx+4]
0x85E0BC: push    edx; lpAddend
0x85E0BD: call    dword ptr ds:0A2807Ch
0x85E0C3: test    eax, eax
0x85E0C5: jnz     short loc_85E0D5
0x85E0C7: test    ebx, ebx
0x85E0C9: jz      short loc_85E0D5
0x85E0CB: mov     eax, [ebx]
0x85E0CD: mov     edx, [eax]
0x85E0CF: push    1
0x85E0D1: mov     ecx, ebx
0x85E0D3: call    edx
0x85E0D5: test    ebp, ebp
0x85E0D7: mov     eax, [esp+20h+arg_8]
0x85E0DB: mov     [eax+4], ebp
0x85E0DE: jz      short loc_85E0EA
0x85E0E0: add     ebp, 4
0x85E0E3: push    ebp; lpAddend
0x85E0E4: call    dword ptr ds:0A28078h
0x85E0EA: mov     ecx, [esp+20h+arg_C]
0x85E0EE: mov     edx, [esp+20h+arg_8]
0x85E0F2: push    ecx
0x85E0F3: push    edx
0x85E0F4: mov     ecx, esi
0x85E0F6: call    sub_848FA0
0x85E0FB: cmp     byte ptr [esp+20h+arg_10], 0
0x85E100: jnz     short loc_85E13D
0x85E102: mov     ebx, 1
0x85E107: add     [edi+60h], ebx
0x85E10A: mov     [esp+20h+arg_10], edi
0x85E10E: mov     ecx, [esi+38h]
0x85E111: lea     eax, [esp+20h+arg_10]
0x85E115: push    eax
0x85E116: push    ecx
0x85E117: lea     ecx, [esi+40h]
0x85E11A: mov     [esp+28h+var_4], 0
0x85E122: call    sub_76CE40
0x85E127: or      eax, 0FFFFFFFFh
0x85E12A: add     [edi+60h], eax
0x85E12D: mov     [esp+20h+var_4], eax
0x85E131: jnz     short loc_85E13A
0x85E133: mov     ecx, edi
0x85E135: call    sub_7604D0
0x85E13A: add     [esi+38h], ebx
0x85E13D: mov     ecx, dword ptr [esp+20h+var_C]
0x85E141: mov     large fs:0, ecx
0x85E148: pop     ecx
0x85E149: pop     edi
0x85E14A: pop     esi
0x85E14B: pop     ebp
0x85E14C: pop     ebx
0x85E14D: add     esp, 0Ch
0x85E150: retn    14h
