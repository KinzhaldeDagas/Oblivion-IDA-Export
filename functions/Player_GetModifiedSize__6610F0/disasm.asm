0x6610F0: push    ecx
0x6610F1: push    ebp
0x6610F2: push    esi
0x6610F3: mov     ebp, ecx
0x6610F5: mov     ecx, ds:0B33B00h
0x6610FB: push    edi
0x6610FC: xor     esi, esi
0x6610FE: call    sub_45A170
0x661103: test    al, al
0x661105: jz      short loc_66110C
0x661107: mov     esi, 6
0x66110C: mov     eax, ds:0B33B00h
0x661111: add     esi, 240h
0x661117: cmp     byte ptr [eax+7Ch], 31h ; '1'
0x66111B: jb      short loc_661123
0x66111D: add     esi, 120h
0x661123: add     esi, 0Ch
0x661126: cmp     byte ptr ds:0B05BACh, 0
0x66112D: mov     [esp+10h+var_4], esi
0x661131: mov     di, si
0x661134: jz      short loc_661197
0x661136: mov     esi, [eax+84h]
0x66113C: test    esi, esi
0x66113E: jz      short loc_66117C
0x661140: mov     eax, [esi]
0x661142: push    eax; a1
0x661143: call    TESForm_LookupByFormID
0x661148: mov     ecx, [esi+5]
0x66114B: mov     edx, [eax]
0x66114D: add     esp, 4
0x661150: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x661155: push    222Eh
0x66115A: push    ecx
0x66115B: mov     ecx, eax
0x66115D: mov     eax, [edx+0D4h]
0x661163: call    eax
0x661165: mov     ecx, [esi]
0x661167: push    eax
0x661168: movzx   edx, di
0x66116B: push    ecx
0x66116C: push    edx; ArgList
0x66116D: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x661172: call    sub_40FEC0
0x661177: add     esp, 1Ch
0x66117A: jmp     short loc_661197
0x66117C: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x661181: movzx   eax, di
0x661184: push    222Eh
0x661189: push    eax; ArgList
0x66118A: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x66118F: call    sub_40FEC0
0x661194: add     esp, 10h
0x661197: mov     esi, [esp+10h+arg_0]
0x66119B: push    esi
0x66119C: mov     ecx, ebp
0x66119E: call    sub_60E360
0x6611A3: add     di, ax
0x6611A6: movzx   ecx, di
0x6611A9: mov     [esp+10h+arg_0], ecx
0x6611AD: mov     ecx, ds:0B33B00h
0x6611B3: mov     word ptr [esp+10h+var_4], di
0x6611B8: call    sub_45A170
0x6611BD: test    al, al
0x6611BF: mov     eax, [esp+10h+var_4]
0x6611C3: jz      short loc_6611CF
0x6611C5: add     eax, 6
0x6611C8: mov     [esp+10h+var_4], eax
0x6611CC: mov     di, ax
0x6611CF: test    esi, 2000000h
0x6611D5: jz      short loc_6611F3
0x6611D7: mov     edx, [ebp+5CCh]
0x6611DD: push    edx
0x6611DE: push    ebp
0x6611DF: call    sub_473BF0
0x6611E4: add     esp, 8
0x6611E7: add     di, ax
0x6611EA: mov     word ptr [esp+10h+var_4], di
0x6611EF: mov     eax, [esp+10h+var_4]
0x6611F3: mov     ecx, ds:0B33B00h
0x6611F9: mov     dl, [ecx+7Ch]
0x6611FC: add     eax, 66h ; 'f'
0x6611FF: cmp     dl, 28h ; '('
0x661202: mov     [esp+10h+var_4], eax
0x661206: jb      short loc_661214
0x661208: cmp     dl, 2Dh ; '-'
0x66120B: jnb     short loc_661214
0x66120D: add     eax, 18h
0x661210: mov     [esp+10h+var_4], eax
0x661214: cmp     dl, 39h ; '9'
0x661217: jb      short loc_661222
0x661219: add     eax, 88h ; 'ˆ'
0x66121E: mov     [esp+10h+var_4], eax
0x661222: cmp     dl, 3Fh ; '?'
0x661225: jb      short loc_66122E
0x661227: add     eax, 1
0x66122A: mov     [esp+10h+var_4], eax
0x66122E: cmp     dl, 40h ; '@'
0x661231: jb      short loc_66123A
0x661233: add     eax, 0Ch
0x661236: mov     [esp+10h+var_4], eax
0x66123A: cmp     dl, 49h ; 'I'
0x66123D: jb      short loc_661246
0x66123F: add     eax, 5
0x661242: mov     [esp+10h+var_4], eax
0x661246: cmp     dl, 63h ; 'c'
0x661249: jb      short loc_66126F
0x66124B: xor     al, al
0x66124D: cmp     dword ptr [ebp+5B0h], 0
0x661254: jz      short loc_661258
0x661256: mov     al, 15h
0x661258: movzx   ax, al
0x66125C: add     ax, ax
0x66125F: add     ax, ax
0x661262: add     ax, 1
0x661266: add     word ptr [esp+10h+var_4], ax
0x66126B: mov     eax, [esp+10h+var_4]
0x66126F: cmp     dl, 71h ; 'q'
0x661272: jb      short loc_661277
0x661274: add     eax, 0Ah
0x661277: cmp     dl, 78h ; 'x'
0x66127A: jb      short loc_66127F
0x66127C: add     eax, 5
0x66127F: cmp     dl, 7Ah ; 'z'
0x661282: jb      short loc_661287
0x661284: add     eax, 4
0x661287: add     eax, 2Ch ; ','
0x66128A: cmp     dl, 28h ; '('
0x66128D: mov     [esp+10h+var_4], eax
0x661291: jb      short loc_66129F
0x661293: cmp     dl, 2Dh ; '-'
0x661296: jnb     short loc_66129F
0x661298: add     eax, 4
0x66129B: mov     [esp+10h+var_4], eax
0x66129F: cmp     dl, 40h ; '@'
0x6612A2: jb      short loc_6612AB
0x6612A4: add     eax, 4
0x6612A7: mov     [esp+10h+var_4], eax
0x6612AB: cmp     dl, 42h ; 'B'
0x6612AE: jb      short loc_6612B7
0x6612B0: add     eax, 4
0x6612B3: mov     [esp+10h+var_4], eax
0x6612B7: cmp     dl, 57h ; 'W'
0x6612BA: jb      short loc_6612C3
0x6612BC: add     eax, 4
0x6612BF: mov     [esp+10h+var_4], eax
0x6612C3: cmp     dl, 60h ; '`'
0x6612C6: jb      short loc_6612CF
0x6612C8: add     eax, 4
0x6612CB: mov     [esp+10h+var_4], eax
0x6612CF: cmp     dl, 63h ; 'c'
0x6612D2: jb      short loc_6612FD
0x6612D4: mov     ecx, [ebp+5ACh]
0x6612DA: add     eax, 2
0x6612DD: test    ecx, ecx
0x6612DF: mov     [esp+10h+var_4], eax
0x6612E3: jz      short loc_6612FD
0x6612E5: xor     esi, esi
0x6612E7: cmp     dword ptr [ecx], 0
0x6612EA: jz      short loc_6612EF
0x6612EC: add     esi, 1
0x6612EF: mov     ecx, [ecx+4]
0x6612F2: test    ecx, ecx
0x6612F4: jnz     short loc_6612E7
0x6612F6: lea     eax, [eax+esi*4]
0x6612F9: mov     [esp+10h+var_4], eax
0x6612FD: cmp     dl, 6Ch ; 'l'
0x661300: jb      short loc_661309
0x661302: add     eax, 4
0x661305: mov     [esp+10h+var_4], eax
0x661309: cmp     dl, 6Fh ; 'o'
0x66130C: jb      short loc_661326
0x66130E: mov     cx, [ebp+794h]
0x661315: imul    cx, 5
0x661319: add     cx, 2
0x66131D: add     word ptr [esp+10h+var_4], cx
0x661322: mov     eax, [esp+10h+var_4]
0x661326: cmp     dl, 73h ; 's'
0x661329: jb      short loc_66134B
0x66132B: add     eax, 2
0x66132E: xor     edx, edx
0x661330: mov     ecx, offset dword_B3BB44
0x661335: cmp     dword ptr [ecx], 0
0x661338: jz      short loc_66133D
0x66133A: add     edx, 1
0x66133D: mov     ecx, [ecx+4]
0x661340: test    ecx, ecx
0x661342: jnz     short loc_661335
0x661344: lea     edx, [eax+edx*4]
0x661347: mov     [esp+10h+var_4], edx
0x66134B: mov     eax, [ebp+1E4h]
0x661351: push    ebx
0x661352: push    ebp
0x661353: push    eax
0x661354: call    ActiveEffect_Base_GetAEListSaveSize?
0x661359: mov     ecx, ds:0B33B00h
0x66135F: mov     bl, [ecx+7Ch]
0x661362: add     ax, 54h ; 'T'
0x661366: add     word ptr [esp+1Ch+var_4], ax
0x66136B: mov     edx, [esp+1Ch+var_4]
0x66136F: add     esp, 8
0x661372: cmp     bl, 58h ; 'X'
0x661375: jb      short loc_66139B
0x661377: mov     eax, [ebp+5B4h]
0x66137D: add     edx, 4
0x661380: test    eax, eax
0x661382: jz      short loc_661398
0x661384: xor     ecx, ecx
0x661386: cmp     dword ptr [eax], 0
0x661389: jz      short loc_66138E
0x66138B: add     ecx, 1
0x66138E: mov     eax, [eax+4]
0x661391: test    eax, eax
0x661393: jnz     short loc_661386
0x661395: lea     edx, [edx+ecx*8]
0x661398: cmp     bl, 58h ; 'X'
0x66139B: pop     ebx
0x66139C: jnb     short loc_6613A1
0x66139E: add     edx, 8
0x6613A1: lea     eax, [ebp+5E4h]
0x6613A7: add     edx, 62h ; 'b'
0x6613AA: xor     ecx, ecx
0x6613AC: test    eax, eax
0x6613AE: jz      short loc_6613BF
0x6613B0: cmp     dword ptr [eax], 0
0x6613B3: jz      short loc_6613B8
0x6613B5: add     ecx, 1
0x6613B8: mov     eax, [eax+4]
0x6613BB: test    eax, eax
0x6613BD: jnz     short loc_6613B0
0x6613BF: lea     eax, [ebp+5ECh]
0x6613C5: xor     esi, esi
0x6613C7: test    eax, eax
0x6613C9: lea     edi, [edx+ecx*4+2]
0x6613CD: jz      short loc_6613DF
0x6613CF: nop
0x6613D0: cmp     dword ptr [eax], 0
0x6613D3: jz      short loc_6613D8
0x6613D5: add     esi, 1
0x6613D8: mov     eax, [eax+4]
0x6613DB: test    eax, eax
0x6613DD: jnz     short loc_6613D0
0x6613DF: call    sub_416A80
0x6613E4: add     eax, edi
0x6613E6: lea     edx, [esi+esi*2]
0x6613E9: lea     eax, [eax+edx*2]
0x6613EC: mov     edx, [ebp+0]
0x6613EF: mov     [esp+10h+var_4], eax
0x6613F3: mov     eax, [edx+170h]
0x6613F9: mov     ecx, ebp
0x6613FB: call    eax
0x6613FD: push    ebp
0x6613FE: mov     ecx, eax
0x661400: call    sub_523440
0x661405: mov     si, word ptr [esp+10h+var_4]
0x66140A: mov     ecx, ebp; this
0x66140C: add     si, ax
0x66140F: call    TESObjectREFR_GetName
0x661414: lea     edx, [eax+1]
0x661417: mov     cl, [eax]
0x661419: add     eax, 1
0x66141C: test    cl, cl
0x66141E: jnz     short loc_661417
0x661420: sub     eax, edx
0x661422: mov     edx, ds:0B33B00h
0x661428: add     al, 1
0x66142A: movzx   cx, al
0x66142E: add     cx, 1
0x661432: add     si, cx
0x661435: cmp     byte ptr [edx+7Ch], 2Ch ; ','
0x661439: mov     word ptr [esp+10h+var_4], si
0x66143E: jb      short loc_661488
0x661440: push    0; a2
0x661442: mov     ecx, ebp; this
0x661444: call    Actor_GetActorBaseForm
0x661449: mov     esi, [eax+104h]
0x66144F: mov     eax, ds:0B37C88h
0x661454: mov     ecx, ds:0B33A98h
0x66145A: push    eax
0x66145B: call    TESDataHandler_LookupTESClassByFormID
0x661460: add     [esp+10h+var_4], 4
0x661465: test    esi, esi
0x661467: jz      short loc_661483
0x661469: cmp     esi, eax
0x66146B: jnz     short loc_661483
0x66146D: mov     ecx, esi
0x66146F: call    sub_51C360
0x661474: mov     si, word ptr [esp+10h+var_4]
0x661479: add     si, ax
0x66147C: mov     word ptr [esp+10h+var_4], si
0x661481: jmp     short loc_661488
0x661483: mov     si, word ptr [esp+10h+var_4]
0x661488: mov     ecx, ds:0B33B00h
0x66148E: mov     al, [ecx+7Ch]
0x661491: cmp     al, 45h ; 'E'
0x661493: jb      short loc_66149F
0x661495: add     [esp+10h+var_4], 4
0x66149A: mov     si, word ptr [esp+10h+var_4]
0x66149F: cmp     al, 7Eh ; '~'
0x6614A1: jb      short loc_6614AD
0x6614A3: add     [esp+10h+var_4], 5
0x6614A8: mov     si, word ptr [esp+10h+var_4]
0x6614AD: cmp     byte ptr ds:0B05BACh, 0
0x6614B4: jz      short loc_66152D
0x6614B6: mov     edi, [ecx+84h]
0x6614BC: test    edi, edi
0x6614BE: jz      short loc_66150B
0x6614C0: mov     ecx, [edi]
0x6614C2: push    ecx; a1
0x6614C3: call    TESForm_LookupByFormID
0x6614C8: mov     edx, [edi+5]
0x6614CB: add     esp, 4
0x6614CE: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x6614D3: push    2338h
0x6614D8: push    edx
0x6614D9: mov     edx, [eax]
0x6614DB: mov     ecx, eax
0x6614DD: mov     eax, [edx+0D4h]
0x6614E3: call    eax
0x6614E5: movzx   edx, word ptr [esp+1Ch+arg_0]
0x6614EA: mov     ecx, [edi]
0x6614EC: push    eax
0x6614ED: movzx   eax, si
0x6614F0: push    ecx
0x6614F1: sub     eax, edx
0x6614F3: push    eax; ArgList
0x6614F4: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x6614F9: call    sub_40FEC0
0x6614FE: add     esp, 1Ch
0x661501: pop     edi
0x661502: mov     ax, si
0x661505: pop     esi
0x661506: pop     ebp
0x661507: pop     ecx
0x661508: retn    4
0x66150B: movzx   ecx, word ptr [esp+10h+arg_0]
0x661510: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x661515: movzx   edx, si
0x661518: push    2338h
0x66151D: sub     edx, ecx
0x66151F: push    edx; ArgList
0x661520: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x661525: call    sub_40FEC0
0x66152A: add     esp, 10h
0x66152D: pop     edi
0x66152E: mov     ax, si
0x661531: pop     esi
0x661532: pop     ebp
0x661533: pop     ecx
0x661534: retn    4
