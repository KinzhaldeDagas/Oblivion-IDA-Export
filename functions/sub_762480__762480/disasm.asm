0x762480: sub     esp, 450h
0x762486: mov     eax, ds:0B30AACh
0x76248B: xor     eax, esp
0x76248D: mov     [esp+450h+var_4], eax
0x762494: push    esi
0x762495: push    edi
0x762496: push    44Ch
0x76249B: mov     esi, ecx
0x76249D: lea     eax, [esp+45Ch+var_450]
0x7624A1: push    0
0x7624A3: lea     edi, [esi+3BCh]
0x7624A9: push    eax
0x7624AA: mov     byte ptr [edi], 0
0x7624AD: call    __memset
0x7624B2: mov     eax, ds:0B42154h
0x7624B7: mov     ecx, [eax]
0x7624B9: add     esp, 0Ch
0x7624BC: lea     edx, [esp+458h+var_450]
0x7624C0: push    edx
0x7624C1: mov     edx, [esi+5BCh]
0x7624C7: push    0
0x7624C9: push    edx
0x7624CA: push    eax
0x7624CB: mov     eax, [ecx+14h]
0x7624CE: call    eax
0x7624D0: test    eax, eax
0x7624D2: jl      short loc_762529
0x7624D4: mov     eax, [esi+5C0h]
0x7624DA: sub     eax, 1
0x7624DD: push    ebx
0x7624DE: jz      short loc_7624FF
0x7624E0: sub     eax, 1
0x7624E3: jz      short loc_7624F8
0x7624E5: sub     eax, 1
0x7624E8: jz      short loc_7624F1
0x7624EA: mov     ebx, offset asc_A8857C; "???"
0x7624EF: jmp     short loc_762504
0x7624F1: mov     ebx, offset unk_A88578
0x7624F6: jmp     short loc_762504
0x7624F8: mov     ebx, offset off_A3CEB0
0x7624FD: jmp     short loc_762504
0x7624FF: mov     ebx, offset off_A88574
0x762504: mov     ecx, esi
0x762506: call    sub_761C50
0x76250B: push    eax
0x76250C: push    ebx
0x76250D: lea     ecx, [esp+464h+ArgList]
0x762514: push    ecx; ArgList
0x762515: push    offset aSSS_8; "%s (%s-%s)"
0x76251A: push    200h; SizeInBytes
0x76251F: push    edi; DstBuf
0x762520: call    sub_6C5D40
0x762525: add     esp, 18h
0x762528: pop     ebx
0x762529: mov     ecx, [esp+458h+var_4]
0x762530: mov     eax, edi
0x762532: pop     edi
0x762533: pop     esi
0x762534: xor     ecx, esp
0x762536: call    @__security_check_cookie@4; __security_check_cookie(x)
0x76253B: add     esp, 450h
0x762541: retn
