0x4637C0: push    0FFFFFFFFh
0x4637C2: push    offset TESSaveLoadGame_LoadForm_SEH
0x4637C7: mov     eax, large fs:0
0x4637CD: push    eax
0x4637CE: sub     esp, 12Ch
0x4637D4: mov     eax, ds:0B30AACh
0x4637D9: xor     eax, esp
0x4637DB: mov     [esp+138h+var_10], eax
0x4637E2: push    ebx
0x4637E3: push    ebp
0x4637E4: push    esi
0x4637E5: push    edi
0x4637E6: mov     eax, ds:0B30AACh
0x4637EB: xor     eax, esp
0x4637ED: push    eax
0x4637EE: lea     eax, [esp+14Ch+var_C]
0x4637F5: mov     large fs:0, eax
0x4637FB: mov     eax, ds:0B33398h
0x463800: mov     edi, [esp+14Ch+arg_0]
0x463807: mov     ebx, [eax+10h]
0x46380A: mov     esi, ecx
0x46380C: call    dword ptr ds:0A2808Ch
0x463812: cmp     eax, ebx
0x463814: jnz     short loc_46381B
0x463816: mov     al, [esi+18h]
0x463819: jmp     short loc_463821
0x46381B: mov     eax, [esi+18h]
0x46381E: shr     eax, 12h
0x463821: and     al, 1
0x463823: test    al, al
0x463825: jz      loc_4638F6
0x46382B: mov     eax, [edi+0Ch]
0x46382E: mov     ecx, [esi]
0x463830: lea     edx, [esp+14Ch+var_138]
0x463834: push    edx
0x463835: push    eax
0x463836: mov     [esp+154h+var_138], 0
0x46383E: call    NiTMap_GetAt
0x463843: mov     ebp, [esp+14Ch+var_138]
0x463847: test    ebp, ebp
0x463849: jz      loc_4638F6
0x46384F: mov     ebx, [ebp+4]
0x463852: test    ebx, ebx
0x463854: mov     [esp+14Ch+var_128], ebx
0x463858: jz      loc_4638F6
0x46385E: push    offset aTessaveloadg_2; "TESSaveLoadGame::LoadForm"
0x463863: mov     ecx, offset stru_B33B80
0x463868: call    NiEnterCriticalSection
0x46386D: mov     [esi+14h], ebx
0x463870: mov     ecx, ds:0B33B00h
0x463876: mov     eax, [ecx+14h]
0x463879: mov     ebx, [eax]
0x46387B: add     eax, 4
0x46387E: mov     [ecx+14h], eax
0x463881: mov     al, [edi+4]
0x463884: mov     [esp+14Ch+var_134], ebx
0x463888: mov     cl, byte ptr [esp+14Ch+var_134+2]
0x46388C: cmp     al, cl
0x46388E: jz      loc_463922
0x463894: movzx   eax, al
0x463897: lea     eax, [eax+eax*2]
0x46389A: mov     edx, ds:0B05E04h[eax*4]
0x4638A1: movzx   eax, cl
0x4638A4: push    edx
0x4638A5: mov     edx, [edi+0Ch]
0x4638A8: lea     eax, [eax+eax*2]
0x4638AB: mov     ecx, ds:0B05E04h[eax*4]
0x4638B2: push    ecx
0x4638B3: push    edx
0x4638B4: lea     eax, [esp+158h+CriticalSection]
0x4638B8: push    offset aLoadErrorFormW; "Load Error: Form with ID %08X was saved"...
0x4638BD: push    eax
0x4638BE: call    __sprintf
0x4638C3: mov     ecx, ds:0B34D90h
0x4638C9: mov     edx, [ecx]
0x4638CB: mov     edx, [edx+18h]
0x4638CE: add     esp, 14h
0x4638D1: lea     eax, [esp+14Ch+CriticalSection]
0x4638D5: push    eax; lpCriticalSection
0x4638D6: call    edx
0x4638D8: mov     eax, [edi+0Ch]
0x4638DB: mov     ecx, [esi]
0x4638DD: push    1
0x4638DF: push    eax
0x4638E0: call    sub_452DF0
0x4638E5: mov     ecx, offset stru_B33B80; lpCriticalSection
0x4638EA: mov     dword ptr [esi+14h], 0
0x4638F1: call    NiLeaveCriticalSection_0
0x4638F6: xor     al, al
0x4638F8: mov     ecx, dword ptr [esp+14Ch+var_C]
0x4638FF: mov     large fs:0, ecx
0x463906: pop     ecx
0x463907: pop     edi
0x463908: pop     esi
0x463909: pop     ebp
0x46390A: pop     ebx
0x46390B: mov     ecx, [esp+138h+var_10]
0x463912: xor     ecx, esp
0x463914: call    @__security_check_cookie@4; __security_check_cookie(x)
0x463919: add     esp, 138h
0x46391F: retn    4
0x463922: mov     eax, [ebp+0]
0x463925: movzx   ecx, bx
0x463928: push    eax
0x463929: mov     [esp+150h+var_118], ecx
0x46392D: push    edi
0x46392E: mov     ecx, esi
0x463930: call    sub_453530
0x463935: mov     edx, [esp+14Ch+var_134+3]
0x463939: push    edx
0x46393A: mov     ecx, esi
0x46393C: mov     ebp, eax
0x46393E: call    sub_45A140
0x463943: mov     eax, [edi+0Ch]
0x463946: mov     cl, byte ptr [esp+14Ch+var_134+2]
0x46394A: mov     dl, byte ptr [esp+14Ch+var_134+3]
0x46394E: mov     [esp+14Ch+var_124], eax
0x463952: lea     eax, [esp+14Ch+var_124]
0x463956: mov     [esi+80h], eax
0x46395C: mov     eax, [esi+18h]
0x46395F: mov     [esp+14Ch+anonymous_0], bx
0x463964: mov     ebx, eax
0x463966: or      eax, 80h
0x46396B: push    ebp
0x46396C: mov     [esp+150h+var_120], cl
0x463970: shr     ebx, 7
0x463973: mov     [esi+18h], eax
0x463976: or      dword ptr [edi+8], 200000h
0x46397D: push    edi
0x46397E: mov     ecx, esi
0x463980: mov     [esp+154h+var_11F], ebp
0x463984: mov     [esp+154h+anonymous_1], dl
0x463988: and     bl, 1
0x46398B: call    sub_460BC0
0x463990: mov     edx, [edi]
0x463992: mov     eax, [edx+54h]
0x463995: push    0; lpCriticalSection
0x463997: push    ebp
0x463998: mov     ecx, edi
0x46399A: call    eax
0x46399C: test    bl, bl
0x46399E: jz      short loc_4639A9
0x4639A0: or      dword ptr [esi+18h], 80h
0x4639A7: jmp     short loc_4639B0
0x4639A9: and     dword ptr [esi+18h], 0FFFFFF7Fh
0x4639B0: mov     cl, [esi+71h]
0x4639B3: xor     ebx, ebx
0x4639B5: cmp     [esi+1Ch], ebx
0x4639B8: mov     [esi+80h], ebx
0x4639BE: mov     [esi+7Ch], cl
0x4639C1: jnz     short loc_4639F9
0x4639C3: push    18h; Size
0x4639C5: call    FormHeapAlloc
0x4639CA: add     esp, 4
0x4639CD: mov     [esp+14Ch+var_12C], eax
0x4639D1: cmp     eax, ebx
0x4639D3: mov     [esp+14Ch+var_4], ebx
0x4639DA: jz      short loc_4639E9
0x4639DC: push    32h ; '2'
0x4639DE: push    32h ; '2'
0x4639E0: mov     ecx, eax
0x4639E2: call    sub_452670
0x4639E7: jmp     short loc_4639EB
0x4639E9: xor     eax, eax
0x4639EB: mov     [esp+14Ch+var_4], 0FFFFFFFFh
0x4639F6: mov     [esi+1Ch], eax
0x4639F9: push    10h; Size
0x4639FB: call    FormHeapAlloc
0x463A00: add     esp, 4
0x463A03: cmp     eax, ebx
0x463A05: jz      short loc_463A18
0x463A07: mov     dl, byte ptr [esp+14Ch+var_134+3]
0x463A0B: mov     [eax], edi
0x463A0D: mov     [eax+4], ebp
0x463A10: mov     [eax+8], ebx
0x463A13: mov     [eax+0Ch], dl
0x463A16: jmp     short loc_463A1A
0x463A18: xor     eax, eax
0x463A1A: mov     ecx, [esi+1Ch]
0x463A1D: mov     [esp+14Ch+var_12C], eax
0x463A21: lea     eax, [esp+14Ch+var_12C]
0x463A25: push    eax
0x463A26: call    sub_5A6AB0
0x463A2B: mov     eax, [esi+14h]
0x463A2E: sub     eax, [esp+14Ch+var_118]
0x463A32: mov     ebp, [esp+14Ch+var_128]
0x463A36: sub     eax, ebp
0x463A38: sub     eax, 4
0x463A3B: jz      short loc_463A54
0x463A3D: cmp     eax, 0FFFFFFFEh
0x463A40: jz      short loc_463A54
0x463A42: mov     ecx, ds:0B34D90h
0x463A48: mov     edx, [ecx]
0x463A4A: mov     eax, [edx+18h]
0x463A4D: push    offset aLoadgameCallDi; "LoadGame() call did not properly empty "...
0x463A52: call    eax
0x463A54: push    ebp
0x463A55: mov     ecx, esi
0x463A57: call    sub_452230
0x463A5C: mov     ecx, [esp+14Ch+var_138]
0x463A60: mov     [ecx+4], ebx
0x463A63: mov     eax, [esi+50h]
0x463A66: cmp     eax, ebx
0x463A68: jz      short loc_463A76
0x463A6A: mov     ecx, [esi]
0x463A6C: push    eax
0x463A6D: push    edi
0x463A6E: call    sub_452D60
0x463A73: mov     [esi+50h], ebx
0x463A76: mov     ecx, offset stru_B33B80; lpCriticalSection
0x463A7B: call    NiLeaveCriticalSection_0
0x463A80: mov     al, 1
0x463A82: jmp     loc_4638F8
