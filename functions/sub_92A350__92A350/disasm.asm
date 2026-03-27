0x92A350: mov     edx, [esp+arg_C]
0x92A354: push    esi
0x92A355: mov     esi, ecx
0x92A357: mov     ecx, [esp+4+arg_8]
0x92A35B: mov     eax, [ecx]
0x92A35D: push    edi
0x92A35E: push    edx
0x92A35F: call    dword ptr [eax+2Ch]
0x92A362: mov     edi, [esp+8+arg_0]
0x92A366: push    eax
0x92A367: mov     eax, [esp+0Ch+arg_4]
0x92A36B: mov     ecx, [eax+20h]
0x92A36E: push    ecx
0x92A36F: push    edi
0x92A370: lea     ecx, [esi-10h]
0x92A373: call    sub_92A2E0
0x92A378: mov     eax, edi
0x92A37A: pop     edi
0x92A37B: pop     esi
0x92A37C: retn    10h
