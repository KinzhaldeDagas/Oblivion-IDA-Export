0x841260: push    0FFFFFFFFh
0x841262: push    offset SEH_882120
0x841267: mov     eax, large fs:0
0x84126D: push    eax
0x84126E: push    ebx
0x84126F: push    ebp
0x841270: push    esi
0x841271: push    edi
0x841272: mov     eax, ds:0B30AACh
0x841277: xor     eax, esp
0x841279: push    eax
0x84127A: lea     eax, [esp+20h+var_C]
0x84127E: mov     large fs:0, eax
0x841284: mov     esi, ecx
0x841286: mov     ebx, [esp+20h+arg_8]
0x84128A: mov     eax, [ebx+10h]
0x84128D: mov     edi, ds:0B45904h
0x841293: push    eax
0x841294: call    sub_848C40
0x841299: mov     ebp, [ebx+0Ch]
0x84129C: push    ebp
0x84129D: mov     ecx, esi
0x84129F: call    sub_848E50
0x8412A4: mov     ebx, [ebx+10h]
0x8412A7: mov     ecx, [esp+20h+arg_0]
0x8412AB: mov     eax, [esi]
0x8412AD: mov     edx, [eax+0BCh]
0x8412B3: push    ebx
0x8412B4: push    ebp
0x8412B5: push    ecx
0x8412B6: mov     ecx, esi
0x8412B8: call    edx
0x8412BA: mov     eax, [edi+24h]
0x8412BD: mov     ebx, [esp+20h+arg_C]
0x8412C1: mov     ebp, [eax]
0x8412C3: mov     edx, [ebx]
0x8412C5: mov     eax, [edx+88h]
0x8412CB: push    0
0x8412CD: mov     ecx, ebx
0x8412CF: mov     [esp+24h+arg_8], ebp
0x8412D3: call    eax
0x8412D5: mov     ebp, [ebp+4]
0x8412D8: cmp     ebp, eax
0x8412DA: mov     [esp+20h+arg_0], eax
0x8412DE: jz      short loc_84131A
0x8412E0: test    ebp, ebp
0x8412E2: jz      short loc_841305
0x8412E4: lea     ecx, [ebp+4]
0x8412E7: push    ecx; lpAddend
0x8412E8: call    dword ptr ds:0A2807Ch
0x8412EE: test    eax, eax
0x8412F0: jnz     short loc_841301
0x8412F2: test    ebp, ebp
0x8412F4: jz      short loc_841301
0x8412F6: mov     edx, [ebp+0]
0x8412F9: mov     eax, [edx]
0x8412FB: push    1
0x8412FD: mov     ecx, ebp
0x8412FF: call    eax
0x841301: mov     eax, [esp+20h+arg_0]
0x841305: test    eax, eax
0x841307: mov     ecx, [esp+20h+arg_8]
0x84130B: mov     [ecx+4], eax
0x84130E: jz      short loc_84131A
0x841310: add     eax, 4
0x841313: push    eax; lpAddend
0x841314: call    dword ptr ds:0A28078h
0x84131A: mov     edx, [esp+20h+arg_8]
0x84131E: push    ebx
0x84131F: push    edx
0x841320: mov     ecx, esi
0x841322: call    sub_848FA0
0x841327: mov     eax, [edi+24h]
0x84132A: mov     ebp, [eax+4]
0x84132D: push    0
0x84132F: push    ebx
0x841330: mov     ecx, esi
0x841332: mov     [esp+28h+arg_8], ebp
0x841336: call    sub_848FD0
0x84133B: mov     ebp, [ebp+4]
0x84133E: cmp     ebp, eax
0x841340: mov     [esp+20h+arg_0], eax
0x841344: jz      short loc_841380
0x841346: test    ebp, ebp
0x841348: jz      short loc_84136B
0x84134A: lea     ecx, [ebp+4]
0x84134D: push    ecx; lpAddend
0x84134E: call    dword ptr ds:0A2807Ch
0x841354: test    eax, eax
0x841356: jnz     short loc_841367
0x841358: test    ebp, ebp
0x84135A: jz      short loc_841367
0x84135C: mov     edx, [ebp+0]
0x84135F: mov     eax, [edx]
0x841361: push    1
0x841363: mov     ecx, ebp
0x841365: call    eax
0x841367: mov     eax, [esp+20h+arg_0]
0x84136B: test    eax, eax
0x84136D: mov     ecx, [esp+20h+arg_8]
0x841371: mov     [ecx+4], eax
0x841374: jz      short loc_841380
0x841376: add     eax, 4
0x841379: push    eax; lpAddend
0x84137A: call    dword ptr ds:0A28078h
0x841380: mov     edx, [esp+20h+arg_8]
0x841384: push    ebx
0x841385: push    edx
0x841386: mov     ecx, esi
0x841388: call    sub_848FA0
0x84138D: mov     ecx, [edi+24h]
0x841390: mov     ebx, [ecx+18h]
0x841393: mov     eax, ds:0B43108h
0x841398: mov     ebp, [ebx+4]
0x84139B: add     ebx, 4
0x84139E: cmp     ebp, eax
0x8413A0: mov     [esp+20h+arg_8], eax
0x8413A4: jz      short loc_8413DB
0x8413A6: test    ebp, ebp
0x8413A8: jz      short loc_8413CB
0x8413AA: lea     edx, [ebp+4]
0x8413AD: push    edx; lpAddend
0x8413AE: call    dword ptr ds:0A2807Ch
0x8413B4: test    eax, eax
0x8413B6: jnz     short loc_8413C7
0x8413B8: test    ebp, ebp
0x8413BA: jz      short loc_8413C7
0x8413BC: mov     eax, [ebp+0]
0x8413BF: mov     edx, [eax]
0x8413C1: push    1
0x8413C3: mov     ecx, ebp
0x8413C5: call    edx
0x8413C7: mov     eax, [esp+20h+arg_8]
0x8413CB: test    eax, eax
0x8413CD: mov     [ebx], eax
0x8413CF: jz      short loc_8413DB
0x8413D1: add     eax, 4
0x8413D4: push    eax; lpAddend
0x8413D5: call    dword ptr ds:0A28078h
0x8413DB: mov     eax, [edi+24h]
0x8413DE: mov     ebp, [eax+1Ch]
0x8413E1: mov     eax, ds:0B4310Ch
0x8413E6: mov     ebx, [ebp+4]
0x8413E9: cmp     ebx, eax
0x8413EB: mov     ecx, eax
0x8413ED: mov     [esp+20h+arg_8], ecx
0x8413F1: jz      short loc_841428
0x8413F3: test    ebx, ebx
0x8413F5: jz      short loc_841417
0x8413F7: lea     ecx, [ebx+4]
0x8413FA: push    ecx; lpAddend
0x8413FB: call    dword ptr ds:0A2807Ch
0x841401: test    eax, eax
0x841403: jnz     short loc_841413
0x841405: test    ebx, ebx
0x841407: jz      short loc_841413
0x841409: mov     edx, [ebx]
0x84140B: mov     eax, [edx]
0x84140D: push    1
0x84140F: mov     ecx, ebx
0x841411: call    eax
0x841413: mov     ecx, [esp+20h+arg_8]
0x841417: test    ecx, ecx
0x841419: mov     [ebp+4], ecx
0x84141C: jz      short loc_841428
0x84141E: add     ecx, 4
0x841421: push    ecx; lpAddend
0x841422: call    dword ptr ds:0A28078h
0x841428: mov     ebx, 1
0x84142D: add     [edi+60h], ebx
0x841430: mov     [esp+20h+arg_8], edi
0x841434: mov     edx, [esi+38h]
0x841437: lea     ecx, [esp+20h+arg_8]
0x84143B: push    ecx
0x84143C: push    edx
0x84143D: lea     ecx, [esi+40h]
0x841440: mov     [esp+28h+var_4], 0
0x841448: call    sub_76CE40
0x84144D: or      eax, 0FFFFFFFFh
0x841450: add     [edi+60h], eax
0x841453: mov     [esp+20h+var_4], eax
0x841457: jnz     short loc_841460
0x841459: mov     ecx, edi
0x84145B: call    sub_7604D0
0x841460: add     [esi+38h], ebx
0x841463: mov     ecx, [esp+20h+var_C]
0x841467: mov     large fs:0, ecx
0x84146E: pop     ecx
0x84146F: pop     edi
0x841470: pop     esi
0x841471: pop     ebp
0x841472: pop     ebx
0x841473: add     esp, 0Ch
0x841476: retn    10h
