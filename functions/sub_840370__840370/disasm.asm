0x840370: push    0FFFFFFFFh
0x840372: push    offset SEH_882120
0x840377: mov     eax, large fs:0
0x84037D: push    eax
0x84037E: push    ebx
0x84037F: push    ebp
0x840380: push    esi
0x840381: push    edi
0x840382: mov     eax, ds:0B30AACh
0x840387: xor     eax, esp
0x840389: push    eax
0x84038A: lea     eax, [esp+20h+var_C]
0x84038E: mov     large fs:0, eax
0x840394: mov     edi, ecx
0x840396: mov     ebp, [esp+20h+arg_8]
0x84039A: mov     esi, [ebp+0Ch]
0x84039D: mov     ebx, ds:0B458C0h
0x8403A3: push    esi
0x8403A4: call    sub_848E50
0x8403A9: mov     ebp, [ebp+10h]
0x8403AC: mov     ecx, [esp+20h+arg_0]
0x8403B0: mov     eax, [edi]
0x8403B2: mov     edx, [eax+0BCh]
0x8403B8: push    ebp
0x8403B9: push    esi
0x8403BA: push    ecx
0x8403BB: mov     ecx, edi
0x8403BD: call    edx
0x8403BF: mov     esi, [esp+20h+arg_C]
0x8403C3: mov     eax, [esi+0A8h]
0x8403C9: mov     ds:0B46628h, eax
0x8403CE: mov     ecx, [esi+0ACh]
0x8403D4: mov     ds:0B4662Ch, ecx
0x8403DA: mov     edx, [esi+0B0h]
0x8403E0: mov     ds:0B46630h, edx
0x8403E6: mov     eax, [esi+0B4h]
0x8403EC: mov     ds:0B46634h, eax
0x8403F1: mov     ecx, [ebx+24h]
0x8403F4: mov     ebp, [ecx]
0x8403F6: mov     edx, [esi]
0x8403F8: mov     eax, [edx+88h]
0x8403FE: push    0
0x840400: mov     ecx, esi
0x840402: mov     [esp+24h+arg_8], ebp
0x840406: call    eax
0x840408: mov     ebp, [ebp+4]
0x84040B: cmp     ebp, eax
0x84040D: mov     [esp+20h+arg_0], eax
0x840411: jz      short loc_84044D
0x840413: test    ebp, ebp
0x840415: jz      short loc_840438
0x840417: lea     ecx, [ebp+4]
0x84041A: push    ecx; lpAddend
0x84041B: call    dword ptr ds:0A2807Ch
0x840421: test    eax, eax
0x840423: jnz     short loc_840434
0x840425: test    ebp, ebp
0x840427: jz      short loc_840434
0x840429: mov     edx, [ebp+0]
0x84042C: mov     eax, [edx]
0x84042E: push    1
0x840430: mov     ecx, ebp
0x840432: call    eax
0x840434: mov     eax, [esp+20h+arg_0]
0x840438: test    eax, eax
0x84043A: mov     ecx, [esp+20h+arg_8]
0x84043E: mov     [ecx+4], eax
0x840441: jz      short loc_84044D
0x840443: add     eax, 4
0x840446: push    eax; lpAddend
0x840447: call    dword ptr ds:0A28078h
0x84044D: mov     edx, [esp+20h+arg_8]
0x840451: push    esi
0x840452: push    edx
0x840453: mov     ecx, edi
0x840455: call    sub_848FA0
0x84045A: mov     eax, [ebx+24h]
0x84045D: mov     ebp, [eax+4]
0x840460: push    0
0x840462: push    esi
0x840463: mov     ecx, edi
0x840465: mov     [esp+28h+arg_8], ebp
0x840469: call    sub_848FD0
0x84046E: mov     ebp, [ebp+4]
0x840471: cmp     ebp, eax
0x840473: mov     [esp+20h+arg_0], eax
0x840477: jz      short loc_8404B3
0x840479: test    ebp, ebp
0x84047B: jz      short loc_84049E
0x84047D: lea     ecx, [ebp+4]
0x840480: push    ecx; lpAddend
0x840481: call    dword ptr ds:0A2807Ch
0x840487: test    eax, eax
0x840489: jnz     short loc_84049A
0x84048B: test    ebp, ebp
0x84048D: jz      short loc_84049A
0x84048F: mov     edx, [ebp+0]
0x840492: mov     eax, [edx]
0x840494: push    1
0x840496: mov     ecx, ebp
0x840498: call    eax
0x84049A: mov     eax, [esp+20h+arg_0]
0x84049E: test    eax, eax
0x8404A0: mov     ecx, [esp+20h+arg_8]
0x8404A4: mov     [ecx+4], eax
0x8404A7: jz      short loc_8404B3
0x8404A9: add     eax, 4
0x8404AC: push    eax; lpAddend
0x8404AD: call    dword ptr ds:0A28078h
0x8404B3: mov     edx, [esp+20h+arg_8]
0x8404B7: push    esi
0x8404B8: push    edx
0x8404B9: mov     ecx, edi
0x8404BB: call    sub_848FA0
0x8404C0: mov     eax, [ebx+24h]
0x8404C3: mov     ebp, [eax+10h]
0x8404C6: mov     edx, [esi]
0x8404C8: mov     eax, [edx+88h]
0x8404CE: push    1
0x8404D0: mov     ecx, esi
0x8404D2: mov     [esp+24h+arg_8], ebp
0x8404D6: call    eax
0x8404D8: mov     ebp, [ebp+4]
0x8404DB: cmp     ebp, eax
0x8404DD: mov     [esp+20h+arg_0], eax
0x8404E1: jz      short loc_84051D
0x8404E3: test    ebp, ebp
0x8404E5: jz      short loc_840508
0x8404E7: lea     ecx, [ebp+4]
0x8404EA: push    ecx; lpAddend
0x8404EB: call    dword ptr ds:0A2807Ch
0x8404F1: test    eax, eax
0x8404F3: jnz     short loc_840504
0x8404F5: test    ebp, ebp
0x8404F7: jz      short loc_840504
0x8404F9: mov     edx, [ebp+0]
0x8404FC: mov     eax, [edx]
0x8404FE: push    1
0x840500: mov     ecx, ebp
0x840502: call    eax
0x840504: mov     eax, [esp+20h+arg_0]
0x840508: test    eax, eax
0x84050A: mov     ecx, [esp+20h+arg_8]
0x84050E: mov     [ecx+4], eax
0x840511: jz      short loc_84051D
0x840513: add     eax, 4
0x840516: push    eax; lpAddend
0x840517: call    dword ptr ds:0A28078h
0x84051D: mov     edx, [esp+20h+arg_8]
0x840521: push    esi
0x840522: push    edx
0x840523: mov     ecx, edi
0x840525: call    sub_848FA0
0x84052A: mov     esi, 1
0x84052F: add     [ebx+60h], esi
0x840532: mov     [esp+20h+arg_8], ebx
0x840536: mov     ecx, [edi+38h]
0x840539: lea     eax, [esp+20h+arg_8]
0x84053D: push    eax
0x84053E: push    ecx
0x84053F: lea     ecx, [edi+40h]
0x840542: mov     [esp+28h+var_4], 0
0x84054A: call    sub_76CE40
0x84054F: or      eax, 0FFFFFFFFh
0x840552: add     [ebx+60h], eax
0x840555: mov     [esp+20h+var_4], eax
0x840559: jnz     short loc_840562
0x84055B: mov     ecx, ebx
0x84055D: call    sub_7604D0
0x840562: add     [edi+38h], esi
0x840565: mov     ecx, [esp+20h+var_C]
0x840569: mov     large fs:0, ecx
0x840570: pop     ecx
0x840571: pop     edi
0x840572: pop     esi
0x840573: pop     ebp
0x840574: pop     ebx
0x840575: add     esp, 0Ch
0x840578: retn    10h
