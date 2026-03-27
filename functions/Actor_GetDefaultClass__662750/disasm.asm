0x662750: sub     esp, 10h
0x662753: push    ebx
0x662754: mov     ebx, ecx
0x662756: call    Actor_GetBaseClass
0x66275B: mov     ecx, ds:0B37D00h
0x662761: cmp     ecx, [eax+0Ch]
0x662764: jnz     Actor_GetDefaultClass___Return_CurrentClass
0x66276A: fldz
0x66276C: push    ebp
0x66276D: fst     [esp+18h+var_C]
0x662771: push    esi
0x662772: fst     [esp+1Ch+var_10]
0x662776: push    edi
0x662777: fstp    [esp+20h+var_8]
0x66277B: xor     esi, esi
0x66277D: lea     ecx, [ecx+0]
0x662780: mov     ecx, ds:0B33A98h
0x662786: push    esi
0x662787: call    TESDataHandler_GetTESSkillByCode
0x66278C: mov     edx, [ebx+5B0h]
0x662792: fld     dword ptr [edx+esi*4]
0x662795: mov     ecx, eax
0x662797: test    ecx, ecx
0x662799: fstp    [esp+20h+var_4]
0x66279D: jz      short loc_6627E2
0x66279F: fldz
0x6627A1: fld     [esp+20h+var_4]
0x6627A5: fcom    st(1)
0x6627A7: fnstsw  ax
0x6627A9: fstp    st(1)
0x6627AB: test    ah, 41h
0x6627AE: jnz     short loc_6627E0
0x6627B0: mov     eax, [ecx+34h]
0x6627B3: sub     eax, 0
0x6627B6: jz      short loc_6627D6
0x6627B8: sub     eax, 1
0x6627BB: jz      short loc_6627CC
0x6627BD: sub     eax, 1
0x6627C0: jnz     short loc_6627E0
0x6627C2: fadd    [esp+20h+var_8]
0x6627C6: fstp    [esp+20h+var_8]
0x6627CA: jmp     short loc_6627E2
0x6627CC: fadd    [esp+20h+var_10]
0x6627D0: fstp    [esp+20h+var_10]
0x6627D4: jmp     short loc_6627E2
0x6627D6: fadd    [esp+20h+var_C]
0x6627DA: fstp    [esp+20h+var_C]
0x6627DE: jmp     short loc_6627E2
0x6627E0: fstp    st
0x6627E2: add     esi, 1
0x6627E5: cmp     esi, 15h
0x6627E8: jl      short loc_662780
0x6627EA: fld     [esp+20h+var_10]
0x6627EE: fld     st
0x6627F0: fld     [esp+20h+var_C]
0x6627F4: fld     st
0x6627F6: faddp   st(2), st
0x6627F8: fld     [esp+20h+var_8]
0x6627FC: fld     st
0x6627FE: faddp   st(3), st
0x662800: fxch    st(2)
0x662802: fstp    [esp+20h+var_4]
0x662806: fld     [esp+20h+var_4]
0x66280A: fld     st
0x66280C: fdivp   st(2), st
0x66280E: fld     qword ptr ds:0A49318h
0x662814: fmul    st(2), st
0x662816: fxch    st(2)
0x662818: fstp    [esp+20h+var_4]
0x66281C: fld     [esp+20h+var_4]
0x662820: fld     st
0x662822: call    Double_To_SInt32
0x662827: mov     ecx, eax
0x662829: mov     [esp+20h+var_4], ecx
0x66282D: fisub   [esp+20h+var_4]
0x662831: fld     qword ptr ds:0A2FAA0h
0x662837: fcom    st(1)
0x662839: fnstsw  ax
0x66283B: fstp    st(1)
0x66283D: test    ah, 41h
0x662840: jnz     short loc_662846
0x662842: xor     eax, eax
0x662844: jmp     short loc_66284B
0x662846: mov     eax, 1
0x66284B: add     ecx, eax
0x66284D: mov     [esp+20h+var_4], ecx
0x662851: fild    [esp+20h+var_4]
0x662855: call    Double_To_SInt32
0x66285A: fld     st(1)
0x66285C: fdivp   st(5), st
0x66285E: mov     edi, eax
0x662860: fxch    st(4)
0x662862: fmul    st, st(2)
0x662864: fstp    [esp+20h+var_4]
0x662868: fld     [esp+20h+var_4]
0x66286C: fld     st
0x66286E: call    Double_To_SInt32
0x662873: mov     ecx, eax
0x662875: mov     [esp+20h+var_4], ecx
0x662879: fisub   [esp+20h+var_4]
0x66287D: fcomp   st(4)
0x66287F: fnstsw  ax
0x662881: test    ah, 5
0x662884: jp      short loc_66288A
0x662886: xor     eax, eax
0x662888: jmp     short loc_66288F
0x66288A: mov     eax, 1
0x66288F: add     ecx, eax
0x662891: mov     [esp+20h+var_4], ecx
0x662895: fild    [esp+20h+var_4]
0x662899: call    Double_To_SInt32
0x66289E: fdivp   st(2), st
0x6628A0: mov     ebp, eax
0x6628A2: fmulp   st(1), st
0x6628A4: fstp    [esp+20h+var_4]
0x6628A8: fld     [esp+20h+var_4]
0x6628AC: fld     st
0x6628AE: call    Double_To_SInt32
0x6628B3: mov     ecx, eax
0x6628B5: mov     [esp+20h+var_4], ecx
0x6628B9: fisub   [esp+20h+var_4]
0x6628BD: fcompp
0x6628BF: fnstsw  ax
0x6628C1: test    ah, 5
0x6628C4: jp      short loc_6628CA
0x6628C6: xor     eax, eax
0x6628C8: jmp     short loc_6628CF
0x6628CA: mov     eax, 1
0x6628CF: add     ecx, eax
0x6628D1: mov     [esp+20h+var_4], ecx
0x6628D5: fild    [esp+20h+var_4]
0x6628D9: call    Double_To_SInt32
0x6628DE: cmp     edi, 7
0x6628E1: mov     esi, eax
0x6628E3: jl      short loc_6628F0
0x6628E5: mov     eax, ds:0B37C98h
0x6628EA: push    eax
0x6628EB: jmp     loc_662A2D
0x6628F0: cmp     ebp, 7
0x6628F3: jl      short loc_662901
0x6628F5: mov     ecx, ds:0B37C78h
0x6628FB: push    ecx
0x6628FC: jmp     loc_662A2D
0x662901: cmp     esi, 7
0x662904: jl      short loc_662911
0x662906: mov     edx, ds:0B37CC8h
0x66290C: jmp     loc_662A2C
0x662911: lea     eax, [edi-3]; switch 4 cases
0x662914: cmp     eax, 3
0x662917: ja      short Actor_GetDefaultClass___def_662919
0x662919: jmp     ds:jpt_662919[eax*4]; switch jump
0x662920: mov     eax, ds:0B37CA0h; jumptable 00662919 case 6
0x662925: push    eax
0x662926: jmp     short loc_662964
0x662928: cmp     ebp, 2; jumptable 00662919 case 5
0x66292B: jnz     short loc_662936
0x66292D: mov     ecx, ds:0B37CA8h
0x662933: push    ecx
0x662934: jmp     short loc_662964
0x662936: mov     edx, ds:0B37C68h
0x66293C: jmp     short loc_662963
0x66293E: cmp     esi, 2; jumptable 00662919 case 4
0x662941: jnz     short loc_66294B
0x662943: mov     eax, ds:0B37CB0h
0x662948: push    eax
0x662949: jmp     short loc_662964
0x66294B: mov     ecx, ds:0B37CB8h
0x662951: push    ecx
0x662952: jmp     short loc_662964
0x662954: cmp     ebp, 2; jumptable 00662919 case 3
0x662957: jnz     short Actor_GetDefaultClass___def_662919
0x662959: cmp     esi, ebp
0x66295B: jnz     short Actor_GetDefaultClass___def_662919
0x66295D: mov     edx, ds:0B37CC0h
0x662963: push    edx
0x662964: mov     ecx, ds:0B33A98h
0x66296A: call    TESDataHandler_LookupTESClassByFormID
0x66296F: mov     [ebx+650h], eax
