0x645280: push    ebx
0x645281: push    ebp
0x645282: push    esi
0x645283: mov     esi, [esp+0Ch+arg_0]
0x645287: test    esi, esi
0x645289: push    edi
0x64528A: mov     edi, ecx
0x64528C: jz      loc_6454EB
0x645292: fldz
0x645294: fcomp   [esp+10h+arg_10]
0x645298: fnstsw  ax
0x64529A: test    ah, 5
0x64529D: jp      loc_6454EB
0x6452A3: mov     ecx, [edi+34h]
0x6452A6: test    ecx, ecx
0x6452A8: jz      short loc_6452B7
0x6452AA: call    sub_6899E0
0x6452AF: test    al, al
0x6452B1: jz      loc_6453A9
0x6452B7: cmp     dword ptr [edi+34h], 0
0x6452BB: jnz     short loc_6452C9
0x6452BD: mov     eax, [edi]
0x6452BF: mov     edx, [eax+408h]
0x6452C5: mov     ecx, edi
0x6452C7: call    edx
0x6452C9: mov     ecx, [edi+34h]
0x6452CC: call    sub_6899E0
0x6452D1: test    al, al
0x6452D3: jz      loc_6453A9
0x6452D9: cmp     byte ptr ds:0B15800h, 0
0x6452E0: jz      short loc_645352
0x6452E2: mov     ecx, ds:0B333C4h; this
0x6452E8: call    PlayerCharacter__IsSleeping?
0x6452ED: mov     ecx, [esp+10h+arg_4]
0x6452F1: mov     edx, [ecx]
0x6452F3: push    eax
0x6452F4: sub     esp, 0Ch
0x6452F7: mov     eax, esp
0x6452F9: mov     [eax], edx
0x6452FB: mov     edx, [ecx+4]
0x6452FE: mov     ecx, [ecx+8]
0x645301: mov     [eax+4], edx
0x645304: mov     edx, [esp+20h+arg_C]
0x645308: mov     [eax+8], ecx
0x64530B: mov     eax, [esp+20h+arg_8]
0x64530F: mov     ecx, ds:0B3BF80h
0x645315: push    edx
0x645316: push    eax
0x645317: push    esi
0x645318: call    sub_6836E0
0x64531D: lea     ecx, [esp+10h+arg_0]
0x645321: push    ecx
0x645322: mov     ecx, ds:0B3BF80h
0x645328: push    esi
0x645329: mov     byte ptr [esp+18h+arg_0], 0
0x64532E: call    sub_682820
0x645333: test    al, al
0x645335: jz      short loc_645349
0x645337: cmp     byte ptr [esp+10h+arg_0], 0
0x64533C: push    0; int
0x64533E: jnz     short loc_64536E
0x645340: push    0; int
0x645342: mov     ecx, esi; int
0x645344: call    sub_5F7CF0
0x645349: xor     al, al
0x64534B: pop     edi
0x64534C: pop     esi
0x64534D: pop     ebp
0x64534E: pop     ebx
0x64534F: retn    18h
0x645352: mov     edx, [esp+10h+arg_C]
0x645356: mov     eax, [esp+10h+arg_8]
0x64535A: mov     ecx, [esp+10h+arg_4]
0x64535E: push    edx
0x64535F: push    eax
0x645360: push    ecx
0x645361: mov     ecx, [edi+34h]
0x645364: push    esi
0x645365: call    sub_68B030
0x64536A: test    al, al
0x64536C: jmp     short loc_64533C
0x64536E: mov     edx, [edi+34h]
0x645371: mov     ebx, [edx]
0x645373: mov     ecx, edx
0x645375: add     ebx, 14h
0x645378: call    sub_68A160
0x64537D: mov     ecx, [edi+34h]
0x645380: push    eax
0x645381: mov     eax, [ebx]
0x645383: push    esi
0x645384: call    eax
0x645386: mov     ecx, [edi+34h]
0x645389: call    sub_6899E0
0x64538E: test    al, al
0x645390: jz      short loc_6453A9
0x645392: mov     edx, [esi]
0x645394: mov     eax, [edx+180h]
0x64539A: push    1
0x64539C: mov     ecx, esi
0x64539E: call    eax
0x6453A0: mov     al, 1
0x6453A2: pop     edi
0x6453A3: pop     esi
0x6453A4: pop     ebp
0x6453A5: pop     ebx
0x6453A6: retn    18h
0x6453A9: fld     [esp+10h+arg_14]
0x6453AD: push    ecx
0x6453AE: mov     ecx, [edi+34h]
0x6453B1: fstp    [esp+14h+var_14]; float
0x6453B4: call    sub_68A9D0
0x6453B9: fld     [esp+10h+arg_10]
0x6453BD: fstp    [esp+10h+arg_C]
0x6453C1: mov     ecx, [edi+34h]
0x6453C4: mov     edx, [ecx]
0x6453C6: mov     eax, [edx+20h]
0x6453C9: push    esi
0x6453CA: call    eax
0x6453CC: test    al, al
0x6453CE: jz      short loc_645412
0x6453D0: mov     ecx, esi; this
0x6453D2: call    Actor__GetProcessLevel
0x6453D7: mov     ecx, [edi+34h]
0x6453DA: push    esi
0x6453DB: mov     ebx, eax
0x6453DD: call    sub_68ABA0
0x6453E2: test    al, al
0x6453E4: jz      loc_645349
0x6453EA: mov     ecx, esi; this
0x6453EC: call    Actor__GetProcessLevel
0x6453F1: cmp     ebx, eax
0x6453F3: jnz     loc_6454EB
0x6453F9: mov     ecx, esi
0x6453FB: call    MobileObject_GetProcessLevel
0x645400: cmp     ebx, eax
0x645402: jnz     loc_6454EB
0x645408: cmp     dword ptr [edi+34h], 0
0x64540C: jz      loc_6454EB
0x645412: mov     ecx, [edi+34h]
0x645415: call    sub_6899E0
0x64541A: test    al, al
0x64541C: mov     ecx, esi; this
0x64541E: jnz     loc_6454DF
0x645424: call    Actor__GetProcessLevel
0x645429: mov     ecx, [edi+34h]
0x64542C: mov     edx, [ecx]
0x64542E: mov     ebp, eax
0x645430: mov     eax, [edx+0Ch]
0x645433: call    eax
0x645435: test    al, al
0x645437: jz      short loc_645451
0x645439: mov     ecx, [edi+34h]
0x64543C: mov     ebx, [ecx]
0x64543E: push    0
0x645440: add     ebx, 14h
0x645443: call    sub_68A160
0x645448: mov     ecx, [edi+34h]
0x64544B: mov     edx, [ebx]
0x64544D: push    eax
0x64544E: push    esi
0x64544F: call    edx
0x645451: mov     ecx, esi; this
0x645453: call    Actor_IsCreature
0x645458: test    al, al
0x64545A: jnz     short loc_645484
0x64545C: mov     eax, [esi]
0x64545E: mov     edx, [eax+380h]
0x645464: mov     ecx, esi
0x645466: call    edx
0x645468: test    eax, eax
0x64546A: jnz     short loc_645484
0x64546C: mov     ecx, [esi+58h]
0x64546F: mov     eax, [ecx]
0x645471: mov     edx, [eax+3A0h]
0x645477: push    0
0x645479: push    esi
0x64547A: call    edx
0x64547C: test    al, al
0x64547E: jnz     loc_645349
0x645484: mov     ecx, [edi+34h]
0x645487: fld     [esp+10h+arg_C]
0x64548B: mov     eax, [ecx]
0x64548D: mov     edx, [eax+1Ch]
0x645490: push    ecx
0x645491: fstp    [esp+14h+var_14]
0x645494: push    esi
0x645495: call    edx
0x645497: fstp    [esp+10h+arg_C]
0x64549B: mov     ecx, esi; this
0x64549D: call    Actor__GetProcessLevel
0x6454A2: cmp     ebp, eax
0x6454A4: jnz     short loc_6454EB
0x6454A6: mov     ecx, esi
0x6454A8: call    MobileObject_GetProcessLevel
0x6454AD: cmp     ebp, eax
0x6454AF: jnz     short loc_6454EB
0x6454B1: cmp     dword ptr [edi+34h], 0
0x6454B5: jz      short loc_6454EB
0x6454B7: mov     ecx, [edi+34h]
0x6454BA: mov     eax, [ecx]
0x6454BC: mov     edx, [eax+2Ch]
0x6454BF: call    edx
0x6454C1: test    al, al
0x6454C3: jnz     short loc_6454EB
0x6454C5: fldz
0x6454C7: fcomp   [esp+10h+arg_C]
0x6454CB: fnstsw  ax
0x6454CD: test    ah, 5
0x6454D0: jnp     loc_6453C1
0x6454D6: mov     al, 1
0x6454D8: pop     edi
0x6454D9: pop     esi
0x6454DA: pop     ebp
0x6454DB: pop     ebx
0x6454DC: retn    18h
0x6454DF: mov     eax, [esi]
0x6454E1: mov     edx, [eax+180h]
0x6454E7: push    1
0x6454E9: call    edx
0x6454EB: pop     edi
0x6454EC: pop     esi
0x6454ED: pop     ebp
0x6454EE: mov     al, 1
0x6454F0: pop     ebx
0x6454F1: retn    18h
