0x76F1C0: mov     edx, [esp+arg_0]
0x76F1C4: mov     ecx, [edx+24h]
0x76F1C7: push    ebx
0x76F1C8: push    esi
0x76F1C9: mov     esi, [edx+10h]
0x76F1CC: push    edi
0x76F1CD: mov     di, [edx+4]
0x76F1D1: sub     di, 10h
0x76F1D5: xor     eax, eax
0x76F1D7: movzx   ebx, di
0x76F1DA: xor     edi, edi
0x76F1DC: cmp     [edx+8], ax
0x76F1E0: jbe     short loc_76F23C
0x76F1E2: push    ebp
0x76F1E3: cmp     bx, 3
0x76F1E7: jnz     short loc_76F240
0x76F1E9: test    esi, esi
0x76F1EB: jnz     loc_76F28A
0x76F1F1: movsx   esi, word ptr [esi]
0x76F1F4: movzx   ebp, large word ptr ds:2
0x76F1FB: and     esi, 0FFFFFF00h
0x76F201: or      esi, 0FFFF0000h
0x76F207: and     ebp, 0FF00h
0x76F20D: shl     esi, 8
0x76F210: or      esi, ebp
0x76F212: movzx   ebp, large word ptr ds:4
0x76F219: sar     ebp, 4
0x76F21C: shl     esi, 4
0x76F21F: and     ebp, 0FF0h
0x76F225: or      esi, ebp
0x76F227: mov     [ecx], esi
0x76F229: mov     esi, [edx+18h]
0x76F22C: add     ecx, [edx+20h]
0x76F22F: add     eax, [edx+1Ch]
0x76F232: add     edi, 1
0x76F235: cmp     di, [edx+8]
0x76F239: jb      short loc_76F1E3
0x76F23B: pop     ebp
0x76F23C: pop     edi
0x76F23D: pop     esi
0x76F23E: pop     ebx
0x76F23F: retn
0x76F240: test    esi, esi
0x76F242: jnz     short loc_76F28A
0x76F244: movzx   esi, word ptr [esi]
0x76F247: movsx   ebp, large word ptr ds:6
0x76F24E: and     ebp, 0FFFFFF00h
0x76F254: and     esi, 0FF00h
0x76F25A: shl     ebp, 8
0x76F25D: or      ebp, esi
0x76F25F: movzx   esi, large word ptr ds:2
0x76F266: and     esi, 0FF00h
0x76F26C: shl     ebp, 8
0x76F26F: or      ebp, esi
0x76F271: movzx   esi, large word ptr ds:4
0x76F278: sar     esi, 4
0x76F27B: shl     ebp, 4
0x76F27E: and     esi, 0FF0h
0x76F284: or      ebp, esi
0x76F286: mov     [ecx], ebp
0x76F288: jmp     short loc_76F229
0x76F28A: mov     dword ptr [ecx], 0FFFFFFF0h
0x76F290: jmp     short loc_76F22C
