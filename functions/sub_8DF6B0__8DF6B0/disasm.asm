0x8DF6B0: push    ebp
0x8DF6B1: mov     ebp, esp
0x8DF6B3: and     esp, 0FFFFFFF0h
0x8DF6B6: mov     eax, 3074h
0x8DF6BB: call    __alloca_probe
0x8DF6C0: push    ebx
0x8DF6C1: mov     ebx, [ebp+arg_0]
0x8DF6C4: push    esi
0x8DF6C5: push    edi
0x8DF6C6: lea     edi, [ecx+0C0h]
0x8DF6CC: mov     ecx, [ebx+8]
0x8DF6CF: lea     eax, [esp+3080h+var_3074]
0x8DF6D3: push    eax; int
0x8DF6D4: push    ecx; int
0x8DF6D5: mov     ecx, edi; lpCriticalSection
0x8DF6D7: mov     [esp+3088h+lpCriticalSection], edi
0x8DF6DB: call    sub_926090
0x8DF6E0: test    eax, eax
0x8DF6E2: jnz     loc_8DF9DF
0x8DF6E8: jmp     short def_8DF6FA; jumptable 008DF6FA default case, cases 1-3
0x8DF6F0: movzx   eax, byte ptr [esp+3080h+var_3074]; jumptable 008DF6FA default case, cases 1-3
0x8DF6F5: cmp     eax, 6; switch 7 cases
0x8DF6F8: ja      short def_8DF6FA; jumptable 008DF6FA default case, cases 1-3
0x8DF6FA: jmp     ds:jpt_8DF6FA[eax*4]; switch jump
0x8DF701: mov     eax, [ebx]; jumptable 008DF6FA case 0
0x8DF703: movzx   edx, word ptr [esp+3080h+var_3074+2]
0x8DF708: mov     ecx, [eax+38h]
0x8DF70B: mov     esi, [ecx+edx*4]
0x8DF70E: lea     ebx, [eax+160h]
0x8DF714: mov     eax, [esi+60h]
0x8DF717: xor     edi, edi
0x8DF719: test    eax, eax
0x8DF71B: jle     short loc_8DF738
0x8DF71D: lea     ecx, [ecx+0]
0x8DF720: mov     edx, [esi+5Ch]
0x8DF723: mov     ecx, [edx+edi*4]
0x8DF726: test    ecx, ecx
0x8DF728: jz      short loc_8DF730
0x8DF72A: mov     eax, [ecx]
0x8DF72C: push    ebx
0x8DF72D: call    dword ptr [eax+8]
0x8DF730: mov     eax, [esi+60h]
0x8DF733: inc     edi
0x8DF734: cmp     edi, eax
0x8DF736: jl      short loc_8DF720
0x8DF738: mov     eax, [esi+0Ch]
0x8DF73B: test    eax, eax
0x8DF73D: jnz     loc_8DF7EA
0x8DF743: mov     edx, large fs:2Ch
0x8DF74A: mov     ecx, ds:0BA9DE4h
0x8DF750: mov     eax, [edx+ecx*4]
0x8DF753: mov     edi, [eax+1A4h]
0x8DF759: cmp     edi, [eax+1A8h]
0x8DF75F: jnb     short loc_8DF785
0x8DF761: mov     edi, eax
0x8DF763: mov     ecx, [edi+1A4h]
0x8DF769: mov     dword ptr [ecx], offset aTtsingleobj; "TtSingleObj"
0x8DF76F: rdtsc
0x8DF771: mov     [esp+3080h+var_305C], eax
0x8DF775: mov     edx, [esp+3080h+var_305C]
0x8DF779: mov     [ecx+4], edx
0x8DF77C: add     ecx, 0Ch
0x8DF77F: mov     [edi+1A4h], ecx
0x8DF785: mov     edi, [esi+38h]
0x8DF788: dec     edi
0x8DF789: js      short loc_8DF7A6
0x8DF78B: jmp     short loc_8DF790
0x8DF790: mov     eax, [esi+34h]
0x8DF793: mov     ecx, [eax+edi*4]
0x8DF796: mov     ecx, [ecx+50h]
0x8DF799: mov     edx, [ecx]
0x8DF79B: lea     eax, [ebx+30h]
0x8DF79E: push    eax
0x8DF79F: push    ebx
0x8DF7A0: call    dword ptr [edx+10h]
0x8DF7A3: dec     edi
0x8DF7A4: jns     short loc_8DF790
0x8DF7A6: mov     edx, large fs:2Ch
0x8DF7AD: mov     ecx, ds:0BA9DE4h
0x8DF7B3: mov     eax, [edx+ecx*4]
0x8DF7B6: mov     esi, [eax+1A4h]
0x8DF7BC: cmp     esi, [eax+1A8h]
0x8DF7C2: jnb     short loc_8DF807
0x8DF7C4: mov     esi, eax
0x8DF7C6: mov     ecx, [esi+1A4h]
0x8DF7CC: mov     dword ptr [ecx], offset aEt; "Et"
0x8DF7D2: rdtsc
0x8DF7D4: mov     [esp+3080h+var_3058], eax
0x8DF7D8: mov     eax, [esp+3080h+var_3058]
0x8DF7DC: mov     [ecx+4], eax
0x8DF7DF: add     ecx, 0Ch
0x8DF7E2: mov     [esi+1A4h], ecx
0x8DF7E8: jmp     short loc_8DF807
0x8DF7EA: mov     ecx, [esi+38h]
0x8DF7ED: mov     edx, [esi+34h]
0x8DF7F0: mov     eax, [ebp+arg_0]
0x8DF7F3: push    ecx
0x8DF7F4: push    edx
0x8DF7F5: push    esi
0x8DF7F6: add     eax, 38h ; '8'
0x8DF7F9: push    eax
0x8DF7FA: lea     ecx, [ebx+10h]
0x8DF7FD: push    ecx
0x8DF7FE: push    ebx
0x8DF7FF: call    sub_924000
0x8DF804: add     esp, 18h
0x8DF807: mov     eax, [ebp+arg_0]
0x8DF80A: mov     ecx, [eax+8]
0x8DF80D: lea     edx, [esp+3080h+var_3074]
0x8DF811: push    edx; int
0x8DF812: push    ecx; int
0x8DF813: mov     ecx, [esp+3088h+lpCriticalSection]; lpCriticalSection
0x8DF817: push    0; int
0x8DF819: mov     byte ptr [esp+308Ch+var_3074], 4
0x8DF81E: call    sub_926510
0x8DF823: mov     ebx, [ebp+arg_0]
0x8DF826: mov     edi, [esp+3080h+lpCriticalSection]
0x8DF82A: jmp     def_8DF6FA; jumptable 008DF6FA default case, cases 1-3
0x8DF82F: mov     eax, [ebx]; jumptable 008DF6FA case 4
0x8DF831: movzx   edx, word ptr [esp+3080h+var_3074+2]
0x8DF836: mov     ecx, [eax+38h]
0x8DF839: mov     esi, [ecx+edx*4]
0x8DF83C: mov     ecx, [ebx+4]
0x8DF83F: lea     edx, [ecx+180h]
0x8DF845: push    edx; lpCriticalSection
0x8DF846: mov     edx, [esi+34h]
0x8DF849: push    eax; int
0x8DF84A: mov     eax, [esi+38h]
0x8DF84D: push    eax; int
0x8DF84E: push    edx; int
0x8DF84F: call    sub_8D4590
0x8DF854: mov     esi, [esi+48h]
0x8DF857: test    esi, esi
0x8DF859: jle     short loc_8DF883
0x8DF85B: mov     ecx, [ebx+8]
0x8DF85E: lea     eax, [esp+3080h+var_3074]
0x8DF862: push    eax; int
0x8DF863: push    ecx; int
0x8DF864: push    1; int
0x8DF866: mov     ecx, edi; lpCriticalSection
0x8DF868: mov     byte ptr [esp+308Ch+var_3074], 6
0x8DF86D: mov     [esp+308Ch+var_3070], 0
0x8DF875: mov     [esp+308Ch+var_306C], esi
0x8DF879: call    sub_926510
0x8DF87E: jmp     def_8DF6FA; jumptable 008DF6FA default case, cases 1-3
0x8DF883: mov     eax, [ebx+8]
0x8DF886: lea     edx, [esp+3080h+var_3074]
0x8DF88A: push    edx; int
0x8DF88B: push    eax; int
0x8DF88C: push    1; int
0x8DF88E: mov     ecx, edi; lpCriticalSection
0x8DF890: mov     byte ptr [esp+308Ch+var_3074], 5
0x8DF895: call    sub_926510
0x8DF89A: jmp     def_8DF6FA; jumptable 008DF6FA default case, cases 1-3
0x8DF89F: mov     edx, [ebx]; jumptable 008DF6FA case 6
0x8DF8A1: movzx   ecx, word ptr [esp+3080h+var_3074+2]
0x8DF8A6: mov     eax, [edx+38h]
0x8DF8A9: mov     ecx, [eax+ecx*4]
0x8DF8AC: mov     edi, ds:0BA9DE4h
0x8DF8B2: mov     eax, large fs:2Ch
0x8DF8B8: mov     edx, [eax+edi*4]
0x8DF8BB: mov     esi, [edx+1A4h]
0x8DF8C1: cmp     esi, [edx+1A8h]
0x8DF8C7: mov     [esp+3080h+var_3054], ecx
0x8DF8CB: jnb     short loc_8DF900
0x8DF8CD: mov     eax, edx
0x8DF8CF: mov     esi, [eax+1A4h]
0x8DF8D5: mov     dword ptr [esi], offset aTtnarrowphase; "TtNarrowPhase"
0x8DF8DB: rdtsc
0x8DF8DD: mov     [esp+3080h+var_3064], eax
0x8DF8E1: mov     edx, [esp+3080h+var_3064]
0x8DF8E5: mov     eax, large fs:2Ch
0x8DF8EB: mov     eax, [eax+edi*4]
0x8DF8EE: mov     [esi+4], edx
0x8DF8F1: add     esi, 0Ch
0x8DF8F4: mov     [eax+1A4h], esi
0x8DF8FA: mov     eax, large fs:2Ch
0x8DF900: mov     edx, [esp+3080h+var_306C]
0x8DF904: dec     edx
0x8DF905: mov     [esp+3080h+var_1C], 7F7FFFFFh
0x8DF910: mov     [esp+3080h+var_306C], edx
0x8DF914: js      short loc_8DF987
0x8DF916: mov     eax, [esp+3080h+var_3070]
0x8DF91A: lea     ebx, [ebx+0]
0x8DF920: mov     edx, [ecx+44h]
0x8DF923: mov     esi, [edx+eax*4]
0x8DF926: mov     edx, [ecx+48h]
0x8DF929: dec     edx
0x8DF92A: cmp     eax, edx
0x8DF92C: jge     short loc_8DF934
0x8DF92E: movzx   edi, word ptr [ecx+5Ah]
0x8DF932: jmp     short loc_8DF937
0x8DF934: mov     edi, [ecx+54h]
0x8DF937: add     edi, esi
0x8DF939: cmp     esi, edi
0x8DF93B: jnb     short loc_8DF96B
0x8DF93D: add     ebx, 0Ch
0x8DF940: mov     eax, [ebp+arg_0]
0x8DF943: mov     ecx, [eax+4]
0x8DF946: push    ecx
0x8DF947: lea     edx, [esp+3084h+var_3050]
0x8DF94B: push    edx
0x8DF94C: push    ebx
0x8DF94D: push    esi
0x8DF94E: call    sub_8DF5C0
0x8DF953: movzx   eax, byte ptr [esi+3]
0x8DF957: add     esi, eax
0x8DF959: add     esp, 10h
0x8DF95C: cmp     esi, edi
0x8DF95E: jb      short loc_8DF940
0x8DF960: mov     eax, [esp+3080h+var_3070]
0x8DF964: mov     ecx, [esp+3080h+var_3054]
0x8DF968: mov     ebx, [ebp+arg_0]
0x8DF96B: mov     edx, [esp+3080h+var_306C]
0x8DF96F: inc     eax
0x8DF970: dec     edx
0x8DF971: mov     [esp+3080h+var_3070], eax
0x8DF975: mov     [esp+3080h+var_306C], edx
0x8DF979: jns     short loc_8DF920
0x8DF97B: mov     edi, ds:0BA9DE4h
0x8DF981: mov     eax, large fs:2Ch
0x8DF987: mov     ecx, [eax+edi*4]
0x8DF98A: mov     edx, [ecx+1A4h]
0x8DF990: cmp     edx, [ecx+1A8h]
0x8DF996: jnb     short loc_8DF9BC
0x8DF998: mov     edi, ecx
0x8DF99A: mov     ecx, [edi+1A4h]
0x8DF9A0: mov     dword ptr [ecx], offset aEt; "Et"
0x8DF9A6: rdtsc
0x8DF9A8: mov     [esp+3080h+var_3060], eax
0x8DF9AC: mov     eax, [esp+3080h+var_3060]
0x8DF9B0: mov     [ecx+4], eax
0x8DF9B3: add     ecx, 0Ch
0x8DF9B6: mov     [edi+1A4h], ecx
0x8DF9BC: mov     edi, [esp+3080h+lpCriticalSection]
0x8DF9C0: mov     ecx, edi; jumptable 008DF6FA case 5
0x8DF9C2: call    sub_926030
0x8DF9C7: mov     edx, [ebx+8]
0x8DF9CA: lea     ecx, [esp+3080h+var_3074]
0x8DF9CE: push    ecx; int
0x8DF9CF: push    edx; int
0x8DF9D0: mov     ecx, edi; lpCriticalSection
0x8DF9D2: call    sub_926090
0x8DF9D7: test    eax, eax
0x8DF9D9: jz      def_8DF6FA; jumptable 008DF6FA default case, cases 1-3
0x8DF9DF: mov     ecx, edi; lpCriticalSection
0x8DF9E1: call    sub_926050
0x8DF9E6: pop     edi
0x8DF9E7: pop     esi
0x8DF9E8: pop     ebx
0x8DF9E9: mov     esp, ebp
0x8DF9EB: pop     ebp
0x8DF9EC: retn    4
