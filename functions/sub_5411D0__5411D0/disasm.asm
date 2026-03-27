0x5411D0: push    0FFFFFFFFh
0x5411D2: push    offset SEH_5411D0
0x5411D7: mov     eax, large fs:0
0x5411DD: push    eax
0x5411DE: push    ecx
0x5411DF: push    ebx
0x5411E0: push    ebp
0x5411E1: push    esi
0x5411E2: push    edi
0x5411E3: mov     eax, ds:0B30AACh
0x5411E8: xor     eax, esp
0x5411EA: push    eax
0x5411EB: lea     eax, [esp+24h+var_C]
0x5411EF: mov     large fs:0, eax
0x5411F5: mov     esi, ecx
0x5411F7: mov     eax, [esi+4]
0x5411FA: test    eax, eax
0x5411FC: lea     edi, [esi+4]
0x5411FF: jz      short loc_541268
0x541201: cmp     dword ptr [eax+1Ch], 0
0x541205: jz      short loc_541240
0x541207: mov     ecx, [eax+1Ch]
0x54120A: mov     edx, [ecx]
0x54120C: mov     edx, [edx+88h]
0x541212: push    eax
0x541213: lea     eax, [esp+28h+var_10]
0x541217: push    eax
0x541218: call    edx
0x54121A: mov     eax, [esp+24h+var_10]
0x54121E: test    eax, eax
0x541220: jz      short loc_541240
0x541222: mov     ebx, eax
0x541224: add     eax, 4
0x541227: push    eax; lpAddend
0x541228: call    dword ptr ds:0A2807Ch
0x54122E: test    eax, eax
0x541230: jnz     short loc_541240
0x541232: test    ebx, ebx
0x541234: jz      short loc_541240
0x541236: mov     eax, [ebx]
0x541238: mov     edx, [eax]
0x54123A: push    1
0x54123C: mov     ecx, ebx
0x54123E: call    edx
0x541240: mov     ebx, [edi]
0x541242: test    ebx, ebx
0x541244: jz      short loc_541268
0x541246: lea     eax, [ebx+4]
0x541249: push    eax; lpAddend
0x54124A: call    dword ptr ds:0A2807Ch
0x541250: test    eax, eax
0x541252: jnz     short loc_541262
0x541254: test    ebx, ebx
0x541256: jz      short loc_541262
0x541258: mov     edx, [ebx]
0x54125A: mov     eax, [edx]
0x54125C: push    1
0x54125E: mov     ecx, ebx
0x541260: call    eax
0x541262: mov     dword ptr [edi], 0
0x541268: mov     eax, [esp+24h+a2]
0x54126C: test    eax, eax
0x54126E: jz      short loc_54127D
0x541270: push    eax; a2
0x541271: mov     ecx, edi; this
0x541273: call    NiSmartPointer_Set??
0x541278: or      ebp, 0FFFFFFFFh
0x54127B: jmp     short loc_5412C9
0x54127D: push    0DCh ; 'Ü'; Size
0x541282: call    FormHeapAlloc
0x541287: add     esp, 4
0x54128A: mov     [esp+24h+a2], eax
0x54128E: test    eax, eax
0x541290: mov     [esp+24h+var_4], 0
0x541298: jz      short loc_5412A5
0x54129A: push    0
0x54129C: mov     ecx, eax; this
0x54129E: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x5412A3: jmp     short loc_5412A7
0x5412A5: xor     eax, eax
0x5412A7: or      ebp, 0FFFFFFFFh
0x5412AA: push    eax; a2
0x5412AB: mov     ecx, edi; this
0x5412AD: mov     [esp+28h+var_4], ebp
0x5412B1: call    NiSmartPointer_Set??
0x5412B6: mov     ecx, [edi]
0x5412B8: push    offset aSkyRoot; "Sky Root"
0x5412BD: call    NiObjectNET_SetName
0x5412C2: mov     eax, [edi]
0x5412C4: or      word ptr [eax+18h], 2
0x5412C9: mov     ecx, ds:0B3F9A8h
0x5412CF: mov     eax, [edi]
0x5412D1: mov     [eax+54h], ecx
0x5412D4: mov     edx, ds:0B3F9ACh
0x5412DA: mov     [eax+58h], edx
0x5412DD: mov     ecx, ds:0B3F9B0h
0x5412E3: mov     [eax+5Ch], ecx
0x5412E6: mov     ecx, [esi+20h]
0x5412E9: test    ecx, ecx
0x5412EB: jz      short loc_5412F5
0x5412ED: mov     edx, [ecx]
0x5412EF: mov     eax, [edx]
0x5412F1: push    1
0x5412F3: call    eax
0x5412F5: push    1Ch; Size
0x5412F7: call    FormHeapAlloc
0x5412FC: add     esp, 4
0x5412FF: mov     [esp+24h+a2], eax
0x541303: test    eax, eax
0x541305: mov     [esp+24h+var_4], 1
0x54130D: jz      short loc_541318
0x54130F: mov     ecx, eax; this
0x541311: call    ??0Atmosphere@@QAE@XZ; Atmosphere::Atmosphere(void)
0x541316: jmp     short loc_54131A
0x541318: xor     eax, eax
0x54131A: mov     ecx, [edi]
0x54131C: mov     ebx, [esp+24h+arg_4]
0x541320: mov     [esi+20h], eax
0x541323: mov     edx, [eax]
0x541325: push    ebx
0x541326: push    ecx
0x541327: mov     ecx, eax
0x541329: mov     eax, [edx+10h]
0x54132C: mov     [esp+2Ch+var_4], ebp
0x541330: call    eax
0x541332: mov     ecx, [esi+24h]
0x541335: test    ecx, ecx
0x541337: jz      short loc_541341
0x541339: mov     edx, [ecx]
0x54133B: mov     eax, [edx]
0x54133D: push    1
0x54133F: call    eax
0x541341: push    10h; Size
0x541343: call    FormHeapAlloc
0x541348: add     esp, 4
0x54134B: mov     [esp+24h+a2], eax
0x54134F: test    eax, eax
0x541351: mov     [esp+24h+var_4], 2
0x541359: jz      short loc_541364
0x54135B: mov     ecx, eax; this
0x54135D: call    ??0Stars@@QAE@XZ; Stars::Stars(void)
0x541362: jmp     short loc_541366
0x541364: xor     eax, eax
0x541366: mov     ecx, [edi]
0x541368: mov     [esi+24h], eax
0x54136B: mov     edx, [eax]
0x54136D: push    ecx
0x54136E: mov     ecx, eax
0x541370: mov     eax, [edx+8]
0x541373: mov     [esp+28h+var_4], ebp
0x541377: call    eax
0x541379: mov     ecx, [esi+28h]
0x54137C: test    ecx, ecx
0x54137E: jz      short loc_541388
0x541380: mov     edx, [ecx]
0x541382: mov     eax, [edx]
0x541384: push    1
0x541386: call    eax
0x541388: push    28h ; '('; Size
0x54138A: call    FormHeapAlloc
0x54138F: add     esp, 4
0x541392: mov     [esp+24h+a2], eax
0x541396: test    eax, eax
0x541398: mov     [esp+24h+var_4], 3
0x5413A0: jz      short loc_5413AB
0x5413A2: mov     ecx, eax; this
0x5413A4: call    ??0Sun@@QAE@XZ; Sun::Sun(void)
0x5413A9: jmp     short loc_5413AD
0x5413AB: xor     eax, eax
0x5413AD: mov     ecx, [edi]
0x5413AF: mov     [esi+28h], eax
0x5413B2: mov     edx, [eax]
0x5413B4: push    ecx
0x5413B5: mov     ecx, eax
0x5413B7: mov     eax, [edx+8]
0x5413BA: mov     [esp+28h+var_4], ebp
0x5413BE: call    eax
0x5413C0: push    0DCh ; 'Ü'; Size
0x5413C5: call    FormHeapAlloc
0x5413CA: add     esp, 4
0x5413CD: mov     [esp+24h+a2], eax
0x5413D1: test    eax, eax
0x5413D3: mov     [esp+24h+var_4], 4
0x5413DB: jz      short loc_5413EA
0x5413DD: push    0
0x5413DF: mov     ecx, eax; this
0x5413E1: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x5413E6: mov     ebx, eax
0x5413E8: jmp     short loc_5413EC
0x5413EA: xor     ebx, ebx
0x5413EC: mov     [esp+24h+var_4], ebp
0x5413F0: mov     ebp, [esi+8]
0x5413F3: cmp     ebp, ebx
0x5413F5: jz      short loc_541429
0x5413F7: test    ebp, ebp
0x5413F9: jz      short loc_541418
0x5413FB: lea     ecx, [ebp+4]
0x5413FE: push    ecx; lpAddend
0x5413FF: call    dword ptr ds:0A2807Ch
0x541405: test    eax, eax
0x541407: jnz     short loc_541418
0x541409: test    ebp, ebp
0x54140B: jz      short loc_541418
0x54140D: mov     edx, [ebp+0]
0x541410: mov     eax, [edx]
0x541412: push    1
0x541414: mov     ecx, ebp
0x541416: call    eax
0x541418: test    ebx, ebx
0x54141A: mov     [esi+8], ebx
0x54141D: jz      short loc_541429
0x54141F: add     ebx, 4
0x541422: push    ebx; lpAddend
0x541423: call    dword ptr ds:0A28078h
0x541429: mov     ecx, [edi]
0x54142B: mov     eax, [esi+8]
0x54142E: mov     edx, [ecx]
0x541430: push    0
0x541432: push    eax
0x541433: mov     eax, [edx+84h]
0x541439: call    eax
0x54143B: mov     ecx, [esi+8]
0x54143E: push    offset aMoonsRoot; "Moons Root"
0x541443: call    NiObjectNET_SetName
0x541448: mov     ecx, [esi+38h]
0x54144B: test    ecx, ecx
0x54144D: jz      short loc_541457
0x54144F: mov     edx, [ecx]
0x541451: mov     eax, [edx]
0x541453: push    1
0x541455: call    eax
0x541457: cmp     byte ptr ds:0B11DE4h, 0
0x54145E: jz      short loc_541499
0x541460: push    18h; Size
0x541462: call    FormHeapAlloc
0x541467: add     esp, 4
0x54146A: mov     [esp+24h+a2], eax
0x54146E: test    eax, eax
0x541470: mov     [esp+24h+var_4], 5
0x541478: jz      short loc_541483
0x54147A: mov     ecx, eax; this
0x54147C: call    ??0Precipitation@@QAE@XZ; Precipitation::Precipitation(void)
0x541481: jmp     short loc_541485
0x541483: xor     eax, eax
0x541485: mov     ecx, eax
0x541487: mov     [esp+24h+var_4], 0FFFFFFFFh
0x54148F: mov     [esi+38h], eax
0x541492: call    sub_53D8F0
0x541497: jmp     short loc_5414A0
0x541499: mov     dword ptr [esi+38h], 0
0x5414A0: mov     ecx, [esi+2Ch]
0x5414A3: test    ecx, ecx
0x5414A5: jz      short loc_5414AF
0x5414A7: mov     edx, [ecx]
0x5414A9: mov     eax, [edx]
0x5414AB: push    1
0x5414AD: call    eax
0x5414AF: push    18h; Size
0x5414B1: call    FormHeapAlloc
0x5414B6: add     esp, 4
0x5414B9: mov     [esp+24h+a2], eax
0x5414BD: test    eax, eax
0x5414BF: mov     [esp+24h+var_4], 6
0x5414C7: jz      short loc_5414D2
0x5414C9: mov     ecx, eax; this
0x5414CB: call    ??0Clouds@@QAE@XZ; Clouds::Clouds(void)
0x5414D0: jmp     short loc_5414D4
0x5414D2: xor     eax, eax
0x5414D4: mov     ecx, [edi]
0x5414D6: mov     [esi+2Ch], eax
0x5414D9: mov     edx, [eax]
0x5414DB: push    ecx
0x5414DC: mov     ecx, eax
0x5414DE: mov     eax, [edx+8]
0x5414E1: mov     [esp+28h+var_4], 0FFFFFFFFh
0x5414E9: call    eax
0x5414EB: push    1Ch; Size
0x5414ED: call    FormHeapAlloc
0x5414F2: mov     esi, eax
0x5414F4: add     esp, 4
0x5414F7: mov     [esp+24h+a2], esi
0x5414FB: test    esi, esi
0x5414FD: mov     [esp+24h+var_4], 7
0x541505: jz      short loc_541520
0x541507: mov     ecx, esi; this
0x541509: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x54150E: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x541514: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x54151A: mov     byte ptr [esi+1Ah], 0
0x54151E: jmp     short loc_541522
0x541520: xor     esi, esi
0x541522: test    esi, esi
0x541524: mov     [esp+24h+a2], esi
0x541528: jz      short loc_541534
0x54152A: lea     ecx, [esi+4]
0x54152D: push    ecx; lpAddend
0x54152E: call    dword ptr ds:0A28078h
0x541534: mov     dx, [esi+18h]
0x541538: and     dx, 0FFEDh
0x54153D: or      dx, 0Ch
0x541541: mov     ax, dx
0x541544: and     ax, 0FEFFh
0x541548: or      ax, 0E0h
0x54154C: mov     [esi+18h], ax
0x541550: or      word ptr [esi+18h], 2001h
0x541556: mov     ecx, [edi]; this
0x541558: mov     ebp, 8
0x54155D: push    esi; a2
0x54155E: mov     [esp+28h+var_4], ebp
0x541562: call    sub_405680
0x541567: mov     ebx, ds:0A2807Ch
0x54156D: lea     ecx, [esi+4]
0x541570: push    ecx; lpAddend
0x541571: call    ebx ; InterlockedDecrement
0x541573: test    eax, eax
0x541575: jnz     short loc_541581
0x541577: mov     edx, [esi]
0x541579: mov     eax, [edx]
0x54157B: push    1
0x54157D: mov     ecx, esi
0x54157F: call    eax
0x541581: push    1Ch; Size
0x541583: mov     [esp+28h+var_4], 0FFFFFFFFh
0x54158B: call    FormHeapAlloc
0x541590: mov     esi, eax
0x541592: add     esp, 4
0x541595: mov     [esp+24h+a2], esi
0x541599: test    esi, esi
0x54159B: mov     [esp+24h+var_4], 9
0x5415A3: jz      short loc_5415B8
0x5415A5: mov     ecx, esi; this
0x5415A7: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x5415AC: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x5415B2: mov     [esi+18h], bp
0x5415B6: jmp     short loc_5415BA
0x5415B8: xor     esi, esi
0x5415BA: test    esi, esi
0x5415BC: mov     [esp+24h+a2], esi
0x5415C0: jz      short loc_5415CC
0x5415C2: lea     ecx, [esi+4]
0x5415C5: push    ecx; lpAddend
0x5415C6: call    dword ptr ds:0A28078h
0x5415CC: mov     dx, [esi+18h]
0x5415D0: and     dx, 0FFEFh
0x5415D5: or      dx, 20h
0x5415D9: mov     [esi+18h], dx
0x5415DD: mov     edi, [edi]
0x5415DF: push    esi; a2
0x5415E0: mov     ecx, edi; this
0x5415E2: mov     [esp+28h+var_4], 0Ah
0x5415EA: call    sub_405680
0x5415EF: lea     eax, [esi+4]
0x5415F2: push    eax; lpAddend
0x5415F3: call    ebx ; InterlockedDecrement
0x5415F5: test    eax, eax
0x5415F7: jnz     short loc_541603
0x5415F9: mov     edx, [esi]
0x5415FB: mov     eax, [edx]
0x5415FD: push    1
0x5415FF: mov     ecx, esi
0x541601: call    eax
0x541603: cmp     byte ptr ds:0B43070h, 0
0x54160A: jz      short loc_54161A
0x54160C: fld1
0x54160E: fst     dword ptr ds:0B2C73Ch
0x541614: fstp    dword ptr ds:0B2C740h
0x54161A: mov     ecx, [esp+24h+var_C]
0x54161E: mov     large fs:0, ecx
0x541625: pop     ecx
0x541626: pop     edi
0x541627: pop     esi
0x541628: pop     ebp
0x541629: pop     ebx
0x54162A: add     esp, 10h
0x54162D: retn    8
