0x4A81F0: sub     esp, 0Ch
0x4A81F3: push    ebx
0x4A81F4: push    esi
0x4A81F5: mov     esi, ecx
0x4A81F7: cmp     dword ptr [esi+108h], 0
0x4A81FE: setnz   bl
0x4A8201: test    bl, bl
0x4A8203: jz      short loc_4A8281
0x4A8205: mov     edx, [esi+110h]
0x4A820B: push    ebp
0x4A820C: push    edi
0x4A820D: lea     edi, [esi+10Ch]
0x4A8213: xor     eax, eax
0x4A8215: test    edx, edx
0x4A8217: jbe     short loc_4A822F
0x4A8219: mov     ebp, [edi+8]
0x4A821C: mov     ecx, ebp
0x4A821E: mov     edi, edi
0x4A8220: cmp     dword ptr [ecx], 0
0x4A8223: jnz     short loc_4A827B
0x4A8225: add     eax, 1
0x4A8228: add     ecx, 4
0x4A822B: cmp     eax, edx
0x4A822D: jb      short loc_4A8220
0x4A822F: xor     eax, eax
0x4A8231: test    eax, eax
0x4A8233: mov     [esp+1Ch+var_C], eax
0x4A8237: jz      short loc_4A8271
0x4A8239: lea     esp, [esp+0]
0x4A8240: lea     eax, [esp+1Ch+var_8]
0x4A8244: push    eax
0x4A8245: lea     ecx, [esp+20h+var_4]
0x4A8249: push    ecx
0x4A824A: lea     edx, [esp+24h+var_C]
0x4A824E: push    edx
0x4A824F: mov     ecx, edi
0x4A8251: call    sub_452600
0x4A8256: mov     eax, [esp+1Ch+var_8]
0x4A825A: test    eax, eax
0x4A825C: jz      short loc_4A826A
0x4A825E: mov     edx, [esi]
0x4A8260: push    eax
0x4A8261: mov     eax, [edx+0Ch]
0x4A8264: mov     ecx, esi
0x4A8266: call    eax
0x4A8268: and     bl, al
0x4A826A: cmp     [esp+1Ch+var_C], 0
0x4A826F: jnz     short loc_4A8240
0x4A8271: pop     edi
0x4A8272: pop     ebp
0x4A8273: pop     esi
0x4A8274: mov     al, bl
0x4A8276: pop     ebx
0x4A8277: add     esp, 0Ch
0x4A827A: retn
0x4A827B: mov     eax, [ebp+eax*4+0]
0x4A827F: jmp     short loc_4A8231
0x4A8281: pop     esi
0x4A8282: mov     al, bl
0x4A8284: pop     ebx
0x4A8285: add     esp, 0Ch
0x4A8288: retn
