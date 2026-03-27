0x47E190: mov     eax, [esp+arg_0]
0x47E194: push    eax
0x47E195: call    sub_47D640
0x47E19A: add     esp, 4
0x47E19D: test    eax, eax
0x47E19F: jl      short loc_47E1A9
0x47E1A1: mov     eax, ds:0B081D0h[eax*4]
0x47E1A8: retn
0x47E1A9: mov     cl, byte ptr [esp+arg_0]
0x47E1AD: movzx   eax, cl
0x47E1B0: lea     edx, [eax-3]; switch 59 cases
0x47E1B3: cmp     edx, 3Ah
0x47E1B6: ja      TESForm_GetFormTypeName___def_47E1C3; jumptable 0047E1C3 default case, cases 14-16,18-44,50-52,54-56,58
0x47E1BC: movzx   edx, ds:byte_47E2D8[edx]
0x47E1C3: jmp     ds:jpt_47E1C3[edx*4]; switch jump
0x47E1CA: mov     eax, ds:0B06870h; jumptable 0047E1C3 case 9
0x47E1CF: retn
0x47E1D0: mov     eax, ds:0B06874h; jumptable 0047E1C3 case 5
0x47E1D5: retn
0x47E1D6: mov     eax, ds:0B06878h; jumptable 0047E1C3 case 17
0x47E1DB: retn
0x47E1DC: mov     eax, ds:0B0687Ch; jumptable 0047E1C3 case 13
0x47E1E1: retn
0x47E1E2: mov     eax, ds:0B06880h; jumptable 0047E1C3 case 57
0x47E1E7: retn
0x47E1E8: mov     eax, ds:0B06884h; jumptable 0047E1C3 case 48
0x47E1ED: retn
0x47E1EE: mov     eax, ds:0B06888h; jumptable 0047E1C3 case 6
0x47E1F3: retn
0x47E1F4: mov     eax, ds:0B0688Ch; jumptable 0047E1C3 case 10
0x47E1F9: retn
0x47E1FA: mov     eax, ds:0B06890h; jumptable 0047E1C3 case 4
0x47E1FF: retn
0x47E200: mov     eax, ds:0B06894h; jumptable 0047E1C3 case 47
0x47E205: retn
0x47E206: mov     eax, ds:0B06898h; jumptable 0047E1C3 case 3
0x47E20B: retn
0x47E20C: mov     eax, ds:0B0689Ch; jumptable 0047E1C3 case 12
0x47E211: retn
0x47E212: mov     eax, ds:0B068A0h; jumptable 0047E1C3 case 53
0x47E217: retn
0x47E218: mov     eax, ds:0B068A4h; jumptable 0047E1C3 case 46
0x47E21D: retn
0x47E21E: mov     eax, ds:0B068A8h; jumptable 0047E1C3 case 45
0x47E223: retn
0x47E224: mov     eax, ds:0B068ACh; jumptable 0047E1C3 case 11
0x47E229: retn
0x47E22A: mov     eax, ds:0B068B0h; jumptable 0047E1C3 case 59
0x47E22F: retn
0x47E230: mov     eax, ds:0B068B4h; jumptable 0047E1C3 case 7
0x47E235: retn
0x47E236: mov     eax, ds:0B068B8h; jumptable 0047E1C3 case 8
0x47E23B: retn
0x47E23C: mov     eax, ds:0B068BCh; jumptable 0047E1C3 case 49
0x47E241: retn
0x47E242: mov     eax, ds:0B068C0h; jumptable 0047E1C3 case 60
0x47E247: retn
0x47E248: mov     eax, ds:0B068C4h; jumptable 0047E1C3 case 61
0x47E24D: retn
0x47E24E: cmp     cl, 45h ; 'E'; jumptable 0047E1C3 default case, cases 14-16,18-44,50-52,54-56,58
0x47E251: jb      short loc_47E26D
0x47E253: lea     eax, [eax+eax*2]
0x47E256: mov     ecx, ds:0B05E04h[eax*4]
0x47E25D: push    ecx; ArgList
0x47E25E: push    offset aInvalidFormidS; "Invalid FormID sent to FormIDToString()"...
0x47E263: call    PrintError
0x47E268: add     esp, 8
0x47E26B: xor     cl, cl
0x47E26D: movzx   eax, cl
0x47E270: lea     edx, [eax+eax*2]
0x47E273: mov     eax, ds:0B05E04h[edx*4]
0x47E27A: retn
