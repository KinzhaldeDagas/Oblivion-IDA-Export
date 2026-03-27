0x8803B0: push    0FFFFFFFFh
0x8803B2: push    offset SEH_880560
0x8803B7: mov     eax, large fs:0
0x8803BD: push    eax
0x8803BE: push    ebx
0x8803BF: push    ebp
0x8803C0: push    esi
0x8803C1: push    edi
0x8803C2: mov     eax, ds:0B30AACh
0x8803C7: xor     eax, esp
0x8803C9: push    eax
0x8803CA: lea     eax, [esp+20h+var_C]
0x8803CE: mov     large fs:0, eax
0x8803D4: mov     esi, ecx
0x8803D6: mov     ebx, [esp+20h+arg_8]
0x8803DA: mov     eax, [ebx+10h]
0x8803DD: mov     edi, ds:0B4772Ch
0x8803E3: push    eax
0x8803E4: call    sub_848C40
0x8803E9: mov     ebx, [ebx+0Ch]
0x8803EC: push    ebx
0x8803ED: mov     ecx, esi
0x8803EF: call    sub_848E50
0x8803F4: mov     ecx, [esp+20h+arg_0]
0x8803F8: mov     eax, [esi]
0x8803FA: mov     edx, [eax+0BCh]
0x880400: push    0
0x880402: push    ebx
0x880403: push    ecx
0x880404: mov     ecx, esi
0x880406: call    edx
0x880408: mov     eax, [edi+24h]
0x88040B: mov     ecx, [esp+20h+arg_C]
0x88040F: mov     ebx, [eax]
0x880411: mov     edx, [ecx]
0x880413: mov     eax, [edx+88h]
0x880419: push    0
0x88041B: mov     [esp+24h+arg_8], ebx
0x88041F: call    eax
0x880421: mov     ebx, [ebx+4]
0x880424: mov     ebp, eax
0x880426: cmp     ebx, ebp
0x880428: jz      short loc_88045F
0x88042A: test    ebx, ebx
0x88042C: jz      short loc_88044A
0x88042E: lea     ecx, [ebx+4]
0x880431: push    ecx; lpAddend
0x880432: call    dword ptr ds:0A2807Ch
0x880438: test    eax, eax
0x88043A: jnz     short loc_88044A
0x88043C: test    ebx, ebx
0x88043E: jz      short loc_88044A
0x880440: mov     edx, [ebx]
0x880442: mov     eax, [edx]
0x880444: push    1
0x880446: mov     ecx, ebx
0x880448: call    eax
0x88044A: test    ebp, ebp
0x88044C: mov     ecx, [esp+20h+arg_8]
0x880450: mov     [ecx+4], ebp
0x880453: jz      short loc_88045F
0x880455: add     ebp, 4
0x880458: push    ebp; lpAddend
0x880459: call    dword ptr ds:0A28078h
0x88045F: mov     edx, [edi+24h]
0x880462: mov     eax, [esp+20h+arg_C]
0x880466: mov     ebx, [edx+4]
0x880469: push    0
0x88046B: push    eax
0x88046C: mov     ecx, esi
0x88046E: mov     [esp+28h+arg_8], ebx
0x880472: call    sub_848FD0
0x880477: mov     ebx, [ebx+4]
0x88047A: mov     ebp, eax
0x88047C: cmp     ebx, ebp
0x88047E: jz      short loc_8804B5
0x880480: test    ebx, ebx
0x880482: jz      short loc_8804A0
0x880484: lea     ecx, [ebx+4]
0x880487: push    ecx; lpAddend
0x880488: call    dword ptr ds:0A2807Ch
0x88048E: test    eax, eax
0x880490: jnz     short loc_8804A0
0x880492: test    ebx, ebx
0x880494: jz      short loc_8804A0
0x880496: mov     edx, [ebx]
0x880498: mov     eax, [edx]
0x88049A: push    1
0x88049C: mov     ecx, ebx
0x88049E: call    eax
0x8804A0: test    ebp, ebp
0x8804A2: mov     ecx, [esp+20h+arg_8]
0x8804A6: mov     [ecx+4], ebp
0x8804A9: jz      short loc_8804B5
0x8804AB: add     ebp, 4
0x8804AE: push    ebp; lpAddend
0x8804AF: call    dword ptr ds:0A28078h
0x8804B5: mov     edx, [edi+24h]
0x8804B8: mov     ebp, [edx+10h]
0x8804BB: mov     eax, ds:0B43110h
0x8804C0: mov     ebx, [ebp+4]
0x8804C3: cmp     ebx, eax
0x8804C5: mov     ecx, eax
0x8804C7: mov     [esp+20h+arg_C], ecx
0x8804CB: jz      short loc_880502
0x8804CD: test    ebx, ebx
0x8804CF: jz      short loc_8804F1
0x8804D1: lea     eax, [ebx+4]
0x8804D4: push    eax; lpAddend
0x8804D5: call    dword ptr ds:0A2807Ch
0x8804DB: test    eax, eax
0x8804DD: jnz     short loc_8804ED
0x8804DF: test    ebx, ebx
0x8804E1: jz      short loc_8804ED
0x8804E3: mov     edx, [ebx]
0x8804E5: mov     eax, [edx]
0x8804E7: push    1
0x8804E9: mov     ecx, ebx
0x8804EB: call    eax
0x8804ED: mov     ecx, [esp+20h+arg_C]
0x8804F1: test    ecx, ecx
0x8804F3: mov     [ebp+4], ecx
0x8804F6: jz      short loc_880502
0x8804F8: add     ecx, 4
0x8804FB: push    ecx; lpAddend
0x8804FC: call    dword ptr ds:0A28078h
0x880502: mov     ebx, 1
0x880507: add     [edi+60h], ebx
0x88050A: mov     [esp+20h+arg_C], edi
0x88050E: mov     edx, [esi+38h]
0x880511: lea     ecx, [esp+20h+arg_C]
0x880515: push    ecx
0x880516: push    edx
0x880517: lea     ecx, [esi+40h]
0x88051A: mov     [esp+28h+var_4], 0
0x880522: call    sub_76CE40
0x880527: or      eax, 0FFFFFFFFh
0x88052A: add     [edi+60h], eax
0x88052D: mov     [esp+20h+var_4], eax
0x880531: jnz     short loc_88053A
0x880533: mov     ecx, edi
0x880535: call    sub_7604D0
0x88053A: add     [esi+38h], ebx
0x88053D: mov     ecx, [esp+20h+var_C]
0x880541: mov     large fs:0, ecx
0x880548: pop     ecx
0x880549: pop     edi
0x88054A: pop     esi
0x88054B: pop     ebp
0x88054C: pop     ebx
0x88054D: add     esp, 0Ch
0x880550: retn    10h
