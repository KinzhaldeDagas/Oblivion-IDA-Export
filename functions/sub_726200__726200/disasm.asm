0x726200: push    ebx
0x726201: push    ebp
0x726202: mov     ebp, [esp+8+arg_0]
0x726206: push    esi
0x726207: mov     esi, ecx
0x726209: movzx   eax, word ptr [esi+26h]
0x72620D: cmp     ebp, eax
0x72620F: push    edi
0x726210: jnb     short loc_72621E
0x726212: mov     ecx, [esi+20h]
0x726215: mov     edi, [ecx+ebp*4]
0x726218: xor     ebx, ebx
0x72621A: cmp     edi, ebx
0x72621C: jnz     short loc_726227
0x72621E: pop     edi
0x72621F: pop     esi
0x726220: pop     ebp
0x726221: xor     al, al
0x726223: pop     ebx
0x726224: retn    8
0x726227: mov     edx, [edi]
0x726229: mov     eax, [edx+0Ch]
0x72622C: push    ebx
0x72622D: mov     ecx, edi
0x72622F: call    eax
0x726231: push    edi
0x726232: call    FormHeapFree
0x726237: add     esp, 4
0x72623A: lea     ecx, [esp+10h+arg_0]
0x72623E: push    ecx
0x72623F: push    ebp
0x726240: lea     ecx, [esi+1Ch]
0x726243: mov     [esp+18h+arg_0], ebx
0x726247: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72624C: cmp     [esp+10h+arg_4], bl
0x726250: jz      short loc_726296
0x726252: mov     edx, [esi+10h]
0x726255: xor     edi, edi
0x726257: cmp     edx, ebx
0x726259: jbe     short loc_726296
0x72625B: xor     ecx, ecx
0x72625D: lea     ecx, [ecx+0]
0x726260: mov     eax, [esi+14h]
0x726263: cmp     ebp, [ecx+eax+14h]
0x726267: jnz     short loc_726289
0x726269: cmp     edi, edx
0x72626B: jnb     short loc_726289
0x72626D: cmp     eax, ebx
0x72626F: jz      short loc_726289
0x726271: mov     [ecx+eax+4], ebx
0x726275: mov     [ecx+eax+0Ch], ebx
0x726279: mov     [ecx+eax+8], ebx
0x72627D: mov     [ecx+eax+10h], ebx
0x726281: mov     [ecx+eax+14h], ebx
0x726285: mov     [ecx+eax+18h], ebx
0x726289: mov     edx, [esi+10h]
0x72628C: add     edi, 1
0x72628F: add     ecx, 1Ch
0x726292: cmp     edi, edx
0x726294: jb      short loc_726260
0x726296: pop     edi
0x726297: pop     esi
0x726298: pop     ebp
0x726299: mov     al, 1
0x72629B: pop     ebx
0x72629C: retn    8
