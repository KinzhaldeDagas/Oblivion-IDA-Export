0x5F0410: sub     esp, 8
0x5F0413: push    ebx
0x5F0414: push    esi
0x5F0415: push    edi
0x5F0416: mov     edi, ecx
0x5F0418: mov     eax, [edi]
0x5F041A: mov     edx, [eax+380h]
0x5F0420: xor     esi, esi
0x5F0422: call    edx
0x5F0424: test    eax, eax
0x5F0426: mov     eax, [edi]
0x5F0428: mov     ecx, edi
0x5F042A: jz      short loc_5F043A
0x5F042C: mov     edx, [eax+380h]
0x5F0432: call    edx
0x5F0434: mov     esi, eax
0x5F0436: mov     ebx, edi
0x5F0438: jmp     short loc_5F046C
0x5F043A: mov     edx, [eax+388h]
0x5F0440: call    edx
0x5F0442: test    eax, eax
0x5F0444: jz      loc_5F05DF
0x5F044A: mov     eax, [edi]
0x5F044C: mov     edx, [eax+170h]
0x5F0452: mov     ecx, edi
0x5F0454: call    edx
0x5F0456: cmp     byte ptr [eax+4], 24h ; '$'
0x5F045A: jnz     short loc_5F045E
0x5F045C: mov     esi, edi
0x5F045E: mov     eax, [edi]
0x5F0460: mov     edx, [eax+388h]
0x5F0466: mov     ecx, edi
0x5F0468: call    edx
0x5F046A: mov     ebx, eax
0x5F046C: test    esi, esi
0x5F046E: jz      loc_5F05DF
0x5F0474: test    ebx, ebx
0x5F0476: jz      loc_5F05DF
0x5F047C: mov     eax, [esi]
0x5F047E: mov     edx, [eax+164h]
0x5F0484: push    ebp
0x5F0485: mov     ebp, [esi+58h]
0x5F0488: mov     ecx, esi
0x5F048A: call    edx
0x5F048C: mov     [esp+14h], eax
0x5F0490: mov     eax, [ebx]
0x5F0492: mov     edx, [eax+164h]
0x5F0498: mov     ecx, ebx
0x5F049A: call    edx
0x5F049C: mov     ecx, ds:0B333C4h; this
0x5F04A2: cmp     edi, ecx
0x5F04A4: mov     [esp+14h+var_4], eax
0x5F04A8: jnz     short loc_5F04B5
0x5F04AA: push    0; a2
0x5F04AC: call    Player_GetAnimData
0x5F04B1: mov     [esp+14h+var_4], eax
0x5F04B5: mov     eax, [esi]
0x5F04B7: mov     edx, [eax+38Ch]
0x5F04BD: push    0
0x5F04BF: mov     ecx, esi
0x5F04C1: call    edx
0x5F04C3: mov     eax, [esi+58h]
0x5F04C6: test    eax, eax
0x5F04C8: jz      short loc_5F04D1
0x5F04CA: mov     dword ptr [eax+8], 0
0x5F04D1: cmp     dword ptr [esi+58h], 0
0x5F04D5: jz      short loc_5F04E8
0x5F04D7: mov     ecx, [esi+58h]
0x5F04DA: mov     eax, [ecx]
0x5F04DC: mov     edx, [eax+2C4h]
0x5F04E2: push    0
0x5F04E4: push    0Fh
0x5F04E6: call    edx
0x5F04E8: mov     eax, [ebx]
0x5F04EA: mov     edx, [eax+384h]
0x5F04F0: push    0
0x5F04F2: mov     ecx, ebx
0x5F04F4: call    edx
0x5F04F6: test    ebp, ebp
0x5F04F8: jz      short loc_5F050E
0x5F04FA: mov     eax, [ebp+0]
0x5F04FD: mov     edx, [eax+370h]
0x5F0503: push    7Fh
0x5F0505: push    0
0x5F0507: push    0
0x5F0509: push    esi
0x5F050A: mov     ecx, ebp
0x5F050C: call    edx
0x5F050E: mov     ecx, [ebx+58h]
0x5F0511: test    ecx, ecx
0x5F0513: pop     ebp
0x5F0514: jz      short loc_5F0527
0x5F0516: mov     eax, [ecx]
0x5F0518: mov     edx, [eax+370h]
0x5F051E: push    7Fh
0x5F0520: push    0
0x5F0522: push    0
0x5F0524: push    ebx
0x5F0525: call    edx
0x5F0527: mov     eax, [esp+14h+var_8]
0x5F052B: test    eax, eax
0x5F052D: jz      short loc_5F054A
0x5F052F: mov     ecx, ds:0B3F9A8h
0x5F0535: mov     [eax+0Ch], ecx
0x5F0538: mov     edx, ds:0B3F9ACh
0x5F053E: mov     [eax+10h], edx
0x5F0541: mov     ecx, ds:0B3F9B0h
0x5F0547: mov     [eax+14h], ecx
0x5F054A: mov     eax, [esp+14h+var_4]
0x5F054E: test    eax, eax
0x5F0550: jz      short loc_5F056D
0x5F0552: mov     edx, ds:0B3F9A8h
0x5F0558: mov     [eax+0Ch], edx
0x5F055B: mov     ecx, ds:0B3F9ACh
0x5F0561: mov     [eax+10h], ecx
0x5F0564: mov     edx, ds:0B3F9B0h
0x5F056A: mov     [eax+14h], edx
0x5F056D: push    0
0x5F056F: mov     ecx, esi
0x5F0571: call    sub_5E13D0
0x5F0576: mov     eax, ds:0B333C4h
0x5F057B: cmp     ebx, eax
0x5F057D: jnz     short loc_5F058E
0x5F057F: fldz
0x5F0581: mov     ecx, esi
0x5F0583: fstp    dword ptr [eax+61Ch]
0x5F0589: mov     edi, [esi+3Ch]
0x5F058C: jmp     short loc_5F0593
0x5F058E: mov     edi, [ebx+3Ch]
0x5F0591: mov     ecx, ebx; this
0x5F0593: call    MobileObject_GetCharProxy
0x5F0598: mov     ecx, ds:0B2EB3Ch
0x5F059E: add     ecx, 1
0x5F05A1: and     ecx, 0FFFFh
0x5F05A7: mov     ds:0B2EB3Ch, ecx
0x5F05AD: jnz     short loc_5F05BA
0x5F05AF: mov     ecx, 0Ah
0x5F05B4: mov     ds:0B2EB3Ch, ecx
0x5F05BA: test    eax, eax
0x5F05BC: mov     esi, ecx
0x5F05BE: jz      short loc_5F05C8
0x5F05C0: push    esi
0x5F05C1: mov     ecx, eax
0x5F05C3: call    sub_5EA350
0x5F05C8: push    0
0x5F05CA: push    1
0x5F05CC: push    esi
0x5F05CD: push    edi
0x5F05CE: call    sub_88D0E0
0x5F05D3: add     esp, 10h
0x5F05D6: push    0
0x5F05D8: mov     ecx, ebx
0x5F05DA: call    sub_65AC20
0x5F05DF: pop     edi
0x5F05E0: pop     esi
0x5F05E1: pop     ebx
0x5F05E2: add     esp, 8
0x5F05E5: retn
