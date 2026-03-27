0x4E1900: push    0FFFFFFFFh
0x4E1902: push    offset SEH_616530
0x4E1907: mov     eax, large fs:0
0x4E190D: push    eax
0x4E190E: sub     esp, 0Ch
0x4E1911: push    ebx
0x4E1912: push    ebp
0x4E1913: push    esi
0x4E1914: push    edi
0x4E1915: mov     eax, ds:0B30AACh
0x4E191A: xor     eax, esp
0x4E191C: push    eax
0x4E191D: lea     eax, [esp+2Ch+var_C]
0x4E1921: mov     large fs:0, eax
0x4E1927: mov     ebp, ecx
0x4E1929: mov     [esp+2Ch+var_18], ebp
0x4E192D: mov     eax, [ebp+3Ch]
0x4E1930: test    eax, eax
0x4E1932: jz      loc_4E1B1D
0x4E1938: mov     eax, [ebp+0]
0x4E193B: mov     edx, [eax+168h]
0x4E1941: call    edx
0x4E1943: mov     edi, eax
0x4E1945: mov     eax, [ebp+0]
0x4E1948: mov     edx, [eax+190h]
0x4E194E: mov     ecx, ebp
0x4E1950: xor     esi, esi
0x4E1952: call    edx
0x4E1954: test    al, al
0x4E1956: jz      short loc_4E195A
0x4E1958: mov     esi, ebp
0x4E195A: cmp     ebp, ds:0B333C4h
0x4E1960: mov     ebx, [esp+2Ch+arg_0]
0x4E1964: jnz     short loc_4E198E
0x4E1966: test    edi, edi
0x4E1968: jz      short loc_4E1972
0x4E196A: push    ebx
0x4E196B: mov     ecx, edi
0x4E196D: call    sub_479780
0x4E1972: mov     ecx, ds:0B333C4h
0x4E1978: mov     al, [ecx+588h]
0x4E197E: mov     byte ptr [esp+2Ch+arg_0], al
0x4E1982: mov     edx, [esp+2Ch+arg_0]
0x4E1986: push    edx
0x4E1987: call    sub_6600D0
0x4E198C: mov     edi, eax
0x4E198E: test    edi, edi
0x4E1990: jz      short loc_4E199F
0x4E1992: push    ebx
0x4E1993: mov     ecx, edi
0x4E1995: call    sub_479780
0x4E199A: jmp     loc_4E1AB3
0x4E199F: test    ebx, ebx
0x4E19A1: jz      loc_4E1AB3
0x4E19A7: lea     ecx, [ebx+30h]
0x4E19AA: test    ecx, ecx
0x4E19AC: jz      loc_4E1AB3
0x4E19B2: cmp     byte ptr [ebx+90h], 5
0x4E19B9: mov     eax, 9
0x4E19BE: jnz     short loc_4E19C5
0x4E19C0: mov     eax, 0Eh
0x4E19C5: push    0
0x4E19C7: push    ebp
0x4E19C8: push    eax
0x4E19C9: mov     eax, [ecx]
0x4E19CB: mov     edx, [eax+14h]
0x4E19CE: call    edx
0x4E19D0: push    eax
0x4E19D1: call    sub_479450
0x4E19D6: add     esp, 10h
0x4E19D9: cmp     byte ptr [ebx+90h], 5
0x4E19E0: mov     edi, eax
0x4E19E2: jnz     short loc_4E19F2
0x4E19E4: push    offset aBow; Src
0x4E19E9: mov     ecx, edi
0x4E19EB: call    NiObjectNET_SetName
0x4E19F0: jmp     short loc_4E1A43
0x4E19F2: xor     eax, eax
0x4E19F4: mov     [esp+2Ch+Src], eax
0x4E19F8: mov     [esp+2Ch+var_10], ax
0x4E19FD: mov     [esp+2Ch+var_E], ax
0x4E1A02: mov     [esp+2Ch+var_4], eax
0x4E1A06: mov     eax, [ebx+0Ch]
0x4E1A09: push    eax
0x4E1A0A: mov     eax, ds:0B065ACh
0x4E1A0F: push    eax; ArgList
0x4E1A10: lea     ecx, [esp+34h+Src]
0x4E1A14: push    offset aS08x; "%s (%08X)"
0x4E1A19: push    ecx; int
0x4E1A1A: call    BSStringT_Static_Format
0x4E1A1F: mov     edx, [esp+3Ch+Src]
0x4E1A23: add     esp, 10h
0x4E1A26: push    edx; Src
0x4E1A27: mov     ecx, edi
0x4E1A29: call    NiObjectNET_SetName
0x4E1A2E: mov     eax, [esp+2Ch+Src]
0x4E1A32: push    eax
0x4E1A33: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4E1A3B: call    FormHeapFree
0x4E1A40: add     esp, 4
0x4E1A43: mov     ecx, ds:0B33B00h
0x4E1A49: call    sub_45A500
0x4E1A4E: test    al, al
0x4E1A50: jnz     short loc_4E1AB3
0x4E1A52: mov     ecx, esi
0x4E1A54: call    Actor_IsWeaponOut
0x4E1A59: test    al, al
0x4E1A5B: mov     byte ptr [esp+2Ch+arg_0], al
0x4E1A5F: jnz     short loc_4E1A88
0x4E1A61: mov     ecx, [esi+58h]
0x4E1A64: mov     edx, [ecx]
0x4E1A66: mov     eax, [edx+124h]
0x4E1A6C: push    0
0x4E1A6E: call    eax
0x4E1A70: test    eax, eax
0x4E1A72: jnz     short loc_4E1A88
0x4E1A74: mov     ecx, [esi+58h]
0x4E1A77: mov     edx, [ecx]
0x4E1A79: mov     eax, [edx+308h]
0x4E1A7F: push    1
0x4E1A81: mov     byte ptr [esp+30h+arg_0], 1
0x4E1A86: call    eax
0x4E1A88: mov     ebp, [esi+58h]
0x4E1A8B: mov     edx, [esi]
0x4E1A8D: mov     edi, [ebp+0]
0x4E1A90: mov     eax, [edx+164h]
0x4E1A96: push    esi
0x4E1A97: mov     ecx, esi
0x4E1A99: add     edi, 150h
0x4E1A9F: call    eax
0x4E1AA1: mov     ecx, [esp+2Ch+arg_4]
0x4E1AA5: mov     edx, [edi]
0x4E1AA7: push    eax
0x4E1AA8: push    0
0x4E1AAA: push    ecx
0x4E1AAB: mov     ecx, ebp
0x4E1AAD: call    edx
0x4E1AAF: mov     ebp, [esp+2Ch+var_18]
0x4E1AB3: test    esi, esi
0x4E1AB5: jz      short loc_4E1B1D
0x4E1AB7: cmp     byte ptr [ebx+90h], 5
0x4E1ABE: jnz     short loc_4E1AC9
0x4E1AC0: push    1
0x4E1AC2: mov     ecx, esi
0x4E1AC4: call    sub_5E13D0
0x4E1AC9: mov     edi, [esi+58h]
0x4E1ACC: test    edi, edi
0x4E1ACE: jz      short loc_4E1B0B
0x4E1AD0: cmp     byte ptr [ebx+90h], 5
0x4E1AD7: jnz     short loc_4E1B0B
0x4E1AD9: mov     ecx, ds:0B333C4h; this
0x4E1ADF: cmp     ebp, ecx
0x4E1AE1: jnz     short loc_4E1AF7
0x4E1AE3: mov     ebx, [edi]
0x4E1AE5: push    1; a2
0x4E1AE7: call    Player_GetAnimData
0x4E1AEC: push    eax
0x4E1AED: mov     eax, [ebx+114h]
0x4E1AF3: mov     ecx, edi
0x4E1AF5: call    eax
0x4E1AF7: mov     ebx, [edi]
0x4E1AF9: mov     ecx, ebp
0x4E1AFB: call    TESObjectREFR_GetAnimData
0x4E1B00: mov     edx, [ebx+114h]
0x4E1B06: push    eax
0x4E1B07: mov     ecx, edi
0x4E1B09: call    edx
0x4E1B0B: mov     eax, [ebp+3Ch]
0x4E1B0E: push    eax
0x4E1B0F: mov     ecx, esi
0x4E1B11: call    sub_5EA1A0
0x4E1B16: mov     ecx, esi; a1
0x4E1B18: call    sub_5EE1B0
0x4E1B1D: mov     ecx, dword ptr [esp+2Ch+var_C]
0x4E1B21: mov     large fs:0, ecx
0x4E1B28: pop     ecx
0x4E1B29: pop     edi
0x4E1B2A: pop     esi
0x4E1B2B: pop     ebp
0x4E1B2C: pop     ebx
0x4E1B2D: add     esp, 18h
0x4E1B30: retn    4
