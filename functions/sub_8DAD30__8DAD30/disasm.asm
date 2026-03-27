0x8DAD30: push    ebx
0x8DAD31: push    ebp
0x8DAD32: mov     ebx, ecx
0x8DAD34: push    esi
0x8DAD35: mov     dword ptr [ebx], offset off_A9A3B8
0x8DAD3B: call    sub_8DA510
0x8DAD40: lea     esi, [ebx+0Ch]
0x8DAD43: mov     ebp, 8
0x8DAD48: push    edi
0x8DAD49: lea     esp, [esp+0]
0x8DAD50: mov     edi, 8
0x8DAD55: mov     ecx, [esi]
0x8DAD57: test    ecx, ecx
0x8DAD59: jz      short loc_8DAD73
0x8DAD5B: cmp     word ptr [ecx+4], 0
0x8DAD60: jz      short loc_8DAD73
0x8DAD62: dec     word ptr [ecx+6]
0x8DAD66: cmp     word ptr [ecx+6], 0
0x8DAD6B: jnz     short loc_8DAD73
0x8DAD6D: mov     eax, [ecx]
0x8DAD6F: push    1
0x8DAD71: call    dword ptr [eax]
0x8DAD73: add     esi, 4
0x8DAD76: dec     edi
0x8DAD77: jnz     short loc_8DAD55
0x8DAD79: dec     ebp
0x8DAD7A: jnz     short loc_8DAD50
0x8DAD7C: mov     eax, [ebx+1C0Ch]
0x8DAD82: test    eax, eax
0x8DAD84: pop     edi
0x8DAD85: js      short loc_8DADBE
0x8DAD87: mov     ecx, ds:0BA9DE4h
0x8DAD8D: mov     edx, large fs:2Ch
0x8DAD94: mov     ecx, [edx+ecx*4]
0x8DAD97: mov     ecx, [ecx+19Ch]
0x8DAD9D: test    ecx, ecx
0x8DAD9F: jnz     short loc_8DADA7
0x8DADA1: mov     ecx, ds:0BA7D9Ch
0x8DADA7: mov     edx, [ebx+1C04h]
0x8DADAD: and     eax, 3FFFFFFFh
0x8DADB2: push    14h
0x8DADB4: shl     eax, 3
0x8DADB7: push    eax
0x8DADB8: push    edx
0x8DADB9: call    sub_8A75D0
0x8DADBE: pop     esi
0x8DADBF: pop     ebp
0x8DADC0: mov     dword ptr [ebx], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8DADC6: pop     ebx
0x8DADC7: retn
