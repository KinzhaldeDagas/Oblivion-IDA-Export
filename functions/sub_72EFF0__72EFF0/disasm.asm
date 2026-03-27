0x72EFF0: sub     esp, 8
0x72EFF3: push    esi
0x72EFF4: push    edi
0x72EFF5: mov     edi, [esp+10h+a2]
0x72EFF9: mov     esi, ecx
0x72EFFB: push    edi; a2
0x72EFFC: mov     [esp+14h+var_4], esi
0x72F000: call    sub_700670
0x72F005: test    al, al
0x72F007: jnz     short loc_72F013
0x72F009: pop     edi
0x72F00A: xor     al, al
0x72F00C: pop     esi
0x72F00D: add     esp, 8
0x72F010: retn    4
0x72F013: lea     eax, [edi+0Ch]
0x72F016: push    eax
0x72F017: lea     ecx, [esi+0Ch]
0x72F01A: call    sub_718B20
0x72F01F: test    al, al
0x72F021: jnz     short loc_72F009
0x72F023: mov     eax, [esi+40h]
0x72F026: cmp     eax, [edi+40h]
0x72F029: jnz     short loc_72F009
0x72F02B: push    ebx
0x72F02C: push    ebp
0x72F02D: xor     ebp, ebp
0x72F02F: cmp     eax, ebp
0x72F031: mov     [esp+18h+var_8], ebp
0x72F035: ja      short loc_72F049
0x72F037: pop     ebp
0x72F038: pop     ebx
0x72F039: pop     edi
0x72F03A: mov     al, 1
0x72F03C: pop     esi
0x72F03D: add     esp, 8
0x72F040: retn    4
0x72F043: mov     edi, [esp+18h+a2]
0x72F047: mov     esi, ecx
0x72F049: mov     esi, [esi+44h]
0x72F04C: mov     edi, [edi+44h]
0x72F04F: add     esi, ebp
0x72F051: add     edi, ebp
0x72F053: push    edi
0x72F054: mov     ecx, esi
0x72F056: call    sub_718B20
0x72F05B: test    al, al
0x72F05D: jnz     short loc_72F0DB
0x72F05F: lea     ecx, [edi+34h]
0x72F062: push    ecx
0x72F063: lea     ecx, [esi+34h]
0x72F066: call    sub_72A0A0
0x72F06B: test    al, al
0x72F06D: jz      short loc_72F0DB
0x72F06F: movzx   eax, word ptr [esi+48h]
0x72F073: cmp     ax, [edi+48h]
0x72F077: jnz     short loc_72F0DB
0x72F079: movzx   ebx, ax
0x72F07C: xor     edx, edx
0x72F07E: test    ebx, ebx
0x72F080: jbe     short loc_72F0B4
0x72F082: mov     esi, [esi+44h]
0x72F085: mov     ecx, [edi+44h]
0x72F088: lea     edi, [esi+4]
0x72F08B: sub     esi, ecx
0x72F08D: lea     ecx, [ecx+0]
0x72F090: mov     ax, [esi+ecx]
0x72F094: cmp     ax, [ecx]
0x72F097: jnz     short loc_72F0DB
0x72F099: fld     dword ptr [edi]
0x72F09B: fld     dword ptr [ecx+4]
0x72F09E: fucompp
0x72F0A0: fnstsw  ax
0x72F0A2: test    ah, 44h
0x72F0A5: jp      short loc_72F0DB
0x72F0A7: add     edx, 1
0x72F0AA: add     edi, 8
0x72F0AD: add     ecx, 8
0x72F0B0: cmp     edx, ebx
0x72F0B2: jb      short loc_72F090
0x72F0B4: mov     eax, [esp+18h+var_8]
0x72F0B8: mov     ecx, [esp+18h+var_4]
0x72F0BC: add     eax, 1
0x72F0BF: add     ebp, 4Ch ; 'L'
0x72F0C2: cmp     eax, [ecx+40h]
0x72F0C5: mov     [esp+18h+var_8], eax
0x72F0C9: jb      loc_72F043
0x72F0CF: pop     ebp
0x72F0D0: pop     ebx
0x72F0D1: pop     edi
0x72F0D2: mov     al, 1
0x72F0D4: pop     esi
0x72F0D5: add     esp, 8
0x72F0D8: retn    4
0x72F0DB: pop     ebp
0x72F0DC: pop     ebx
0x72F0DD: pop     edi
0x72F0DE: xor     al, al
0x72F0E0: pop     esi
0x72F0E1: add     esp, 8
0x72F0E4: retn    4
