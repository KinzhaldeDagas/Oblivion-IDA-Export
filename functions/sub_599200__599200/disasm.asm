0x599200: fild    [esp+arg_0]
0x599204: push    esi; a3
0x599205: push    ecx
0x599206: mov     esi, ecx
0x599208: mov     ecx, [esi+4]; this
0x59920B: fstp    [esp+8+a2]; a3
0x59920E: push    0FAEh; a2
0x599213: call    Tile_SetFloat
0x599218: mov     eax, [esp+4+arg_0]
0x59921C: cmp     eax, 1
0x59921F: jle     short loc_599230
0x599221: lea     ecx, [eax-2]
0x599224: mov     eax, 1
0x599229: shl     eax, cl
0x59922B: mov     [esi+40h], eax
0x59922E: jmp     short loc_599237
0x599230: mov     dword ptr [esi+40h], 1Fh
0x599237: mov     ecx, [esi+40h]
0x59923A: push    ecx
0x59923B: mov     ecx, esi
0x59923D: call    sub_5987F0
0x599242: push    1; arg1
0x599244: push    0; canCreate
0x599246: call    InterfaceManager_GetSingleton
0x59924B: add     esp, 8
0x59924E: cmp     byte ptr [eax+0B9h], 0
0x599255: jz      short loc_599281
0x599257: fld     dword ptr ds:0A6B618h
0x59925D: push    ecx
0x59925E: mov     ecx, [esi+2Ch]; this
0x599261: fstp    [esp+8+a2]; a3
0x599264: push    0FB7h; a2
0x599269: call    Tile_SetFloat
0x59926E: fldz
0x599270: push    ecx
0x599271: fstp    [esp+8+a2]; a3
0x599274: mov     ecx, [esi+2Ch]; this
0x599277: push    0FB7h; a2
0x59927C: call    Tile_SetFloat
0x599281: push    1; arg1
0x599283: push    0; canCreate
0x599285: call    InterfaceManager_GetSingleton
0x59928A: mov     ecx, [eax+88h]
0x599290: add     esp, 8
0x599293: test    ecx, ecx
0x599295: jz      short loc_5992B3
0x599297: push    edi
0x599298: mov     edi, [esi]
0x59929A: push    ecx
0x59929B: push    0FA8h
0x5992A0: call    Tile_GetFloat
0x5992A5: call    Double_To_SInt32
0x5992AA: mov     edx, [edi+14h]
0x5992AD: push    eax
0x5992AE: mov     ecx, esi
0x5992B0: call    edx
0x5992B2: pop     edi
0x5992B3: pop     esi
0x5992B4: retn    8
