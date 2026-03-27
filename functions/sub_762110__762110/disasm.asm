0x762110: push    esi; MaxCount
0x762111: mov     esi, ecx
0x762113: mov     eax, [esi+280h]
0x762119: mov     ecx, [eax]
0x76211B: lea     edx, [esi+284h]
0x762121: push    edx
0x762122: push    eax
0x762123: mov     eax, [ecx+1Ch]
0x762126: call    eax
0x762128: test    eax, eax
0x76212A: jge     short loc_762158
0x76212C: push    0FFh; Src
0x762131: push    offset aCreationFail_7; "Creation failed: Could not query device"...
0x762136: push    100h; SizeInBytes
0x76213B: push    offset byte_B3F828; Dst
0x762140: call    _strncpy_s
0x762145: push    offset aNidx9render_15; "NiDX9Renderer::Initialize> Could not qu"...
0x76214A: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76214F: add     esp, 14h
0x762152: xor     al, al
0x762154: pop     esi
0x762155: retn    4
0x762158: mov     edx, [esi+318h]
0x76215E: push    edi; MaxCount
0x76215F: mov     edi, 2
0x762164: cmp     edx, edi
0x762166: jb      loc_76239B
0x76216C: cmp     [esi+31Ch], edi
0x762172: jb      loc_76239B
0x762178: mov     eax, [esi+2C0h]
0x76217E: test    al, 2
0x762180: mov     dword ptr [esi+5E0h], 0
0x76218A: mov     ecx, 4
0x76218F: jnz     short loc_76219D
0x762191: mov     dword ptr [esi+5E0h], 8
0x76219B: jmp     short loc_7621AA
0x76219D: test    eax, 100h
0x7621A2: jz      short loc_7621AA
0x7621A4: mov     [esi+5E0h], ecx
0x7621AA: cmp     byte ptr [esi+5C8h], 0
0x7621B1: push    ebx
0x7621B2: mov     ebx, [esi+32Ch]
0x7621B8: mov     [esi+6D8h], ebx
0x7621BE: jz      short loc_7621CF
0x7621C0: cmp     byte ptr [esi+5C9h], 0
0x7621C7: jnz     short loc_7621CF
0x7621C9: mov     [esi+6D8h], ecx
0x7621CF: cmp     [esi+6D8h], ecx
0x7621D5: jb      short loc_7621DD
0x7621D7: or      [esi+5E0h], edi
0x7621DD: mov     ecx, [esi+340h]
0x7621E3: mov     edi, [esi+348h]
0x7621E9: shr     eax, 10h
0x7621EC: mov     ebx, 1
0x7621F1: and     al, bl
0x7621F3: mov     [esi+6E8h], al
0x7621F9: mov     eax, [esi+290h]
0x7621FF: shr     eax, 1Dh
0x762202: and     al, bl
0x762204: mov     [esi+6DCh], ecx
0x76220A: mov     ecx, [esi+350h]
0x762210: mov     [esi+6E9h], al
0x762216: mov     eax, [esp+0Ch+arg_0]
0x76221A: mov     [esi+6E0h], ecx
0x762220: mov     [esi+6E4h], edi
0x762226: cmp     dword ptr [eax+10h], 0
0x76222A: mov     eax, ebx
0x76222C: jnz     short loc_762234
0x76222E: mov     eax, [esi+374h]
0x762234: mov     [esi+894h], eax
0x76223A: push    ebp
0x76223B: mov     ebp, [esi+2A4h]
0x762241: mov     eax, ebp
0x762243: shr     eax, 12h
0x762246: and     al, bl
0x762248: mov     [esi+898h], al
0x76224E: mov     eax, ebp
0x762250: shr     eax, 13h
0x762253: and     al, bl
0x762255: mov     [esi+899h], al
0x76225B: mov     eax, 0FFFE0000h
0x762260: push    edx
0x762261: mov     [esi+914h], ecx
0x762267: mov     dword ptr [esi+918h], 0FFFF0000h
0x762271: mov     [esi+91Ch], ecx
0x762277: mov     [esi+920h], edi
0x76227D: mov     [esi+924h], eax
0x762283: mov     [esi+928h], edi
0x762289: mov     [esi+92Ch], eax
0x76228F: mov     [esi+930h], eax
0x762295: mov     [esi+934h], eax
0x76229B: mov     dword ptr [esi+938h], 2
0x7622A5: call    sub_75FA40
0x7622AA: mov     ecx, [esi+31Ch]
0x7622B0: push    ecx
0x7622B1: call    sub_75FA50
0x7622B6: add     esp, 8
0x7622B9: cmp     dword ptr [esi+6E0h], 0FFFF0200h
0x7622C3: pop     ebp
0x7622C4: jb      short loc_7622CA
0x7622C6: push    10h
0x7622C8: jmp     short loc_7622D1
0x7622CA: mov     edx, [esi+318h]
0x7622D0: push    edx
0x7622D1: call    sub_75FA60
0x7622D6: mov     eax, 3
0x7622DB: xor     ecx, ecx
0x7622DD: mov     ds:0B42144h, eax
0x7622E2: mov     ds:0B42138h, eax
0x7622E7: mov     ds:0B42130h, eax
0x7622EC: mov     ds:0B42134h, eax
0x7622F1: mov     eax, 2
0x7622F6: mov     ds:0B420F0h, ecx
0x7622FC: mov     ds:0B420FCh, ecx
0x762302: mov     ds:0B42148h, ebx
0x762308: mov     ds:0B4214Ch, ebx
0x76230E: mov     ds:0B42140h, ebx
0x762314: mov     ds:0B4213Ch, ebx
0x76231A: mov     ds:0B420ECh, ebx
0x762320: mov     ds:0B420E8h, ebx
0x762326: mov     ds:0B420F8h, eax
0x76232B: mov     ds:0B420F4h, eax
0x762330: mov     ds:0B42104h, eax
0x762335: mov     ds:0B42100h, eax
0x76233A: mov     ds:0B42108h, eax
0x76233F: mov     ds:0B42110h, ebx
0x762345: mov     ds:0B4210Ch, ebx
0x76234B: mov     ds:0B42114h, ebx
0x762351: mov     ds:0B4211Ch, ebx
0x762357: mov     ds:0B42118h, ebx
0x76235D: mov     ds:0B42120h, eax
0x762362: mov     ds:0B42128h, eax
0x762367: mov     ds:0B42124h, eax
0x76236C: mov     ds:0B4212Ch, ebx
0x762372: mov     ecx, [esi+2C0h]
0x762378: add     esp, 4
0x76237B: and     ecx, 400h
0x762381: neg     ecx
0x762383: sbb     ecx, ecx
0x762385: and     ecx, 101h
0x76238B: add     ecx, eax
0x76238D: mov     al, bl
0x76238F: pop     ebx
0x762390: pop     edi
0x762391: mov     ds:0B4215Ch, ecx
0x762397: pop     esi
0x762398: retn    4
0x76239B: push    0FFh; Src
0x7623A0: push    offset aCreationFail_8; "Creation failed: Device does not suppor"...
0x7623A5: push    100h; SizeInBytes
0x7623AA: push    offset byte_B3F828; Dst
0x7623AF: call    _strncpy_s
0x7623B4: push    offset aNidx9render_16; "NiDX9Renderer::Initialize> Device does "...
0x7623B9: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7623BE: add     esp, 14h
0x7623C1: pop     edi
0x7623C2: xor     al, al
0x7623C4: pop     esi
0x7623C5: retn    4
