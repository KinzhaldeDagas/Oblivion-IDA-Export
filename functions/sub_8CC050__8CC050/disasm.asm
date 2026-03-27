0x8CC050: push    ecx
0x8CC051: mov     ecx, large fs:2Ch
0x8CC058: mov     edx, ds:0BA9DE4h
0x8CC05E: mov     eax, [ecx+edx*4]
0x8CC061: push    ebx
0x8CC062: push    ebp
0x8CC063: push    esi
0x8CC064: mov     esi, [eax+1A4h]
0x8CC06A: push    edi
0x8CC06B: cmp     esi, [eax+1A8h]
0x8CC071: jnb     short loc_8CC097
0x8CC073: mov     esi, eax
0x8CC075: mov     ecx, [esi+1A4h]
0x8CC07B: mov     dword ptr [ecx], offset aTtmergeisle; "TtMergeIsle"
0x8CC081: rdtsc
0x8CC083: mov     [esp+14h+var_4], eax
0x8CC087: mov     eax, [esp+14h+var_4]
0x8CC08B: mov     [ecx+4], eax
0x8CC08E: add     ecx, 0Ch
0x8CC091: mov     [esi+1A4h], ecx
0x8CC097: mov     edi, [esp+14h+arg_4]
0x8CC09B: mov     esi, [esp+14h+arg_8]
0x8CC09F: mov     ecx, [edi+38h]
0x8CC0A2: cmp     ecx, [esi+38h]
0x8CC0A5: jge     short loc_8CC0AD
0x8CC0A7: mov     eax, edi
0x8CC0A9: mov     edi, esi
0x8CC0AB: mov     esi, eax
0x8CC0AD: mov     eax, [esp+14h+arg_0]
0x8CC0B1: inc     dword ptr [eax+88h]
0x8CC0B7: mov     cl, [edi+29h]
0x8CC0BA: test    cl, cl
0x8CC0BC: jnz     short loc_8CC0C9
0x8CC0BE: mov     dl, [esi+29h]
0x8CC0C1: test    dl, dl
0x8CC0C3: jnz     short loc_8CC0C9
0x8CC0C5: xor     dl, dl
0x8CC0C7: jmp     short loc_8CC0CB
0x8CC0C9: mov     dl, 1
0x8CC0CB: mov     bl, [edi+28h]
0x8CC0CE: test    bl, bl
0x8CC0D0: jnz     short loc_8CC0DE
0x8CC0D2: mov     bl, [esi+28h]
0x8CC0D5: test    bl, bl
0x8CC0D7: mov     byte ptr [esp+14h+arg_4], 0
0x8CC0DC: jz      short loc_8CC0E3
0x8CC0DE: mov     byte ptr [esp+14h+arg_4], 1
0x8CC0E3: test    dl, dl
0x8CC0E5: jz      short loc_8CC139
0x8CC0E7: test    cl, cl
0x8CC0E9: jnz     short loc_8CC104
0x8CC0EB: push    edi
0x8CC0EC: push    eax
0x8CC0ED: mov     byte ptr [edi+28h], 1
0x8CC0F1: call    sub_8CBA20
0x8CC0F6: mov     dl, [esi+24h]
0x8CC0F9: mov     [edi+24h], dl
0x8CC0FC: mov     al, [esi+25h]
0x8CC0FF: add     esp, 8
0x8CC102: jmp     short loc_8CC136
0x8CC104: mov     cl, [esi+29h]
0x8CC107: test    cl, cl
0x8CC109: jnz     short loc_8CC11B
0x8CC10B: push    esi
0x8CC10C: push    eax
0x8CC10D: mov     byte ptr [esi+28h], 1
0x8CC111: call    sub_8CBA20
0x8CC116: add     esp, 8
0x8CC119: jmp     short loc_8CC139
0x8CC11B: mov     al, [esi+24h]
0x8CC11E: mov     cl, [edi+24h]
0x8CC121: cmp     cl, al
0x8CC123: jnb     short loc_8CC127
0x8CC125: mov     al, cl
0x8CC127: mov     cl, [edi+25h]
0x8CC12A: mov     [edi+24h], al
0x8CC12D: mov     al, [esi+25h]
0x8CC130: cmp     cl, al
0x8CC132: jnb     short loc_8CC136
0x8CC134: mov     al, cl
0x8CC136: mov     [edi+25h], al
0x8CC139: lea     ecx, [esi+44h]
0x8CC13C: push    ecx
0x8CC13D: lea     edx, [edi+44h]
0x8CC140: push    edx
0x8CC141: call    sub_8E6C30
0x8CC146: mov     ebx, [edi+38h]
0x8CC149: mov     ebp, [esi+38h]
0x8CC14C: mov     eax, [edi+3Ch]
0x8CC14F: lea     ecx, [edi+34h]
0x8CC152: add     ebp, ebx
0x8CC154: and     eax, 3FFFFFFFh
0x8CC159: add     esp, 8
0x8CC15C: cmp     eax, ebp
0x8CC15E: jge     short loc_8CC174
0x8CC160: add     eax, eax
0x8CC162: cmp     ebp, eax
0x8CC164: jl      short loc_8CC168
0x8CC166: mov     eax, ebp
0x8CC168: push    4
0x8CC16A: push    eax
0x8CC16B: push    ecx
0x8CC16C: call    sub_8A6E40
0x8CC171: add     esp, 0Ch
0x8CC174: mov     [edi+38h], ebp
0x8CC177: mov     ecx, [esi+38h]
0x8CC17A: xor     eax, eax
0x8CC17C: test    ecx, ecx
0x8CC17E: jle     short loc_8CC1AF
0x8CC180: mov     ecx, [esi+34h]
0x8CC183: mov     ecx, [ecx+eax*4]
0x8CC186: mov     ebp, [edi+34h]
0x8CC189: movzx   edx, bx
0x8CC18C: mov     [ebp+edx*4+0], ecx
0x8CC190: mov     edx, [esi+34h]
0x8CC193: mov     ecx, [edx+eax*4]
0x8CC196: mov     [ecx+54h], edi
0x8CC199: mov     edx, [esi+34h]
0x8CC19C: mov     ecx, [edx+eax*4]
0x8CC19F: mov     [ecx+8Ch], bx
0x8CC1A6: mov     ecx, [esi+38h]
0x8CC1A9: inc     eax
0x8CC1AA: inc     ebx
0x8CC1AB: cmp     eax, ecx
0x8CC1AD: jl      short loc_8CC180
0x8CC1AF: mov     ebp, [edi+60h]
0x8CC1B2: mov     eax, [esi+60h]
0x8CC1B5: mov     ecx, [edi+64h]
0x8CC1B8: lea     ebx, [edi+5Ch]
0x8CC1BB: add     eax, ebp
0x8CC1BD: and     ecx, 3FFFFFFFh
0x8CC1C3: cmp     ecx, eax
0x8CC1C5: mov     [esp+14h+arg_8], eax
0x8CC1C9: jge     short loc_8CC1E3
0x8CC1CB: add     ecx, ecx
0x8CC1CD: cmp     eax, ecx
0x8CC1CF: jge     short loc_8CC1D3
0x8CC1D1: mov     eax, ecx
0x8CC1D3: push    4
0x8CC1D5: push    eax
0x8CC1D6: push    ebx
0x8CC1D7: call    sub_8A6E40
0x8CC1DC: mov     eax, [esp+20h+arg_8]
0x8CC1E0: add     esp, 0Ch
0x8CC1E3: mov     [ebx+4], eax
0x8CC1E6: mov     eax, [esi+60h]
0x8CC1E9: xor     ecx, ecx
0x8CC1EB: test    eax, eax
0x8CC1ED: jle     short loc_8CC210
0x8CC1EF: nop
0x8CC1F0: mov     edx, [esi+5Ch]
0x8CC1F3: mov     eax, [edx+ecx*4]
0x8CC1F6: test    eax, eax
0x8CC1F8: jz      short loc_8CC208
0x8CC1FA: mov     edx, [ebx]
0x8CC1FC: mov     [edx+ebp*4], eax
0x8CC1FF: mov     eax, [ebx]
0x8CC201: mov     edx, [eax+ebp*4]
0x8CC204: mov     [edx+0Ch], edi
0x8CC207: inc     ebp
0x8CC208: mov     eax, [esi+60h]
0x8CC20B: inc     ecx
0x8CC20C: cmp     ecx, eax
0x8CC20E: jl      short loc_8CC1F0
0x8CC210: mov     eax, [ebx+8]
0x8CC213: and     eax, 3FFFFFFFh
0x8CC218: cmp     eax, ebp
0x8CC21A: jge     short loc_8CC230
0x8CC21C: add     eax, eax
0x8CC21E: cmp     ebp, eax
0x8CC220: jl      short loc_8CC224
0x8CC222: mov     eax, ebp
0x8CC224: push    4
0x8CC226: push    eax
0x8CC227: push    ebx
0x8CC228: call    sub_8A6E40
0x8CC22D: add     esp, 0Ch
0x8CC230: mov     [ebx+4], ebp
0x8CC233: mov     eax, [esi+38h]
0x8CC236: xor     edx, edx
0x8CC238: test    eax, eax
0x8CC23A: jle     short loc_8CC263
0x8CC23C: lea     esp, [esp+0]
0x8CC240: mov     eax, [esi+34h]
0x8CC243: mov     ecx, [eax+edx*4]
0x8CC246: mov     eax, [ecx+68h]
0x8CC249: mov     ecx, [ecx+6Ch]
0x8CC24C: dec     ecx
0x8CC24D: js      short loc_8CC25B
0x8CC24F: inc     ecx
0x8CC250: mov     ebx, [eax]
0x8CC252: add     eax, 1Ch
0x8CC255: dec     ecx
0x8CC256: mov     [ebx+8], edi
0x8CC259: jnz     short loc_8CC250
0x8CC25B: mov     eax, [esi+38h]
0x8CC25E: inc     edx
0x8CC25F: cmp     edx, eax
0x8CC261: jl      short loc_8CC240
0x8CC263: mov     eax, [esi+8]
0x8CC266: mov     ecx, [edi+8]
0x8CC269: cmp     ecx, eax
0x8CC26B: jle     short loc_8CC26F
0x8CC26D: mov     eax, ecx
0x8CC26F: mov     ebp, [edi+10h]
0x8CC272: mov     ebx, [edi+18h]
0x8CC275: mov     [edi+8], eax
0x8CC278: mov     ecx, [esi+0Ch]
0x8CC27B: add     [edi+0Ch], ecx
0x8CC27E: mov     edx, [esi+10h]
0x8CC281: add     ebp, edx
0x8CC283: mov     edx, [edi+14h]
0x8CC286: mov     [edi+10h], ebp
0x8CC289: mov     eax, [esi+18h]
0x8CC28C: add     ebx, eax
0x8CC28E: mov     [edi+18h], ebx
0x8CC291: mov     ecx, [esi+14h]
0x8CC294: add     edx, ecx
0x8CC296: mov     [edi+14h], edx
0x8CC299: mov     al, [esi+29h]
0x8CC29C: mov     dx, [esi+20h]
0x8CC2A0: test    al, al
0x8CC2A2: mov     eax, [esp+14h+arg_0]
0x8CC2A6: jz      short loc_8CC2AD
0x8CC2A8: add     eax, 38h ; '8'
0x8CC2AB: jmp     short loc_8CC2B0
0x8CC2AD: add     eax, 44h ; 'D'
0x8CC2B0: mov     ebp, [eax+4]
0x8CC2B3: movzx   ecx, dx
0x8CC2B6: lea     ebx, [ebp-1]
0x8CC2B9: cmp     ecx, ebx
0x8CC2BB: jge     short loc_8CC2CF
0x8CC2BD: mov     ebx, [eax]
0x8CC2BF: mov     ebp, [ebx+ebp*4-4]
0x8CC2C3: mov     [ebx+ecx*4], ebp
0x8CC2C6: mov     ebx, [eax]
0x8CC2C8: mov     ecx, [ebx+ecx*4]
0x8CC2CB: mov     [ecx+20h], dx
0x8CC2CF: dec     dword ptr [eax+4]
0x8CC2D2: mov     al, [edi+26h]
0x8CC2D5: test    al, al
0x8CC2D7: jnz     short loc_8CC2E4
0x8CC2D9: mov     al, [esi+26h]
0x8CC2DC: test    al, al
0x8CC2DE: jnz     short loc_8CC2E4
0x8CC2E0: xor     al, al
0x8CC2E2: jmp     short loc_8CC2E6
0x8CC2E4: mov     al, 1
0x8CC2E6: mov     [edi+26h], al
0x8CC2E9: mov     al, [edi+27h]
0x8CC2EC: test    al, al
0x8CC2EE: jnz     short loc_8CC2FB
0x8CC2F0: mov     al, [esi+27h]
0x8CC2F3: test    al, al
0x8CC2F5: jnz     short loc_8CC2FB
0x8CC2F7: xor     al, al
0x8CC2F9: jmp     short loc_8CC2FD
0x8CC2FB: mov     al, 1
0x8CC2FD: mov     dl, byte ptr [esp+14h+arg_4]
0x8CC301: mov     [edi+27h], al
0x8CC304: mov     ecx, 0FFFFh
0x8CC309: mov     [edi+28h], dl
0x8CC30C: cmp     [esi+22h], cx
0x8CC310: jz      short loc_8CC354
0x8CC312: cmp     [edi+22h], cx
0x8CC316: jnz     short loc_8CC354
0x8CC318: mov     ebp, [esp+14h+arg_0]
0x8CC31C: mov     ax, [ebp+54h]
0x8CC320: lea     ebx, [ebp+50h]
0x8CC323: mov     [edi+22h], ax
0x8CC327: mov     edx, [ebx+8]
0x8CC32A: mov     eax, [ebx+4]
0x8CC32D: and     edx, 3FFFFFFFh
0x8CC333: cmp     eax, edx
0x8CC335: jnz     short loc_8CC347
0x8CC337: push    4
0x8CC339: push    ebx
0x8CC33A: call    sub_8A6EE0
0x8CC33F: add     esp, 8
0x8CC342: mov     ecx, 0FFFFh
0x8CC347: mov     eax, [ebx+4]
0x8CC34A: mov     edx, [ebx]
0x8CC34C: mov     [edx+eax*4], edi
0x8CC34F: inc     dword ptr [ebx+4]
0x8CC352: jmp     short loc_8CC358
0x8CC354: mov     ebp, [esp+14h+arg_0]
0x8CC358: mov     ax, [esi+22h]
0x8CC35C: cmp     ax, cx
0x8CC35F: jz      short loc_8CC372
0x8CC361: mov     edx, [ebp+50h]
0x8CC364: movzx   eax, ax
0x8CC367: mov     dword ptr [edx+eax*4], 0
0x8CC36E: mov     [esi+22h], cx
0x8CC372: mov     eax, [esi]
0x8CC374: push    1
0x8CC376: mov     ecx, esi
0x8CC378: call    dword ptr [eax]
0x8CC37A: mov     ecx, large fs:2Ch
0x8CC381: mov     edx, ds:0BA9DE4h
0x8CC387: mov     eax, [ecx+edx*4]
0x8CC38A: mov     esi, [eax+1A4h]
0x8CC390: cmp     esi, [eax+1A8h]
0x8CC396: jnb     short loc_8CC3BC
0x8CC398: mov     esi, eax
0x8CC39A: mov     ecx, [esi+1A4h]
0x8CC3A0: mov     dword ptr [ecx], offset aEt; "Et"
0x8CC3A6: rdtsc
0x8CC3A8: mov     [esp+14h+arg_0], eax
0x8CC3AC: mov     edx, [esp+14h+arg_0]
0x8CC3B0: mov     [ecx+4], edx
0x8CC3B3: add     ecx, 0Ch
0x8CC3B6: mov     [esi+1A4h], ecx
0x8CC3BC: dec     dword ptr [ebp+88h]
0x8CC3C2: jnz     short loc_8CC3DF
0x8CC3C4: mov     eax, [ebp+84h]
0x8CC3CA: test    eax, eax
0x8CC3CC: jz      short loc_8CC3DF
0x8CC3CE: mov     al, [ebp+90h]
0x8CC3D4: test    al, al
0x8CC3D6: jnz     short loc_8CC3DF
0x8CC3D8: mov     ecx, ebp
0x8CC3DA: call    sub_899210
0x8CC3DF: mov     eax, edi
0x8CC3E1: pop     edi
0x8CC3E2: pop     esi
0x8CC3E3: pop     ebp
0x8CC3E4: pop     ebx
0x8CC3E5: pop     ecx
0x8CC3E6: retn
