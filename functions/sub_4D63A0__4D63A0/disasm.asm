0x4D63A0: push    ebp
0x4D63A1: push    esi
0x4D63A2: push    edi
0x4D63A3: mov     esi, ecx
0x4D63A5: call    sub_4D58B0
0x4D63AA: mov     ecx, [esp+0Ch+arg_0]
0x4D63AE: mov     edi, eax
0x4D63B0: mov     byte ptr [esi+26h], 5
0x4D63B4: mov     eax, [ecx]
0x4D63B6: mov     edx, [eax+84h]
0x4D63BC: push    1
0x4D63BE: push    edi
0x4D63BF: call    edx
0x4D63C1: test    byte ptr [esi+24h], 1
0x4D63C5: jz      short loc_4D63D3
0x4D63C7: lea     ecx, [esi+28h]
0x4D63CA: call    sub_424180
0x4D63CF: mov     ebp, eax
0x4D63D1: jmp     short loc_4D63D9
0x4D63D3: mov     ebp, ds:0B35C24h
0x4D63D9: test    ebp, ebp
0x4D63DB: jz      short loc_4D6406
0x4D63DD: test    byte ptr [esi+24h], 1
0x4D63E1: jnz     short loc_4D63EA
0x4D63E3: mov     ecx, esi
0x4D63E5: call    sub_4D4D00
0x4D63EA: cmp     byte ptr ds:0B33A34h, 0
0x4D63F1: setz    al
0x4D63F4: mov     [ebp+19h], al
0x4D63F7: movzx   ecx, byte ptr ds:0B097B8h
0x4D63FE: push    ecx
0x4D63FF: mov     ecx, ebp
0x4D6401: call    sub_88B680
0x4D6406: call    sub_4E4980
0x4D640B: test    al, al
0x4D640D: jz      short loc_4D641B
0x4D640F: mov     ecx, [esi+44h]
0x4D6412: test    ecx, ecx
0x4D6414: jz      short loc_4D641B
0x4D6416: call    sub_4E5550
0x4D641B: push    1
0x4D641D: mov     ecx, esi
0x4D641F: call    sub_4CB670
0x4D6424: push    1
0x4D6426: mov     ecx, esi
0x4D6428: call    sub_4CB590
0x4D642D: mov     ecx, edi; this
0x4D642F: call    NiAVObject_InitializePropertyState
0x4D6434: fldz
0x4D6436: push    0; a3
0x4D6438: push    ecx
0x4D6439: mov     ecx, edi; this
0x4D643B: fstp    [esp+14h+a2]; a2
0x4D643E: call    NiAVObject_UpdateNiAVObject
0x4D6443: pop     edi
0x4D6444: pop     esi
0x4D6445: pop     ebp
0x4D6446: retn    4
