0x77FF40: sub     esp, 0Ch
0x77FF43: push    ebp
0x77FF44: xor     ebp, ebp
0x77FF46: cmp     ds:0B28CB0h, ebp
0x77FF4C: push    esi
0x77FF4D: mov     esi, ecx
0x77FF4F: mov     [esp+14h+var_8], ebp
0x77FF53: jbe     loc_780059
0x77FF59: push    ebx
0x77FF5A: mov     [esp+18h+var_C], 1A4h
0x77FF62: push    edi
0x77FF63: mov     eax, ds:0B2A7C0h
0x77FF68: cmp     eax, 0FFFFFFFFh
0x77FF6B: mov     ecx, offset dword_B2A7C0
0x77FF70: jz      short loc_77FFE8
0x77FF72: lea     edx, ds:0[ebp*8]
0x77FF79: mov     [esp+1Ch+var_4], edx
0x77FF7D: mov     ebx, ecx
0x77FF7F: nop
0x77FF80: cmp     eax, 0Bh
0x77FF83: jnz     short loc_77FF8A
0x77FF85: mov     [ecx+4], ebp
0x77FF88: jmp     short loc_77FFA5
0x77FF8A: cmp     eax, 1
0x77FF8D: jz      short loc_77FF94
0x77FF8F: cmp     eax, 4
0x77FF92: jnz     short loc_77FFA5
0x77FF94: cmp     [esp+1Ch+var_C], 1A4h
0x77FF9C: jz      short loc_77FFA5
0x77FF9E: mov     dword ptr [ecx+4], 1
0x77FFA5: movzx   edi, word ptr ds:0B427E0h[eax*2]
0x77FFAD: mov     edx, [ecx+4]
0x77FFB0: add     edi, [esp+1Ch+var_4]
0x77FFB4: mov     ebp, [esp+1Ch+var_8]
0x77FFB8: lea     edi, [esi+edi*8+920h]
0x77FFBF: mov     [edi], edx
0x77FFC1: mov     [edi+4], edx
0x77FFC4: mov     ecx, [ecx+4]
0x77FFC7: mov     edx, [esi+0FF8h]
0x77FFCD: mov     edi, [edx]
0x77FFCF: push    ecx
0x77FFD0: push    eax
0x77FFD1: push    ebp
0x77FFD2: push    edx
0x77FFD3: mov     edx, [edi+10Ch]
0x77FFD9: call    edx
0x77FFDB: mov     eax, [ebx+8]
0x77FFDE: add     ebx, 8
0x77FFE1: cmp     eax, 0FFFFFFFFh
0x77FFE4: mov     ecx, ebx
0x77FFE6: jnz     short loc_77FF80
0x77FFE8: mov     ecx, ds:0B2A808h
0x77FFEE: cmp     ecx, 0FFFFFFFFh
0x77FFF1: mov     edx, offset dword_B2A808
0x77FFF6: jz      short loc_78003F
0x77FFF8: mov     edi, edx
0x77FFFA: lea     ebx, [ebx+0]
0x780000: movzx   ebx, word ptr ds:0B427B0h[ecx*2]
0x780008: mov     eax, [edx+4]
0x78000B: add     ebx, [esp+1Ch+var_C]
0x78000F: mov     ebp, [esp+1Ch+var_8]
0x780013: add     eax, 1
0x780016: lea     ebx, [esi+ebx*8]
0x780019: mov     [ebx], eax
0x78001B: mov     [ebx+4], eax
0x78001E: mov     edx, [edx+4]
0x780021: mov     eax, [esi]
0x780023: mov     eax, [eax+0D0h]
0x780029: push    0
0x78002B: push    edx
0x78002C: push    ecx
0x78002D: push    ebp
0x78002E: mov     ecx, esi
0x780030: call    eax
0x780032: mov     ecx, [edi+8]
0x780035: add     edi, 8
0x780038: cmp     ecx, 0FFFFFFFFh
0x78003B: mov     edx, edi
0x78003D: jnz     short loc_780000
0x78003F: add     [esp+1Ch+var_C], 5
0x780044: add     ebp, 1
0x780047: cmp     ebp, ds:0B28CB0h
0x78004D: mov     [esp+1Ch+var_8], ebp
0x780051: jb      loc_77FF63
0x780057: pop     edi
0x780058: pop     ebx
0x780059: pop     esi
0x78005A: pop     ebp
0x78005B: add     esp, 0Ch
0x78005E: retn
