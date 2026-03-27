0x88BC20: push    0FFFFFFFFh
0x88BC22: push    offset SEH_88BC20
0x88BC27: mov     eax, large fs:0
0x88BC2D: push    eax
0x88BC2E: sub     esp, 10h
0x88BC31: push    ebx
0x88BC32: push    ebp
0x88BC33: push    esi
0x88BC34: push    edi
0x88BC35: mov     eax, ds:0B30AACh
0x88BC3A: xor     eax, esp
0x88BC3C: push    eax
0x88BC3D: lea     eax, [esp+30h+var_C]
0x88BC41: mov     large fs:0, eax
0x88BC47: mov     edi, ecx
0x88BC49: mov     [esp+30h+var_1C], edi
0x88BC4D: mov     eax, [edi]
0x88BC4F: mov     edx, [eax+58h]
0x88BC52: call    edx
0x88BC54: mov     ebp, eax
0x88BC56: xor     esi, esi
0x88BC58: cmp     ebp, esi
0x88BC5A: jz      loc_88BD49
0x88BC60: mov     eax, [edi]
0x88BC62: mov     edx, [eax+58h]
0x88BC65: mov     ecx, edi
0x88BC67: call    edx
0x88BC69: xor     edi, edi
0x88BC6B: mov     [esp+30h+var_18], edi
0x88BC6F: mov     [esp+30h+var_14], esi
0x88BC73: mov     [esp+30h+var_10], 80000000h
0x88BC7B: mov     eax, [ebp+3Ch]
0x88BC7E: cmp     eax, esi
0x88BC80: mov     [esp+30h+var_4], esi
0x88BC84: jle     short loc_88BCC2
0x88BC86: mov     ecx, large fs:2Ch
0x88BC8D: mov     edx, ds:0BA9DE4h
0x88BC93: mov     ecx, [ecx+edx*4]
0x88BC96: mov     ecx, [ecx+19Ch]
0x88BC9C: cmp     ecx, esi
0x88BC9E: jnz     short loc_88BCA6
0x88BCA0: mov     ecx, ds:0BA7D9Ch
0x88BCA6: push    14h
0x88BCA8: lea     edx, ds:0[eax*4]
0x88BCAF: push    edx
0x88BCB0: call    sub_8A7560
0x88BCB5: mov     edi, eax
0x88BCB7: mov     eax, [ebp+3Ch]
0x88BCBA: mov     [esp+30h+var_18], edi
0x88BCBE: mov     [esp+30h+var_10], eax
0x88BCC2: mov     ecx, [ebp+38h]
0x88BCC5: mov     ebx, eax
0x88BCC7: cmp     ebx, esi
0x88BCC9: mov     [esp+30h+var_14], ebx
0x88BCCD: jle     short loc_88BCE2
0x88BCCF: mov     eax, edi
0x88BCD1: sub     ecx, edi
0x88BCD3: mov     edx, ebx
0x88BCD5: mov     esi, [ecx+eax]
0x88BCD8: mov     [eax], esi
0x88BCDA: add     eax, 4
0x88BCDD: sub     edx, 1
0x88BCE0: jnz     short loc_88BCD5
0x88BCE2: xor     esi, esi
0x88BCE4: test    ebx, ebx
0x88BCE6: jle     short loc_88BCFC
0x88BCE8: mov     eax, [edi+esi*4]
0x88BCEB: push    eax
0x88BCEC: push    ebp
0x88BCED: call    sub_8CBBB0
0x88BCF2: add     esi, 1
0x88BCF5: add     esp, 8
0x88BCF8: cmp     esi, ebx
0x88BCFA: jl      short loc_88BCE8
0x88BCFC: mov     ecx, [esp+30h+var_1C]
0x88BD00: mov     edx, [ecx]
0x88BD02: mov     eax, [edx+58h]
0x88BD05: call    eax
0x88BD07: mov     eax, [esp+30h+var_10]
0x88BD0B: test    eax, eax
0x88BD0D: mov     [esp+30h+var_4], 0FFFFFFFFh
0x88BD15: js      short loc_88BD49
0x88BD17: mov     ecx, large fs:2Ch
0x88BD1E: mov     edx, ds:0BA9DE4h
0x88BD24: mov     ecx, [ecx+edx*4]
0x88BD27: mov     ecx, [ecx+19Ch]
0x88BD2D: test    ecx, ecx
0x88BD2F: jnz     short loc_88BD37
0x88BD31: mov     ecx, ds:0BA7D9Ch
0x88BD37: and     eax, 3FFFFFFFh
0x88BD3C: add     eax, eax
0x88BD3E: push    14h
0x88BD40: add     eax, eax
0x88BD42: push    eax
0x88BD43: push    edi
0x88BD44: call    sub_8A75D0
0x88BD49: mov     ecx, [esp+30h+var_C]
0x88BD4D: mov     large fs:0, ecx
0x88BD54: pop     ecx
0x88BD55: pop     edi
0x88BD56: pop     esi
0x88BD57: pop     ebp
0x88BD58: pop     ebx
0x88BD59: add     esp, 1Ch
0x88BD5C: retn
