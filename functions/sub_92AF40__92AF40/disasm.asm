0x92AF40: push    ebx
0x92AF41: push    ebp
0x92AF42: push    esi
0x92AF43: push    edi
0x92AF44: mov     edi, ecx
0x92AF46: mov     esi, [edi+14h]
0x92AF49: dec     esi
0x92AF4A: js      short loc_92AF71
0x92AF4C: mov     ebx, [esp+10h+arg_8]
0x92AF50: mov     ebp, [esp+10h+arg_4]
0x92AF54: mov     eax, [edi+10h]
0x92AF57: mov     eax, [eax+esi*4]
0x92AF5A: mov     edx, [eax+8]
0x92AF5D: push    ebx
0x92AF5E: lea     ecx, [eax+8]
0x92AF61: push    ebp
0x92AF62: lea     eax, [esp+18h+arg_8]
0x92AF66: push    eax
0x92AF67: call    dword ptr [edx]
0x92AF69: cmp     byte ptr [eax], 0
0x92AF6C: jz      short loc_92AF7F
0x92AF6E: dec     esi
0x92AF6F: jns     short loc_92AF54
0x92AF71: mov     eax, [esp+10h+arg_0]
0x92AF75: pop     edi
0x92AF76: pop     esi
0x92AF77: pop     ebp
0x92AF78: mov     byte ptr [eax], 1
0x92AF7B: pop     ebx
0x92AF7C: retn    0Ch
0x92AF7F: mov     eax, [esp+10h+arg_0]
0x92AF83: pop     edi
0x92AF84: pop     esi
0x92AF85: pop     ebp
0x92AF86: mov     byte ptr [eax], 0
0x92AF89: pop     ebx
0x92AF8A: retn    0Ch
