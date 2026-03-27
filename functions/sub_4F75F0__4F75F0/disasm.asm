0x4F75F0: fldz
0x4F75F2: push    esi
0x4F75F3: mov     esi, [esp+4+arg_0]
0x4F75F7: test    esi, esi
0x4F75F9: push    edi
0x4F75FA: mov     edi, [esp+8+arg_C]
0x4F75FE: fstp    qword ptr [edi]
0x4F7600: jz      short loc_4F762D
0x4F7602: mov     eax, [esi]
0x4F7604: mov     edx, [eax+190h]
0x4F760A: mov     ecx, esi
0x4F760C: call    edx
0x4F760E: test    al, al
0x4F7610: jz      short loc_4F762D
0x4F7612: mov     ecx, [esi+58h]
0x4F7615: test    ecx, ecx
0x4F7617: jz      short loc_4F762D
0x4F7619: mov     eax, [ecx]
0x4F761B: mov     edx, [eax+0F0h]
0x4F7621: push    1
0x4F7623: call    edx
0x4F7625: test    eax, eax
0x4F7627: jz      short loc_4F762D
0x4F7629: fld1
0x4F762B: fstp    qword ptr [edi]
0x4F762D: cmp     byte ptr ds:0B361ACh, 0
0x4F7634: jz      short loc_4F764B
0x4F7636: fld     qword ptr [edi]
0x4F7638: sub     esp, 8
0x4F763B: fstp    [esp+10h+var_14+4]
0x4F763E: push    offset aIsTorchOut0_2f; "Is Torch Out >> %0.2f"
0x4F7643: call    Interface_ConsolePrint
0x4F7648: add     esp, 0Ch
0x4F764B: pop     edi
0x4F764C: mov     al, 1
0x4F764E: pop     esi
0x4F764F: retn
