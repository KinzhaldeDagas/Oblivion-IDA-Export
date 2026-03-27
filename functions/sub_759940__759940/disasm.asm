0x759940: mov     eax, [esp+arg_4]
0x759944: push    ebx
0x759945: push    ebp
0x759946: push    esi
0x759947: push    edi
0x759948: mov     edi, [esp+10h+arg_0]
0x75994C: push    eax
0x75994D: push    edi
0x75994E: mov     esi, ecx
0x759950: call    sub_700770
0x759955: movzx   eax, word ptr [esi+8]
0x759959: xor     ecx, ecx
0x75995B: mov     edx, 0Ch
0x759960: mul     edx
0x759962: seto    cl
0x759965: neg     ecx
0x759967: or      ecx, eax
0x759969: push    ecx; Size
0x75996A: call    FormHeapAlloc
0x75996F: mov     ecx, eax
0x759971: movzx   eax, word ptr [esi+8]
0x759975: lea     ebp, [eax+eax*2]
0x759978: mov     eax, [esi+1Ch]
0x75997B: add     ebp, ebp
0x75997D: add     ebp, ebp
0x75997F: push    ebp; Size
0x759980: push    eax; Src
0x759981: push    ecx; Dst
0x759982: mov     [esp+20h+arg_0], ecx
0x759986: call    _memcpy
0x75998B: xor     ebx, ebx
0x75998D: add     esp, 10h
0x759990: cmp     [esi+20h], ebx
0x759993: jz      short loc_7599BF
0x759995: movzx   eax, word ptr [esi+8]
0x759999: xor     ecx, ecx
0x75999B: mov     edx, 0Ch
0x7599A0: mul     edx
0x7599A2: seto    cl
0x7599A5: neg     ecx
0x7599A7: or      ecx, eax
0x7599A9: push    ecx; Size
0x7599AA: call    FormHeapAlloc
0x7599AF: mov     ebx, eax
0x7599B1: mov     eax, [esi+20h]
0x7599B4: push    ebp; Size
0x7599B5: push    eax; Src
0x7599B6: push    ebx; Dst
0x7599B7: call    _memcpy
0x7599BC: add     esp, 10h
0x7599BF: xor     ebp, ebp
0x7599C1: cmp     [esi+24h], ebp
0x7599C4: jz      short loc_759A1A
0x7599C6: movzx   ebp, word ptr [esi+8]
0x7599CA: xor     ecx, ecx
0x7599CC: mov     eax, ebp
0x7599CE: mov     edx, 10h
0x7599D3: mul     edx
0x7599D5: seto    cl
0x7599D8: mov     [esp+10h+arg_4], ebp
0x7599DC: neg     ecx
0x7599DE: or      ecx, eax
0x7599E0: push    ecx; Size
0x7599E1: call    FormHeapAlloc
0x7599E6: mov     ebp, eax
0x7599E8: add     esp, 4
0x7599EB: test    ebp, ebp
0x7599ED: jz      short loc_759A03
0x7599EF: mov     eax, [esp+10h+arg_4]
0x7599F3: push    offset sub_47EA50
0x7599F8: push    eax
0x7599F9: push    10h
0x7599FB: push    ebp
0x7599FC: call    sub_401080
0x759A01: jmp     short loc_759A05
0x759A03: xor     ebp, ebp
0x759A05: movzx   ecx, word ptr [esi+8]
0x759A09: mov     edx, [esi+24h]
0x759A0C: shl     ecx, 4
0x759A0F: push    ecx; Size
0x759A10: push    edx; Src
0x759A11: push    ebp; Dst
0x759A12: call    _memcpy
0x759A17: add     esp, 0Ch
0x759A1A: movzx   ecx, word ptr [esi+8]
0x759A1E: mov     eax, [esp+10h+arg_0]
0x759A22: push    0
0x759A24: push    0
0x759A26: push    0
0x759A28: push    ebp
0x759A29: push    ebx
0x759A2A: push    eax
0x759A2B: push    ecx
0x759A2C: mov     ecx, edi
0x759A2E: call    sub_728890
0x759A33: xor     ebx, ebx
0x759A35: cmp     [esi+50h], ebx
0x759A38: jz      short loc_759A6B
0x759A3A: movzx   eax, word ptr [esi+8]
0x759A3E: xor     ecx, ecx
0x759A40: mov     edx, 10h
0x759A45: mul     edx
0x759A47: seto    cl
0x759A4A: neg     ecx
0x759A4C: or      ecx, eax
0x759A4E: push    ecx; Size
0x759A4F: call    FormHeapAlloc
0x759A54: mov     ecx, [esi+50h]
0x759A57: mov     ebx, eax
0x759A59: movzx   eax, word ptr [esi+8]
0x759A5D: shl     eax, 4
0x759A60: push    eax; Size
0x759A61: push    ecx; Src
0x759A62: push    ebx; Dst
0x759A63: call    _memcpy
0x759A68: add     esp, 10h
0x759A6B: push    ebx
0x759A6C: mov     ecx, edi
0x759A6E: call    sub_73EF50
0x759A73: movzx   eax, word ptr [esi+8]
0x759A77: xor     ecx, ecx
0x759A79: mov     edx, 4
0x759A7E: mul     edx
0x759A80: seto    cl
0x759A83: neg     ecx
0x759A85: or      ecx, eax
0x759A87: push    ecx; Size
0x759A88: call    FormHeapAlloc
0x759A8D: movzx   ebp, word ptr [esi+8]
0x759A91: add     ebp, ebp
0x759A93: mov     ebx, eax
0x759A95: mov     eax, [esi+4Ch]
0x759A98: add     ebp, ebp
0x759A9A: push    ebp; Size
0x759A9B: push    eax; Src
0x759A9C: push    ebx; Dst
0x759A9D: call    _memcpy
0x759AA2: add     esp, 10h
0x759AA5: push    ebx
0x759AA6: mov     ecx, edi
0x759AA8: call    sub_73EF30
0x759AAD: movzx   eax, word ptr [esi+8]
0x759AB1: xor     ecx, ecx
0x759AB3: mov     edx, 4
0x759AB8: mul     edx
0x759ABA: seto    cl
0x759ABD: neg     ecx
0x759ABF: or      ecx, eax
0x759AC1: push    ecx; Size
0x759AC2: call    FormHeapAlloc
0x759AC7: mov     ebx, eax
0x759AC9: mov     eax, [esi+44h]
0x759ACC: push    ebp; Size
0x759ACD: push    eax; Src
0x759ACE: push    ebx; Dst
0x759ACF: call    _memcpy
0x759AD4: add     esp, 10h
0x759AD7: push    ebx
0x759AD8: mov     ecx, edi
0x759ADA: call    sub_73EF10
0x759ADF: mov     cx, [esi+48h]
0x759AE3: mov     [edi+48h], cx
0x759AE7: cmp     dword ptr [esi+54h], 0
0x759AEB: jz      short loc_759B1F
0x759AED: movzx   eax, word ptr [esi+8]
0x759AF1: xor     ecx, ecx
0x759AF3: mov     edx, 4
0x759AF8: mul     edx
0x759AFA: seto    cl
0x759AFD: neg     ecx
0x759AFF: or      ecx, eax
0x759B01: push    ecx; Size
0x759B02: call    FormHeapAlloc
0x759B07: mov     ebx, eax
0x759B09: mov     eax, [esi+54h]
0x759B0C: push    ebp; Size
0x759B0D: push    eax; Src
0x759B0E: push    ebx; Dst
0x759B0F: call    _memcpy
0x759B14: add     esp, 10h
0x759B17: push    ebx
0x759B18: mov     ecx, edi
0x759B1A: call    sub_73EF70
0x759B1F: cmp     dword ptr [esi+58h], 0
0x759B23: jz      short loc_759B62
0x759B25: movzx   eax, word ptr [esi+8]
0x759B29: xor     ecx, ecx
0x759B2B: mov     edx, 0Ch
0x759B30: mul     edx
0x759B32: seto    cl
0x759B35: neg     ecx
0x759B37: or      ecx, eax
0x759B39: push    ecx; Size
0x759B3A: call    FormHeapAlloc
0x759B3F: mov     ecx, [esi+58h]
0x759B42: mov     ebx, eax
0x759B44: movzx   eax, word ptr [esi+8]
0x759B48: lea     eax, [eax+eax*2]
0x759B4B: add     eax, eax
0x759B4D: add     eax, eax
0x759B4F: push    eax; Size
0x759B50: push    ecx; Src
0x759B51: push    ebx; Dst
0x759B52: call    _memcpy
0x759B57: add     esp, 10h
0x759B5A: push    ebx
0x759B5B: mov     ecx, edi
0x759B5D: call    sub_73EF90
0x759B62: xor     ebx, ebx
0x759B64: cmp     [esi+5Ch], ebx
0x759B67: jz      short loc_759BBF
0x759B69: movzx   ebp, word ptr [esi+8]
0x759B6D: xor     ecx, ecx
0x759B6F: mov     eax, ebp
0x759B71: mov     edx, 1Ch
0x759B76: mul     edx
0x759B78: seto    cl
0x759B7B: neg     ecx
0x759B7D: or      ecx, eax
0x759B7F: push    ecx; Size
0x759B80: call    FormHeapAlloc
0x759B85: mov     ebx, eax
0x759B87: add     esp, 4
0x759B8A: test    ebx, ebx
0x759B8C: jz      short loc_759B9E
0x759B8E: push    offset sub_75F780
0x759B93: push    ebp
0x759B94: push    1Ch
0x759B96: push    ebx
0x759B97: call    sub_401080
0x759B9C: jmp     short loc_759BA0
0x759B9E: xor     ebx, ebx
0x759BA0: movzx   eax, word ptr [esi+8]
0x759BA4: mov     edx, [esi+5Ch]
0x759BA7: lea     ecx, ds:0[eax*8]
0x759BAE: sub     ecx, eax
0x759BB0: add     ecx, ecx
0x759BB2: add     ecx, ecx
0x759BB4: push    ecx; Size
0x759BB5: push    edx; Src
0x759BB6: push    ebx; Dst
0x759BB7: call    _memcpy
0x759BBC: add     esp, 0Ch
0x759BBF: mov     eax, [edi+5Ch]
0x759BC2: push    eax
0x759BC3: call    FormHeapFree
0x759BC8: mov     [edi+5Ch], ebx
0x759BCB: xor     ebx, ebx
0x759BCD: add     esp, 4
0x759BD0: cmp     [esi+60h], ebx
0x759BD3: jz      short loc_759C07
0x759BD5: movzx   eax, word ptr [esi+8]
0x759BD9: xor     ecx, ecx
0x759BDB: mov     edx, 4
0x759BE0: mul     edx
0x759BE2: seto    cl
0x759BE5: neg     ecx
0x759BE7: or      ecx, eax
0x759BE9: push    ecx; Size
0x759BEA: call    FormHeapAlloc
0x759BEF: mov     ecx, [esi+60h]
0x759BF2: mov     ebx, eax
0x759BF4: movzx   eax, word ptr [esi+8]
0x759BF8: add     eax, eax
0x759BFA: add     eax, eax
0x759BFC: push    eax; Size
0x759BFD: push    ecx; Src
0x759BFE: push    ebx; Dst
0x759BFF: call    _memcpy
0x759C04: add     esp, 10h
0x759C07: mov     edx, [edi+60h]
0x759C0A: push    edx
0x759C0B: call    FormHeapFree
0x759C10: mov     [edi+60h], ebx
0x759C13: mov     ax, [esi+64h]
0x759C17: mov     [edi+64h], ax
0x759C1B: mov     cx, [esi+66h]
0x759C1F: lea     eax, [esi+0Ch]
0x759C22: mov     [edi+66h], cx
0x759C26: mov     edx, [eax]
0x759C28: lea     ecx, [edi+0Ch]
0x759C2B: mov     [ecx], edx
0x759C2D: mov     edx, [eax+4]
0x759C30: add     esp, 4
0x759C33: mov     [ecx+4], edx
0x759C36: mov     edx, [eax+8]
0x759C39: pop     edi
0x759C3A: pop     esi
0x759C3B: mov     [ecx+8], edx
0x759C3E: mov     eax, [eax+0Ch]
0x759C41: pop     ebp
0x759C42: mov     [ecx+0Ch], eax
0x759C45: pop     ebx
0x759C46: retn    8
