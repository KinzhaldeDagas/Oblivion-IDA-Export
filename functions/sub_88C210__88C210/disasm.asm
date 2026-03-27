0x88C210: push    esi
0x88C211: mov     esi, ecx
0x88C213: test    esi, esi
0x88C215: jz      loc_88C320
0x88C21B: mov     eax, [esi]
0x88C21D: mov     edx, [eax+58h]
0x88C220: call    edx
0x88C222: mov     ecx, eax
0x88C224: test    ecx, ecx
0x88C226: jz      loc_88C320
0x88C22C: push    edi
0x88C22D: mov     edi, [esp+8+arg_0]
0x88C231: cmp     byte ptr [edi+2Ch], 1
0x88C235: jnz     short loc_88C2B3
0x88C237: cmp     dword ptr [esi+1Ch], 0
0x88C23B: jbe     short loc_88C299
0x88C23D: cmp     dword ptr [esi+2Ch], 0BB8h
0x88C244: jb      short loc_88C264
0x88C246: push    0
0x88C248: mov     ecx, esi
0x88C24A: call    sub_889F20
0x88C24F: mov     ecx, esi
0x88C251: call    sub_88AD90
0x88C256: mov     ecx, esi
0x88C258: call    sub_88A080
0x88C25D: mov     ecx, esi
0x88C25F: call    sub_88A120
0x88C264: mov     ecx, [edi+0Ch]
0x88C267: test    ecx, ecx
0x88C269: jz      loc_88C31F
0x88C26F: mov     eax, [ecx+18h]
0x88C272: test    al, 30h
0x88C274: jnz     loc_88C31F
0x88C27A: or      eax, 10h
0x88C27D: mov     [ecx+18h], eax
0x88C280: mov     ecx, edi
0x88C282: call    sub_8BC720
0x88C287: mov     eax, [esi+2Ch]
0x88C28A: mov     ecx, [esi+28h]
0x88C28D: mov     [ecx+eax*4], edi
0x88C290: add     dword ptr [esi+2Ch], 1
0x88C294: pop     edi
0x88C295: pop     esi
0x88C296: retn    4
0x88C299: mov     edx, [edi+0Ch]
0x88C29C: test    edx, edx
0x88C29E: jz      short loc_88C31F
0x88C2A0: test    byte ptr [edx+18h], 30h
0x88C2A4: jnz     short loc_88C31F
0x88C2A6: push    1
0x88C2A8: push    edi
0x88C2A9: call    sub_8994E0
0x88C2AE: pop     edi
0x88C2AF: pop     esi
0x88C2B0: retn    4
0x88C2B3: cmp     dword ptr [esi+1Ch], 0
0x88C2B7: jbe     short loc_88C30C
0x88C2B9: cmp     dword ptr [esi+34h], 0C8h ; 'È'
0x88C2C0: jb      short loc_88C2E0
0x88C2C2: push    0
0x88C2C4: mov     ecx, esi
0x88C2C6: call    sub_889F20
0x88C2CB: mov     ecx, esi
0x88C2CD: call    sub_88AD90
0x88C2D2: mov     ecx, esi
0x88C2D4: call    sub_88A080
0x88C2D9: mov     ecx, esi
0x88C2DB: call    sub_88A120
0x88C2E0: mov     ecx, [edi+0Ch]
0x88C2E3: test    ecx, ecx
0x88C2E5: jz      short loc_88C31F
0x88C2E7: mov     al, [ecx+10h]
0x88C2EA: test    al, 3
0x88C2EC: jnz     short loc_88C31F
0x88C2EE: or      al, 1
0x88C2F0: mov     [ecx+10h], al
0x88C2F3: mov     ecx, edi
0x88C2F5: call    sub_8BC720
0x88C2FA: mov     edx, [esi+34h]
0x88C2FD: mov     eax, [esi+30h]
0x88C300: mov     [eax+edx*4], edi
0x88C303: add     dword ptr [esi+34h], 1
0x88C307: pop     edi
0x88C308: pop     esi
0x88C309: retn    4
0x88C30C: mov     edx, [edi+0Ch]
0x88C30F: test    edx, edx
0x88C311: jz      short loc_88C31F
0x88C313: test    byte ptr [edx+10h], 3
0x88C317: jnz     short loc_88C31F
0x88C319: push    edi
0x88C31A: call    sub_899A50
0x88C31F: pop     edi
0x88C320: pop     esi
0x88C321: retn    4
