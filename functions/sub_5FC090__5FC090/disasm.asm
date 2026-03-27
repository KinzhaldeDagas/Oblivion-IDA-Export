0x5FC090: sub     esp, 1Ch
0x5FC093: push    edi
0x5FC094: mov     edi, ecx
0x5FC096: mov     eax, [edi]
0x5FC098: mov     edx, [eax+170h]
0x5FC09E: mov     [esp+20h+var_1C], edi
0x5FC0A2: call    edx
0x5FC0A4: cmp     byte ptr [eax+4], 24h ; '$'
0x5FC0A8: jnz     short loc_5FC0B3
0x5FC0AA: xor     al, al
0x5FC0AC: pop     edi
0x5FC0AD: add     esp, 1Ch
0x5FC0B0: retn    8
0x5FC0B3: mov     eax, [edi]
0x5FC0B5: mov     edx, [eax+164h]
0x5FC0BB: mov     ecx, edi
0x5FC0BD: call    edx
0x5FC0BF: test    eax, eax
0x5FC0C1: jz      short loc_5FC0AA
0x5FC0C3: mov     eax, [edi]
0x5FC0C5: mov     edx, [eax+164h]
0x5FC0CB: push    3
0x5FC0CD: mov     ecx, edi
0x5FC0CF: call    edx
0x5FC0D1: mov     ecx, eax
0x5FC0D3: call    ActorAnimData_GetAnimGroupFromField8Value
0x5FC0D8: push    eax
0x5FC0D9: call    sub_51AA00
0x5FC0DE: add     esp, 4
0x5FC0E1: cmp     eax, 19h
0x5FC0E4: jz      short loc_5FC0EB
0x5FC0E6: cmp     eax, 1Ah
0x5FC0E9: jnz     short loc_5FC0AA
0x5FC0EB: push    ebp
0x5FC0EC: push    esi
0x5FC0ED: mov     esi, [esp+28h+arg_0]
0x5FC0F1: mov     ecx, esi
0x5FC0F3: call    sub_5E4A80
0x5FC0F8: mov     ebp, eax
0x5FC0FA: test    ebp, ebp
0x5FC0FC: jz      short loc_5FC172
0x5FC0FE: mov     eax, [esp+28h+arg_4]
0x5FC102: lea     ecx, [eax-0Ch]
0x5FC105: cmp     ecx, 14h
0x5FC108: ja      short loc_5FC172
0x5FC10A: push    eax
0x5FC10B: mov     ecx, edi
0x5FC10D: call    Actor_GetBaseCalcAVi
0x5FC112: push    eax
0x5FC113: call    Calc_MasteryFromSkill
0x5FC118: add     esp, 4
0x5FC11B: cmp     eax, 2
0x5FC11E: jl      short loc_5FC172
0x5FC120: push    0; Seed
0x5FC122: call    GetRandomLargeInteger?
0x5FC127: cdq
0x5FC128: mov     ecx, 64h ; 'd'
0x5FC12D: idiv    ecx
0x5FC12F: add     esp, 4
0x5FC132: cmp     edx, ds:0B37228h
0x5FC138: jg      short loc_5FC172
0x5FC13A: mov     eax, [ebp+8]
0x5FC13D: test    eax, eax
0x5FC13F: mov     [esp+28h+arg_0], 0
0x5FC147: jz      short loc_5FC16B
0x5FC149: cmp     byte ptr [eax+4], 21h ; '!'
0x5FC14D: jnz     short loc_5FC16B
0x5FC14F: mov     edx, [eax]
0x5FC151: mov     [esp+28h+arg_0], eax
0x5FC155: mov     ecx, eax
0x5FC157: mov     eax, [edx+78h]
0x5FC15A: call    eax
0x5FC15C: test    al, al
0x5FC15E: jnz     short loc_5FC172
0x5FC160: mov     ecx, edi
0x5FC162: call    Actor_IsWeaponOut
0x5FC167: test    al, al
0x5FC169: jz      short loc_5FC172
0x5FC16B: mov     edi, [esi+58h]
0x5FC16E: test    edi, edi
0x5FC170: jnz     short loc_5FC17D
0x5FC172: pop     esi
0x5FC173: pop     ebp
0x5FC174: xor     al, al
0x5FC176: pop     edi
0x5FC177: add     esp, 1Ch
0x5FC17A: retn    8
0x5FC17D: mov     ecx, [ebp+8]
0x5FC180: cmp     byte ptr [ecx+90h], 5
0x5FC187: push    ebx
0x5FC188: mov     ebx, [edi]
0x5FC18A: mov     ecx, esi
0x5FC18C: jnz     short loc_5FC1A7
0x5FC18E: mov     edx, [esi]
0x5FC190: mov     eax, [edx+168h]
0x5FC196: add     ebx, 11Ch
0x5FC19C: call    eax
0x5FC19E: mov     edx, [ebx]
0x5FC1A0: push    eax
0x5FC1A1: mov     ecx, edi
0x5FC1A3: call    edx
0x5FC1A5: jmp     short loc_5FC1BE
0x5FC1A7: mov     eax, [esi]
0x5FC1A9: mov     edx, [eax+168h]
0x5FC1AF: add     ebx, 118h
0x5FC1B5: call    edx
0x5FC1B7: push    eax
0x5FC1B8: mov     eax, [ebx]
0x5FC1BA: mov     ecx, edi
0x5FC1BC: call    eax
0x5FC1BE: test    eax, eax
0x5FC1C0: pop     ebx
0x5FC1C1: jz      short loc_5FC204
0x5FC1C3: mov     ecx, [eax+88h]
0x5FC1C9: mov     edx, [eax+8Ch]
0x5FC1CF: mov     [esp+20h+var_4], ecx
0x5FC1D3: mov     ecx, [eax+90h]
0x5FC1D9: mov     [esp+20h], edx
0x5FC1DD: mov     [esp+20h+arg_0], ecx
0x5FC1E1: lea     edx, [esp+20h+var_8]
0x5FC1E5: push    edx
0x5FC1E6: lea     ecx, [esp+24h+var_C]
0x5FC1EA: push    ecx
0x5FC1EB: lea     edx, [esp+28h+var_10]
0x5FC1EF: push    edx
0x5FC1F0: lea     ecx, [eax+64h]
0x5FC1F3: call    sub_711300
0x5FC1F8: lea     ecx, [esp+20h+var_10]
0x5FC1FC: push    ecx
0x5FC1FD: lea     ecx, [esp+24h+var_4]
0x5FC201: push    ecx
0x5FC202: jmp     short loc_5FC208
0x5FC204: push    0
0x5FC206: push    0
0x5FC208: mov     eax, [ebp+0]
0x5FC20B: mov     eax, [eax]
0x5FC20D: mov     edx, [esi]
0x5FC20F: mov     edx, [edx+2C8h]
0x5FC215: push    1
0x5FC217: push    eax
0x5FC218: mov     eax, [esp+30h+arg_8]
0x5FC21C: push    eax
0x5FC21D: mov     ecx, esi
0x5FC21F: call    edx
0x5FC221: push    eax
0x5FC222: push    esi
0x5FC223: call    sub_4DC000
0x5FC228: add     esp, 8
0x5FC22B: mov     ecx, esi
0x5FC22D: call    Actor_GetCurrentAction
0x5FC232: test    eax, eax
0x5FC234: jl      short loc_5FC271
0x5FC236: cmp     eax, 5
0x5FC239: jle     short loc_5FC266
0x5FC23B: cmp     eax, 6
0x5FC23E: jnz     short loc_5FC271
0x5FC240: cmp     [esp+28h+arg_0], 0
0x5FC245: jz      short loc_5FC271
0x5FC247: mov     ecx, [esi+58h]
0x5FC24A: mov     eax, [ecx]
0x5FC24C: mov     edx, [eax+0F8h]
0x5FC252: push    1
0x5FC254: call    edx
0x5FC256: test    eax, eax
0x5FC258: jnz     short loc_5FC271
0x5FC25A: push    eax; float
0x5FC25B: mov     ecx, esi
0x5FC25D: call    sub_5F4AE0
0x5FC262: test    al, al
0x5FC264: jnz     short loc_5FC271
0x5FC266: push    0
0x5FC268: push    0FFFFFFFFh
0x5FC26A: mov     ecx, esi
0x5FC26C: call    HighPRocess_DoAction?????
0x5FC271: mov     eax, [esi]
0x5FC273: mov     edx, [eax+330h]
0x5FC279: mov     ecx, esi
0x5FC27B: call    edx
0x5FC27D: test    eax, eax
0x5FC27F: jz      short loc_5FC299
0x5FC281: mov     eax, [esp+28h+var_1C]
0x5FC285: mov     edx, [esi]
0x5FC287: push    eax
0x5FC288: mov     eax, [edx+330h]
0x5FC28E: mov     ecx, esi
0x5FC290: call    eax
0x5FC292: mov     ecx, eax
0x5FC294: call    sub_61DD10
0x5FC299: pop     esi
0x5FC29A: pop     ebp
0x5FC29B: mov     al, 1
0x5FC29D: pop     edi
0x5FC29E: add     esp, 1Ch
0x5FC2A1: retn    8
