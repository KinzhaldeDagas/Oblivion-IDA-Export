0x434360: push    esi
0x434361: mov     esi, [esp+4+arg_0]
0x434365: mov     eax, [esi]
0x434367: mov     edx, [eax+8]
0x43436A: push    edi
0x43436B: mov     edi, ecx
0x43436D: mov     ecx, esi
0x43436F: mov     dword ptr [esi+0Ch], 4
0x434376: call    edx
0x434378: mov     ecx, [esi+14h]
0x43437B: mov     eax, [esi+10h]
0x43437E: push    ecx
0x43437F: mov     dword ptr [esi+0Ch], 5
0x434386: mov     edx, [edi]
0x434388: push    eax
0x434389: mov     eax, [edx+10h]
0x43438C: mov     ecx, edi
0x43438E: call    eax
0x434390: test    al, al
0x434392: jz      short loc_4343B7
0x434394: mov     eax, [esi+10h]
0x434397: mov     esi, [esi+14h]
0x43439A: mov     edx, [edi]
0x43439C: push    esi
0x43439D: push    eax
0x43439E: mov     eax, [edx+1Ch]
0x4343A1: mov     ecx, edi
0x4343A3: call    eax
0x4343A5: mov     ecx, [edi+2Ch]
0x4343A8: pop     edi
0x4343A9: lea     edx, [ecx+eax*4]
0x4343AC: pop     esi
0x4343AD: mov     [esp+arg_0], edx
0x4343B1: jmp     ds:InterlockedDecrement
0x4343B7: pop     edi
0x4343B8: pop     esi
0x4343B9: retn    4
