0x7FA220: push    0FFFFFFFFh
0x7FA222: push    offset SEH_7B09A0
0x7FA227: mov     eax, large fs:0
0x7FA22D: push    eax
0x7FA22E: sub     esp, 8
0x7FA231: push    ebx
0x7FA232: push    ebp
0x7FA233: push    esi
0x7FA234: push    edi
0x7FA235: mov     eax, ds:0B30AACh
0x7FA23A: xor     eax, esp
0x7FA23C: push    eax
0x7FA23D: lea     eax, [esp+28h+var_C]
0x7FA241: mov     large fs:0, eax
0x7FA247: mov     esi, ecx
0x7FA249: lea     eax, [esp+28h+var_10]
0x7FA24D: push    eax
0x7FA24E: call    sub_7606A0
0x7FA253: add     esp, 4
0x7FA256: mov     edi, eax
0x7FA258: mov     ecx, [esi+70h]
0x7FA25B: cmp     ecx, [edi]
0x7FA25D: mov     [esp+28h+var_4], 0
0x7FA265: jz      short loc_7FA283
0x7FA267: test    ecx, ecx
0x7FA269: jz      short loc_7FA276
0x7FA26B: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7FA26F: jnz     short loc_7FA276
0x7FA271: call    sub_7604D0
0x7FA276: mov     eax, [edi]
0x7FA278: test    eax, eax
0x7FA27A: mov     [esi+70h], eax
0x7FA27D: jz      short loc_7FA283
0x7FA27F: add     dword ptr [eax+60h], 1
0x7FA283: mov     eax, [esp+28h+var_10]
0x7FA287: test    eax, eax
0x7FA289: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7FA291: jz      short loc_7FA2A6
0x7FA293: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7FA297: mov     ecx, eax
0x7FA299: add     eax, 60h ; '`'
0x7FA29C: cmp     dword ptr [eax], 0
0x7FA29F: jnz     short loc_7FA2A6
0x7FA2A1: call    sub_7604D0
0x7FA2A6: lea     ecx, [esp+28h+a3]
0x7FA2AA: push    ecx
0x7FA2AB: call    sub_772630
0x7FA2B0: mov     edx, [esp+2Ch+a3]
0x7FA2B4: push    2
0x7FA2B6: push    3
0x7FA2B8: push    0
0x7FA2BA: push    edx
0x7FA2BB: mov     [esp+3Ch+var_4], 1
0x7FA2C3: call    sub_801110
0x7FA2C8: mov     ecx, [esp+3Ch+a3]
0x7FA2CC: add     esp, 14h
0x7FA2CF: push    0
0x7FA2D1: call    sub_771640
0x7FA2D6: mov     ecx, [esi+70h]; this
0x7FA2D9: mov     eax, [esp+28h+a3]
0x7FA2DD: mov     edx, [ecx+14h]
0x7FA2E0: push    eax; a3
0x7FA2E1: push    edx; a2
0x7FA2E2: call    sub_760010
0x7FA2E7: mov     ebx, [esi+70h]
0x7FA2EA: mov     ebp, [esi+0C0h]
0x7FA2F0: mov     edi, [ebx+58h]
0x7FA2F3: cmp     edi, ebp
0x7FA2F5: jz      short loc_7FA328
0x7FA2F7: test    edi, edi
0x7FA2F9: jz      short loc_7FA317
0x7FA2FB: lea     eax, [edi+4]
0x7FA2FE: push    eax; lpAddend
0x7FA2FF: call    dword ptr ds:0A2807Ch
0x7FA305: test    eax, eax
0x7FA307: jnz     short loc_7FA317
0x7FA309: test    edi, edi
0x7FA30B: jz      short loc_7FA317
0x7FA30D: mov     edx, [edi]
0x7FA30F: mov     eax, [edx]
0x7FA311: push    1
0x7FA313: mov     ecx, edi
0x7FA315: call    eax
0x7FA317: test    ebp, ebp
0x7FA319: mov     [ebx+58h], ebp
0x7FA31C: jz      short loc_7FA328
0x7FA31E: add     ebp, 4
0x7FA321: push    ebp; lpAddend
0x7FA322: call    dword ptr ds:0A28078h
0x7FA328: mov     ebp, [esi+70h]
0x7FA32B: mov     ebx, [esi+0C4h]
0x7FA331: mov     edi, [ebp+44h]
0x7FA334: cmp     edi, ebx
0x7FA336: jz      short loc_7FA369
0x7FA338: test    edi, edi
0x7FA33A: jz      short loc_7FA358
0x7FA33C: lea     ecx, [edi+4]
0x7FA33F: push    ecx; lpAddend
0x7FA340: call    dword ptr ds:0A2807Ch
0x7FA346: test    eax, eax
0x7FA348: jnz     short loc_7FA358
0x7FA34A: test    edi, edi
0x7FA34C: jz      short loc_7FA358
0x7FA34E: mov     edx, [edi]
0x7FA350: mov     eax, [edx]
0x7FA352: push    1
0x7FA354: mov     ecx, edi
0x7FA356: call    eax
0x7FA358: test    ebx, ebx
0x7FA35A: mov     [ebp+44h], ebx
0x7FA35D: jz      short loc_7FA369
0x7FA35F: add     ebx, 4
0x7FA362: push    ebx; lpAddend
0x7FA363: call    dword ptr ds:0A28078h
0x7FA369: mov     edi, [esi+70h]
0x7FA36C: cmp     dword ptr [edi+30h], 0
0x7FA370: jnz     short loc_7FA37A
0x7FA372: call    sub_772DF0
0x7FA377: mov     [edi+30h], eax
0x7FA37A: mov     ecx, [edi+30h]
0x7FA37D: push    0
0x7FA37F: push    0
0x7FA381: push    7
0x7FA383: call    sub_772CD0
0x7FA388: mov     edi, [esi+70h]
0x7FA38B: cmp     dword ptr [edi+30h], 0
0x7FA38F: jnz     short loc_7FA399
0x7FA391: call    sub_772DF0
0x7FA396: mov     [edi+30h], eax
0x7FA399: mov     ecx, [edi+30h]
0x7FA39C: push    0
0x7FA39E: push    0
0x7FA3A0: push    0Eh
0x7FA3A2: call    sub_772CD0
0x7FA3A7: mov     edi, [esi+70h]
0x7FA3AA: cmp     dword ptr [edi+30h], 0
0x7FA3AE: jnz     short loc_7FA3B8
0x7FA3B0: call    sub_772DF0
0x7FA3B5: mov     [edi+30h], eax
0x7FA3B8: mov     ecx, [edi+30h]
0x7FA3BB: push    0
0x7FA3BD: push    0
0x7FA3BF: push    1Bh
0x7FA3C1: call    sub_772CD0
0x7FA3C6: mov     edi, [esi+70h]
0x7FA3C9: cmp     dword ptr [edi+30h], 0
0x7FA3CD: jnz     short loc_7FA3D7
0x7FA3CF: call    sub_772DF0
0x7FA3D4: mov     [edi+30h], eax
0x7FA3D7: mov     ecx, [edi+30h]
0x7FA3DA: push    0
0x7FA3DC: push    2
0x7FA3DE: push    13h
0x7FA3E0: call    sub_772CD0
0x7FA3E5: mov     edi, [esi+70h]
0x7FA3E8: cmp     dword ptr [edi+30h], 0
0x7FA3EC: jnz     short loc_7FA3F6
0x7FA3EE: call    sub_772DF0
0x7FA3F3: mov     [edi+30h], eax
0x7FA3F6: mov     ecx, [edi+30h]
0x7FA3F9: push    0
0x7FA3FB: push    2
0x7FA3FD: push    14h
0x7FA3FF: call    sub_772CD0
0x7FA404: mov     esi, [esi+70h]
0x7FA407: cmp     dword ptr [esi+30h], 0
0x7FA40B: jnz     short loc_7FA415
0x7FA40D: call    sub_772DF0
0x7FA412: mov     [esi+30h], eax
0x7FA415: mov     ecx, [esi+30h]
0x7FA418: push    0
0x7FA41A: push    0Fh
0x7FA41C: push    0A8h ; '¨'
0x7FA421: call    sub_772CD0
0x7FA426: mov     eax, [esp+28h+a3]
0x7FA42A: test    eax, eax
0x7FA42C: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7FA434: jz      short loc_7FA449
0x7FA436: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7FA43A: mov     ecx, eax
0x7FA43C: add     eax, 5Ch ; '\'
0x7FA43F: cmp     dword ptr [eax], 0
0x7FA442: jnz     short loc_7FA449
0x7FA444: call    sub_772560
0x7FA449: mov     al, 1
0x7FA44B: mov     ecx, [esp+28h+var_C]
0x7FA44F: mov     large fs:0, ecx
0x7FA456: pop     ecx
0x7FA457: pop     edi
0x7FA458: pop     esi
0x7FA459: pop     ebp
0x7FA45A: pop     ebx
0x7FA45B: add     esp, 14h
0x7FA45E: retn
