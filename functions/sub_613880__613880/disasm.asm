0x613880: push    ecx
0x613881: push    ebx
0x613882: push    esi
0x613883: mov     esi, ecx
0x613885: mov     ebx, 9
0x61388A: cmp     [esi+70h], ebx
0x61388D: jnz     short loc_613895
0x61388F: pop     esi
0x613890: xor     al, al
0x613892: pop     ebx
0x613893: pop     ecx
0x613894: retn
0x613895: fld     dword ptr [esi+44h]
0x613898: fsub    dword ptr [esi+104h]
0x61389E: fld     dword ptr [esi+108h]
0x6138A4: fcompp
0x6138A6: fnstsw  ax
0x6138A8: test    ah, 5
0x6138AB: jp      short loc_61388F
0x6138AD: cmp     byte ptr [esi+1AEh], 0
0x6138B4: jnz     short loc_61388F
0x6138B6: mov     eax, [esi+84h]
0x6138BC: test    eax, eax
0x6138BE: jz      short loc_6138DB
0x6138C0: mov     ecx, [esi+3Ch]
0x6138C3: mov     edx, [ecx+5Ch]
0x6138C6: mov     eax, [eax]
0x6138C8: mov     edx, [edx+1Ch]
0x6138CB: push    0
0x6138CD: push    0
0x6138CF: add     ecx, 5Ch ; '\'
0x6138D2: push    0
0x6138D4: push    eax
0x6138D5: call    edx
0x6138D7: test    al, al
0x6138D9: jnz     short loc_613916
0x6138DB: mov     eax, [esi+88h]
0x6138E1: test    eax, eax
0x6138E3: jz      short loc_613954
0x6138E5: mov     ecx, [esi+3Ch]
0x6138E8: mov     edx, [ecx+5Ch]
0x6138EB: mov     eax, [eax]
0x6138ED: mov     edx, [edx+1Ch]
0x6138F0: push    0
0x6138F2: push    0
0x6138F4: add     ecx, 5Ch ; '\'
0x6138F7: push    0
0x6138F9: push    eax
0x6138FA: call    edx
0x6138FC: test    al, al
0x6138FE: jz      short loc_613954
0x613900: mov     eax, [esi+88h]
0x613906: mov     [esi+84h], eax
0x61390C: mov     dword ptr [esi+88h], 0
0x613916: cmp     [esi+70h], ebx
0x613919: jz      short loc_61394B
0x61391B: cmp     byte ptr ds:0B3B908h, 0
0x613922: jz      short loc_61393F
0x613924: mov     ecx, [esi+3Ch]; this
0x613927: push    offset a___justKindaSt; "...just kinda stand around"
0x61392C: call    TESObjectREFR_GetName
0x613931: push    eax
0x613932: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x613937: call    Interface_ConsolePrint
0x61393C: add     esp, 0Ch
0x61393F: fld     dword ptr ds:0A30634h
0x613945: fstp    dword ptr [esi+188h]
0x61394B: mov     [esi+70h], ebx
0x61394E: pop     esi
0x61394F: mov     al, 1
0x613951: pop     ebx
0x613952: pop     ecx
0x613953: retn
0x613954: cmp     dword ptr [esi+84h], 0
0x61395B: push    edi
0x61395C: jnz     loc_613ADF
0x613962: mov     ecx, [esi+3Ch]
0x613965: push    8
0x613967: xor     edi, edi
0x613969: call    Actor_GetBaseCalcAVi
0x61396E: test    eax, eax
0x613970: mov     [esp+10h+var_4], eax
0x613974: jle     short loc_61398B
0x613976: mov     ecx, [esi+3Ch]
0x613979: mov     edx, [ecx]
0x61397B: mov     eax, [edx+288h]
0x613981: push    8
0x613983: call    eax
0x613985: fidiv   [esp+10h+var_4]
0x613989: jmp     short loc_61398D
0x61398B: fld1
0x61398D: fstp    [esp+10h+var_4]
0x613991: fld     [esp+10h+var_4]
0x613995: fild    dword ptr ds:0B372D0h
0x61399B: fdiv    qword ptr ds:0A309F0h
0x6139A1: fcompp
0x6139A3: fnstsw  ax
0x6139A5: test    ah, 41h
0x6139A8: jnz     short loc_6139CA
0x6139AA: push    45484552h
0x6139AF: mov     ecx, esi
0x6139B1: call    BaseProcess_UseCounterEffect??
0x6139B6: mov     edi, eax
0x6139B8: test    edi, edi
0x6139BA: jnz     short loc_6139CA
0x6139BC: push    45484F46h
0x6139C1: mov     ecx, esi
0x6139C3: call    BaseProcess_UseCounterEffect??
0x6139C8: mov     edi, eax
0x6139CA: mov     ecx, [esi+3Ch]
0x6139CD: push    ebx
0x6139CE: call    Actor_GetBaseCalcAVi
0x6139D3: test    eax, eax
0x6139D5: mov     [esp+10h+var_4], eax
0x6139D9: jle     short loc_6139EF
0x6139DB: mov     ecx, [esi+3Ch]
0x6139DE: mov     edx, [ecx]
0x6139E0: mov     eax, [edx+288h]
0x6139E6: push    ebx
0x6139E7: call    eax
0x6139E9: fidiv   [esp+10h+var_4]
0x6139ED: jmp     short loc_6139F1
0x6139EF: fld1
0x6139F1: fstp    [esp+10h+var_4]
0x6139F5: fld     [esp+10h+var_4]
0x6139F9: fild    dword ptr ds:0B372D8h
0x6139FF: fdiv    qword ptr ds:0A309F0h
0x613A05: fcompp
0x613A07: fnstsw  ax
0x613A09: test    ah, 41h
0x613A0C: jnz     short loc_613A32
0x613A0E: test    edi, edi
0x613A10: jnz     short loc_613A32
0x613A12: push    50534552h
0x613A17: mov     ecx, esi
0x613A19: call    BaseProcess_UseCounterEffect??
0x613A1E: mov     edi, eax
0x613A20: test    edi, edi
0x613A22: jnz     short loc_613A32
0x613A24: push    50534F46h
0x613A29: mov     ecx, esi
0x613A2B: call    BaseProcess_UseCounterEffect??
0x613A30: mov     edi, eax
0x613A32: mov     ecx, [esi+3Ch]; this
0x613A35: call    Actor_GetFatigueFraction
0x613A3A: fstp    [esp+10h+var_4]
0x613A3E: fld     [esp+10h+var_4]
0x613A42: fild    dword ptr ds:0B372E0h
0x613A48: fdiv    qword ptr ds:0A309F0h
0x613A4E: fcompp
0x613A50: fnstsw  ax
0x613A52: test    ah, 41h
0x613A55: jnz     short loc_613A7B
0x613A57: test    edi, edi
0x613A59: jnz     short loc_613A7F
0x613A5B: push    41464552h
0x613A60: mov     ecx, esi
0x613A62: call    BaseProcess_UseCounterEffect??
0x613A67: mov     edi, eax
0x613A69: test    edi, edi
0x613A6B: jnz     short loc_613A7F
0x613A6D: push    41464F46h
0x613A72: mov     ecx, esi
0x613A74: call    BaseProcess_UseCounterEffect??
0x613A79: mov     edi, eax
0x613A7B: test    edi, edi
0x613A7D: jz      short loc_613ADF
0x613A7F: mov     eax, [esi+3Ch]
0x613A82: mov     edx, [eax+5Ch]
0x613A85: mov     edx, [edx+1Ch]
0x613A88: push    0
0x613A8A: lea     ecx, [eax+5Ch]
0x613A8D: mov     eax, [edi]
0x613A8F: push    0
0x613A91: push    0
0x613A93: push    eax
0x613A94: call    edx
0x613A96: test    al, al
0x613A98: jz      short loc_613ADF
0x613A9A: cmp     [esi+70h], ebx
0x613A9D: mov     [esi+84h], edi
0x613AA3: jz      short loc_613AD5
0x613AA5: cmp     byte ptr ds:0B3B908h, 0
0x613AAC: jz      short loc_613AC9
0x613AAE: mov     ecx, [esi+3Ch]; this
0x613AB1: push    offset a___justKindaSt; "...just kinda stand around"
0x613AB6: call    TESObjectREFR_GetName
0x613ABB: push    eax
0x613ABC: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x613AC1: call    Interface_ConsolePrint
0x613AC6: add     esp, 0Ch
0x613AC9: fld     dword ptr ds:0A30634h
0x613ACF: fstp    dword ptr [esi+188h]
0x613AD5: pop     edi
0x613AD6: mov     [esi+70h], ebx
0x613AD9: pop     esi
0x613ADA: mov     al, 1
0x613ADC: pop     ebx
0x613ADD: pop     ecx
0x613ADE: retn
0x613ADF: pop     edi
0x613AE0: pop     esi
0x613AE1: xor     al, al
0x613AE3: pop     ebx
0x613AE4: pop     ecx
0x613AE5: retn
