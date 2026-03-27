0x632370: push    ebx
0x632371: mov     ebx, [esp+4+arg_0]
0x632375: push    ebp
0x632376: mov     ebp, [esp+8+arg_4]
0x63237A: push    esi
0x63237B: push    edi
0x63237C: push    ebp
0x63237D: push    ebx
0x63237E: mov     edi, ecx
0x632380: call    sub_650F50
0x632385: mov     ecx, ds:0B33B00h
0x63238B: movzx   esi, ax
0x63238E: movzx   eax, si
0x632391: mov     [esp+10h+arg_4], esi
0x632395: mov     [esp+10h+arg_0], eax
0x632399: call    sub_45A170
0x63239E: test    al, al
0x6323A0: jz      short loc_6323A5
0x6323A2: add     esi, 6
0x6323A5: mov     ecx, ds:0B33B00h
0x6323AB: mov     al, [ecx+7Ch]
0x6323AE: add     esi, 36h ; '6'
0x6323B1: cmp     al, 32h ; '2'
0x6323B3: jb      short loc_6323B8
0x6323B5: add     esi, 4
0x6323B8: add     esi, 2Dh ; '-'
0x6323BB: cmp     al, 3Fh ; '?'
0x6323BD: jb      short loc_6323C2
0x6323BF: add     esi, 5
0x6323C2: cmp     al, 42h ; 'B'
0x6323C4: jb      short loc_6323C9
0x6323C6: add     esi, 5
0x6323C9: mov     eax, [edi+18Ch]
0x6323CF: add     esi, 0Eh
0x6323D2: xor     ecx, ecx
0x6323D4: test    eax, eax
0x6323D6: jz      short loc_6323E7
0x6323D8: cmp     dword ptr [eax], 0
0x6323DB: jz      short loc_6323E0
0x6323DD: add     ecx, 1
0x6323E0: mov     eax, [eax+4]
0x6323E3: test    eax, eax
0x6323E5: jnz     short loc_6323D8
0x6323E7: imul    ecx, 0Dh
0x6323EA: add     esi, ecx
0x6323EC: test    ebx, 2000000h
0x6323F2: mov     [esp+10h+arg_4], esi
0x6323F6: jz      short loc_6323FF
0x6323F8: add     esi, 1
0x6323FB: mov     [esp+10h+arg_4], esi
0x6323FF: push    ebp
0x632400: mov     ecx, edi
0x632402: call    sub_651AD0
0x632407: mov     ecx, ds:0B33B00h
0x63240D: add     ax, 2
0x632411: add     word ptr [esp+10h+arg_4], ax
0x632416: mov     al, [ecx+7Ch]
0x632419: cmp     al, 5Ah ; 'Z'
0x63241B: jb      short loc_632422
0x63241D: add     [esp+10h+arg_4], 1Eh
0x632422: cmp     al, 5Dh ; ']'
0x632424: jb      short loc_63242B
0x632426: add     [esp+10h+arg_4], 8
0x63242B: cmp     al, 6Ah ; 'j'
0x63242D: jb      short loc_632434
0x63242F: add     [esp+10h+arg_4], 4
0x632434: cmp     al, 71h ; 'q'
0x632436: jb      short loc_63243D
0x632438: add     [esp+10h+arg_4], 18h
0x63243D: cmp     byte ptr ds:0B05BACh, 0
0x632444: jz      loc_6324D5
0x63244A: mov     esi, [ecx+84h]
0x632450: test    esi, esi
0x632452: jz      short loc_6324A4
0x632454: mov     edx, [esi]
0x632456: push    edx; a1
0x632457: call    TESForm_LookupByFormID
0x63245C: mov     ecx, [esi+5]
0x63245F: mov     edx, [eax]
0x632461: add     esp, 4
0x632464: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x632469: push    2AEEh
0x63246E: push    ecx
0x63246F: mov     ecx, eax
0x632471: mov     eax, [edx+0D4h]
0x632477: call    eax
0x632479: mov     ecx, [esi]
0x63247B: mov     si, word ptr [esp+1Ch+arg_4]
0x632480: movzx   edx, word ptr [esp+1Ch+arg_0]
0x632485: push    eax
0x632486: movzx   eax, si
0x632489: push    ecx
0x63248A: sub     eax, edx
0x63248C: push    eax; ArgList
0x63248D: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x632492: call    sub_40FEC0
0x632497: add     esp, 1Ch
0x63249A: pop     edi
0x63249B: mov     ax, si
0x63249E: pop     esi
0x63249F: pop     ebp
0x6324A0: pop     ebx
0x6324A1: retn    8
0x6324A4: mov     si, word ptr [esp+10h+arg_4]
0x6324A9: movzx   ecx, word ptr [esp+10h+arg_0]
0x6324AE: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x6324B3: movzx   edx, si
0x6324B6: push    2AEEh
0x6324BB: sub     edx, ecx
0x6324BD: push    edx; ArgList
0x6324BE: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x6324C3: call    sub_40FEC0
0x6324C8: add     esp, 10h
0x6324CB: pop     edi
0x6324CC: mov     ax, si
0x6324CF: pop     esi
0x6324D0: pop     ebp
0x6324D1: pop     ebx
0x6324D2: retn    8
0x6324D5: mov     ax, word ptr [esp+10h+arg_4]
0x6324DA: pop     edi
0x6324DB: pop     esi
0x6324DC: pop     ebp
0x6324DD: pop     ebx
0x6324DE: retn    8
