0x84B040: push    0FFFFFFFFh
0x84B042: push    offset SEH_879360
0x84B047: mov     eax, large fs:0
0x84B04D: push    eax
0x84B04E: push    ecx
0x84B04F: push    ebx
0x84B050: push    ebp
0x84B051: push    esi
0x84B052: push    edi
0x84B053: mov     eax, ds:0B30AACh
0x84B058: xor     eax, esp
0x84B05A: push    eax
0x84B05B: lea     eax, [esp+24h+var_C]
0x84B05F: mov     large fs:0, eax
0x84B065: mov     [esp+24h+var_10], ecx
0x84B069: mov     eax, [esp+24h+arg_8]
0x84B06D: mov     eax, [eax+10h]
0x84B070: mov     edi, ds:0B4561Ch
0x84B076: push    eax
0x84B077: call    sub_848C40
0x84B07C: mov     ecx, [edi+24h]
0x84B07F: mov     ebx, [esp+24h+arg_C]
0x84B083: mov     esi, [ecx]
0x84B085: mov     edx, [ebx]
0x84B087: mov     eax, [edx+88h]
0x84B08D: push    0
0x84B08F: mov     ecx, ebx
0x84B091: mov     [esp+28h+arg_8], esi
0x84B095: call    eax
0x84B097: mov     esi, [esi+4]
0x84B09A: mov     ebp, eax
0x84B09C: cmp     esi, ebp
0x84B09E: jz      short loc_84B0D7
0x84B0A0: test    esi, esi
0x84B0A2: jz      short loc_84B0C0
0x84B0A4: lea     ecx, [esi+4]
0x84B0A7: push    ecx; lpAddend
0x84B0A8: call    dword ptr ds:0A2807Ch
0x84B0AE: test    eax, eax
0x84B0B0: jnz     short loc_84B0C0
0x84B0B2: test    esi, esi
0x84B0B4: jz      short loc_84B0C0
0x84B0B6: mov     edx, [esi]
0x84B0B8: mov     eax, [edx]
0x84B0BA: push    1
0x84B0BC: mov     ecx, esi
0x84B0BE: call    eax
0x84B0C0: test    ebp, ebp
0x84B0C2: mov     esi, [esp+24h+arg_8]
0x84B0C6: mov     [esi+4], ebp
0x84B0C9: jz      short loc_84B0DB
0x84B0CB: add     ebp, 4
0x84B0CE: push    ebp; lpAddend
0x84B0CF: call    dword ptr ds:0A28078h
0x84B0D5: jmp     short loc_84B0DB
0x84B0D7: mov     esi, [esp+24h+arg_8]
0x84B0DB: test    esi, esi
0x84B0DD: jz      short loc_84B0F9
0x84B0DF: cmp     byte ptr ds:0B42CDDh, 0
0x84B0E6: jz      short loc_84B0F9
0x84B0E8: mov     edx, [ebx]
0x84B0EA: mov     eax, [edx+78h]
0x84B0ED: mov     ecx, ebx
0x84B0EF: call    eax
0x84B0F1: push    eax
0x84B0F2: mov     ecx, esi
0x84B0F4: call    sub_7715E0
0x84B0F9: mov     ecx, [edi+24h]
0x84B0FC: mov     esi, [ecx+4]
0x84B0FF: mov     edx, [ebx]
0x84B101: mov     eax, [edx+8Ch]
0x84B107: push    0
0x84B109: mov     ecx, ebx
0x84B10B: mov     [esp+28h+arg_8], esi
0x84B10F: call    eax
0x84B111: test    eax, eax
0x84B113: jz      short loc_84B127
0x84B115: mov     edx, [ebx]
0x84B117: mov     eax, [edx+8Ch]
0x84B11D: push    0
0x84B11F: mov     ecx, ebx
0x84B121: call    eax
0x84B123: mov     ebp, eax
0x84B125: jmp     short loc_84B13C
0x84B127: test    dword ptr [ebx+1Ch], 80h
0x84B12E: mov     ebp, ds:0B430F0h
0x84B134: ja      short loc_84B13C
0x84B136: mov     ebp, ds:0B430DCh
0x84B13C: mov     esi, [esi+4]
0x84B13F: cmp     esi, ebp
0x84B141: jz      short loc_84B17A
0x84B143: test    esi, esi
0x84B145: jz      short loc_84B163
0x84B147: lea     ecx, [esi+4]
0x84B14A: push    ecx; lpAddend
0x84B14B: call    dword ptr ds:0A2807Ch
0x84B151: test    eax, eax
0x84B153: jnz     short loc_84B163
0x84B155: test    esi, esi
0x84B157: jz      short loc_84B163
0x84B159: mov     edx, [esi]
0x84B15B: mov     eax, [edx]
0x84B15D: push    1
0x84B15F: mov     ecx, esi
0x84B161: call    eax
0x84B163: test    ebp, ebp
0x84B165: mov     esi, [esp+24h+arg_8]
0x84B169: mov     [esi+4], ebp
0x84B16C: jz      short loc_84B17E
0x84B16E: add     ebp, 4
0x84B171: push    ebp; lpAddend
0x84B172: call    dword ptr ds:0A28078h
0x84B178: jmp     short loc_84B17E
0x84B17A: mov     esi, [esp+24h+arg_8]
0x84B17E: test    esi, esi
0x84B180: jz      short loc_84B19C
0x84B182: cmp     byte ptr ds:0B42CDDh, 0
0x84B189: jz      short loc_84B19C
0x84B18B: mov     edx, [ebx]
0x84B18D: mov     eax, [edx+78h]
0x84B190: mov     ecx, ebx
0x84B192: call    eax
0x84B194: push    eax
0x84B195: mov     ecx, esi
0x84B197: call    sub_7715E0
0x84B19C: mov     ebx, 1
0x84B1A1: add     [edi+60h], ebx
0x84B1A4: mov     [esp+24h+arg_8], edi
0x84B1A8: mov     esi, [esp+24h+var_10]
0x84B1AC: mov     edx, [esi+38h]
0x84B1AF: lea     ecx, [esp+24h+arg_8]
0x84B1B3: push    ecx
0x84B1B4: push    edx
0x84B1B5: lea     ecx, [esi+40h]
0x84B1B8: mov     [esp+2Ch+var_4], 0
0x84B1C0: call    sub_76CE40
0x84B1C5: or      eax, 0FFFFFFFFh
0x84B1C8: add     [edi+60h], eax
0x84B1CB: mov     [esp+24h+var_4], eax
0x84B1CF: jnz     short loc_84B1D8
0x84B1D1: mov     ecx, edi
0x84B1D3: call    sub_7604D0
0x84B1D8: add     [esi+38h], ebx
0x84B1DB: mov     ecx, [esp+24h+var_C]
0x84B1DF: mov     large fs:0, ecx
0x84B1E6: pop     ecx
0x84B1E7: pop     edi
0x84B1E8: pop     esi
0x84B1E9: pop     ebp
0x84B1EA: pop     ebx
0x84B1EB: add     esp, 10h
0x84B1EE: retn    10h
