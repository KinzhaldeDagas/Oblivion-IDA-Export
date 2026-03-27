0x8775F0: push    0FFFFFFFFh
0x8775F2: push    offset SEH_879360
0x8775F7: mov     eax, large fs:0
0x8775FD: push    eax
0x8775FE: push    ecx
0x8775FF: push    ebx
0x877600: push    ebp
0x877601: push    esi
0x877602: push    edi
0x877603: mov     eax, ds:0B30AACh
0x877608: xor     eax, esp
0x87760A: push    eax
0x87760B: lea     eax, [esp+24h+var_C]
0x87760F: mov     large fs:0, eax
0x877615: mov     ebx, ecx
0x877617: mov     [esp+24h+var_10], ebx
0x87761B: mov     eax, [esp+24h+arg_8]
0x87761F: mov     edi, [eax+0Ch]
0x877622: mov     esi, ds:0B4769Ch
0x877628: push    edi
0x877629: call    sub_848E50
0x87762E: mov     edx, [ebx]
0x877630: mov     eax, [esp+24h+arg_0]
0x877634: mov     edx, [edx+0BCh]
0x87763A: push    0
0x87763C: push    edi
0x87763D: push    eax
0x87763E: mov     ecx, ebx
0x877640: call    edx
0x877642: mov     eax, [esi+24h]
0x877645: mov     ebx, [esp+24h+arg_C]
0x877649: mov     edi, [eax]
0x87764B: mov     edx, [ebx]
0x87764D: mov     eax, [edx+88h]
0x877653: push    0
0x877655: mov     ecx, ebx
0x877657: mov     [esp+28h+arg_8], edi
0x87765B: call    eax
0x87765D: mov     edi, [edi+4]
0x877660: mov     ebp, eax
0x877662: cmp     edi, ebp
0x877664: jz      short loc_87769B
0x877666: test    edi, edi
0x877668: jz      short loc_877686
0x87766A: lea     ecx, [edi+4]
0x87766D: push    ecx; lpAddend
0x87766E: call    dword ptr ds:0A2807Ch
0x877674: test    eax, eax
0x877676: jnz     short loc_877686
0x877678: test    edi, edi
0x87767A: jz      short loc_877686
0x87767C: mov     edx, [edi]
0x87767E: mov     eax, [edx]
0x877680: push    1
0x877682: mov     ecx, edi
0x877684: call    eax
0x877686: test    ebp, ebp
0x877688: mov     ecx, [esp+24h+arg_8]
0x87768C: mov     [ecx+4], ebp
0x87768F: jz      short loc_87769B
0x877691: add     ebp, 4
0x877694: push    ebp; lpAddend
0x877695: call    dword ptr ds:0A28078h
0x87769B: mov     edx, [esi+24h]
0x87769E: mov     edi, [edx+4]
0x8776A1: mov     ecx, [esp+24h+var_10]
0x8776A5: push    0
0x8776A7: push    ebx
0x8776A8: mov     [esp+2Ch+arg_8], edi
0x8776AC: call    sub_848FD0
0x8776B1: mov     edi, [edi+4]
0x8776B4: mov     ebp, eax
0x8776B6: cmp     edi, ebp
0x8776B8: jz      short loc_8776EF
0x8776BA: test    edi, edi
0x8776BC: jz      short loc_8776DA
0x8776BE: lea     eax, [edi+4]
0x8776C1: push    eax; lpAddend
0x8776C2: call    dword ptr ds:0A2807Ch
0x8776C8: test    eax, eax
0x8776CA: jnz     short loc_8776DA
0x8776CC: test    edi, edi
0x8776CE: jz      short loc_8776DA
0x8776D0: mov     edx, [edi]
0x8776D2: mov     eax, [edx]
0x8776D4: push    1
0x8776D6: mov     ecx, edi
0x8776D8: call    eax
0x8776DA: test    ebp, ebp
0x8776DC: mov     ecx, [esp+24h+arg_8]
0x8776E0: mov     [ecx+4], ebp
0x8776E3: jz      short loc_8776EF
0x8776E5: add     ebp, 4
0x8776E8: push    ebp; lpAddend
0x8776E9: call    dword ptr ds:0A28078h
0x8776EF: mov     edx, [esi+24h]
0x8776F2: mov     eax, [ebx]
0x8776F4: mov     ebp, [edx+10h]
0x8776F7: mov     edx, [eax+90h]
0x8776FD: push    0
0x8776FF: mov     ecx, ebx
0x877701: call    edx
0x877703: mov     edi, [ebp+4]
0x877706: mov     ebx, eax
0x877708: cmp     edi, ebx
0x87770A: jz      short loc_87773D
0x87770C: test    edi, edi
0x87770E: jz      short loc_87772C
0x877710: lea     eax, [edi+4]
0x877713: push    eax; lpAddend
0x877714: call    dword ptr ds:0A2807Ch
0x87771A: test    eax, eax
0x87771C: jnz     short loc_87772C
0x87771E: test    edi, edi
0x877720: jz      short loc_87772C
0x877722: mov     edx, [edi]
0x877724: mov     eax, [edx]
0x877726: push    1
0x877728: mov     ecx, edi
0x87772A: call    eax
0x87772C: test    ebx, ebx
0x87772E: mov     [ebp+4], ebx
0x877731: jz      short loc_87773D
0x877733: add     ebx, 4
0x877736: push    ebx; lpAddend
0x877737: call    dword ptr ds:0A28078h
0x87773D: mov     ecx, [esi+24h]
0x877740: mov     edi, [ecx+14h]
0x877743: mov     eax, ds:0B43110h
0x877748: mov     ebx, [edi+4]
0x87774B: add     edi, 4
0x87774E: cmp     ebx, eax
0x877750: mov     ebp, eax
0x877752: jz      short loc_877784
0x877754: test    ebx, ebx
0x877756: jz      short loc_877774
0x877758: lea     edx, [ebx+4]
0x87775B: push    edx; lpAddend
0x87775C: call    dword ptr ds:0A2807Ch
0x877762: test    eax, eax
0x877764: jnz     short loc_877774
0x877766: test    ebx, ebx
0x877768: jz      short loc_877774
0x87776A: mov     eax, [ebx]
0x87776C: mov     edx, [eax]
0x87776E: push    1
0x877770: mov     ecx, ebx
0x877772: call    edx
0x877774: test    ebp, ebp
0x877776: mov     [edi], ebp
0x877778: jz      short loc_877784
0x87777A: add     ebp, 4
0x87777D: push    ebp; lpAddend
0x87777E: call    dword ptr ds:0A28078h
0x877784: mov     ecx, [esi+24h]
0x877787: mov     edi, [ecx+18h]
0x87778A: mov     eax, ds:0B43108h
0x87778F: mov     ebx, [edi+4]
0x877792: add     edi, 4
0x877795: cmp     ebx, eax
0x877797: mov     ebp, eax
0x877799: jz      short loc_8777CB
0x87779B: test    ebx, ebx
0x87779D: jz      short loc_8777BB
0x87779F: lea     edx, [ebx+4]
0x8777A2: push    edx; lpAddend
0x8777A3: call    dword ptr ds:0A2807Ch
0x8777A9: test    eax, eax
0x8777AB: jnz     short loc_8777BB
0x8777AD: test    ebx, ebx
0x8777AF: jz      short loc_8777BB
0x8777B1: mov     eax, [ebx]
0x8777B3: mov     edx, [eax]
0x8777B5: push    1
0x8777B7: mov     ecx, ebx
0x8777B9: call    edx
0x8777BB: test    ebp, ebp
0x8777BD: mov     [edi], ebp
0x8777BF: jz      short loc_8777CB
0x8777C1: add     ebp, 4
0x8777C4: push    ebp; lpAddend
0x8777C5: call    dword ptr ds:0A28078h
0x8777CB: mov     eax, [esi+24h]
0x8777CE: mov     ebx, [eax+1Ch]
0x8777D1: mov     eax, ds:0B4310Ch
0x8777D6: mov     edi, [ebx+4]
0x8777D9: cmp     edi, eax
0x8777DB: mov     ebp, eax
0x8777DD: jz      short loc_877810
0x8777DF: test    edi, edi
0x8777E1: jz      short loc_8777FF
0x8777E3: lea     ecx, [edi+4]
0x8777E6: push    ecx; lpAddend
0x8777E7: call    dword ptr ds:0A2807Ch
0x8777ED: test    eax, eax
0x8777EF: jnz     short loc_8777FF
0x8777F1: test    edi, edi
0x8777F3: jz      short loc_8777FF
0x8777F5: mov     edx, [edi]
0x8777F7: mov     eax, [edx]
0x8777F9: push    1
0x8777FB: mov     ecx, edi
0x8777FD: call    eax
0x8777FF: test    ebp, ebp
0x877801: mov     [ebx+4], ebp
0x877804: jz      short loc_877810
0x877806: add     ebp, 4
0x877809: push    ebp; lpAddend
0x87780A: call    dword ptr ds:0A28078h
0x877810: mov     ebx, 1
0x877815: add     [esi+60h], ebx
0x877818: mov     [esp+24h+arg_8], esi
0x87781C: mov     edi, [esp+24h+var_10]
0x877820: mov     edx, [edi+38h]
0x877823: lea     ecx, [esp+24h+arg_8]
0x877827: push    ecx
0x877828: push    edx
0x877829: lea     ecx, [edi+40h]
0x87782C: mov     [esp+2Ch+var_4], 0
0x877834: call    sub_76CE40
0x877839: or      eax, 0FFFFFFFFh
0x87783C: add     [esi+60h], eax
0x87783F: mov     [esp+24h+var_4], eax
0x877843: jnz     short loc_87784C
0x877845: mov     ecx, esi
0x877847: call    sub_7604D0
0x87784C: add     [edi+38h], ebx
0x87784F: mov     ecx, [esp+24h+var_C]
0x877853: mov     large fs:0, ecx
0x87785A: pop     ecx
0x87785B: pop     edi
0x87785C: pop     esi
0x87785D: pop     ebp
0x87785E: pop     ebx
0x87785F: add     esp, 10h
0x877862: retn    10h
