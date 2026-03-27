0x6F8210: sub     esp, 8
0x6F8213: push    ebx
0x6F8214: push    ebp
0x6F8215: mov     ebp, [esp+10h+Origin]
0x6F8219: push    esi
0x6F821A: mov     esi, ecx
0x6F821C: mov     eax, [esi+20h]
0x6F821F: push    edi
0x6F8220: lea     edi, [esi+40h]
0x6F8223: cmp     [eax], edi
0x6F8225: jnz     short loc_6F823A
0x6F8227: cmp     ebp, 1
0x6F822A: jnz     short loc_6F823A
0x6F822C: cmp     dword ptr [esi+3Ch], 0
0x6F8230: jnz     short loc_6F823A
0x6F8232: mov     ebx, [esp+18h+arg_4]
0x6F8236: sub     ebx, ebp
0x6F8238: jmp     short loc_6F823E
0x6F823A: mov     ebx, [esp+18h+arg_4]
0x6F823E: cmp     dword ptr [esi+4Ch], 0
0x6F8242: jz      loc_6F82C9
0x6F8248: call    sub_6F7AB0
0x6F824D: test    al, al
0x6F824F: jz      short loc_6F82C9
0x6F8251: test    ebx, ebx
0x6F8253: jnz     short loc_6F825A
0x6F8255: cmp     ebp, 1
0x6F8258: jz      short loc_6F826C
0x6F825A: mov     ecx, [esi+4Ch]
0x6F825D: push    ebp; Origin
0x6F825E: push    ebx; Offset
0x6F825F: push    ecx; File
0x6F8260: call    _fseek
0x6F8265: add     esp, 0Ch
0x6F8268: test    eax, eax
0x6F826A: jnz     short loc_6F82C9
0x6F826C: mov     eax, [esi+4Ch]
0x6F826F: lea     edx, [esp+18h+Pos]
0x6F8273: push    edx; Pos
0x6F8274: push    eax; File
0x6F8275: call    _fgetpos
0x6F827A: add     esp, 8
0x6F827D: test    eax, eax
0x6F827F: jnz     short loc_6F82C9
0x6F8281: mov     ecx, [esi+20h]
0x6F8284: cmp     [ecx], edi
0x6F8286: jnz     short loc_6F82A1
0x6F8288: mov     edx, [esi+10h]
0x6F828B: mov     [edx], edi
0x6F828D: mov     ecx, [esi+20h]
0x6F8290: lea     eax, [esi+41h]
0x6F8293: mov     edx, esi
0x6F8295: sub     edx, eax
0x6F8297: mov     [ecx], eax
0x6F8299: mov     eax, [esi+30h]
0x6F829C: add     edx, 41h ; 'A'
0x6F829F: mov     [eax], edx
0x6F82A1: mov     eax, [esp+18h+arg_0]
0x6F82A5: mov     ecx, dword ptr [esp+18h+Pos]
0x6F82A9: mov     edx, dword ptr [esp+18h+Pos+4]
0x6F82AD: pop     edi
0x6F82AE: mov     [eax+8], ecx
0x6F82B1: mov     ecx, [esi+44h]
0x6F82B4: pop     esi
0x6F82B5: pop     ebp
0x6F82B6: mov     dword ptr [eax], 0
0x6F82BC: mov     [eax+0Ch], edx
0x6F82BF: mov     [eax+10h], ecx
0x6F82C2: pop     ebx
0x6F82C3: add     esp, 8
0x6F82C6: retn    10h
0x6F82C9: mov     eax, [esp+18h+arg_0]
0x6F82CD: mov     edx, ds:0AA3E5Ch
0x6F82D3: pop     edi
0x6F82D4: pop     esi
0x6F82D5: xor     ecx, ecx
0x6F82D7: pop     ebp
0x6F82D8: mov     [eax], edx
0x6F82DA: mov     [eax+8], ecx
0x6F82DD: mov     [eax+0Ch], ecx
0x6F82E0: mov     [eax+10h], ecx
0x6F82E3: pop     ebx
0x6F82E4: add     esp, 8
0x6F82E7: retn    10h
