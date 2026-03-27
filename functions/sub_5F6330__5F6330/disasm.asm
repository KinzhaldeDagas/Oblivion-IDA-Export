0x5F6330: push    esi
0x5F6331: mov     esi, ecx
0x5F6333: call    sub_5E6C60
0x5F6338: test    al, al
0x5F633A: jz      short loc_5F6383
0x5F633C: mov     ecx, ds:0B333C4h
0x5F6342: cmp     byte ptr [ecx+738h], 0
0x5F6349: jz      short loc_5F6389
0x5F634B: mov     eax, [esi]
0x5F634D: mov     edx, [eax+334h]
0x5F6353: push    1
0x5F6355: mov     ecx, esi
0x5F6357: call    edx
0x5F6359: test    al, al
0x5F635B: jz      short loc_5F6383
0x5F635D: mov     ecx, [esi+58h]
0x5F6360: mov     eax, [ecx]
0x5F6362: mov     edx, [eax+0CCh]
0x5F6368: call    edx
0x5F636A: mov     ecx, ds:0B333C4h
0x5F6370: cmp     eax, ecx
0x5F6372: jnz     short loc_5F6389
0x5F6374: mov     ecx, [ecx+58h]
0x5F6377: mov     eax, [ecx]
0x5F6379: mov     edx, [eax+448h]
0x5F637F: push    0FFFFFFFFh
0x5F6381: call    edx
0x5F6383: mov     ecx, ds:0B333C4h
0x5F6389: mov     eax, [esp+4+arg_0]
0x5F638D: test    eax, eax
0x5F638F: jz      short loc_5F6395
0x5F6391: cmp     eax, ecx
0x5F6393: jnz     short loc_5F639B
0x5F6395: push    esi
0x5F6396: call    sub_65DEF0
0x5F639B: push    ebx
0x5F639C: push    ebp
0x5F639D: push    edi
0x5F639E: push    0; float
0x5F63A0: mov     ecx, esi
0x5F63A2: call    sub_5F4AE0
0x5F63A7: mov     eax, [esi]
0x5F63A9: mov     edx, [eax+394h]
0x5F63AF: push    0
0x5F63B1: mov     ecx, esi
0x5F63B3: call    edx
0x5F63B5: push    4
0x5F63B7: push    esi
0x5F63B8: mov     ecx, offset dword_B3BDB0
0x5F63BD: call    sub_67C880
0x5F63C2: mov     edi, eax
0x5F63C4: test    edi, edi
0x5F63C6: mov     ebp, edi
0x5F63C8: jz      short loc_5F6415
0x5F63CA: lea     ebx, [ebx+0]
0x5F63D0: mov     ebx, [edi]
0x5F63D2: test    ebx, ebx
0x5F63D4: mov     edi, [edi+4]
0x5F63D7: jz      short loc_5F6401
0x5F63D9: mov     ecx, [ebx]
0x5F63DB: test    ecx, ecx
0x5F63DD: jz      short loc_5F6401
0x5F63DF: mov     eax, [ecx]
0x5F63E1: mov     edx, [eax+330h]
0x5F63E7: call    edx
0x5F63E9: test    eax, eax
0x5F63EB: jz      short loc_5F6401
0x5F63ED: mov     ecx, [ebx]
0x5F63EF: mov     eax, [ecx]
0x5F63F1: mov     edx, [eax+330h]
0x5F63F7: push    esi
0x5F63F8: call    edx
0x5F63FA: mov     ecx, eax
0x5F63FC: call    sub_615010
0x5F6401: test    edi, edi
0x5F6403: jnz     short loc_5F63D0
0x5F6405: mov     ecx, ebp
0x5F6407: call    BSSimpleList_Clear
0x5F640C: push    ebp
0x5F640D: call    FormHeapFree
0x5F6412: add     esp, 4
0x5F6415: push    esi
0x5F6416: push    0Ch
0x5F6418: mov     ecx, offset dword_B3BDB0
0x5F641D: call    sub_67CF50
0x5F6422: mov     edi, eax
0x5F6424: test    edi, edi
0x5F6426: mov     ebx, edi
0x5F6428: jz      short loc_5F6443
0x5F642A: lea     ebx, [ebx+0]
0x5F6430: mov     ecx, [edi]
0x5F6432: test    ecx, ecx
0x5F6434: jz      short loc_5F6443
0x5F6436: mov     edi, [edi+4]
0x5F6439: push    esi
0x5F643A: call    sub_67B670
0x5F643F: test    edi, edi
0x5F6441: jnz     short loc_5F6430
0x5F6443: cmp     dword ptr [ebx+4], 0
0x5F6447: jz      short loc_5F6466
0x5F6449: lea     esp, [esp+0]
0x5F6450: mov     eax, [ebx+4]
0x5F6453: mov     edi, [eax+4]
0x5F6456: push    eax
0x5F6457: call    FormHeapFree
0x5F645C: add     esp, 4
0x5F645F: test    edi, edi
0x5F6461: mov     [ebx+4], edi
0x5F6464: jnz     short loc_5F6450
0x5F6466: push    ebx
0x5F6467: mov     dword ptr [ebx], 0
0x5F646D: call    FormHeapFree
0x5F6472: mov     ecx, [esi+58h]
0x5F6475: add     esp, 4
0x5F6478: test    ecx, ecx
0x5F647A: jz      short loc_5F6499
0x5F647C: mov     eax, [ecx]
0x5F647E: mov     edx, [eax+174h]
0x5F6484: call    edx
0x5F6486: test    eax, eax
0x5F6488: jz      short loc_5F6499
0x5F648A: mov     ecx, [esi+58h]
0x5F648D: mov     eax, [ecx]
0x5F648F: mov     edx, [eax+178h]
0x5F6495: push    0
0x5F6497: call    edx
0x5F6499: cmp     dword ptr [esi+58h], 0
0x5F649D: jz      short loc_5F64AE
0x5F649F: mov     ecx, [esi+58h]
0x5F64A2: mov     eax, [ecx]
0x5F64A4: mov     edx, [eax+2C8h]
0x5F64AA: push    0
0x5F64AC: call    edx
0x5F64AE: mov     eax, [esi]
0x5F64B0: mov     edx, [eax+330h]
0x5F64B6: mov     ecx, esi
0x5F64B8: call    edx
0x5F64BA: test    eax, eax
0x5F64BC: jz      short loc_5F6512
0x5F64BE: mov     eax, [esp+10h+arg_0]
0x5F64C2: mov     edx, [esi]
0x5F64C4: push    eax
0x5F64C5: mov     eax, [edx+330h]
0x5F64CB: mov     ecx, esi
0x5F64CD: call    eax
0x5F64CF: mov     ecx, eax
0x5F64D1: call    sub_61DB00
0x5F64D6: mov     edx, [esi]
0x5F64D8: mov     bl, al
0x5F64DA: mov     eax, [edx+198h]
0x5F64E0: push    0; int
0x5F64E2: mov     ecx, esi
0x5F64E4: call    eax
0x5F64E6: test    al, al
0x5F64E8: jnz     short loc_5F6512
0x5F64EA: test    bl, bl
0x5F64EC: jz      short loc_5F6512
0x5F64EE: cmp     ds:0B3B908h, al
0x5F64F4: jz      short loc_5F650B
0x5F64F6: mov     ecx, esi; this
0x5F64F8: call    TESObjectREFR_GetName
0x5F64FD: push    eax
0x5F64FE: push    offset a_20sStopsComba; "%.20s stops combat."
0x5F6503: call    Interface_ConsolePrint
0x5F6508: add     esp, 8
0x5F650B: mov     ecx, esi; int
0x5F650D: call    sub_5EAE70
0x5F6512: mov     ecx, [esi+58h]
0x5F6515: test    ecx, ecx
0x5F6517: pop     edi
0x5F6518: pop     ebp
0x5F6519: pop     ebx
0x5F651A: jz      short loc_5F6537
0x5F651C: mov     edx, [ecx]
0x5F651E: mov     eax, [edx+14Ch]
0x5F6524: push    0
0x5F6526: call    eax
0x5F6528: mov     esi, [esi+58h]
0x5F652B: mov     edx, [esi]
0x5F652D: mov     eax, [edx+4A4h]
0x5F6533: mov     ecx, esi
0x5F6535: call    eax
0x5F6537: pop     esi
0x5F6538: retn    4
