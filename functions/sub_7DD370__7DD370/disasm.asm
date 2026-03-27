0x7DD370: push    0FFFFFFFFh
0x7DD372: push    offset SEH_8C8970
0x7DD377: mov     eax, large fs:0
0x7DD37D: push    eax
0x7DD37E: push    ecx
0x7DD37F: push    esi
0x7DD380: push    edi
0x7DD381: mov     eax, ds:0B30AACh
0x7DD386: xor     eax, esp
0x7DD388: push    eax
0x7DD389: lea     eax, [esp+1Ch+var_C]
0x7DD38D: mov     large fs:0, eax
0x7DD393: mov     edi, [esp+1Ch+arg_0]
0x7DD397: push    4
0x7DD399: mov     ecx, edi
0x7DD39B: call    NiNode_GetNiPropertyByID
0x7DD3A0: test    eax, eax
0x7DD3A2: jz      short loc_7DD3F1
0x7DD3A4: mov     edx, [eax]
0x7DD3A6: mov     ecx, eax
0x7DD3A8: mov     eax, [edx+54h]
0x7DD3AB: call    eax
0x7DD3AD: xor     ecx, ecx
0x7DD3AF: cmp     eax, 0Ch
0x7DD3B2: setz    cl
0x7DD3B5: mov     eax, ecx
0x7DD3B7: test    eax, eax
0x7DD3B9: jnz     loc_7DD484
0x7DD3BF: push    4
0x7DD3C1: lea     edx, [esp+20h+arg_0]
0x7DD3C5: push    edx
0x7DD3C6: mov     ecx, edi
0x7DD3C8: call    sub_708560
0x7DD3CD: mov     esi, [esp+1Ch+arg_0]
0x7DD3D1: test    esi, esi
0x7DD3D3: jz      short loc_7DD3F1
0x7DD3D5: lea     eax, [esi+4]
0x7DD3D8: push    eax; lpAddend
0x7DD3D9: call    dword ptr ds:0A2807Ch
0x7DD3DF: test    eax, eax
0x7DD3E1: jnz     short loc_7DD3F1
0x7DD3E3: test    esi, esi
0x7DD3E5: jz      short loc_7DD3F1
0x7DD3E7: mov     edx, [esi]
0x7DD3E9: mov     eax, [edx]
0x7DD3EB: push    1
0x7DD3ED: mov     ecx, esi
0x7DD3EF: call    eax
0x7DD3F1: push    88h ; 'ˆ'; Size
0x7DD3F6: call    FormHeapAlloc
0x7DD3FB: add     esp, 4
0x7DD3FE: mov     [esp+1Ch+var_10], eax
0x7DD402: test    eax, eax
0x7DD404: mov     [esp+1Ch+var_4], 0
0x7DD40C: jz      short loc_7DD419
0x7DD40E: mov     ecx, eax
0x7DD410: call    sub_85BBE0
0x7DD415: mov     esi, eax
0x7DD417: jmp     short loc_7DD41B
0x7DD419: xor     esi, esi
0x7DD41B: push    2
0x7DD41D: mov     ecx, edi
0x7DD41F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7DD427: call    NiNode_GetNiPropertyByID
0x7DD42C: test    eax, eax
0x7DD42E: jz      short loc_7DD450
0x7DD430: mov     eax, [eax+8]
0x7DD433: test    eax, eax
0x7DD435: jz      short loc_7DD450
0x7DD437: push    offset aLava; "lava"
0x7DD43C: push    eax; Str1
0x7DD43D: call    __strcmp
0x7DD442: add     esp, 8
0x7DD445: test    eax, eax
0x7DD447: jnz     short loc_7DD450
0x7DD449: mov     byte ptr ds:0B47844h, 1
0x7DD450: push    esi; a2
0x7DD451: mov     ecx, edi; this
0x7DD453: call    sub_405680
0x7DD458: mov     edx, [esi]
0x7DD45A: mov     eax, [edx+58h]
0x7DD45D: push    edi
0x7DD45E: mov     ecx, esi
0x7DD460: call    eax
0x7DD462: test    al, al
0x7DD464: jnz     short loc_7DD484
0x7DD466: push    esi
0x7DD467: mov     ecx, edi
0x7DD469: call    sub_4A1220
0x7DD46E: xor     al, al
0x7DD470: mov     ecx, [esp+1Ch+var_C]
0x7DD474: mov     large fs:0, ecx
0x7DD47B: pop     ecx
0x7DD47C: pop     edi
0x7DD47D: pop     esi
0x7DD47E: add     esp, 10h
0x7DD481: retn    4
0x7DD484: mov     al, 1
0x7DD486: mov     ecx, [esp+1Ch+var_C]
0x7DD48A: mov     large fs:0, ecx
0x7DD491: pop     ecx
0x7DD492: pop     edi
0x7DD493: pop     esi
0x7DD494: add     esp, 10h
0x7DD497: retn    4
