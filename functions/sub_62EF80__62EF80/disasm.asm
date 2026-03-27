0x62EF80: sub     esp, 8
0x62EF83: push    ebp
0x62EF84: push    esi
0x62EF85: mov     esi, ecx
0x62EF87: mov     eax, [esi]
0x62EF89: mov     edx, [eax+184h]
0x62EF8F: call    edx
0x62EF91: mov     ebp, eax
0x62EF93: test    ebp, ebp
0x62EF95: mov     [esp+10h+var_4], ebp
0x62EF99: jz      loc_62F34D
0x62EF9F: push    edi
0x62EFA0: mov     edi, [esp+14h+arg_0]
0x62EFA4: mov     eax, [edi]
0x62EFA6: mov     edx, [eax+334h]
0x62EFAC: push    1
0x62EFAE: mov     ecx, edi
0x62EFB0: mov     [esp+18h+var_8], 1
0x62EFB8: call    edx
0x62EFBA: test    al, al
0x62EFBC: jz      short loc_62EFEE
0x62EFBE: fld     dword ptr [esi+19Ch]
0x62EFC4: fld     dword ptr ds:0B36750h
0x62EFCA: fcompp
0x62EFCC: fnstsw  ax
0x62EFCE: test    ah, 41h
0x62EFD1: jnz     short loc_62EFEE
0x62EFD3: fld     dword ptr ds:0B33E9Ch
0x62EFD9: pop     edi
0x62EFDA: fadd    dword ptr [esi+19Ch]
0x62EFE0: fstp    dword ptr [esi+19Ch]
0x62EFE6: pop     esi
0x62EFE7: pop     ebp
0x62EFE8: add     esp, 8
0x62EFEB: retn    4
0x62EFEE: mov     ecx, [ebp+28h]
0x62EFF1: test    ecx, ecx
0x62EFF3: jz      short loc_62F00A
0x62EFF5: call    sub_452A60
0x62EFFA: test    eax, eax
0x62EFFC: jz      short loc_62F00A
0x62EFFE: mov     ecx, [ebp+28h]
0x62F001: call    sub_452A60
0x62F006: mov     [esp+14h+var_8], eax
0x62F00A: mov     ecx, [esp+14h+var_8]
0x62F00E: mov     eax, [esi]
0x62F010: mov     edx, [eax+554h]
0x62F016: push    ebx
0x62F017: mov     ebx, [ebp+28h]
0x62F01A: push    ecx
0x62F01B: push    edi
0x62F01C: mov     ecx, esi
0x62F01E: call    edx
0x62F020: test    al, al
0x62F022: jnz     loc_62F491
0x62F028: mov     eax, [esi+2Ch]
0x62F02B: test    eax, eax
0x62F02D: jz      short loc_62F049
0x62F02F: mov     eax, [eax+8]
0x62F032: mov     ecx, eax
0x62F034: shr     ecx, 5
0x62F037: test    cl, 1
0x62F03A: jnz     short loc_62F049
0x62F03C: shr     eax, 0Bh
0x62F03F: test    al, 1
0x62F041: jnz     short loc_62F049
0x62F043: cmp     dword ptr [esi+44h], 0
0x62F047: jnz     short loc_62F056
0x62F049: mov     edx, [esi]
0x62F04B: mov     eax, [edx+558h]
0x62F051: push    edi
0x62F052: mov     ecx, esi
0x62F054: call    eax
0x62F056: cmp     byte ptr [ebp+20h], 0
0x62F05A: jnz     loc_62F218
0x62F060: mov     ecx, ebx
0x62F062: call    sub_569E80
0x62F067: cmp     eax, 0Dh
0x62F06A: jz      short loc_62F08C
0x62F06C: mov     ecx, ebx
0x62F06E: call    sub_569E80
0x62F073: cmp     eax, 15h
0x62F076: jl      loc_62F218
0x62F07C: mov     ecx, ebx
0x62F07E: call    sub_569E80
0x62F083: cmp     eax, 19h
0x62F086: jg      loc_62F218
0x62F08C: mov     edx, [esi]
0x62F08E: mov     eax, [edx+51Ch]
0x62F094: push    1
0x62F096: push    edi
0x62F097: mov     ecx, esi
0x62F099: call    eax
0x62F09B: cmp     dword ptr [esi+4], 1
0x62F09F: jle     loc_62F34B
0x62F0A5: lea     ebp, [esi+3Ch]
0x62F0A8: mov     ecx, ebp
0x62F0AA: call    BSSimpleList_IsEmpty
0x62F0AF: test    al, al
0x62F0B1: mov     ecx, esi
0x62F0B3: jnz     short loc_62F0EC
0x62F0B5: mov     edx, [esi]
0x62F0B7: mov     eax, [edx+188h]
0x62F0BD: push    0FFFFFFFFh
0x62F0BF: push    edi
0x62F0C0: call    eax
0x62F0C2: mov     eax, [ebp+0]
0x62F0C5: push    eax
0x62F0C6: mov     ecx, ebp
0x62F0C8: mov     [esi+44h], eax
0x62F0CB: call    BSSimpleList_Remove
0x62F0D0: mov     eax, [esi+44h]
0x62F0D3: mov     ecx, [eax]
0x62F0D5: mov     edx, [esi]
0x62F0D7: mov     edx, [edx+0D0h]
0x62F0DD: push    ecx
0x62F0DE: mov     ecx, esi
0x62F0E0: call    edx
0x62F0E2: pop     ebx
0x62F0E3: pop     edi
0x62F0E4: pop     esi
0x62F0E5: pop     ebp
0x62F0E6: add     esp, 8
0x62F0E9: retn    4
0x62F0EC: mov     eax, [esi]
0x62F0EE: mov     edx, [eax+188h]
0x62F0F4: push    1
0x62F0F6: push    edi
0x62F0F7: call    edx
0x62F0F9: mov     ecx, ebx
0x62F0FB: call    sub_569E80
0x62F100: cmp     eax, 15h
0x62F103: jz      short loc_62F115
0x62F105: mov     ecx, ebx
0x62F107: call    sub_569E80
0x62F10C: cmp     eax, 16h
0x62F10F: jnz     loc_62F1A4
0x62F115: mov     eax, [esi+8]
0x62F118: test    eax, eax
0x62F11A: mov     byte ptr [esp+18h+var_8], 1
0x62F11F: mov     byte ptr [esp+18h+arg_0], 1
0x62F124: jz      short loc_62F144
0x62F126: mov     eax, [eax+1Ch]
0x62F129: mov     ecx, eax
0x62F12B: shr     ecx, 14h
0x62F12E: test    cl, 1
0x62F131: jz      short loc_62F138
0x62F133: mov     byte ptr [esp+18h+var_8], 0
0x62F138: shr     eax, 15h
0x62F13B: test    al, 1
0x62F13D: jz      short loc_62F144
0x62F13F: mov     byte ptr [esp+18h+arg_0], 0
0x62F144: mov     ecx, edi
0x62F146: call    sub_5E32D0
0x62F14B: test    al, al
0x62F14D: mov     ecx, edi; this
0x62F14F: jz      short loc_62F177
0x62F151: mov     edx, [edi]
0x62F153: mov     eax, [edx+170h]
0x62F159: call    eax
0x62F15B: test    eax, eax
0x62F15D: jz      short loc_62F1A4
0x62F15F: mov     ecx, [esp+18h+arg_0]
0x62F163: mov     edx, [esp+18h+var_8]
0x62F167: push    1; char
0x62F169: push    0; int
0x62F16B: push    ecx; int
0x62F16C: push    edx; int
0x62F16D: push    edi; int
0x62F16E: mov     ecx, eax; int
0x62F170: call    sub_5227A0
0x62F175: jmp     short loc_62F1A4
0x62F177: call    Actor_IsCreature
0x62F17C: test    al, al
0x62F17E: jz      short loc_62F1A4
0x62F180: mov     eax, [edi]
0x62F182: mov     edx, [eax+170h]
0x62F188: mov     ecx, edi
0x62F18A: call    edx
0x62F18C: test    eax, eax
0x62F18E: jz      short loc_62F1A4
0x62F190: mov     ecx, [esp+18h+arg_0]
0x62F194: mov     edx, [esp+18h+var_8]
0x62F198: push    1
0x62F19A: push    ecx
0x62F19B: push    edx
0x62F19C: push    edi
0x62F19D: mov     ecx, eax
0x62F19F: call    sub_51E240
0x62F1A4: mov     eax, [esi+0E4h]
0x62F1AA: test    eax, eax
0x62F1AC: jz      loc_62F34B
0x62F1B2: mov     eax, [eax+8]
0x62F1B5: test    eax, eax
0x62F1B7: jz      loc_62F34B
0x62F1BD: cmp     byte ptr [eax+4], 21h ; '!'
0x62F1C1: jnz     loc_62F34B
0x62F1C7: cmp     byte ptr [eax+90h], 5
0x62F1CE: jnz     loc_62F34B
0x62F1D4: cmp     dword ptr [esi+0ECh], 0
0x62F1DB: jnz     loc_62F34B
0x62F1E1: mov     eax, [edi]
0x62F1E3: mov     edx, [eax+2BCh]
0x62F1E9: mov     ecx, edi
0x62F1EB: call    edx
0x62F1ED: test    eax, eax
0x62F1EF: jz      loc_62F34B
0x62F1F5: mov     esi, [eax+8]
0x62F1F8: push    0
0x62F1FA: push    1
0x62F1FC: push    0
0x62F1FE: mov     ecx, eax
0x62F200: call    TESHealthForm_GetHealth
0x62F205: push    eax
0x62F206: push    esi
0x62F207: mov     ecx, edi
0x62F209: call    Actor_EquipItem
0x62F20E: pop     ebx
0x62F20F: pop     edi
0x62F210: pop     esi
0x62F211: pop     ebp
0x62F212: add     esp, 8
0x62F215: retn    4
0x62F218: mov     ecx, [esp+18h+var_8]
0x62F21C: mov     eax, [esi]
0x62F21E: mov     edx, [eax+554h]
0x62F224: push    ecx
0x62F225: push    edi
0x62F226: mov     ecx, esi
0x62F228: call    edx
0x62F22A: test    al, al
0x62F22C: jz      loc_62F2C8
0x62F232: mov     eax, [esi]
0x62F234: mov     edx, [eax+194h]
0x62F23A: push    edi
0x62F23B: mov     ecx, esi
0x62F23D: call    edx
0x62F23F: cmp     dword ptr [esi+0C0h], 0
0x62F246: jnz     short loc_62F286
0x62F248: fld     dword ptr ds:0A30634h
0x62F24E: push    ecx
0x62F24F: fstp    [esp+18h+var_18]; float
0x62F252: push    0; char
0x62F254: push    edi; int
0x62F255: mov     ecx, ebp
0x62F257: call    sub_566DC0
0x62F25C: test    al, al
0x62F25E: jnz     short loc_62F276
0x62F260: cmp     byte ptr [ebp+20h], 3
0x62F264: jnz     short loc_62F276
0x62F266: mov     eax, [esi]
0x62F268: mov     edx, [eax+17Ch]
0x62F26E: push    0
0x62F270: mov     ecx, esi
0x62F272: call    edx
0x62F274: jmp     short loc_62F295
0x62F276: cmp     dword ptr [ebp+18h], 1Ah
0x62F27A: jnz     short loc_62F286
0x62F27C: cmp     dword ptr [ebp+30h], 0
0x62F280: jnz     short loc_62F286
0x62F282: push    2
0x62F284: jmp     short loc_62F288
0x62F286: push    1
0x62F288: mov     eax, [esi]
0x62F28A: mov     edx, [eax+188h]
0x62F290: push    edi
0x62F291: mov     ecx, esi
0x62F293: call    edx
0x62F295: mov     eax, [esi]
0x62F297: mov     edx, [eax+2C0h]
0x62F29D: mov     ecx, esi
0x62F29F: call    edx
0x62F2A1: cmp     ax, 400h
0x62F2A5: jnz     loc_62F34B
0x62F2AB: mov     eax, [esi]
0x62F2AD: mov     edx, [eax+2C4h]
0x62F2B3: push    0
0x62F2B5: push    400h
0x62F2BA: mov     ecx, esi
0x62F2BC: call    edx
0x62F2BE: pop     ebx
0x62F2BF: pop     edi
0x62F2C0: pop     esi
0x62F2C1: pop     ebp
0x62F2C2: add     esp, 8
0x62F2C5: retn    4
0x62F2C8: mov     eax, [esi+2Ch]
0x62F2CB: test    eax, eax
0x62F2CD: jz      short loc_62F2E3
0x62F2CF: mov     eax, [eax+8]
0x62F2D2: mov     ecx, eax
0x62F2D4: shr     ecx, 5
0x62F2D7: test    cl, 1
0x62F2DA: jnz     short loc_62F2E3
0x62F2DC: shr     eax, 0Bh
0x62F2DF: test    al, 1
0x62F2E1: jz      short loc_62F2F0
0x62F2E3: mov     edx, [esi]
0x62F2E5: mov     eax, [edx+558h]
0x62F2EB: push    edi
0x62F2EC: mov     ecx, esi
0x62F2EE: call    eax
0x62F2F0: cmp     byte ptr [ebp+20h], 8
0x62F2F4: jnz     loc_62F3A6
0x62F2FA: mov     ecx, [esi+2Ch]
0x62F2FD: test    ecx, ecx
0x62F2FF: jz      short loc_62F316
0x62F301: mov     edx, [ecx]
0x62F303: mov     eax, [edx+170h]
0x62F309: call    eax
0x62F30B: push    eax
0x62F30C: call    sub_568240
0x62F311: add     esp, 4
0x62F314: jmp     short loc_62F31E
0x62F316: mov     ecx, [ebp+28h]
0x62F319: call    sub_569E80
0x62F31E: mov     ebp, eax
0x62F320: lea     eax, [ebp-1]; switch 26 cases
0x62F323: cmp     eax, 19h
0x62F326: ja      short def_62F32F; jumptable 0062F32F default case, cases 2-5,8,10,13,14,17-22,24,25
0x62F328: movzx   ecx, ds:byte_62F4C4[eax]
0x62F32F: jmp     ds:jpt_62F32F[ecx*4]; switch jump
0x62F336: mov     [esi+0E0h], ebp; jumptable 0062F32F cases 1,6,7,11,12,15,16,23,26
0x62F33C: mov     edx, [esi]
0x62F33E: mov     eax, [edx+188h]
0x62F344: push    1
0x62F346: mov     ecx, esi
0x62F348: push    edi
0x62F349: call    eax
0x62F34B: pop     ebx
0x62F34C: pop     edi
0x62F34D: pop     esi
0x62F34E: pop     ebp
0x62F34F: add     esp, 8
0x62F352: retn    4
0x62F355: mov     ecx, [esi+2Ch]; jumptable 0062F32F case 9
0x62F358: mov     edx, [ecx]
0x62F35A: mov     eax, [edx+170h]
0x62F360: call    eax
0x62F362: cmp     byte ptr [eax+4], 1Ah
0x62F366: jnz     short loc_62F392
0x62F368: mov     ecx, [esi+2Ch]
0x62F36B: mov     edx, [ecx]
0x62F36D: mov     eax, [edx+170h]
0x62F373: call    eax
0x62F375: test    eax, eax
0x62F377: jz      short loc_62F392
0x62F379: mov     ecx, [eax+7Ch]
0x62F37C: shr     ecx, 1
0x62F37E: test    cl, 1
0x62F381: jnz     short loc_62F392
0x62F383: mov     edx, [esi]
0x62F385: mov     eax, [edx+188h]
0x62F38B: push    1
0x62F38D: push    edi
0x62F38E: mov     ecx, esi
0x62F390: call    eax
0x62F392: pop     ebx
0x62F393: pop     edi
0x62F394: mov     [esi+0E0h], ebp
0x62F39A: pop     esi
0x62F39B: pop     ebp
0x62F39C: add     esp, 8
0x62F39F: retn    4
0x62F3A2: mov     ebp, [esp+18h+var_4]; jumptable 0062F32F default case, cases 2-5,8,10,13,14,17-22,24,25
0x62F3A6: mov     ecx, [esi+2Ch]
0x62F3A9: test    ecx, ecx
0x62F3AB: jz      short loc_62F33C
0x62F3AD: mov     edx, [ecx]
0x62F3AF: mov     eax, [edx+190h]
0x62F3B5: call    eax
0x62F3B7: test    al, al
0x62F3B9: mov     eax, [esi+44h]
0x62F3BC: jz      short loc_62F429
0x62F3BE: test    eax, eax
0x62F3C0: jz      loc_62F33C
0x62F3C6: mov     eax, [eax+1Ch]
0x62F3C9: cmp     eax, 4
0x62F3CC: mov     ecx, esi
0x62F3CE: jnz     short loc_62F3E5
0x62F3D0: mov     edx, [esi]
0x62F3D2: mov     eax, [edx+580h]
0x62F3D8: push    edi
0x62F3D9: call    eax
0x62F3DB: pop     ebx
0x62F3DC: pop     edi
0x62F3DD: pop     esi
0x62F3DE: pop     ebp
0x62F3DF: add     esp, 8
0x62F3E2: retn    4
0x62F3E5: cmp     eax, 5
0x62F3E8: jnz     short loc_62F3FA
0x62F3EA: push    edi
0x62F3EB: call    sub_628400
0x62F3F0: pop     ebx
0x62F3F1: pop     edi
0x62F3F2: pop     esi
0x62F3F3: pop     ebp
0x62F3F4: add     esp, 8
0x62F3F7: retn    4
0x62F3FA: cmp     eax, 2
0x62F3FD: mov     edx, [esi]
0x62F3FF: jnz     short loc_62F414
0x62F401: mov     eax, [edx+578h]
0x62F407: push    edi
0x62F408: call    eax
0x62F40A: pop     ebx
0x62F40B: pop     edi
0x62F40C: pop     esi
0x62F40D: pop     ebp
0x62F40E: add     esp, 8
0x62F411: retn    4
0x62F414: mov     eax, [edx+51Ch]
0x62F41A: push    0
0x62F41C: push    edi
0x62F41D: call    eax
0x62F41F: pop     ebx
0x62F420: pop     edi
0x62F421: pop     esi
0x62F422: pop     ebp
0x62F423: add     esp, 8
0x62F426: retn    4
0x62F429: test    eax, eax
0x62F42B: jz      short loc_62F45F
0x62F42D: cmp     dword ptr [eax+1Ch], 3
0x62F431: mov     edx, [esi]
0x62F433: mov     ecx, esi
0x62F435: jnz     short loc_62F44A
0x62F437: mov     eax, [edx+57Ch]
0x62F43D: push    edi
0x62F43E: call    eax
0x62F440: pop     ebx
0x62F441: pop     edi
0x62F442: pop     esi
0x62F443: pop     ebp
0x62F444: add     esp, 8
0x62F447: retn    4
0x62F44A: mov     eax, [edx+51Ch]
0x62F450: push    1
0x62F452: push    edi
0x62F453: call    eax
0x62F455: pop     ebx
0x62F456: pop     edi
0x62F457: pop     esi
0x62F458: pop     ebp
0x62F459: add     esp, 8
0x62F45C: retn    4
0x62F45F: mov     ecx, [ebp+28h]
0x62F462: test    ecx, ecx
0x62F464: jz      loc_62F33C
0x62F46A: call    sub_569E60
0x62F46F: cmp     eax, [esi+2Ch]
0x62F472: jnz     loc_62F33C
0x62F478: mov     edx, [esi]
0x62F47A: mov     eax, [edx+51Ch]
0x62F480: push    1
0x62F482: mov     ecx, esi
0x62F484: push    edi
0x62F485: call    eax
0x62F487: pop     ebx
0x62F488: pop     edi
0x62F489: pop     esi
0x62F48A: pop     ebp
0x62F48B: add     esp, 8
0x62F48E: retn    4
0x62F491: mov     ecx, [esi+8]
0x62F494: cmp     dword ptr [ecx+18h], 1Ah
0x62F498: jnz     loc_62F33C
0x62F49E: mov     edx, [esi]
0x62F4A0: mov     eax, [edx+188h]
0x62F4A6: push    2
0x62F4A8: mov     ecx, esi
0x62F4AA: push    edi
0x62F4AB: call    eax
0x62F4AD: pop     ebx
0x62F4AE: pop     edi
0x62F4AF: pop     esi
0x62F4B0: pop     ebp
0x62F4B1: add     esp, 8
0x62F4B4: retn    4
