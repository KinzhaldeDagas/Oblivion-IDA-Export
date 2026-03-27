0x61E0F0: sub     esp, 30h
0x61E0F3: push    ebx
0x61E0F4: push    ebp
0x61E0F5: mov     ebp, ecx
0x61E0F7: mov     ecx, [ebp+3Ch]
0x61E0FA: mov     eax, [ecx]
0x61E0FC: mov     edx, [eax+25Ch]
0x61E102: mov     ebx, 0FFh
0x61E107: push    esi
0x61E108: mov     [esp+3Ch+var_2D], 0
0x61E10D: mov     [esp+3Ch+var_2E], 0
0x61E112: mov     [esp+3Ch+var_28], ebx
0x61E116: mov     [esp+3Ch+var_2C], ebx
0x61E11A: xor     esi, esi
0x61E11C: call    edx
0x61E11E: test    al, al
0x61E120: jz      short loc_61E12D
0x61E122: pop     esi
0x61E123: pop     ebp
0x61E124: mov     eax, ebx
0x61E126: pop     ebx
0x61E127: add     esp, 30h
0x61E12A: retn    14h
0x61E12D: cmp     byte ptr [ebp+0C4h], 0
0x61E134: push    edi
0x61E135: jz      loc_61E251
0x61E13B: fld     [esp+40h+arg_4]
0x61E13F: push    0; int
0x61E141: sub     esp, 8
0x61E144: fstp    [esp+4Ch+var_48]; float
0x61E148: mov     ecx, ebp
0x61E14A: fld     [esp+4Ch+arg_0]
0x61E14E: fstp    [esp+4Ch+var_4C]; float
0x61E151: call    sub_613440
0x61E156: test    al, al
0x61E158: jnz     loc_61E251
0x61E15E: mov     ecx, [ebp+3Ch]
0x61E161: call    sub_5E0F50
0x61E166: mov     edx, [eax]
0x61E168: mov     ecx, eax
0x61E16A: mov     eax, [edx+164h]
0x61E170: call    eax
0x61E172: fstp    [esp+40h+var_24]
0x61E176: fld     [esp+40h+var_24]
0x61E17A: xor     ecx, ecx
0x61E17C: fldz
0x61E17E: lea     edx, [ebp+0B0h]
0x61E184: fld     [esp+40h+arg_0]
0x61E188: fld     [esp+40h+arg_4]
0x61E18C: fxch    st(2)
0x61E18E: fcom    dword ptr [edx]
0x61E190: fnstsw  ax
0x61E192: test    ah, 1
0x61E195: jnz     short loc_61E19F
0x61E197: fxch    st(2)
0x61E199: fst     [esp+40h+var_24]
0x61E19D: jmp     short loc_61E1A7
0x61E19F: fld     dword ptr [edx]
0x61E1A1: fstp    [esp+40h+var_24]
0x61E1A5: fxch    st(2)
0x61E1A7: fld     [esp+40h+var_24]
0x61E1AB: fmul    st, st(4)
0x61E1AD: fstp    [esp+40h+var_24]
0x61E1B1: fld     [esp+40h+var_24]
0x61E1B5: fcomp   st(2)
0x61E1B7: fnstsw  ax
0x61E1B9: test    ah, 1
0x61E1BC: jnz     short loc_61E1C8
0x61E1BE: lea     eax, [ecx+16h]
0x61E1C1: mov     [esp+esi*4+40h+var_14], eax
0x61E1C5: add     esi, 1
0x61E1C8: add     ecx, 1
0x61E1CB: add     edx, 4
0x61E1CE: cmp     ecx, 5
0x61E1D1: jl      short loc_61E18C
0x61E1D3: test    esi, esi
0x61E1D5: fstp    st(3)
0x61E1D7: fstp    st
0x61E1D9: fstp    st
0x61E1DB: fstp    st
0x61E1DD: jnz     short loc_61E1F2
0x61E1DF: cmp     [esp+40h+arg_10], 0
0x61E1E4: jz      short loc_61E1F2
0x61E1E6: pop     edi
0x61E1E7: pop     esi
0x61E1E8: pop     ebp
0x61E1E9: mov     eax, ebx
0x61E1EB: pop     ebx
0x61E1EC: add     esp, 30h
0x61E1EF: retn    14h
0x61E1F2: cmp     esi, 5
0x61E1F5: jge     short loc_61E206
0x61E1F7: mov     ecx, 5
0x61E1FC: lea     edi, [esp+esi*4+40h+var_14]
0x61E200: sub     ecx, esi
0x61E202: mov     eax, ebx
0x61E204: rep stosd
0x61E206: cmp     esi, 1
0x61E209: jnz     short loc_61E211
0x61E20B: mov     ecx, [esp+40h+var_14]
0x61E20F: jmp     short loc_61E245
0x61E211: jle     short loc_61E251
0x61E213: mov     ecx, [ebp+3Ch]
0x61E216: call    sub_5E0F50
0x61E21B: mov     edx, [eax]
0x61E21D: mov     ecx, eax
0x61E21F: mov     eax, [edx+16Ch]
0x61E225: push    2
0x61E227: call    eax
0x61E229: test    al, al
0x61E22B: jz      short loc_61E234
0x61E22D: mov     [esp+40h+var_2E], 1
0x61E232: jmp     short loc_61E251
0x61E234: push    0; Seed
0x61E236: call    GetRandomLargeInteger?
0x61E23B: cdq
0x61E23C: add     esp, 4
0x61E23F: idiv    esi
0x61E241: mov     ecx, [esp+edx*4+40h+var_14]
0x61E245: cmp     ecx, ebx
0x61E247: mov     [esp+40h+var_2C], ecx
0x61E24B: jnz     loc_61E4A5
0x61E251: mov     ecx, [ebp+3Ch]
0x61E254: call    sub_5E0F50
0x61E259: mov     edx, [eax]
0x61E25B: mov     ecx, eax
0x61E25D: mov     eax, [edx+16Ch]
0x61E263: push    2
0x61E265: call    eax
0x61E267: test    al, al
0x61E269: jnz     loc_61E2FE
0x61E26F: fld     [esp+40h+arg_0]
0x61E273: fld     dword ptr ds:0B36F18h
0x61E279: fcomp   st(1)
0x61E27B: fnstsw  ax
0x61E27D: test    ah, 41h
0x61E280: jnz     short loc_61E28B
0x61E282: fstp    st
0x61E284: mov     esi, 2
0x61E289: jmp     short loc_61E2CB
0x61E28B: fld     [esp+40h+arg_4]
0x61E28F: fmul    qword ptr ds:0A3FA98h
0x61E295: fcompp
0x61E297: fnstsw  ax
0x61E299: test    ah, 5
0x61E29C: jp      short loc_61E2A5
0x61E29E: mov     esi, 1
0x61E2A3: jmp     short loc_61E2CB
0x61E2A5: mov     ecx, [ebp+3Ch]
0x61E2A8: mov     ecx, [ecx+58h]
0x61E2AB: mov     edx, [ecx]
0x61E2AD: mov     eax, [edx+2C0h]
0x61E2B3: call    eax
0x61E2B5: movzx   eax, ax
0x61E2B8: test    al, 4
0x61E2BA: jz      short loc_61E2C3
0x61E2BC: mov     esi, 3
0x61E2C1: jmp     short loc_61E2CB
0x61E2C3: movzx   esi, al
0x61E2C6: shr     esi, 1
0x61E2C8: and     esi, 4
0x61E2CB: fld     [esp+40h+arg_4]
0x61E2CF: push    0; int
0x61E2D1: sub     esp, 8
0x61E2D4: fstp    [esp+4Ch+var_48]; float
0x61E2D8: mov     ecx, ebp
0x61E2DA: fld     [esp+4Ch+arg_0]
0x61E2DE: fstp    [esp+4Ch+var_4C]; float
0x61E2E1: call    sub_613440
0x61E2E6: test    al, al
0x61E2E8: jz      loc_61E4A5
0x61E2EE: mov     ecx, ds:0B14B78h[esi*4]
0x61E2F5: mov     [esp+40h+var_2C], ecx
0x61E2F9: jmp     loc_61E4A5
0x61E2FE: push    0; Seed
0x61E300: xor     bl, bl
0x61E302: mov     dword ptr [esp+44h+arg_10], 0
0x61E30A: call    GetRandomLargeInteger?
0x61E30F: cdq
0x61E310: mov     ecx, 64h ; 'd'
0x61E315: idiv    ecx
0x61E317: add     esp, 4
0x61E31A: cmp     [esp+40h+var_2E], bl
0x61E31E: mov     edi, edx
0x61E320: jz      short loc_61E32B
0x61E322: cmp     [esp+40h+var_14], 16h
0x61E327: jnz     short loc_61E32B
0x61E329: mov     bl, 1
0x61E32B: mov     ecx, [ebp+3Ch]
0x61E32E: call    sub_5E0F50
0x61E333: mov     edx, [eax]
0x61E335: mov     ecx, eax
0x61E337: mov     eax, [edx+128h]
0x61E33D: call    eax
0x61E33F: movsx   esi, al
0x61E342: cmp     edi, esi
0x61E344: jg      short loc_61E35E
0x61E346: cmp     [esp+40h+var_2E], 0
0x61E34B: jz      short loc_61E351
0x61E34D: test    bl, bl
0x61E34F: jz      short loc_61E36A
0x61E351: mov     [esp+40h+var_2C], 16h
0x61E359: jmp     loc_61E4A5
0x61E35E: test    bl, bl
0x61E360: jz      short loc_61E36A
0x61E362: mov     dword ptr [esp+40h+arg_10], 1
0x61E36A: xor     bl, bl
0x61E36C: cmp     [esp+40h+var_2E], bl
0x61E370: jz      short loc_61E37F
0x61E372: mov     ecx, dword ptr [esp+40h+arg_10]
0x61E376: cmp     [esp+ecx*4+40h+var_14], 17h
0x61E37B: jnz     short loc_61E37F
0x61E37D: mov     bl, 1
0x61E37F: mov     ecx, [ebp+3Ch]
0x61E382: call    sub_5E0F50
0x61E387: mov     edx, [eax]
0x61E389: mov     ecx, eax
0x61E38B: mov     eax, [edx+12Ch]
0x61E391: call    eax
0x61E393: movsx   ecx, al
0x61E396: add     esi, ecx
0x61E398: cmp     edi, esi
0x61E39A: jg      short loc_61E3B4
0x61E39C: cmp     [esp+40h+var_2E], 0
0x61E3A1: jz      short loc_61E3A7
0x61E3A3: test    bl, bl
0x61E3A5: jz      short loc_61E3BD
0x61E3A7: mov     [esp+40h+var_2C], 17h
0x61E3AF: jmp     loc_61E4A5
0x61E3B4: test    bl, bl
0x61E3B6: jz      short loc_61E3BD
0x61E3B8: add     dword ptr [esp+40h+arg_10], 1
0x61E3BD: xor     bl, bl
0x61E3BF: cmp     [esp+40h+var_2E], bl
0x61E3C3: jz      short loc_61E3D2
0x61E3C5: mov     edx, dword ptr [esp+40h+arg_10]
0x61E3C9: cmp     [esp+edx*4+40h+var_14], 18h
0x61E3CE: jnz     short loc_61E3D2
0x61E3D0: mov     bl, 1
0x61E3D2: mov     ecx, [ebp+3Ch]
0x61E3D5: call    sub_5E0F50
0x61E3DA: mov     edx, [eax]
0x61E3DC: mov     ecx, eax
0x61E3DE: mov     eax, [edx+130h]
0x61E3E4: call    eax
0x61E3E6: movsx   ecx, al
0x61E3E9: add     esi, ecx
0x61E3EB: cmp     edi, esi
0x61E3ED: jg      short loc_61E407
0x61E3EF: cmp     [esp+40h+var_2E], 0
0x61E3F4: jz      short loc_61E3FA
0x61E3F6: test    bl, bl
0x61E3F8: jz      short loc_61E410
0x61E3FA: mov     [esp+40h+var_2C], 18h
0x61E402: jmp     loc_61E4A5
0x61E407: test    bl, bl
0x61E409: jz      short loc_61E410
0x61E40B: add     dword ptr [esp+40h+arg_10], 1
0x61E410: xor     bl, bl
0x61E412: cmp     [esp+40h+var_2E], bl
0x61E416: jz      short loc_61E425
0x61E418: mov     edx, dword ptr [esp+40h+arg_10]
0x61E41C: cmp     [esp+edx*4+40h+var_14], 19h
0x61E421: jnz     short loc_61E425
0x61E423: mov     bl, 1
0x61E425: mov     ecx, [ebp+3Ch]
0x61E428: call    sub_5E0F50
0x61E42D: mov     edx, [eax]
0x61E42F: mov     ecx, eax
0x61E431: mov     eax, [edx+134h]
0x61E437: call    eax
0x61E439: movsx   ecx, al
0x61E43C: add     esi, ecx
0x61E43E: cmp     edi, esi
0x61E440: jg      short loc_61E457
0x61E442: cmp     [esp+40h+var_2E], 0
0x61E447: jz      short loc_61E44D
0x61E449: test    bl, bl
0x61E44B: jz      short loc_61E460
0x61E44D: mov     [esp+40h+var_2C], 19h
0x61E455: jmp     short loc_61E4A5
0x61E457: test    bl, bl
0x61E459: jz      short loc_61E460
0x61E45B: add     dword ptr [esp+40h+arg_10], 1
0x61E460: xor     bl, bl
0x61E462: cmp     [esp+40h+var_2E], bl
0x61E466: jz      short loc_61E475
0x61E468: mov     edx, dword ptr [esp+40h+arg_10]
0x61E46C: cmp     [esp+edx*4+40h+var_14], 1Ah
0x61E471: jnz     short loc_61E475
0x61E473: mov     bl, 1
0x61E475: mov     ecx, [ebp+3Ch]
0x61E478: call    sub_5E0F50
0x61E47D: mov     edx, [eax]
0x61E47F: mov     ecx, eax
0x61E481: mov     eax, [edx+138h]
0x61E487: call    eax
0x61E489: movsx   ecx, al
0x61E48C: add     ecx, esi
0x61E48E: cmp     edi, ecx
0x61E490: jg      short loc_61E4A5
0x61E492: cmp     [esp+40h+var_2E], 0
0x61E497: jz      short loc_61E49D
0x61E499: test    bl, bl
0x61E49B: jz      short loc_61E4A5
0x61E49D: mov     [esp+40h+var_2C], 1Ah
0x61E4A5: mov     edx, ds:0B3F9A8h
0x61E4AB: mov     eax, ds:0B3F9ACh
0x61E4B0: mov     edi, [esp+40h+var_2C]
0x61E4B4: mov     ecx, ds:0B3F9B0h
0x61E4BA: mov     dword ptr [esp+40h+var_20], edx
0x61E4BE: lea     edx, [esp+40h+var_20]
0x61E4C2: push    edx
0x61E4C3: mov     dword ptr [esp+44h+var_20+4], eax
0x61E4C7: mov     eax, [ebp+3Ch]
0x61E4CA: push    edi
0x61E4CB: push    eax
0x61E4CC: mov     [esp+4Ch+var_18], ecx
0x61E4D0: call    sub_615F70
0x61E4D5: add     esp, 0Ch
0x61E4D8: test    al, al
0x61E4DA: jz      short loc_61E516
0x61E4DC: mov     esi, [ebp+3Ch]
0x61E4DF: mov     eax, [esi]
0x61E4E1: mov     edx, [eax+154h]
0x61E4E7: mov     ecx, esi
0x61E4E9: call    edx
0x61E4EB: add     eax, 30h ; '0'
0x61E4EE: push    eax
0x61E4EF: lea     eax, [esp+44h+var_20]
0x61E4F3: push    eax
0x61E4F4: lea     ecx, [esp+48h+var_14]
0x61E4F8: push    ecx
0x61E4F9: call    sub_710250
0x61E4FE: mov     edx, [esi]
0x61E500: mov     eax, [edx+174h]
0x61E506: add     esp, 0Ch
0x61E509: mov     ecx, esi
0x61E50B: call    eax
0x61E50D: mov     [esp+40h+var_28], edi
0x61E511: mov     [esp+40h+var_2D], 1
0x61E516: cmp     byte ptr ds:0B3B908h, 0
0x61E51D: jz      short loc_61E58E
0x61E51F: cmp     [esp+40h+var_2D], 0
0x61E524: jz      short loc_61E58E
0x61E526: mov     esi, [esp+40h+var_28]
0x61E52A: cmp     esi, 16h
0x61E52D: jnz     short loc_61E536
0x61E52F: mov     eax, offset aNormal; "NORMAL"
0x61E534: jmp     short loc_61E569
0x61E536: cmp     esi, 17h
0x61E539: jnz     short loc_61E542
0x61E53B: mov     eax, offset aForward; "FORWARD"
0x61E540: jmp     short loc_61E569
0x61E542: cmp     esi, 18h
0x61E545: jnz     short loc_61E54E
0x61E547: mov     eax, offset aBackward_0; "BACKWARD"
0x61E54C: jmp     short loc_61E569
0x61E54E: cmp     esi, 19h
0x61E551: jnz     short loc_61E55A
0x61E553: mov     eax, offset aLeft; "LEFT"
0x61E558: jmp     short loc_61E569
0x61E55A: cmp     esi, 1Ah
0x61E55D: mov     eax, offset aRight; "RIGHT"
0x61E562: jz      short loc_61E569
0x61E564: mov     eax, offset aNo_0; "NO"
0x61E569: mov     ebp, [ebp+3Ch]
0x61E56C: push    eax
0x61E56D: mov     ecx, ebp; this
0x61E56F: call    TESObjectREFR_GetName
0x61E574: push    eax
0x61E575: push    offset a_20sSelectsSPo; "%.20s selects %s power attack!"
0x61E57A: call    Interface_ConsolePrint
0x61E57F: add     esp, 0Ch
0x61E582: pop     edi
0x61E583: mov     eax, esi
0x61E585: pop     esi
0x61E586: pop     ebp
0x61E587: pop     ebx
0x61E588: add     esp, 30h
0x61E58B: retn    14h
0x61E58E: mov     esi, [esp+40h+var_28]
0x61E592: pop     edi
0x61E593: mov     eax, esi
0x61E595: pop     esi
0x61E596: pop     ebp
0x61E597: pop     ebx
0x61E598: add     esp, 30h
0x61E59B: retn    14h
