0x5F01B0: push    ecx
0x5F01B1: push    esi
0x5F01B2: mov     esi, ecx
0x5F01B4: mov     eax, [esi]
0x5F01B6: mov     edx, [eax+18Ch]
0x5F01BC: call    edx
0x5F01BE: test    eax, eax
0x5F01C0: jnz     loc_5F0259
0x5F01C6: mov     eax, [esi]
0x5F01C8: mov     edx, [eax+164h]
0x5F01CE: push    edi
0x5F01CF: mov     ecx, esi
0x5F01D1: call    edx
0x5F01D3: mov     edi, eax
0x5F01D5: test    edi, edi
0x5F01D7: jz      short loc_5F020C
0x5F01D9: fldz
0x5F01DB: push    ecx
0x5F01DC: fstp    [esp+10h+var_10]; float
0x5F01DF: mov     ecx, edi
0x5F01E1: push    5; int
0x5F01E3: call    sub_470FC0
0x5F01E8: push    0FFFFFFFFh
0x5F01EA: push    0
0x5F01EC: push    0
0x5F01EE: push    0
0x5F01F0: push    0
0x5F01F2: mov     ecx, esi
0x5F01F4: call    Actor_LoadAnimGroup?
0x5F01F9: mov     ecx, edi
0x5F01FB: push    eax
0x5F01FC: call    ActorAnimData_PlayAnimGroup
0x5F0201: push    0
0x5F0203: push    0FFFFFFFFh
0x5F0205: mov     ecx, esi
0x5F0207: call    HighPRocess_DoAction?????
0x5F020C: mov     ecx, ds:0B333C4h; this
0x5F0212: cmp     esi, ecx
0x5F0214: jnz     short loc_5F0258
0x5F0216: mov     al, [ecx+588h]
0x5F021C: mov     [esp+0Ch+a2], al
0x5F0220: mov     edx, dword ptr [esp+0Ch+a2]
0x5F0224: push    edx; a2
0x5F0225: call    Player_GetAnimData
0x5F022A: mov     edi, eax
0x5F022C: test    edi, edi
0x5F022E: jz      short loc_5F0258
0x5F0230: push    0FFFFFFFFh
0x5F0232: push    0
0x5F0234: push    0
0x5F0236: push    0
0x5F0238: push    0
0x5F023A: mov     ecx, esi
0x5F023C: call    Actor_LoadAnimGroup?
0x5F0241: mov     ecx, edi
0x5F0243: push    eax
0x5F0244: call    ActorAnimData_PlayAnimGroup
0x5F0249: fldz
0x5F024B: push    ecx
0x5F024C: fstp    [esp+10h+var_10]; float
0x5F024F: push    5; int
0x5F0251: mov     ecx, edi
0x5F0253: call    sub_470FC0
0x5F0258: pop     edi
0x5F0259: pop     esi
0x5F025A: pop     ecx
0x5F025B: retn
