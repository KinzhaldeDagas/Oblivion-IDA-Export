0x75B830: push    esi
0x75B831: push    edi
0x75B832: mov     edi, [esp+8+arg_0]
0x75B836: push    edi
0x75B837: mov     esi, ecx
0x75B839: call    sub_752CD0
0x75B83E: test    al, al
0x75B840: jz      short loc_75B8B8
0x75B842: mov     eax, [esi+18h]
0x75B845: test    eax, eax
0x75B847: jz      short loc_75B853
0x75B849: cmp     dword ptr [edi+18h], 0
0x75B84D: jz      short loc_75B8B8
0x75B84F: test    eax, eax
0x75B851: jnz     short loc_75B85D
0x75B853: cmp     dword ptr [edi+18h], 0
0x75B857: jnz     short loc_75B8B8
0x75B859: test    eax, eax
0x75B85B: jz      short loc_75B873
0x75B85D: mov     eax, [edi+18h]
0x75B860: test    eax, eax
0x75B862: jz      short loc_75B873
0x75B864: mov     ecx, [esi+18h]
0x75B867: mov     edx, [ecx]
0x75B869: push    eax
0x75B86A: mov     eax, [edx+2Ch]
0x75B86D: call    eax
0x75B86F: test    al, al
0x75B871: jz      short loc_75B8B8
0x75B873: lea     ecx, [edi+1Ch]
0x75B876: push    ecx
0x75B877: lea     ecx, [esi+1Ch]
0x75B87A: call    sub_8AA390
0x75B87F: test    al, al
0x75B881: jnz     short loc_75B8B8
0x75B883: fld     dword ptr [esi+28h]
0x75B886: fld     dword ptr [edi+28h]
0x75B889: fucompp
0x75B88B: fnstsw  ax
0x75B88D: test    ah, 44h
0x75B890: jp      short loc_75B8B8
0x75B892: fld     dword ptr [esi+2Ch]
0x75B895: fld     dword ptr [edi+2Ch]
0x75B898: fucompp
0x75B89A: fnstsw  ax
0x75B89C: test    ah, 44h
0x75B89F: jp      short loc_75B8B8
0x75B8A1: mov     edx, [esi+30h]
0x75B8A4: cmp     edx, [edi+30h]
0x75B8A7: jnz     short loc_75B8B8
0x75B8A9: mov     eax, [esi+34h]
0x75B8AC: cmp     eax, [edi+34h]
0x75B8AF: jnz     short loc_75B8B8
0x75B8B1: pop     edi
0x75B8B2: mov     al, 1
0x75B8B4: pop     esi
0x75B8B5: retn    4
0x75B8B8: pop     edi
0x75B8B9: xor     al, al
0x75B8BB: pop     esi
0x75B8BC: retn    4
