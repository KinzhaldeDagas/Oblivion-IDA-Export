0x70A900: push    0FFFFFFFFh
0x70A902: push    offset SEH_7B2A00
0x70A907: mov     eax, large fs:0
0x70A90D: push    eax
0x70A90E: push    esi
0x70A90F: push    edi
0x70A910: mov     eax, ds:0B30AACh
0x70A915: xor     eax, esp
0x70A917: push    eax
0x70A918: lea     eax, [esp+18h+var_C]
0x70A91C: mov     large fs:0, eax
0x70A922: mov     esi, ecx
0x70A924: mov     eax, [esp+18h+arg_0]
0x70A928: push    1
0x70A92A: push    eax
0x70A92B: lea     ecx, [esp+20h+arg_0]
0x70A92F: push    ecx
0x70A930: mov     ecx, esi
0x70A932: call    sub_70A500
0x70A937: xor     edi, edi
0x70A939: cmp     [esi+0B6h], di
0x70A940: mov     [esp+18h+var_4], 0
0x70A948: jbe     short loc_70A977
0x70A94A: lea     ebx, [ebx+0]
0x70A950: mov     edx, [esi+0B0h]
0x70A956: mov     ecx, [edx+edi*4]
0x70A959: test    ecx, ecx
0x70A95B: jz      short loc_70A969
0x70A95D: mov     eax, [ecx]
0x70A95F: mov     edx, [esp+18h+arg_0]
0x70A963: mov     eax, [eax+70h]
0x70A966: push    edx
0x70A967: call    eax
0x70A969: movzx   ecx, word ptr [esi+0B6h]
0x70A970: add     edi, 1
0x70A973: cmp     edi, ecx
0x70A975: jb      short loc_70A950
0x70A977: mov     esi, [esp+18h+arg_0]
0x70A97B: test    esi, esi
0x70A97D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x70A985: jz      short loc_70A9A3
0x70A987: lea     edx, [esi+4]
0x70A98A: push    edx; lpAddend
0x70A98B: call    dword ptr ds:0A2807Ch
0x70A991: test    eax, eax
0x70A993: jnz     short loc_70A9A3
0x70A995: test    esi, esi
0x70A997: jz      short loc_70A9A3
0x70A999: mov     eax, [esi]
0x70A99B: mov     edx, [eax]
0x70A99D: push    1
0x70A99F: mov     ecx, esi
0x70A9A1: call    edx
0x70A9A3: mov     ecx, dword ptr [esp+18h+var_C]
0x70A9A7: mov     large fs:0, ecx
0x70A9AE: pop     ecx
0x70A9AF: pop     edi
0x70A9B0: pop     esi
0x70A9B1: add     esp, 0Ch
0x70A9B4: retn    4
