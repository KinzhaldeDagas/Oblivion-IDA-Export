0x615220: push    ebp
0x615221: mov     ebp, esp
0x615223: and     esp, 0FFFFFFF8h
0x615226: sub     esp, 14h
0x615229: push    ebx
0x61522A: push    esi
0x61522B: mov     esi, [ebp+arg_0]
0x61522E: test    esi, esi
0x615230: push    edi; a5
0x615231: mov     edi, ecx
0x615233: jz      short loc_615280
0x615235: mov     ecx, [esi]
0x615237: add     ecx, 0Ch
0x61523A: xor     bl, bl
0x61523C: call    EffectItemList_HasOnTarget
0x615241: test    al, al
0x615243: jz      loc_6153E3
0x615249: cmp     byte ptr [edi+159h], 0
0x615250: jz      loc_6152F1
0x615256: cmp     byte ptr ds:0B3B908h, 0
0x61525D: jz      short loc_615275
0x61525F: mov     ecx, [edi+3Ch]; this
0x615262: call    TESObjectREFR_GetName
0x615267: push    eax
0x615268: push    offset a_20sIsHoldingO; "%.20s is holding off attacking because "...
0x61526D: call    Interface_ConsolePrint
0x615272: add     esp, 8
0x615275: mov     al, 1
0x615277: pop     edi
0x615278: pop     esi
0x615279: pop     ebx
0x61527A: mov     esp, ebp
0x61527C: pop     ebp
0x61527D: retn    4
0x615280: mov     eax, [edi+3Ch]
0x615283: test    eax, eax
0x615285: jz      loc_6153E3
0x61528B: mov     ecx, [eax+58h]
0x61528E: test    ecx, ecx
0x615290: jz      loc_6153E3
0x615296: mov     eax, [ecx]
0x615298: mov     edx, [eax+0ECh]
0x61529E: push    1
0x6152A0: call    edx
0x6152A2: test    eax, eax
0x6152A4: jz      loc_6153E3
0x6152AA: mov     eax, [edi+3Ch]
0x6152AD: mov     ecx, [eax+58h]
0x6152B0: mov     edx, [ecx]
0x6152B2: mov     eax, [edx+0ECh]
0x6152B8: push    1
0x6152BA: call    eax
0x6152BC: cmp     dword ptr [eax+8], 0
0x6152C0: jz      loc_6153E3
0x6152C6: mov     ecx, edi
0x6152C8: call    sub_612D60
0x6152CD: cmp     byte ptr [eax+90h], 5
0x6152D4: jz      short loc_6152EA
0x6152D6: mov     ecx, edi
0x6152D8: call    sub_612D60
0x6152DD: cmp     byte ptr [eax+90h], 4
0x6152E4: jnz     loc_6153E3
0x6152EA: mov     bl, 1
0x6152EC: jmp     loc_615249
0x6152F1: test    esi, esi
0x6152F3: jz      short loc_6152F9
0x6152F5: mov     eax, [esi]
0x6152F7: jmp     short loc_615318
0x6152F9: mov     ecx, edi
0x6152FB: call    sub_612D60
0x615300: test    eax, eax
0x615302: jz      short loc_61531C
0x615304: mov     ecx, edi
0x615306: call    sub_612D60
0x61530B: add     eax, 60h ; '`'
0x61530E: mov     eax, [eax+4]
0x615311: test    eax, eax
0x615313: jz      short loc_61531C
0x615315: add     eax, 18h
0x615318: test    eax, eax
0x61531A: jnz     short loc_615370
0x61531C: test    bl, bl
0x61531E: jz      loc_6153E3
0x615324: mov     ecx, [edi+3Ch]
0x615327: mov     ecx, [ecx+58h]
0x61532A: mov     edx, [ecx]
0x61532C: mov     eax, [edx+0F4h]
0x615332: push    1
0x615334: call    eax
0x615336: test    eax, eax
0x615338: jz      loc_6153E3
0x61533E: mov     eax, [eax+8]
0x615341: test    eax, eax
0x615343: jz      loc_6153E3
0x615349: push    0; int
0x61534B: push    offset ??_R0?AVTESAmmo@@@8; struct TypeDescriptor *
0x615350: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x615355: push    0; int
0x615357: push    eax; void *
0x615358: call    OblivionDynamicCast
0x61535D: add     esp, 14h
0x615360: test    eax, eax
0x615362: jz      short loc_6153E3
0x615364: mov     eax, [eax+58h]
0x615367: test    eax, eax
0x615369: jz      short loc_6153E3
0x61536B: add     eax, 18h
0x61536E: jz      short loc_6153E3
0x615370: push    1
0x615372: push    3
0x615374: lea     ecx, [eax+0Ch]
0x615377: call    EffectItemList_GetStrongestItem
0x61537C: test    eax, eax
0x61537E: mov     dword ptr [esp+20h+var_C], eax
0x615382: jz      short loc_6153E3
0x615384: lea     ebx, [edi+15Ch]
0x61538A: test    ebx, ebx
0x61538C: jz      short loc_6153E3
0x61538E: mov     edi, edi; a1
0x615390: mov     esi, [ebx]
0x615392: test    esi, esi
0x615394: mov     ebx, [ebx+4]
0x615397: jz      short loc_6153DF
0x615399: cmp     esi, [edi+3Ch]
0x61539C: jz      short loc_6153DF
0x61539E: push    0; a4
0x6153A0: mov     ecx, edi
0x6153A2: call    sub_6135F0
0x6153A7: push    eax; a3
0x6153A8: push    esi; a2
0x6153A9: call    TESObjectREFR_GetDistanceBetween?
0x6153AE: fstp    [esp+2Ch+var_10]
0x6153B2: fld     [esp+2Ch+var_10]
0x6153B6: mov     ecx, dword ptr [esp+2Ch+var_C]
0x6153BA: add     esp, 0Ch
0x6153BD: fstp    [esp+20h+var_C+4]
0x6153C1: call    EffectItem_GetArea
0x6153C6: mov     [esp+20h+var_10], eax
0x6153CA: fild    [esp+20h+var_10]
0x6153CE: fmul    qword ptr ds:0A563D0h
0x6153D4: fcomp   [esp+20h+var_C+4]
0x6153D8: fnstsw  ax
0x6153DA: test    ah, 1
0x6153DD: jz      short loc_6153EE
0x6153DF: test    ebx, ebx
0x6153E1: jnz     short loc_615390
0x6153E3: xor     al, al
0x6153E5: pop     edi
0x6153E6: pop     esi
0x6153E7: pop     ebx
0x6153E8: mov     esp, ebp
0x6153EA: pop     ebp
0x6153EB: retn    4
0x6153EE: cmp     byte ptr ds:0B3B908h, 0
0x6153F5: jz      loc_615275
0x6153FB: mov     ecx, [edi+3Ch]; this
0x6153FE: call    TESObjectREFR_GetName
0x615403: push    eax
0x615404: push    offset a_20sIsHoldin_0; "%.20s is holding off using an area spel"...
0x615409: call    Interface_ConsolePrint
0x61540E: add     esp, 8
0x615411: pop     edi
0x615412: pop     esi
0x615413: mov     al, 1
0x615415: pop     ebx
0x615416: mov     esp, ebp
0x615418: pop     ebp
0x615419: retn    4
