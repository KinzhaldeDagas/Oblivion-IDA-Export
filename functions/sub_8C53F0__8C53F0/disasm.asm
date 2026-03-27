0x8C53F0: mov     eax, [ecx]
0x8C53F2: mov     edx, [eax+68h]
0x8C53F5: push    esi
0x8C53F6: push    edi
0x8C53F7: call    edx
0x8C53F9: mov     esi, eax
0x8C53FB: push    esi; Size
0x8C53FC: call    FormHeapAlloc
0x8C5401: push    0
0x8C5403: mov     edi, eax
0x8C5405: mov     eax, [esp+10h+arg_0]
0x8C5409: mov     eax, [eax+21Ch]
0x8C540F: mov     ecx, [eax+4]
0x8C5412: push    0
0x8C5414: push    esi
0x8C5415: push    edi
0x8C5416: push    eax
0x8C5417: call    ecx
0x8C5419: push    edi
0x8C541A: call    FormHeapFree
0x8C541F: add     esp, 1Ch
0x8C5422: pop     edi
0x8C5423: mov     eax, esi
0x8C5425: pop     esi
0x8C5426: retn    4
