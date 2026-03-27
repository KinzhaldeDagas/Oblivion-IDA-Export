0x737373: call    dword ptr ds:0A2808Ch
0x737379: add     dword ptr [esi+7Ch], 1
0x73737D: lea     ecx, [esp+arg_14]
0x737381: push    ecx
0x737382: lea     edx, [esp+4+anonymous_0+3]
0x737386: push    edx
0x737387: lea     ecx, [esp+8+arg_30]
0x73738B: push    ecx
0x73738C: lea     edx, [esp+0Ch+arg_24]
0x737390: push    edx
0x737391: mov     edx, [esp+10h+arg_84]
0x737398: mov     [esi+78h], eax
0x73739B: mov     eax, [ebp+0]
0x73739E: mov     eax, [eax+0Ch]
0x7373A1: lea     ecx, [esp+10h+arg_28]
0x7373A5: push    ecx
0x7373A6: push    edx
0x7373A7: mov     ecx, ebp
0x7373A9: mov     byte ptr [ebp+10Ch], 0
0x7373B0: call    eax
0x7373B2: test    al, al
0x7373B4: jnz     short loc_7373D1
0x7373B6: add     dword ptr [esi+7Ch], 0FFFFFFFFh
0x7373BA: jnz     short loc_7373C3
0x7373BC: mov     dword ptr [esi+78h], 0
0x7373C3: push    esi; lpCriticalSection
0x7373C4: call    dword ptr ds:0A28074h
0x7373CA: xor     eax, eax
0x7373CC: jmp     loc_7376E4
0x7373D1: mov     edi, [esp+arg_88]
0x7373D8: test    edi, edi
0x7373DA: jz      short loc_73741D
0x7373DC: mov     ecx, [edi+54h]
0x7373DF: mov     eax, [ecx]
0x7373E1: cmp     eax, [ebp+104h]
0x7373E7: jnz     short loc_73741D
0x7373E9: mov     edx, [edi+58h]
0x7373EC: mov     eax, [edx]
0x7373EE: cmp     eax, [ebp+100h]
0x7373F4: jnz     short loc_73741D
0x7373F6: lea     eax, [esp+arg_30]
0x7373FA: push    eax
0x7373FB: lea     ecx, [edi+8]
0x7373FE: call    sub_71AD40
0x737403: test    al, al
0x737405: jz      short loc_73741D
0x737407: mov     eax, [edi+60h]
0x73740A: cmp     eax, [ebp+108h]
0x737410: jnz     short loc_73741D
0x737412: mov     eax, [edi+6Ch]
0x737415: mov     ebx, dword ptr [esp+arg_14]
0x737419: cmp     eax, ebx
0x73741B: jz      short loc_737478
0x73741D: push    70h ; 'p'; Size
0x73741F: call    FormHeapAlloc
0x737424: add     esp, 4
0x737427: mov     [esp+arg_88], eax
0x73742E: test    eax, eax
0x737430: mov     [esp+arg_7C], 0
0x73743B: jz      short loc_737465
0x73743D: mov     ecx, dword ptr [esp+arg_14]
0x737441: mov     edx, [ebp+108h]
0x737447: push    ecx
0x737448: push    edx
0x737449: mov     edx, [ebp+100h]
0x73744F: lea     ecx, [esp+8+arg_30]
0x737453: push    ecx
0x737454: mov     ecx, [ebp+104h]
0x73745A: push    edx
0x73745B: push    ecx
0x73745C: mov     ecx, eax
0x73745E: call    NiPixelData__NiPixelData
0x737463: jmp     short loc_737467
0x737465: xor     eax, eax
0x737467: mov     ebx, dword ptr [esp+arg_14]
0x73746B: mov     [esp+arg_7C], 0FFFFFFFFh
0x737476: mov     edi, eax
0x737478: mov     edx, [edi+60h]
0x73747B: lea     eax, [ebp+110h]
0x737481: push    eax
0x737482: lea     ecx, [esp+4+arg_30]
0x737486: mov     [esp+4+arg_88], edx
0x73748D: call    sub_71AD40
0x737492: test    al, al
0x737494: jz      loc_73754E
0x73749A: test    ebx, ebx
0x73749C: jbe     loc_7376CE
0x7374A2: or      eax, 0FFFFFFFFh
0x7374A5: mov     [esp+arg_18], eax
0x7374A9: cmp     eax, 4; switch 5 cases
0x7374AC: ja      short def_7374AE
0x7374AE: jmp     ds:jpt_7374AE[eax*4]; switch jump
0x7374B5: mov     ebx, 1; jumptable 007374AE case 0
0x7374BA: jmp     short loc_7374DA
0x7374BC: mov     ebx, 2; jumptable 007374AE case 1
0x7374C1: jmp     short loc_7374DA
0x7374C3: mov     ebx, 3; jumptable 007374AE case 2
0x7374C8: jmp     short loc_7374DA
0x7374CA: mov     ebx, 4; jumptable 007374AE case 3
0x7374CF: jmp     short loc_7374DA
0x7374D1: mov     ebx, 5; jumptable 007374AE case 4
0x7374D6: jmp     short loc_7374DA
