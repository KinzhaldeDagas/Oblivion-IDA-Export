0x7FB400: push    ebx
0x7FB401: mov     ebx, [esp+4+a5]
0x7FB405: push    esi
0x7FB406: mov     esi, [ebx+18h]
0x7FB409: test    esi, esi
0x7FB40B: push    edi
0x7FB40C: mov     edi, ecx
0x7FB40E: jnz     short loc_7FB414
0x7FB410: xor     eax, eax
0x7FB412: jmp     short loc_7FB427
0x7FB414: mov     eax, [esi]
0x7FB416: mov     edx, [eax+54h]
0x7FB419: mov     ecx, esi
0x7FB41B: call    edx
0x7FB41D: xor     ecx, ecx
0x7FB41F: cmp     eax, 0Ah
0x7FB422: setz    cl
0x7FB425: mov     eax, ecx
0x7FB427: neg     eax
0x7FB429: sbb     eax, eax
0x7FB42B: and     eax, esi
0x7FB42D: jz      short loc_7FB436
0x7FB42F: mov     byte ptr [eax+100h], 0
0x7FB436: mov     edx, [esp+0Ch+a8]
0x7FB43A: mov     eax, [esp+0Ch+a7]
0x7FB43E: mov     ecx, [esp+0Ch+a6]
0x7FB442: push    edx; a8
0x7FB443: mov     edx, [esp+10h+a4]
0x7FB447: push    eax; a7
0x7FB448: mov     eax, [esp+14h+a3]
0x7FB44C: push    ecx; a6
0x7FB44D: mov     ecx, [esp+18h+a2]
0x7FB451: push    ebx; a5
0x7FB452: push    edx; a4
0x7FB453: push    eax; a3
0x7FB454: push    ecx; a2
0x7FB455: mov     ecx, edi; this
0x7FB457: call    sub_77A1B0
0x7FB45C: pop     edi
0x7FB45D: pop     esi
0x7FB45E: pop     ebx
0x7FB45F: retn    1Ch
