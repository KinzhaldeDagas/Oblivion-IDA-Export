0x88A310: push    esi
0x88A311: mov     esi, ecx
0x88A313: mov     eax, [esi+34h]
0x88A316: test    eax, eax
0x88A318: jbe     loc_88A39A
0x88A31E: cmp     eax, 0C8h ; 'È'
0x88A323: jb      short loc_88A32C
0x88A325: mov     dword ptr [esi+34h], 0C8h ; 'È'
0x88A32C: mov     eax, [esi]
0x88A32E: mov     edx, [eax+58h]
0x88A331: call    edx
0x88A333: test    eax, eax
0x88A335: jz      short loc_88A39A
0x88A337: mov     ecx, [esi+34h]
0x88A33A: mov     edx, [esi+30h]
0x88A33D: push    edi
0x88A33E: push    ecx
0x88A33F: push    edx
0x88A340: mov     ecx, eax
0x88A342: call    sub_89D080
0x88A347: xor     edi, edi
0x88A349: cmp     [esi+34h], edi
0x88A34C: jbe     short loc_88A37C
0x88A34E: mov     edi, edi
0x88A350: mov     eax, [esi+30h]
0x88A353: mov     eax, [eax+edi*4]
0x88A356: test    eax, eax
0x88A358: jz      short loc_88A35F
0x88A35A: mov     eax, [eax+0Ch]
0x88A35D: jmp     short loc_88A361
0x88A35F: xor     eax, eax
0x88A361: test    eax, eax
0x88A363: jz      short loc_88A369
0x88A365: and     byte ptr [eax+10h], 0FDh
0x88A369: mov     ecx, [esi+30h]
0x88A36C: mov     ecx, [ecx+edi*4]
0x88A36F: call    sub_8BC730
0x88A374: add     edi, 1
0x88A377: cmp     edi, [esi+34h]
0x88A37A: jb      short loc_88A350
0x88A37C: mov     edx, [esi+34h]
0x88A37F: mov     eax, [esi+30h]
0x88A382: add     edx, edx
0x88A384: add     edx, edx
0x88A386: push    edx
0x88A387: push    0
0x88A389: push    eax
0x88A38A: call    __memset
0x88A38F: add     esp, 0Ch
0x88A392: mov     dword ptr [esi+34h], 0
0x88A399: pop     edi
0x88A39A: pop     esi
0x88A39B: retn
