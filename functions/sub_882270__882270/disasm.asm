0x882270: push    0FFFFFFFFh
0x882272: push    offset SEH_882120
0x882277: mov     eax, large fs:0
0x88227D: push    eax
0x88227E: push    ebx
0x88227F: push    ebp
0x882280: push    esi
0x882281: push    edi
0x882282: mov     eax, ds:0B30AACh
0x882287: xor     eax, esp
0x882289: push    eax
0x88228A: lea     eax, [esp+20h+var_C]
0x88228E: mov     large fs:0, eax
0x882294: mov     esi, ecx
0x882296: mov     ebx, [esp+20h+arg_8]
0x88229A: mov     eax, [ebx+10h]
0x88229D: mov     edi, ds:0B47764h
0x8822A3: push    eax
0x8822A4: call    sub_848C40
0x8822A9: mov     ebx, [ebx+0Ch]
0x8822AC: push    ebx
0x8822AD: mov     ecx, esi
0x8822AF: call    sub_848E50
0x8822B4: mov     ecx, [esp+20h+arg_0]
0x8822B8: mov     eax, [esi]
0x8822BA: mov     edx, [eax+0BCh]
0x8822C0: push    0
0x8822C2: push    ebx
0x8822C3: push    ecx
0x8822C4: mov     ecx, esi
0x8822C6: call    edx
0x8822C8: mov     eax, [edi+24h]
0x8822CB: mov     ecx, [esp+20h+arg_C]
0x8822CF: mov     ebx, [eax]
0x8822D1: push    0
0x8822D3: push    ecx
0x8822D4: mov     ecx, esi
0x8822D6: mov     [esp+28h+arg_8], ebx
0x8822DA: call    sub_848FD0
0x8822DF: mov     ebx, [ebx+4]
0x8822E2: mov     ebp, eax
0x8822E4: cmp     ebx, ebp
0x8822E6: jz      short loc_88231D
0x8822E8: test    ebx, ebx
0x8822EA: jz      short loc_882308
0x8822EC: lea     edx, [ebx+4]
0x8822EF: push    edx; lpAddend
0x8822F0: call    dword ptr ds:0A2807Ch
0x8822F6: test    eax, eax
0x8822F8: jnz     short loc_882308
0x8822FA: test    ebx, ebx
0x8822FC: jz      short loc_882308
0x8822FE: mov     eax, [ebx]
0x882300: mov     edx, [eax]
0x882302: push    1
0x882304: mov     ecx, ebx
0x882306: call    edx
0x882308: test    ebp, ebp
0x88230A: mov     eax, [esp+20h+arg_8]
0x88230E: mov     [eax+4], ebp
0x882311: jz      short loc_88231D
0x882313: add     ebp, 4
0x882316: push    ebp; lpAddend
0x882317: call    dword ptr ds:0A28078h
0x88231D: mov     ecx, [edi+24h]
0x882320: mov     ebp, [ecx+0Ch]
0x882323: mov     eax, ds:0B43110h
0x882328: mov     ebx, [ebp+4]
0x88232B: cmp     ebx, eax
0x88232D: mov     ecx, eax
0x88232F: mov     [esp+20h+arg_8], ecx
0x882333: jz      short loc_88236A
0x882335: test    ebx, ebx
0x882337: jz      short loc_882359
0x882339: lea     edx, [ebx+4]
0x88233C: push    edx; lpAddend
0x88233D: call    dword ptr ds:0A2807Ch
0x882343: test    eax, eax
0x882345: jnz     short loc_882355
0x882347: test    ebx, ebx
0x882349: jz      short loc_882355
0x88234B: mov     eax, [ebx]
0x88234D: mov     edx, [eax]
0x88234F: push    1
0x882351: mov     ecx, ebx
0x882353: call    edx
0x882355: mov     ecx, [esp+20h+arg_8]
0x882359: test    ecx, ecx
0x88235B: mov     [ebp+4], ecx
0x88235E: jz      short loc_88236A
0x882360: add     ecx, 4
0x882363: push    ecx; lpAddend
0x882364: call    dword ptr ds:0A28078h
0x88236A: mov     ebx, 1
0x88236F: add     [edi+60h], ebx
0x882372: mov     [esp+20h+arg_8], edi
0x882376: mov     ecx, [esi+38h]
0x882379: lea     eax, [esp+20h+arg_8]
0x88237D: push    eax
0x88237E: push    ecx
0x88237F: lea     ecx, [esi+40h]
0x882382: mov     [esp+28h+var_4], 0
0x88238A: call    sub_76CE40
0x88238F: or      eax, 0FFFFFFFFh
0x882392: add     [edi+60h], eax
0x882395: mov     [esp+20h+var_4], eax
0x882399: jnz     short loc_8823A2
0x88239B: mov     ecx, edi
0x88239D: call    sub_7604D0
0x8823A2: add     [esi+38h], ebx
0x8823A5: mov     ecx, dword ptr [esp+20h+var_C]
0x8823A9: mov     large fs:0, ecx
0x8823B0: pop     ecx
0x8823B1: pop     edi
0x8823B2: pop     esi
0x8823B3: pop     ebp
0x8823B4: pop     ebx
0x8823B5: add     esp, 0Ch
0x8823B8: retn    10h
