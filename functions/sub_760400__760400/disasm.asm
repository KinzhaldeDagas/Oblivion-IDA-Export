0x760400: push    ebp
0x760401: push    esi
0x760402: mov     esi, [esp+8+arg_0]
0x760406: push    edi
0x760407: xor     edi, edi
0x760409: cmp     esi, edi
0x76040B: mov     ebp, ecx
0x76040D: mov     [ebp+4], esi
0x760410: mov     [ebp+8], edi
0x760413: jbe     short loc_760453
0x760415: xor     ecx, ecx
0x760417: mov     eax, esi
0x760419: mov     edx, 64h ; 'd'
0x76041E: mul     edx
0x760420: seto    cl
0x760423: neg     ecx
0x760425: or      ecx, eax
0x760427: xor     eax, eax
0x760429: add     ecx, 4
0x76042C: setb    al
0x76042F: neg     eax
0x760431: or      eax, ecx
0x760433: push    eax; Size
0x760434: call    FormHeapAlloc
0x760439: add     esp, 4
0x76043C: cmp     eax, edi
0x76043E: jz      short loc_760453
0x760440: push    offset NiD3DPass_NiD3DPass; DeferredRendering: NiD3DPass ctor authoritatively defines pass layout: name +0x04, stages +0x20, render-state group +0x30, PS map/file/entry/target/shader +0x34..0x44, VS map/file/entry/target/shader +0x48..0x58, SoftwareVP +0x5C.
0x760445: push    esi
0x760446: lea     edi, [eax+4]
0x760449: push    64h ; 'd'
0x76044B: push    edi
0x76044C: mov     [eax], esi
0x76044E: call    sub_401080
0x760453: mov     [ebp+0], edi
0x760456: pop     edi
0x760457: pop     esi
0x760458: mov     eax, ebp
0x76045A: pop     ebp
0x76045B: retn    4
