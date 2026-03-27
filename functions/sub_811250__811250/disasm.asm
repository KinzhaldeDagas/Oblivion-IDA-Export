0x811250: push    esi
0x811251: push    edi
0x811252: mov     edi, [esp+8+arg_C]
0x811256: mov     edx, [edi+8]
0x811259: mov     esi, ecx
0x81125B: mov     ecx, [esi+18h]
0x81125E: mov     eax, [ecx]
0x811260: mov     eax, [eax+8]
0x811263: push    edx
0x811264: call    eax
0x811266: mov     ecx, [esi+18h]
0x811269: mov     edx, [ecx]
0x81126B: mov     eax, [edi+1Ch]
0x81126E: mov     edx, [edx+20h]
0x811271: push    eax
0x811272: call    edx
0x811274: mov     ecx, [esi+18h]
0x811277: mov     eax, [ecx]
0x811279: mov     edx, [edi+2Ch]
0x81127C: mov     eax, [eax+28h]
0x81127F: push    edx
0x811280: call    eax
0x811282: mov     ecx, [esi+18h]
0x811285: mov     edx, [ecx]
0x811287: mov     eax, [edi+28h]
0x81128A: mov     edx, [edx+24h]
0x81128D: push    eax
0x81128E: call    edx
0x811290: pop     edi
0x811291: xor     eax, eax
0x811293: pop     esi
0x811294: retn    1Ch
