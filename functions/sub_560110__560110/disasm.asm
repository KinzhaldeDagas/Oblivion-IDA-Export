0x560110: cmp     dword ptr ds:0B39E04h, 0
0x560117: jnz     short loc_560123
0x560119: push    0
0x56011B: call    sub_55F750
0x560120: add     esp, 4
0x560123: mov     eax, ds:0B39E04h
0x560128: cmp     dword ptr [eax+4], 0
0x56012C: jz      locret_5601D1
0x560132: push    3
0x560134: call    nullsub_returnTrue_0arg
0x560139: add     esp, 4
0x56013C: cmp     dword ptr ds:0B39E04h, 0
0x560143: jnz     short loc_56014F
0x560145: push    0
0x560147: call    sub_55F750
0x56014C: add     esp, 4
0x56014F: push    ebx
0x560150: mov     ebx, ds:0A2807Ch
0x560156: push    esi
0x560157: push    edi
0x560158: mov     edi, ds:0B39E04h
0x56015E: mov     esi, [edi+4]
0x560161: add     edi, 4
0x560164: test    esi, esi
0x560166: jz      short loc_560186
0x560168: lea     ecx, [esi+4]
0x56016B: push    ecx; lpAddend
0x56016C: call    ebx ; InterlockedDecrement
0x56016E: test    eax, eax
0x560170: jnz     short loc_560180
0x560172: test    esi, esi
0x560174: jz      short loc_560180
0x560176: mov     edx, [esi]
0x560178: mov     eax, [edx]
0x56017A: push    1
0x56017C: mov     ecx, esi
0x56017E: call    eax
0x560180: mov     dword ptr [edi], 0
0x560186: mov     esi, ds:0B43108h
0x56018C: test    esi, esi
0x56018E: jz      short loc_5601B2
0x560190: lea     ecx, [esi+4]
0x560193: push    ecx; lpAddend
0x560194: call    ebx ; InterlockedDecrement
0x560196: test    eax, eax
0x560198: jnz     short loc_5601A8
0x56019A: test    esi, esi
0x56019C: jz      short loc_5601A8
0x56019E: mov     edx, [esi]
0x5601A0: mov     eax, [edx]
0x5601A2: push    1
0x5601A4: mov     ecx, esi
0x5601A6: call    eax
0x5601A8: mov     dword ptr ds:0B43108h, 0
0x5601B2: mov     ecx, ds:0B333A0h
0x5601B8: push    0
0x5601BA: push    offset aDataTexturesTr; "Data\\Textures\\Trees\\CanopyShadow.dds"
0x5601BF: call    sub_440420
0x5601C4: push    2
0x5601C6: call    nullsub_returnTrue_0arg
0x5601CB: add     esp, 4
0x5601CE: pop     edi
0x5601CF: pop     esi
0x5601D0: pop     ebx
0x5601D1: retn
