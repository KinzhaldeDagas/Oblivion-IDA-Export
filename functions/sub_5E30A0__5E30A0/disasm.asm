0x5E30A0: sub     esp, 30h
0x5E30A3: push    ebx
0x5E30A4: push    esi
0x5E30A5: mov     esi, ecx
0x5E30A7: xor     bl, bl
0x5E30A9: cmp     dword ptr [esi+58h], 0
0x5E30AD: jz      loc_5E320A
0x5E30B3: mov     ecx, [esi+58h]
0x5E30B6: mov     eax, [ecx]
0x5E30B8: mov     edx, [eax+184h]
0x5E30BE: push    ebp
0x5E30BF: push    edi
0x5E30C0: call    edx
0x5E30C2: mov     ecx, [esi+58h]
0x5E30C5: mov     edi, eax
0x5E30C7: mov     eax, [ecx]
0x5E30C9: mov     edx, [eax+0CCh]
0x5E30CF: call    edx
0x5E30D1: test    edi, edi
0x5E30D3: mov     ebp, eax
0x5E30D5: jz      loc_5E3200
0x5E30DB: cmp     byte ptr [edi+20h], 2
0x5E30DF: jnz     loc_5E3200
0x5E30E5: cmp     ebp, ds:0B333C4h
0x5E30EB: jnz     loc_5E3200
0x5E30F1: test    ebp, ebp
0x5E30F3: jz      loc_5E3200
0x5E30F9: push    esi
0x5E30FA: lea     eax, [esp+44h+var_24]
0x5E30FE: push    eax
0x5E30FF: mov     ecx, edi
0x5E3101: call    sub_566B30
0x5E3106: mov     edx, [esi]
0x5E3108: push    eax
0x5E3109: mov     eax, [edx+174h]
0x5E310F: lea     ecx, [esp+44h+var_18]
0x5E3113: push    ecx
0x5E3114: mov     ecx, esi
0x5E3116: call    eax
0x5E3118: mov     ecx, eax
0x5E311A: call    sub_4121A0
0x5E311F: mov     ecx, [eax]
0x5E3121: mov     edx, [eax+4]
0x5E3124: mov     eax, [eax+8]
0x5E3127: mov     dword ptr [esp+40h+var_30], ecx
0x5E312B: push    esi
0x5E312C: lea     ecx, [esp+44h+var_18]
0x5E3130: push    ecx
0x5E3131: mov     ecx, edi
0x5E3133: mov     dword ptr [esp+48h+var_30+4], edx
0x5E3137: mov     [esp+48h+var_28], eax
0x5E313B: call    sub_566B30
0x5E3140: push    eax
0x5E3141: mov     eax, [ebp+0]
0x5E3144: lea     edx, [esp+44h+var_C]
0x5E3148: push    edx
0x5E3149: mov     edx, [eax+174h]
0x5E314F: mov     ecx, ebp
0x5E3151: call    edx
0x5E3153: mov     ecx, eax
0x5E3155: call    sub_4121A0
0x5E315A: mov     ecx, [eax]
0x5E315C: mov     edx, [eax+4]
0x5E315F: mov     eax, [eax+8]
0x5E3162: mov     [esp+40h+var_24], ecx
0x5E3166: mov     ecx, ds:0B333C4h; this
0x5E316C: mov     [esp+40h+var_20], edx
0x5E3170: mov     [esp+40h+var_1C], eax
0x5E3174: call    TESObjectREFR_GetParentCell
0x5E3179: test    eax, eax
0x5E317B: jz      short loc_5E31D5
0x5E317D: mov     ecx, ds:0B333C4h; this
0x5E3183: call    TESObjectREFR_GetParentCell
0x5E3188: mov     ecx, eax; this
0x5E318A: call    TESObjectCELL_IsInterior
0x5E318F: test    al, al
0x5E3191: jz      short loc_5E31D5
0x5E3193: push    esi
0x5E3194: mov     ecx, edi
0x5E3196: call    sub_566A40
0x5E319B: test    eax, eax
0x5E319D: jz      short loc_5E31D5
0x5E319F: push    esi
0x5E31A0: mov     ecx, edi
0x5E31A2: call    sub_566A40
0x5E31A7: mov     ecx, eax; this
0x5E31A9: call    TESObjectCELL_IsInterior
0x5E31AE: test    al, al
0x5E31B0: jz      short loc_5E31D5
0x5E31B2: push    esi
0x5E31B3: mov     ecx, edi
0x5E31B5: call    sub_566A40
0x5E31BA: mov     ecx, ds:0B333C4h; this
0x5E31C0: mov     esi, eax
0x5E31C2: call    TESObjectREFR_GetParentCell
0x5E31C7: cmp     esi, eax
0x5E31C9: jz      short loc_5E31D5
0x5E31CB: pop     edi
0x5E31CC: pop     ebp
0x5E31CD: pop     esi
0x5E31CE: xor     al, al
0x5E31D0: pop     ebx
0x5E31D1: add     esp, 30h
0x5E31D4: retn
0x5E31D5: lea     ecx, [esp+40h+var_30]
0x5E31D9: call    sub_404C90
0x5E31DE: fstp    [esp+40h+var_30]
0x5E31E2: lea     ecx, [esp+40h+var_24]
0x5E31E6: call    sub_404C90
0x5E31EB: fcomp   [esp+40h+var_30]
0x5E31EF: fnstsw  ax
0x5E31F1: test    ah, 5
0x5E31F4: jp      short loc_5E3200
0x5E31F6: pop     edi
0x5E31F7: pop     ebp
0x5E31F8: pop     esi
0x5E31F9: mov     al, 1
0x5E31FB: pop     ebx
0x5E31FC: add     esp, 30h
0x5E31FF: retn
0x5E3200: pop     edi
0x5E3201: pop     ebp
0x5E3202: pop     esi
0x5E3203: mov     al, bl
0x5E3205: pop     ebx
0x5E3206: add     esp, 30h
0x5E3209: retn
0x5E320A: pop     esi
0x5E320B: mov     al, bl
0x5E320D: pop     ebx
0x5E320E: add     esp, 30h
0x5E3211: retn
