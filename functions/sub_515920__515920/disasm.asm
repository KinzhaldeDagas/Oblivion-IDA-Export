0x515920: push    0FFFFFFFFh
0x515922: push    offset SEH_5ACE20
0x515927: mov     eax, large fs:0
0x51592D: push    eax
0x51592E: sub     esp, 8
0x515931: push    ebx
0x515932: push    ebp
0x515933: push    esi
0x515934: push    edi
0x515935: mov     eax, ds:0B30AACh
0x51593A: xor     eax, esp
0x51593C: push    eax
0x51593D: lea     eax, [esp+28h+var_C]
0x515941: mov     large fs:0, eax
0x515947: mov     edi, [esp+28h+arg_8]
0x51594B: mov     esi, ds:0B333C4h
0x515951: xor     ebx, ebx
0x515953: cmp     edi, ebx
0x515955: jz      short loc_51597B
0x515957: mov     eax, [edi]
0x515959: mov     edx, [eax+190h]
0x51595F: mov     ecx, edi
0x515961: call    edx
0x515963: test    al, al
0x515965: jz      short loc_51597B
0x515967: mov     eax, [edi]
0x515969: mov     edx, [eax+170h]
0x51596F: mov     ecx, edi
0x515971: call    edx
0x515973: cmp     byte ptr [eax+4], 23h ; '#'
0x515977: jnz     short loc_51597B
0x515979: mov     esi, edi
0x51597B: cmp     esi, ebx
0x51597D: jz      loc_515ACB
0x515983: mov     ecx, esi
0x515985: call    sub_5E32D0
0x51598A: test    al, al
0x51598C: jz      loc_515ACB
0x515992: mov     eax, [esi]
0x515994: mov     edx, [eax+170h]
0x51599A: mov     ecx, esi
0x51599C: call    edx
0x51599E: mov     ebp, eax
0x5159A0: mov     eax, [esi]
0x5159A2: mov     edx, [eax+154h]
0x5159A8: mov     ecx, esi
0x5159AA: xor     edi, edi
0x5159AC: call    edx
0x5159AE: cmp     eax, ebx
0x5159B0: mov     [esp+28h+arg_8], ebx
0x5159B4: jz      short loc_5159C3
0x5159B6: mov     edx, [eax]
0x5159B8: mov     ecx, eax
0x5159BA: mov     eax, [edx+8]
0x5159BD: call    eax
0x5159BF: mov     [esp+28h+arg_8], eax
0x5159C3: mov     ecx, esi; this
0x5159C5: call    Actor_IsFemale
0x5159CA: test    eax, eax
0x5159CC: jnz     short loc_5159D3
0x5159CE: mov     edi, 1
0x5159D3: cmp     edi, 1
0x5159D6: lea     ecx, [ebp+24h]
0x5159D9: jnz     short loc_5159E0
0x5159DB: or      [ecx+4], edi
0x5159DE: jmp     short loc_5159E4
0x5159E0: and     dword ptr [ecx+4], 0FFFFFFFEh
0x5159E4: mov     edx, [ecx]
0x5159E6: mov     eax, [edx+50h]
0x5159E9: push    10h
0x5159EB: call    eax
0x5159ED: cmp     [esp+28h+arg_8], ebx
0x5159F1: jz      short loc_515A55
0x5159F3: mov     edx, [esi]
0x5159F5: mov     eax, [edx+134h]
0x5159FB: push    ebx
0x5159FC: mov     ecx, esi
0x5159FE: call    eax
0x515A00: cmp     eax, ebx
0x515A02: jz      short loc_515A24
0x515A04: mov     ecx, [eax+1Ch]
0x515A07: cmp     ecx, ebx
0x515A09: jz      short loc_515A24
0x515A0B: mov     edx, [ecx]
0x515A0D: mov     edx, [edx+88h]
0x515A13: push    eax
0x515A14: lea     eax, [esp+2Ch+arg_8]
0x515A18: push    eax
0x515A19: call    edx
0x515A1B: lea     ecx, [esp+28h+arg_8]; this
0x515A1F: call    sub_7016A0
0x515A24: mov     eax, [esi]
0x515A26: mov     edx, [eax+130h]
0x515A2C: push    ebx
0x515A2D: mov     ecx, esi
0x515A2F: call    edx
0x515A31: cmp     eax, ebx
0x515A33: jz      short loc_515A55
0x515A35: mov     ecx, [eax+1Ch]
0x515A38: cmp     ecx, ebx
0x515A3A: jz      short loc_515A55
0x515A3C: mov     edx, [ecx]
0x515A3E: mov     edx, [edx+88h]
0x515A44: push    eax
0x515A45: lea     eax, [esp+2Ch+Format]
0x515A49: push    eax
0x515A4A: call    edx
0x515A4C: lea     ecx, [esp+28h+Format]; this
0x515A50: call    sub_7016A0
0x515A55: mov     ecx, ebp
0x515A57: call    sub_405CE0
0x515A5C: mov     ecx, [esi+58h]
0x515A5F: mov     eax, [ecx]
0x515A61: mov     edx, [eax+5Ch]
0x515A64: call    edx
0x515A66: mov     ecx, [esi+58h]
0x515A69: mov     eax, [ecx]
0x515A6B: mov     edx, [eax+31Ch]
0x515A71: push    1
0x515A73: call    edx
0x515A75: mov     ecx, [esi+58h]
0x515A78: mov     eax, [ecx]
0x515A7A: mov     edx, [eax+318h]
0x515A80: push    esi
0x515A81: call    edx
0x515A83: mov     [esp+28h+Format], ebx
0x515A87: mov     [esp+28h+var_10], bx
0x515A8C: mov     [esp+28h+var_E], bx
0x515A91: mov     ecx, ds:0B10BC4h[edi*4]
0x515A98: mov     eax, [esi+0Ch]
0x515A9B: push    ecx
0x515A9C: push    eax
0x515A9D: mov     ecx, esi; this
0x515A9F: mov     [esp+30h+var_4], ebx
0x515AA3: call    TESObjectREFR_GetName
0x515AA8: push    eax; ArgList
0x515AA9: lea     edx, [esp+34h+Format]
0x515AAD: push    offset aS08xIsNowS; "\"%s\" (%08x) is now %s"
0x515AB2: push    edx; int
0x515AB3: call    BSStringT_Static_Format
0x515AB8: mov     esi, [esp+3Ch+Format]
0x515ABC: push    esi; Format
0x515ABD: call    Interface_ConsolePrint
0x515AC2: push    esi
0x515AC3: call    FormHeapFree
0x515AC8: add     esp, 1Ch
0x515ACB: mov     al, 1
0x515ACD: mov     ecx, dword ptr [esp+28h+var_C]
0x515AD1: mov     large fs:0, ecx
0x515AD8: pop     ecx
0x515AD9: pop     edi
0x515ADA: pop     esi
0x515ADB: pop     ebp
0x515ADC: pop     ebx
0x515ADD: add     esp, 14h
0x515AE0: retn
