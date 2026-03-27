0x917900: push    esi
0x917901: mov     esi, [esp+4+arg_0]
0x917905: mov     eax, [esi]
0x917907: push    edi
0x917908: mov     edi, ecx
0x91790A: push    edi
0x91790B: push    1
0x91790D: push    offset aCvxtransform; "CvxTransform"
0x917912: mov     ecx, esi
0x917914: call    dword ptr [eax]
0x917916: mov     eax, [edi+10h]
0x917919: mov     edx, [esi]
0x91791B: push    eax
0x91791C: push    1
0x91791E: push    offset aChild_0; "Child"
0x917923: mov     ecx, esi
0x917925: call    dword ptr [edx+8]
0x917928: mov     edx, [esi]
0x91792A: mov     ecx, esi
0x91792C: call    dword ptr [edx+14h]
0x91792F: pop     edi
0x917930: pop     esi
0x917931: retn    4
