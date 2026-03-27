0x4E54D0: push    ecx
0x4E54D1: mov     eax, [ecx+1Ch]
0x4E54D4: test    eax, eax
0x4E54D6: jz      short loc_4E5542
0x4E54D8: mov     ecx, ds:0B35F88h
0x4E54DE: test    ecx, ecx
0x4E54E0: jz      short loc_4E5542
0x4E54E2: mov     edx, [ecx]
0x4E54E4: mov     edx, [edx+88h]
0x4E54EA: push    eax
0x4E54EB: lea     eax, [esp+8+var_4]
0x4E54EF: push    eax
0x4E54F0: call    edx
0x4E54F2: mov     eax, [esp+4+var_4]
0x4E54F5: test    eax, eax
0x4E54F7: jz      short loc_4E5519
0x4E54F9: push    esi
0x4E54FA: mov     esi, eax
0x4E54FC: add     eax, 4
0x4E54FF: push    eax; lpAddend
0x4E5500: call    dword ptr ds:0A2807Ch
0x4E5506: test    eax, eax
0x4E5508: jnz     short loc_4E5518
0x4E550A: test    esi, esi
0x4E550C: jz      short loc_4E5518
0x4E550E: mov     eax, [esi]
0x4E5510: mov     edx, [eax]
0x4E5512: push    1
0x4E5514: mov     ecx, esi
0x4E5516: call    edx
0x4E5518: pop     esi
0x4E5519: mov     ecx, ds:0B35F88h; this
0x4E551F: call    NiAVObject_InitializePropertyState
0x4E5524: mov     ecx, ds:0B35F88h
0x4E552A: call    NiNode_UpdateDynamicEffectState
0x4E552F: fldz
0x4E5531: push    0; a3
0x4E5533: push    ecx
0x4E5534: mov     ecx, ds:0B35F88h; this
0x4E553A: fstp    [esp+0Ch+a2]; a2
0x4E553D: call    NiAVObject_UpdateNiAVObject
0x4E5542: pop     ecx
0x4E5543: retn
