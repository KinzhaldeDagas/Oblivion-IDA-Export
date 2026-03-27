0x89B630: sub     esp, 834h
0x89B636: push    ebp
0x89B637: mov     ebp, ecx
0x89B639: mov     eax, [ebp+88h]
0x89B63F: test    eax, eax
0x89B641: mov     [esp+838h+var_830], ebp
0x89B645: jz      short loc_89B687
0x89B647: mov     eax, [esp+838h+arg_0]
0x89B64E: mov     cl, byte ptr [esp+838h+arg_4]
0x89B655: mov     dl, [esp+838h+arg_8]
0x89B65C: mov     [esp+838h+var_824], eax
0x89B660: lea     eax, [esp+838h+var_828]
0x89B664: mov     [esp+838h+var_820], cl
0x89B668: mov     ecx, [ebp+80h]
0x89B66E: push    eax
0x89B66F: mov     byte ptr [esp+83Ch+var_828], 12h
0x89B674: mov     [esp+83Ch+var_820+1], dl
0x89B678: call    sub_8D8830
0x89B67D: pop     ebp
0x89B67E: add     esp, 834h
0x89B684: retn    0Ch
0x89B687: push    ebx
0x89B688: mov     ebx, ds:0BA9DE4h
0x89B68E: push    esi
0x89B68F: push    edi
0x89B690: mov     edi, large fs:2Ch
0x89B697: mov     eax, [edi+ebx*4]
0x89B69A: mov     ecx, [eax+1A4h]
0x89B6A0: cmp     ecx, [eax+1A8h]
0x89B6A6: jnb     short loc_89B6D3
0x89B6A8: mov     esi, eax
0x89B6AA: mov     ecx, [esi+1A4h]
0x89B6B0: mov     dword ptr [ecx], offset aLtupdatefilter; "LtUpdateFilterOnEntity"
0x89B6B6: mov     dword ptr [ecx+0Ch], offset aInit; "init"
0x89B6BD: rdtsc
0x89B6BF: mov     [esp+844h+var_834], eax
0x89B6C3: mov     edx, [esp+844h+var_834]
0x89B6C7: mov     [ecx+4], edx
0x89B6CA: add     ecx, 10h
0x89B6CD: mov     [esi+1A4h], ecx
0x89B6D3: mov     ecx, [ebp+88h]
0x89B6D9: lea     eax, [esp+844h+var_80C]
0x89B6DD: inc     ecx
0x89B6DE: mov     [esp+844h+var_818], eax
0x89B6E2: mov     eax, [esp+844h+arg_4]
0x89B6E9: test    eax, eax
0x89B6EB: mov     [ebp+88h], ecx
0x89B6F1: mov     ebp, [esp+844h+arg_0]
0x89B6F8: mov     [esp+844h+var_814], 0
0x89B700: mov     [esp+844h+var_810], 80000080h
0x89B708: jnz     loc_89B907
0x89B70E: mov     eax, [edi+ebx*4]
0x89B711: mov     ecx, [eax+1A4h]
0x89B717: cmp     ecx, [eax+1A8h]
0x89B71D: jnb     short loc_89B743
0x89B71F: mov     esi, eax
0x89B721: mov     ecx, [esi+1A4h]
0x89B727: mov     dword ptr [ecx], offset aStbroadphase_1; "Stbroadphase"
0x89B72D: rdtsc
0x89B72F: mov     [esp+844h+var_834], eax
0x89B733: mov     edx, [esp+844h+var_834]
0x89B737: mov     [ecx+4], edx
0x89B73A: add     ecx, 0Ch
0x89B73D: mov     [esi+1A4h], ecx
0x89B743: mov     eax, [esp+844h+var_830]
0x89B747: mov     ecx, [eax+64h]
0x89B74A: mov     edx, [ecx]
0x89B74C: lea     eax, [esp+844h+var_818]
0x89B750: push    eax
0x89B751: lea     eax, [ebp+28h]
0x89B754: push    eax
0x89B755: call    dword ptr [edx+2Ch]
0x89B758: mov     eax, [edi+ebx*4]
0x89B75B: mov     ecx, [eax+1A4h]
0x89B761: cmp     ecx, [eax+1A8h]
0x89B767: jnb     short loc_89B78D
0x89B769: mov     esi, eax
0x89B76B: mov     ecx, [esi+1A4h]
0x89B771: mov     dword ptr [ecx], offset aStphantom; "Stphantom"
0x89B777: rdtsc
0x89B779: mov     [esp+844h+var_834], eax
0x89B77D: mov     edx, [esp+844h+var_834]
0x89B781: mov     [ecx+4], edx
0x89B784: add     ecx, 0Ch
0x89B787: mov     [esi+1A4h], ecx
0x89B78D: mov     eax, [esp+844h+var_814]
0x89B791: xor     ebx, ebx
0x89B793: test    eax, eax
0x89B795: jle     short loc_89B816
0x89B797: jmp     short loc_89B7A0
0x89B799: align 10h
0x89B7A0: mov     eax, [esp+844h+var_818]
0x89B7A4: mov     ecx, [eax+ebx*8+4]
0x89B7A8: movsx   eax, byte ptr [ecx+5]
0x89B7AC: add     eax, ecx
0x89B7AE: cmp     byte ptr [eax+18h], 2
0x89B7B2: jnz     short loc_89B80D
0x89B7B4: mov     edi, [eax+10h]
0x89B7B7: add     edi, eax
0x89B7B9: jz      short loc_89B806
0x89B7BB: mov     ecx, [esp+844h+var_830]
0x89B7BF: mov     edx, [ecx+78h]
0x89B7C2: push    edx
0x89B7C3: lea     esi, [ebp+14h]
0x89B7C6: call    sub_898760
0x89B7CB: mov     eax, dword ptr [esp+848h+arg_8]
0x89B7D2: add     esp, 4
0x89B7D5: test    eax, eax
0x89B7D7: jz      short loc_89B7E0
0x89B7D9: mov     eax, [edi]
0x89B7DB: mov     ecx, edi
0x89B7DD: call    dword ptr [eax+28h]
0x89B7E0: mov     eax, [esp+844h+var_814]
0x89B7E4: mov     ecx, [esp+844h+var_818]
0x89B7E8: dec     eax
0x89B7E9: mov     [esp+844h+var_814], eax
0x89B7ED: mov     edx, ecx
0x89B7EF: mov     eax, [edx+eax*8]
0x89B7F2: mov     [ecx+ebx*8], eax
0x89B7F5: mov     ecx, [esp+844h+var_814]
0x89B7F9: mov     edx, [edx+ecx*8+4]
0x89B7FD: mov     eax, [esp+844h+var_818]
0x89B801: mov     [eax+ebx*8+4], edx
0x89B805: dec     ebx
0x89B806: mov     edi, large fs:2Ch
0x89B80D: mov     eax, [esp+844h+var_814]
0x89B811: inc     ebx
0x89B812: cmp     ebx, eax
0x89B814: jl      short loc_89B7A0
0x89B816: lea     ecx, [esp+844h+var_400]
0x89B81D: mov     [esp+844h+var_40C], ecx
0x89B824: mov     ecx, [ebp+3Ch]
0x89B827: xor     esi, esi
0x89B829: cmp     ecx, esi
0x89B82B: mov     eax, 80000080h
0x89B830: mov     [esp+844h+var_408], esi
0x89B837: mov     [esp+844h+var_404], eax
0x89B83E: jle     short loc_89B8B0
0x89B840: jmp     short loc_89B850
0x89B842: mov     eax, [esp+844h+var_404]
0x89B849: lea     esp, [esp+0]
0x89B850: mov     ecx, [esp+844h+var_408]
0x89B857: and     eax, 3FFFFFFFh
0x89B85C: cmp     ecx, eax
0x89B85E: jnz     short loc_89B872
0x89B860: lea     edx, [esp+844h+var_40C]
0x89B867: push    8
0x89B869: push    edx
0x89B86A: call    sub_8A6EE0
0x89B86F: add     esp, 8
0x89B872: mov     ecx, [esp+844h+var_408]
0x89B879: mov     eax, [esp+844h+var_40C]
0x89B880: lea     eax, [eax+ecx*8]
0x89B883: inc     ecx
0x89B884: mov     [esp+844h+var_408], ecx
0x89B88B: mov     ecx, [ebp+38h]
0x89B88E: mov     edx, [ecx+esi*8]
0x89B891: mov     ecx, [edx+14h]
0x89B894: add     ecx, 14h
0x89B897: mov     [eax], ecx
0x89B899: mov     edx, [ebp+38h]
0x89B89C: mov     ecx, [edx+esi*8]
0x89B89F: mov     edx, [ecx+18h]
0x89B8A2: add     edx, 14h
0x89B8A5: mov     [eax+4], edx
0x89B8A8: mov     eax, [ebp+3Ch]
0x89B8AB: inc     esi
0x89B8AC: cmp     esi, eax
0x89B8AE: jl      short loc_89B842
0x89B8B0: lea     eax, [esp+844h+var_818]
0x89B8B4: push    eax
0x89B8B5: lea     ecx, [esp+848h+var_40C]
0x89B8BC: push    ecx
0x89B8BD: call    sub_8D84F0
0x89B8C2: mov     eax, [esp+84Ch+var_404]
0x89B8C9: add     esp, 8
0x89B8CC: test    eax, eax
0x89B8CE: js      short loc_89B901
0x89B8D0: mov     edx, ds:0BA9DE4h
0x89B8D6: mov     ecx, [edi+edx*4]
0x89B8D9: mov     ecx, [ecx+19Ch]
0x89B8DF: test    ecx, ecx
0x89B8E1: jnz     short loc_89B8E9
0x89B8E3: mov     ecx, ds:0BA7D9Ch
0x89B8E9: mov     edx, [esp+844h+var_40C]
0x89B8F0: and     eax, 3FFFFFFFh
0x89B8F5: push    14h
0x89B8F7: shl     eax, 3
0x89B8FA: push    eax
0x89B8FB: push    edx
0x89B8FC: call    sub_8A75D0
0x89B901: mov     ebx, ds:0BA9DE4h
0x89B907: mov     eax, [edi+ebx*4]
0x89B90A: mov     ecx, [eax+1A4h]
0x89B910: cmp     ecx, [eax+1A8h]
0x89B916: jnb     short loc_89B93C
0x89B918: mov     esi, eax
0x89B91A: mov     ecx, [esi+1A4h]
0x89B920: mov     dword ptr [ecx], offset aStcheckagts; "StcheckAgts"
0x89B926: rdtsc
0x89B928: mov     [esp+844h+var_834], eax
0x89B92C: mov     edx, [esp+844h+var_834]
0x89B930: mov     [ecx+4], edx
0x89B933: add     ecx, 0Ch
0x89B936: mov     [esi+1A4h], ecx
0x89B93C: movzx   eax, word ptr [ebp+2Eh]
0x89B940: mov     [esp+844h+var_834], eax
0x89B944: mov     eax, [ebp+3Ch]
0x89B947: xor     ebx, ebx
0x89B949: test    eax, eax
0x89B94B: jle     loc_89B9D4
0x89B951: lea     edi, [ebp+14h]
0x89B954: mov     ecx, [ebp+38h]
0x89B957: mov     edx, [esp+844h+var_830]
0x89B95B: lea     esi, [ecx+ebx*8]
0x89B95E: mov     ecx, [edx+78h]
0x89B961: mov     edx, [esi+4]
0x89B964: mov     eax, [ecx+8]
0x89B967: push    edx
0x89B968: add     ecx, 8
0x89B96B: push    edi
0x89B96C: lea     edx, [esp+84Ch+var_82C+3]
0x89B970: push    edx
0x89B971: call    dword ptr [eax]
0x89B973: cmp     byte ptr [eax], 0
0x89B976: jz      short loc_89B997
0x89B978: mov     eax, [esi+4]
0x89B97B: movzx   ecx, word ptr [eax+1Ah]
0x89B97F: mov     edx, [esp+844h+var_834]
0x89B983: mov     eax, [esp+844h+var_830]
0x89B987: lea     ecx, [ecx+edx*8]
0x89B98A: mov     edx, [eax+7Ch]
0x89B98D: cmp     byte ptr [ecx+edx+19D4h], 0
0x89B995: jnz     short loc_89B9AC
0x89B997: mov     eax, [esi]
0x89B999: push    eax
0x89B99A: call    sub_8E7920
0x89B99F: mov     ecx, [ebp+54h]
0x89B9A2: add     esp, 4
0x89B9A5: dec     ebx
0x89B9A6: mov     byte ptr [ecx+26h], 1
0x89B9AA: jmp     short loc_89B9C5
0x89B9AC: cmp     dword ptr [esp+844h+arg_8], 1
0x89B9B4: jnz     short loc_89B9C5
0x89B9B6: mov     edx, [eax+74h]
0x89B9B9: mov     eax, [esi]
0x89B9BB: push    edx
0x89B9BC: push    eax
0x89B9BD: call    sub_8E6560
0x89B9C2: add     esp, 8
0x89B9C5: mov     eax, [ebp+3Ch]
0x89B9C8: inc     ebx
0x89B9C9: cmp     ebx, eax
0x89B9CB: jl      short loc_89B954
0x89B9CD: mov     edi, large fs:2Ch
0x89B9D4: mov     eax, [esp+844h+var_814]
0x89B9D8: test    eax, eax
0x89B9DA: mov     ebx, ds:0BA9DE4h
0x89B9E0: jle     short loc_89BA3E
0x89B9E2: mov     eax, [edi+ebx*4]
0x89B9E5: mov     ecx, [eax+1A4h]
0x89B9EB: cmp     ecx, [eax+1A8h]
0x89B9F1: jnb     short loc_89BA17
0x89B9F3: mov     esi, eax
0x89B9F5: mov     ecx, [esi+1A4h]
0x89B9FB: mov     dword ptr [ecx], offset aStaddagts; "StaddAgts"
0x89BA01: rdtsc
0x89BA03: mov     [esp+844h+var_834], eax
0x89BA07: mov     edx, [esp+844h+var_834]
0x89BA0B: mov     [ecx+4], edx
0x89BA0E: add     ecx, 0Ch
0x89BA11: mov     [esi+1A4h], ecx
0x89BA17: mov     esi, [esp+844h+var_830]
0x89BA1B: mov     eax, [esi+78h]
0x89BA1E: test    eax, eax
0x89BA20: jz      short loc_89BA27
0x89BA22: add     eax, 8
0x89BA25: jmp     short loc_89BA29
0x89BA27: xor     eax, eax
0x89BA29: mov     ecx, [esp+844h+var_818]
0x89BA2D: push    eax
0x89BA2E: mov     eax, [esp+848h+var_814]
0x89BA32: push    eax
0x89BA33: push    ecx
0x89BA34: mov     ecx, [esi+68h]
0x89BA37: call    sub_8D8370
0x89BA3C: jmp     short loc_89BA42
0x89BA3E: mov     esi, [esp+844h+var_830]
0x89BA42: dec     dword ptr [esi+88h]
0x89BA48: jnz     short loc_89BA65
0x89BA4A: mov     eax, [esi+84h]
0x89BA50: test    eax, eax
0x89BA52: jz      short loc_89BA65
0x89BA54: mov     al, [esi+90h]
0x89BA5A: test    al, al
0x89BA5C: jnz     short loc_89BA65
0x89BA5E: mov     ecx, esi
0x89BA60: call    sub_899210
0x89BA65: mov     ecx, [esp+844h+var_810]
0x89BA69: test    ecx, ecx
0x89BA6B: js      short loc_89BA97
0x89BA6D: mov     edx, [edi+ebx*4]
0x89BA70: mov     eax, [edx+19Ch]
0x89BA76: test    eax, eax
0x89BA78: jnz     short loc_89BA7F
0x89BA7A: mov     eax, ds:0BA7D9Ch
0x89BA7F: and     ecx, 3FFFFFFFh
0x89BA85: shl     ecx, 3
0x89BA88: push    14h
0x89BA8A: push    ecx
0x89BA8B: mov     ecx, [esp+84Ch+var_818]
0x89BA8F: push    ecx
0x89BA90: mov     ecx, eax
0x89BA92: call    sub_8A75D0
0x89BA97: mov     eax, [edi+ebx*4]
0x89BA9A: mov     edx, [eax+1A4h]
0x89BAA0: cmp     edx, [eax+1A8h]
0x89BAA6: jnb     short loc_89BACC
0x89BAA8: mov     esi, eax
0x89BAAA: mov     ecx, [esi+1A4h]
0x89BAB0: mov     dword ptr [ecx], offset aLt_0; "lt"
0x89BAB6: rdtsc
0x89BAB8: mov     [esp+844h+var_834], eax
0x89BABC: mov     eax, [esp+844h+var_834]
0x89BAC0: mov     [ecx+4], eax
0x89BAC3: add     ecx, 0Ch
0x89BAC6: mov     [esi+1A4h], ecx
0x89BACC: pop     edi
0x89BACD: pop     esi
0x89BACE: pop     ebx
0x89BACF: pop     ebp
0x89BAD0: add     esp, 834h
0x89BAD6: retn    0Ch
