0x8CACA0: push    edi
0x8CACA1: mov     edi, ecx
0x8CACA3: mov     eax, [edi-48h]
0x8CACA6: test    eax, eax
0x8CACA8: jz      short loc_8CACD4
0x8CACAA: push    esi
0x8CACAB: mov     esi, [esp+8+arg_0]
0x8CACAF: mov     ecx, [esi+0Ch]
0x8CACB2: test    ecx, ecx
0x8CACB4: jz      short loc_8CACD3
0x8CACB6: mov     eax, [ecx]
0x8CACB8: call    dword ptr [eax+0Ch]
0x8CACBB: cmp     eax, 0Bh
0x8CACBE: jz      short loc_8CACD3
0x8CACC0: mov     ecx, [edi-48h]
0x8CACC3: push    offset aConstraints; "Constraints"
0x8CACC8: push    offset unk_BA84AC
0x8CACCD: push    esi
0x8CACCE: call    sub_8CA450
0x8CACD3: pop     esi
0x8CACD4: pop     edi
0x8CACD5: retn    4
