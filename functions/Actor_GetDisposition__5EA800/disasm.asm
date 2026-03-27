0x5EA800: sub     esp, 14h
0x5EA803: push    ebx
0x5EA804: push    esi
0x5EA805: mov     esi, [esp+1Ch+a2]
0x5EA809: xor     ebx, ebx
0x5EA80B: cmp     esi, ebx
0x5EA80D: push    edi
0x5EA80E: mov     edi, ecx
0x5EA810: mov     [esp+20h+var_14], ebx
0x5EA814: jnz     short loc_5EA821
0x5EA816: pop     edi
0x5EA817: pop     esi
0x5EA818: xor     eax, eax
0x5EA81A: pop     ebx
0x5EA81B: add     esp, 14h
0x5EA81E: retn    4
0x5EA821: mov     ecx, [edi+58h]
0x5EA824: cmp     ecx, ebx
0x5EA826: jz      short loc_5EA834
0x5EA828: mov     eax, [ecx]
0x5EA82A: mov     edx, [eax+3D0h]
0x5EA830: call    edx
0x5EA832: mov     ebx, eax
0x5EA834: push    ebp
0x5EA835: mov     ecx, edi; this
0x5EA837: call    TESObjectREFR_GetOwner
0x5EA83C: mov     ebp, eax
0x5EA83E: mov     eax, [edi]
0x5EA840: mov     edx, [eax+170h]
0x5EA846: mov     ecx, edi
0x5EA848: mov     [esp+24h+var_10], ebp
0x5EA84C: call    edx
0x5EA84E: cmp     byte ptr [eax+4], 23h ; '#'
0x5EA852: jz      short loc_5EA85C
0x5EA854: test    ebp, ebp
0x5EA856: jnz     short loc_5EA869
0x5EA858: test    ebx, ebx
0x5EA85A: jnz     short loc_5EA869
0x5EA85C: cmp     dword ptr [edi+0B0h], 4
0x5EA863: jnz     loc_5EAA94
0x5EA869: test    ebp, ebp
0x5EA86B: mov     [esp+24h+a2], 0
0x5EA873: jz      short loc_5EA881
0x5EA875: cmp     byte ptr [ebp+4], 23h ; '#'
0x5EA879: jnz     short loc_5EA881
0x5EA87B: mov     [esp+24h+a2], ebp
0x5EA87F: jmp     short loc_5EA8AB
0x5EA881: test    ebx, ebx
0x5EA883: jz      short loc_5EA8C1
0x5EA885: mov     eax, [ebx]
0x5EA887: mov     edx, [eax+170h]
0x5EA88D: mov     ecx, ebx
0x5EA88F: call    edx
0x5EA891: cmp     byte ptr [eax+4], 23h ; '#'
0x5EA895: jnz     short loc_5EA8C1
0x5EA897: mov     eax, [ebx]
0x5EA899: mov     edx, [eax+170h]
0x5EA89F: mov     ecx, ebx
0x5EA8A1: call    edx
0x5EA8A3: test    eax, eax
0x5EA8A5: mov     [esp+24h+a2], eax
0x5EA8A9: jz      short loc_5EA8C1
0x5EA8AB: mov     eax, [esi]
0x5EA8AD: mov     edx, [eax+170h]
0x5EA8B3: mov     ecx, esi
0x5EA8B5: call    edx
0x5EA8B7: cmp     [esp+24h+a2], eax
0x5EA8BB: jz      loc_5EAAAE
0x5EA8C1: mov     eax, [esi]
0x5EA8C3: mov     edx, [eax+128h]
0x5EA8C9: mov     ecx, esi
0x5EA8CB: call    edx
0x5EA8CD: mov     ebx, eax
0x5EA8CF: mov     eax, [esi]
0x5EA8D1: mov     edx, [eax+170h]
0x5EA8D7: mov     ecx, esi
0x5EA8D9: call    edx
0x5EA8DB: test    ebx, ebx
0x5EA8DD: mov     ebp, eax
0x5EA8DF: jnz     short loc_5EA8FB
0x5EA8E1: test    ebp, ebp
0x5EA8E3: jz      short loc_5EA8F7
0x5EA8E5: mov     eax, [esi]
0x5EA8E7: mov     edx, [eax+190h]
0x5EA8ED: mov     ecx, esi
0x5EA8EF: call    edx
0x5EA8F1: test    al, al
0x5EA8F3: jz      short loc_5EA8F7
0x5EA8F5: mov     ebx, ebp
0x5EA8F7: test    ebx, ebx
0x5EA8F9: jz      short loc_5EA92F
0x5EA8FB: cmp     dword ptr [ebx+40h], 0
0x5EA8FF: jnz     short loc_5EA92F
0x5EA901: cmp     dword ptr [ebx+3Ch], 0
0x5EA905: jnz     short loc_5EA92F
0x5EA907: mov     eax, [esi]
0x5EA909: mov     edx, [eax+170h]
0x5EA90F: mov     ecx, esi
0x5EA911: xor     ebp, ebp
0x5EA913: call    edx
0x5EA915: mov     ebx, eax
0x5EA917: test    ebx, ebx
0x5EA919: jz      short loc_5EA92D
0x5EA91B: mov     eax, [esi]
0x5EA91D: mov     edx, [eax+190h]
0x5EA923: mov     ecx, esi
0x5EA925: call    edx
0x5EA927: test    al, al
0x5EA929: jz      short loc_5EA92D
0x5EA92B: mov     ebp, ebx
0x5EA92D: mov     ebx, ebp
0x5EA92F: mov     ebp, [esp+24h+a2]
0x5EA933: test    ebp, ebp
0x5EA935: jz      loc_5EAA6F
0x5EA93B: test    ebx, ebx
0x5EA93D: jz      loc_5EAA90
0x5EA943: mov     ecx, esi; this
0x5EA945: mov     [esp+24h+var_C], 0
0x5EA94D: call    Actor_IsNPC
0x5EA952: test    al, al
0x5EA954: jz      short loc_5EA96F
0x5EA956: mov     eax, [ebx+0E8h]
0x5EA95C: mov     ecx, [ebp+0E8h]
0x5EA962: push    eax
0x5EA963: add     ecx, 40h ; '@'
0x5EA966: call    TESReactionForm_GetReactionToTarget
0x5EA96B: mov     [esp+24h+var_C], eax
0x5EA96F: lea     eax, [esp+24h+var_10]
0x5EA973: push    eax
0x5EA974: push    ebx
0x5EA975: lea     ecx, [ebp+24h]
0x5EA978: mov     [esp+2Ch+var_10], 0FFFFFFFFh
0x5EA980: call    TESActorBaseData_GetFactionReactionAndRank
0x5EA985: mov     ecx, esi
0x5EA987: mov     [esp+20h+var_4], eax
0x5EA98B: mov     [esp+20h+var_10], 0
0x5EA993: call    Actor_IsWeaponOut
0x5EA998: test    al, al
0x5EA99A: jz      short loc_5EA9D2
0x5EA99C: mov     edx, [esi]
0x5EA99E: mov     eax, [edx+334h]
0x5EA9A4: mov     ebx, 1
0x5EA9A9: push    ebx
0x5EA9AA: mov     ecx, esi
0x5EA9AC: call    eax
0x5EA9AE: test    al, al
0x5EA9B0: jz      short loc_5EA9CE
0x5EA9B2: mov     edx, [edi]
0x5EA9B4: mov     eax, [edx+330h]
0x5EA9BA: mov     ecx, edi
0x5EA9BC: call    eax
0x5EA9BE: test    eax, eax
0x5EA9C0: jz      short loc_5EA9D2
0x5EA9C2: push    edi
0x5EA9C3: mov     ecx, eax
0x5EA9C5: call    sub_613670
0x5EA9CA: test    al, al
0x5EA9CC: jz      short loc_5EA9D2
0x5EA9CE: mov     [esp+20h+var_10], ebx
0x5EA9D2: mov     edx, [esi]
0x5EA9D4: mov     eax, [edx+208h]
0x5EA9DA: mov     ecx, esi
0x5EA9DC: call    eax
0x5EA9DE: mov     edx, [esi]
0x5EA9E0: mov     ebp, eax
0x5EA9E2: mov     eax, [edx+204h]
0x5EA9E8: mov     ecx, esi
0x5EA9EA: call    eax
0x5EA9EC: mov     ecx, ds:0B333C4h
0x5EA9F2: mov     edx, [ecx]
0x5EA9F4: mov     [esp+20h], eax
0x5EA9F8: mov     eax, [edx+170h]
0x5EA9FE: xor     ebx, ebx
0x5EAA00: call    eax
0x5EAA02: mov     ecx, [esp+20h+a3]
0x5EAA06: cmp     ecx, eax
0x5EAA08: jnz     short loc_5EAA11
0x5EAA0A: mov     eax, ds:0B333C4h
0x5EAA0F: jmp     short loc_5EAA1C
0x5EAA11: push    ecx
0x5EAA12: mov     ecx, offset ActorProcessManager_ptr
0x5EAA17: call    sub_675220
0x5EAA1C: test    eax, eax
0x5EAA1E: jz      short loc_5EAA34
0x5EAA20: mov     edx, [eax]
0x5EAA22: mov     ecx, eax
0x5EAA24: mov     eax, [edx+378h]
0x5EAA2A: push    esi
0x5EAA2B: call    eax
0x5EAA2D: call    Double_To_SInt32
0x5EAA32: mov     ebx, eax
0x5EAA34: mov     ecx, edi; this
0x5EAA36: call    Actor_IsCreature
0x5EAA3B: mov     ecx, [esp+20h+var_10]
0x5EAA3F: mov     edx, [esp+20h+var_C]
0x5EAA43: push    eax
0x5EAA44: mov     eax, [esp+24h+var_4]
0x5EAA48: push    ebx
0x5EAA49: push    0
0x5EAA4B: push    ecx
0x5EAA4C: mov     ecx, [esp+30h+var_8]
0x5EAA50: push    edx
0x5EAA51: mov     edx, [esi]
0x5EAA53: push    eax
0x5EAA54: mov     eax, [edx+250h]
0x5EAA5A: push    ecx
0x5EAA5B: mov     ecx, esi
0x5EAA5D: call    eax
0x5EAA5F: call    Double_To_SInt32
0x5EAA64: mov     ecx, [esp+34h+a3]
0x5EAA68: push    eax
0x5EAA69: push    ebp
0x5EAA6A: jmp     loc_5EAC90
0x5EAA6F: mov     eax, [esp+24h+var_10]
0x5EAA73: test    eax, eax
0x5EAA75: jz      short loc_5EAABD
0x5EAA77: cmp     byte ptr [eax+4], 6
0x5EAA7B: jnz     short loc_5EAA90
0x5EAA7D: mov     ecx, eax
0x5EAA7F: push    ebx
0x5EAA80: push    ecx
0x5EAA81: mov     ecx, 24h ; '$'
0x5EAA86: call    TESActorBaseData_GetFactionReaction_static
0x5EAA8B: jmp     loc_5EACC6
0x5EAA90: mov     ebp, [esp+24h+var_10]
0x5EAA94: test    ebp, ebp
0x5EAA96: jz      short loc_5EAABD
0x5EAA98: cmp     byte ptr [ebp+4], 23h ; '#'
0x5EAA9C: jnz     short loc_5EAABD
0x5EAA9E: mov     edx, [esi]
0x5EAAA0: mov     eax, [edx+170h]
0x5EAAA6: mov     ecx, esi
0x5EAAA8: call    eax
0x5EAAAA: cmp     ebp, eax
0x5EAAAC: jnz     short loc_5EAABD
0x5EAAAE: pop     ebp
0x5EAAAF: pop     edi
0x5EAAB0: pop     esi
0x5EAAB1: mov     eax, 64h ; 'd'
0x5EAAB6: pop     ebx
0x5EAAB7: add     esp, 14h
0x5EAABA: retn    4
0x5EAABD: mov     edx, [esi]
0x5EAABF: mov     eax, [edx+128h]
0x5EAAC5: mov     ecx, esi
0x5EAAC7: call    eax
0x5EAAC9: mov     edx, [esi]
0x5EAACB: mov     ebx, eax
0x5EAACD: mov     eax, [edx+170h]
0x5EAAD3: mov     ecx, esi
0x5EAAD5: call    eax
0x5EAAD7: test    ebx, ebx
0x5EAAD9: mov     ebp, eax
0x5EAADB: jnz     short loc_5EAAF3
0x5EAADD: test    ebp, ebp
0x5EAADF: jz      short loc_5EAAF3
0x5EAAE1: mov     edx, [esi]
0x5EAAE3: mov     eax, [edx+190h]
0x5EAAE9: mov     ecx, esi
0x5EAAEB: call    eax
0x5EAAED: test    al, al
0x5EAAEF: jz      short loc_5EAAF3
0x5EAAF1: mov     ebx, ebp
0x5EAAF3: test    ebx, ebx
0x5EAAF5: mov     [esp+24h+a2], ebx
0x5EAAF9: jz      short loc_5EAB31
0x5EAAFB: cmp     dword ptr [ebx+40h], 0
0x5EAAFF: jnz     short loc_5EAB31
0x5EAB01: cmp     dword ptr [ebx+3Ch], 0
0x5EAB05: jnz     short loc_5EAB31
0x5EAB07: mov     edx, [esi]
0x5EAB09: mov     eax, [edx+170h]
0x5EAB0F: mov     ecx, esi
0x5EAB11: xor     ebp, ebp
0x5EAB13: call    eax
0x5EAB15: mov     ebx, eax
0x5EAB17: test    ebx, ebx
0x5EAB19: jz      short loc_5EAB2D
0x5EAB1B: mov     edx, [esi]
0x5EAB1D: mov     eax, [edx+190h]
0x5EAB23: mov     ecx, esi
0x5EAB25: call    eax
0x5EAB27: test    al, al
0x5EAB29: jz      short loc_5EAB2D
0x5EAB2B: mov     ebp, ebx
0x5EAB2D: mov     [esp+24h+a2], ebp
0x5EAB31: mov     edx, [edi]
0x5EAB33: mov     eax, [edx+128h]
0x5EAB39: mov     ecx, edi
0x5EAB3B: call    eax
0x5EAB3D: mov     edx, [edi]
0x5EAB3F: mov     ebx, eax
0x5EAB41: mov     eax, [edx+170h]
0x5EAB47: mov     ecx, edi
0x5EAB49: call    eax
0x5EAB4B: test    ebx, ebx
0x5EAB4D: mov     ebp, eax
0x5EAB4F: jnz     short loc_5EAB6B
0x5EAB51: test    ebp, ebp
0x5EAB53: jz      short loc_5EAB67
0x5EAB55: mov     edx, [edi]
0x5EAB57: mov     eax, [edx+190h]
0x5EAB5D: mov     ecx, edi
0x5EAB5F: call    eax
0x5EAB61: test    al, al
0x5EAB63: jz      short loc_5EAB67
0x5EAB65: mov     ebx, ebp
0x5EAB67: test    ebx, ebx
0x5EAB69: jz      short loc_5EAB9F
0x5EAB6B: cmp     dword ptr [ebx+40h], 0
0x5EAB6F: jnz     short loc_5EAB9F
0x5EAB71: cmp     dword ptr [ebx+3Ch], 0
0x5EAB75: jnz     short loc_5EAB9F
0x5EAB77: mov     edx, [edi]
0x5EAB79: mov     eax, [edx+170h]
0x5EAB7F: mov     ecx, edi
0x5EAB81: xor     ebp, ebp
0x5EAB83: call    eax
0x5EAB85: mov     ebx, eax
0x5EAB87: test    ebx, ebx
0x5EAB89: jz      short loc_5EAB9D
0x5EAB8B: mov     edx, [edi]
0x5EAB8D: mov     eax, [edx+190h]
0x5EAB93: mov     ecx, edi
0x5EAB95: call    eax
0x5EAB97: test    al, al
0x5EAB99: jz      short loc_5EAB9D
0x5EAB9B: mov     ebp, ebx
0x5EAB9D: mov     ebx, ebp
0x5EAB9F: mov     ebp, [esp+24h+a2]
0x5EABA3: test    ebp, ebp
0x5EABA5: jz      loc_5EACF1
0x5EABAB: test    ebx, ebx
0x5EABAD: jz      loc_5EACF1
0x5EABB3: mov     ecx, edi
0x5EABB5: mov     [esp+24h+var_C], 0
0x5EABBD: call    Actor__GetRaceIfNPC
0x5EABC2: test    eax, eax
0x5EABC4: jz      short loc_5EABEE
0x5EABC6: mov     ecx, esi
0x5EABC8: call    Actor__GetRaceIfNPC
0x5EABCD: test    eax, eax
0x5EABCF: jz      short loc_5EABEE
0x5EABD1: mov     ecx, esi
0x5EABD3: call    Actor__GetRaceIfNPC
0x5EABD8: push    eax
0x5EABD9: mov     ecx, edi
0x5EABDB: call    Actor__GetRaceIfNPC
0x5EABE0: mov     ecx, eax
0x5EABE2: add     ecx, 40h ; '@'
0x5EABE5: call    TESReactionForm_GetReactionToTarget
0x5EABEA: mov     [esp+24h+var_C], eax
0x5EABEE: lea     ecx, [esp+24h+a2]
0x5EABF2: push    ecx
0x5EABF3: push    ebp
0x5EABF4: lea     ecx, [ebx+24h]
0x5EABF7: mov     [esp+2Ch+a2], 0FFFFFFFFh
0x5EABFF: call    TESActorBaseData_GetFactionReactionAndRank
0x5EAC04: mov     ecx, esi
0x5EAC06: mov     ebx, eax
0x5EAC08: call    Actor_IsWeaponOut
0x5EAC0D: mov     edx, [esi]
0x5EAC0F: movzx   ebp, al
0x5EAC12: mov     eax, [edx+208h]
0x5EAC18: mov     ecx, esi
0x5EAC1A: call    eax
0x5EAC1C: mov     edx, [esi]
0x5EAC1E: mov     [esp+18h+var_4], eax
0x5EAC22: mov     eax, [edx+204h]
0x5EAC28: mov     ecx, esi
0x5EAC2A: call    eax
0x5EAC2C: mov     edx, [edi]
0x5EAC2E: mov     [esp+18h+var_8], eax
0x5EAC32: mov     eax, [edx+378h]
0x5EAC38: push    esi
0x5EAC39: mov     ecx, edi
0x5EAC3B: call    eax
0x5EAC3D: call    Double_To_SInt32
0x5EAC42: mov     edx, [edi]
0x5EAC44: mov     [esp+18h+a2], eax
0x5EAC48: mov     eax, [edx+170h]
0x5EAC4E: mov     ecx, edi
0x5EAC50: call    eax
0x5EAC52: cmp     byte ptr [eax+4], 24h ; '$'
0x5EAC56: mov     eax, [esp+18h+a2]
0x5EAC5A: setz    cl
0x5EAC5D: mov     byte ptr [esp+18h+a3], cl
0x5EAC61: mov     edx, [esp+18h+a3]
0x5EAC65: mov     ecx, [esp+18h+arg_C]
0x5EAC69: push    edx
0x5EAC6A: mov     edx, [esp+1Ch]
0x5EAC6E: push    eax
0x5EAC6F: mov     eax, [esi]
0x5EAC71: push    0
0x5EAC73: push    ebp; float
0x5EAC74: push    ecx; int
0x5EAC75: push    ebx; int
0x5EAC76: push    edx; int
0x5EAC77: mov     edx, [eax+250h]
0x5EAC7D: mov     ecx, esi
0x5EAC7F: call    edx
0x5EAC81: call    Double_To_SInt32
0x5EAC86: mov     ecx, [esp+34h+var_8]
0x5EAC8A: push    eax; int
0x5EAC8B: mov     eax, [esp+38h+var_4]
0x5EAC8F: push    eax; int
0x5EAC90: mov     edx, [edi]
0x5EAC92: mov     eax, [edx+284h]
0x5EAC98: push    ecx; int
0x5EAC99: push    24h ; '$'; int
0x5EAC9B: mov     ecx, edi
0x5EAC9D: call    eax
0x5EAC9F: mov     edx, [esi]
0x5EACA1: push    eax; int
0x5EACA2: mov     eax, [edx+284h]
0x5EACA8: push    6; int
0x5EACAA: mov     ecx, esi
0x5EACAC: call    eax
0x5EACAE: mov     edx, [edi]
0x5EACB0: push    eax; int
0x5EACB1: mov     eax, [edx+284h]
0x5EACB7: push    6; int
0x5EACB9: mov     ecx, edi
0x5EACBB: call    eax
0x5EACBD: push    eax; int
0x5EACBE: call    Calc_Disposition
0x5EACC3: add     esp, 34h
0x5EACC6: cmp     eax, 64h ; 'd'
0x5EACC9: mov     [esp+24h+var_14], eax
0x5EACCD: jle     short loc_5EACE5
0x5EACCF: pop     ebp
0x5EACD0: pop     edi
0x5EACD1: mov     [esp+1Ch+var_14], 64h ; 'd'
0x5EACD9: mov     eax, [esp+1Ch+var_14]
0x5EACDD: pop     esi
0x5EACDE: pop     ebx
0x5EACDF: add     esp, 14h
0x5EACE2: retn    4
0x5EACE5: test    eax, eax
0x5EACE7: jge     short loc_5EACF1
0x5EACE9: mov     [esp+24h+var_14], 0
0x5EACF1: mov     eax, [esp+24h+var_14]
0x5EACF5: pop     ebp
0x5EACF6: pop     edi
0x5EACF7: pop     esi
0x5EACF8: pop     ebx
0x5EACF9: add     esp, 14h
0x5EACFC: retn    4
