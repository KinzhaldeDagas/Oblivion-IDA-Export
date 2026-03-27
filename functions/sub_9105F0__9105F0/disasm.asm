0x9105F0: sub     esp, 0Ch
0x9105F3: push    ebx
0x9105F4: push    ebp
0x9105F5: mov     ebp, [esp+14h+arg_0]
0x9105F9: mov     ebx, [ebp+28h]
0x9105FC: push    esi
0x9105FD: push    edi
0x9105FE: lea     eax, [esp+1Ch+var_C]
0x910602: push    eax
0x910603: push    ecx
0x910604: mov     eax, esp
0x910606: mov     esi, ecx
0x910608: mov     byte ptr [eax], 1
0x91060B: mov     ecx, [esi+0Ch]
0x91060E: mov     edx, [ecx]
0x910610: call    dword ptr [edx+10h]
0x910613: mov     al, [esi+18h]
0x910616: test    al, al
0x910618: mov     edi, [esp+1Ch+var_8]
0x91061C: jnz     loc_9106DF
0x910622: fld     dword ptr ds:0A2FAA8h
0x910628: xor     edx, edx
0x91062A: cmp     edi, 4
0x91062D: jl      short loc_910672
0x91062F: lea     ecx, [edi-4]
0x910632: shr     ecx, 2
0x910635: inc     ecx
0x910636: lea     eax, [ebx+10h]
0x910639: lea     edx, ds:0[ecx*4]
0x910640: fld     dword ptr [eax-10h]
0x910643: add     eax, 20h ; ' '
0x910646: dec     ecx
0x910647: fld     st
0x910649: fmul    st, st(1)
0x91064B: faddp   st(2), st
0x91064D: fstp    st
0x91064F: fld     dword ptr [eax-28h]
0x910652: fld     st
0x910654: fmul    st, st(1)
0x910656: faddp   st(2), st
0x910658: fstp    st
0x91065A: fld     dword ptr [eax-20h]
0x91065D: fld     st
0x91065F: fmul    st, st(1)
0x910661: faddp   st(2), st
0x910663: fstp    st
0x910665: fld     dword ptr [eax-18h]
0x910668: fld     st
0x91066A: fmul    st, st(1)
0x91066C: faddp   st(2), st
0x91066E: fstp    st
0x910670: jnz     short loc_910640
0x910672: cmp     edx, edi
0x910674: jge     short loc_910686
0x910676: fld     dword ptr [ebx+edx*8]
0x910679: inc     edx
0x91067A: cmp     edx, edi
0x91067C: fld     st
0x91067E: fmul    st, st(1)
0x910680: faddp   st(2), st
0x910682: fstp    st
0x910684: jl      short loc_910676
0x910686: fld     dword ptr [esi+14h]
0x910689: fld     st
0x91068B: fmul    st, st(1)
0x91068D: fld     st(2)
0x91068F: fcompp
0x910691: fnstsw  ax
0x910693: fstp    st
0x910695: test    ah, 41h
0x910698: jnz     short loc_9106C4
0x91069A: mov     byte ptr [esi+18h], 1
0x91069E: mov     ecx, [esi+1Ch]
0x9106A1: test    ecx, ecx
0x9106A3: jz      short loc_9106C4
0x9106A5: fsqrt
0x9106A7: mov     dl, [esi+19h]
0x9106AA: mov     eax, [ebp+24h]
0x9106AD: mov     [esp+1Ch+var_4], dl
0x9106B1: lea     edx, [esp+1Ch+var_C]
0x9106B5: mov     dword ptr [esp+1Ch+var_C], eax
0x9106B9: push    edx
0x9106BA: fstp    [esp+20h+var_8]
0x9106BE: mov     eax, [ecx]
0x9106C0: call    dword ptr [eax]
0x9106C2: jmp     short loc_9106C6
0x9106C4: fstp    st
0x9106C6: mov     al, [esi+18h]
0x9106C9: test    al, al
0x9106CB: jnz     short loc_9106DF
0x9106CD: mov     ecx, [esp+1Ch+arg_4]
0x9106D1: mov     esi, [esi+0Ch]
0x9106D4: mov     eax, [esi]
0x9106D6: push    ecx
0x9106D7: push    ebp
0x9106D8: mov     ecx, esi
0x9106DA: call    dword ptr [eax+1Ch]
0x9106DD: jmp     short loc_91070A
0x9106DF: mov     edx, [esp+1Ch+arg_4]
0x9106E3: push    8
0x9106E5: push    0
0x9106E7: push    edx
0x9106E8: push    ebp
0x9106E9: call    sub_8F0F70
0x9106EE: mov     al, [esi+19h]
0x9106F1: add     esp, 10h
0x9106F4: test    al, al
0x9106F6: jz      short loc_91070A
0x9106F8: mov     eax, [ebp+24h]
0x9106FB: mov     ecx, [eax+8]
0x9106FE: mov     edx, [ecx]
0x910700: push    eax
0x910701: call    dword ptr [edx+8]
0x910704: mov     al, [esi+1Ah]
0x910707: mov     [esi+18h], al
0x91070A: xor     eax, eax
0x91070C: test    edi, edi
0x91070E: jle     short loc_91071C
0x910710: mov     dword ptr [ebx+eax*8], 0
0x910717: inc     eax
0x910718: cmp     eax, edi
0x91071A: jl      short loc_910710
0x91071C: pop     edi
0x91071D: pop     esi
0x91071E: pop     ebp
0x91071F: pop     ebx
0x910720: add     esp, 0Ch
0x910723: retn    8
