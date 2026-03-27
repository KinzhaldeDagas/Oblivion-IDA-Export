0x810950: push    0FFFFFFFFh
0x810952: push    offset SEH_806210
0x810957: mov     eax, large fs:0
0x81095D: push    eax
0x81095E: push    ecx
0x81095F: push    ebx
0x810960: push    ebp
0x810961: push    esi
0x810962: push    edi
0x810963: mov     eax, ds:0B30AACh
0x810968: xor     eax, esp
0x81096A: push    eax
0x81096B: lea     eax, [esp+24h+var_C]
0x81096F: mov     large fs:0, eax
0x810975: mov     edi, ecx
0x810977: lea     esi, [edi+30h]
0x81097A: or      ebp, 0FFFFFFFFh
0x81097D: cmp     dword ptr [esi], 0
0x810980: jnz     short loc_8109B7
0x810982: push    34h ; '4'; Size
0x810984: call    FormHeapAlloc
0x810989: add     esp, 4
0x81098C: mov     [esp+24h+var_10], eax
0x810990: test    eax, eax
0x810992: mov     [esp+24h+var_4], 0
0x81099A: jz      short loc_8109A9
0x81099C: mov     ecx, [edi+14h]
0x81099F: push    ecx
0x8109A0: mov     ecx, eax
0x8109A2: call    NiD3DShaderCostantMapVertex__Construct
0x8109A7: jmp     short loc_8109AB
0x8109A9: xor     eax, eax
0x8109AB: push    eax; a2
0x8109AC: mov     ecx, esi; this
0x8109AE: mov     [esp+28h+var_4], ebp
0x8109B2: call    NiSmartPointer_Set??
0x8109B7: cmp     dword ptr [edi+2Ch], 0
0x8109BB: lea     ebx, [edi+2Ch]
0x8109BE: jnz     short loc_8109F5
0x8109C0: push    34h ; '4'; Size
0x8109C2: call    FormHeapAlloc
0x8109C7: add     esp, 4
0x8109CA: mov     [esp+24h+var_10], eax
0x8109CE: test    eax, eax
0x8109D0: mov     [esp+24h+var_4], 1
0x8109D8: jz      short loc_8109E7
0x8109DA: mov     edx, [edi+14h]
0x8109DD: push    edx
0x8109DE: mov     ecx, eax
0x8109E0: call    NiD3DShaderCostantMapPixel__Construct
0x8109E5: jmp     short loc_8109E9
0x8109E7: xor     eax, eax
0x8109E9: push    eax; a2
0x8109EA: mov     ecx, ebx; this
0x8109EC: mov     [esp+28h+var_4], ebp
0x8109F0: call    NiSmartPointer_Set??
0x8109F5: mov     esi, [edi+94h]
0x8109FB: cmp     esi, [ebx]
0x8109FD: mov     ebp, ds:0A2807Ch
0x810A03: jz      short loc_810A37
0x810A05: test    esi, esi
0x810A07: jz      short loc_810A21
0x810A09: lea     eax, [esi+4]
0x810A0C: push    eax; lpAddend
0x810A0D: call    ebp ; InterlockedDecrement
0x810A0F: test    eax, eax
0x810A11: jnz     short loc_810A21
0x810A13: test    esi, esi
0x810A15: jz      short loc_810A21
0x810A17: mov     edx, [esi]
0x810A19: mov     eax, [edx]
0x810A1B: push    1
0x810A1D: mov     ecx, esi
0x810A1F: call    eax
0x810A21: mov     eax, [ebx]
0x810A23: test    eax, eax
0x810A25: mov     [edi+94h], eax
0x810A2B: jz      short loc_810A37
0x810A2D: add     eax, 4
0x810A30: push    eax; lpAddend
0x810A31: call    dword ptr ds:0A28078h
0x810A37: mov     esi, [edi+98h]
0x810A3D: cmp     esi, [edi+30h]
0x810A40: lea     ebx, [edi+30h]
0x810A43: jz      short loc_810A77
0x810A45: test    esi, esi
0x810A47: jz      short loc_810A61
0x810A49: lea     ecx, [esi+4]
0x810A4C: push    ecx; lpAddend
0x810A4D: call    ebp ; InterlockedDecrement
0x810A4F: test    eax, eax
0x810A51: jnz     short loc_810A61
0x810A53: test    esi, esi
0x810A55: jz      short loc_810A61
0x810A57: mov     edx, [esi]
0x810A59: mov     eax, [edx]
0x810A5B: push    1
0x810A5D: mov     ecx, esi
0x810A5F: call    eax
0x810A61: mov     eax, [ebx]
0x810A63: test    eax, eax
0x810A65: mov     [edi+98h], eax
0x810A6B: jz      short loc_810A77
0x810A6D: add     eax, 4
0x810A70: push    eax; lpAddend
0x810A71: call    dword ptr ds:0A28078h
0x810A77: mov     ecx, [ebx]
0x810A79: push    25h ; '%'
0x810A7B: push    ecx
0x810A7C: call    sub_7F16F0
0x810A81: add     esp, 8
0x810A84: mov     ecx, dword ptr [esp+24h+var_C]
0x810A88: mov     large fs:0, ecx
0x810A8F: pop     ecx
0x810A90: pop     edi
0x810A91: pop     esi
0x810A92: pop     ebp
0x810A93: pop     ebx
0x810A94: add     esp, 10h
0x810A97: retn
