0x42D240: push    esi
0x42D241: mov     esi, [esp+4+arg_8]
0x42D245: push    edi
0x42D246: push    esi
0x42D247: mov     edi, ecx
0x42D249: mov     ecx, [esp+0Ch+arg_0]
0x42D24D: lea     eax, [esp+0Ch+arg_8]
0x42D251: push    eax
0x42D252: push    ecx
0x42D253: mov     ecx, edi
0x42D255: call    Archive_ContainsFolder
0x42D25A: test    al, al
0x42D25C: jz      short loc_42D294
0x42D25E: mov     eax, [esp+8+arg_4]
0x42D262: push    1
0x42D264: push    esi
0x42D265: mov     esi, [esp+10h+arg_8]
0x42D269: lea     edx, [esp+10h+arg_8]
0x42D26D: push    edx
0x42D26E: push    eax
0x42D26F: push    esi
0x42D270: mov     ecx, edi
0x42D272: call    Archive_FolderContainFile
0x42D277: test    al, al
0x42D279: jz      short loc_42D294
0x42D27B: mov     eax, [esp+8+arg_8]
0x42D27F: mov     ecx, [edi+178h]
0x42D285: shl     esi, 4
0x42D288: shl     eax, 4
0x42D28B: add     eax, [ecx+esi+0Ch]
0x42D28F: pop     edi
0x42D290: pop     esi
0x42D291: retn    0Ch
0x42D294: pop     edi
0x42D295: xor     eax, eax
0x42D297: pop     esi
0x42D298: retn    0Ch
