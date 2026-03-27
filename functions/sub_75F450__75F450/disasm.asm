0x75F450: push    esi
0x75F451: mov     esi, [esp+4+arg_0]
0x75F455: push    edi
0x75F456: push    esi
0x75F457: mov     edi, ecx
0x75F459: call    sub_75E480
0x75F45E: cmp     dword ptr [esi+0D8h], 0A010068h
0x75F468: jnb     short loc_75F4A2
0x75F46A: mov     ecx, esi
0x75F46C: call    sub_7124A0
0x75F471: push    20h ; ' '; Size
0x75F473: mov     esi, eax
0x75F475: call    FormHeapAlloc
0x75F47A: add     esp, 4
0x75F47D: test    eax, eax
0x75F47F: jz      short loc_75F497
0x75F481: push    esi
0x75F482: mov     ecx, eax
0x75F484: call    sub_6E7DB0
0x75F489: push    eax; a2
0x75F48A: lea     ecx, [edi+3Ch]; this
0x75F48D: call    NiSmartPointer_Set??
0x75F492: pop     edi
0x75F493: pop     esi
0x75F494: retn    4
0x75F497: xor     eax, eax
0x75F499: push    eax; a2
0x75F49A: lea     ecx, [edi+3Ch]; this
0x75F49D: call    NiSmartPointer_Set??
0x75F4A2: pop     edi
0x75F4A3: pop     esi
0x75F4A4: retn    4
