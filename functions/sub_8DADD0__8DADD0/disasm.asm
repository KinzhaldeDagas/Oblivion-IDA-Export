0x8DADD0: push    ebx
0x8DADD1: push    ebp
0x8DADD2: mov     ebp, [esp+8+arg_0]
0x8DADD6: push    esi
0x8DADD7: mov     esi, ecx
0x8DADD9: mov     eax, [esi+18Ch]
0x8DADDF: mov     ebx, [esp+0Ch+arg_4]
0x8DADE3: lea     eax, [eax+eax*4]
0x8DADE6: lea     ecx, [esi+eax*4+990h]
0x8DADED: mov     edx, ebp
0x8DADEF: mov     eax, [edx]
0x8DADF1: mov     [ecx], eax
0x8DADF3: mov     eax, [edx+4]
0x8DADF6: mov     [ecx+4], eax
0x8DADF9: mov     eax, [edx+8]
0x8DADFC: mov     [ecx+8], eax
0x8DADFF: mov     eax, [edx+0Ch]
0x8DAE02: push    edi
0x8DAE03: mov     edi, [esp+10h+arg_8]
0x8DAE07: mov     [ecx+0Ch], eax
0x8DAE0A: mov     edx, [edx+10h]
0x8DAE0D: push    0
0x8DAE0F: mov     [ecx+10h], edx
0x8DAE12: mov     eax, [esi+1C18h]
0x8DAE18: push    eax
0x8DAE19: push    edi
0x8DAE1A: push    ebx
0x8DAE1B: push    edi
0x8DAE1C: push    ebx
0x8DAE1D: push    1
0x8DAE1F: lea     ecx, [esi+0E94h]
0x8DAE25: push    ecx
0x8DAE26: mov     ecx, esi
0x8DAE28: call    sub_8DA580
0x8DAE2D: mov     edx, [esi+1C10h]
0x8DAE33: mov     eax, [esi+18Ch]
0x8DAE39: push    0
0x8DAE3B: push    edx
0x8DAE3C: push    edi
0x8DAE3D: push    ebx
0x8DAE3E: push    edi
0x8DAE3F: push    ebx
0x8DAE40: push    eax
0x8DAE41: lea     ecx, [esi+190h]
0x8DAE47: push    ecx
0x8DAE48: mov     ecx, esi
0x8DAE4A: call    sub_8DA580
0x8DAE4F: mov     al, [ebp+11h]
0x8DAE52: test    al, al
0x8DAE54: jz      short loc_8DAE95
0x8DAE56: mov     edx, [esi+1C1Ch]
0x8DAE5C: push    0
0x8DAE5E: push    edx
0x8DAE5F: push    edi
0x8DAE60: push    ebx
0x8DAE61: push    edi
0x8DAE62: push    ebx
0x8DAE63: push    1
0x8DAE65: lea     eax, [esi+1294h]
0x8DAE6B: push    eax
0x8DAE6C: mov     ecx, esi
0x8DAE6E: call    sub_8DA580
0x8DAE73: mov     ecx, [esi+1C14h]
0x8DAE79: mov     edx, [esi+18Ch]
0x8DAE7F: push    0
0x8DAE81: push    ecx
0x8DAE82: push    edi
0x8DAE83: push    ebx
0x8DAE84: push    edi
0x8DAE85: push    ebx
0x8DAE86: push    edx
0x8DAE87: lea     eax, [esi+590h]
0x8DAE8D: push    eax
0x8DAE8E: mov     ecx, esi
0x8DAE90: call    sub_8DA580
0x8DAE95: mov     eax, [esi+18Ch]
0x8DAE9B: pop     edi
0x8DAE9C: inc     eax
0x8DAE9D: mov     [esi+18Ch], eax
0x8DAEA3: pop     esi
0x8DAEA4: pop     ebp
0x8DAEA5: pop     ebx
0x8DAEA6: retn    0Ch
