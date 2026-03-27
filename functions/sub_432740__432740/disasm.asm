0x432740: sub     esp, 0Ch
0x432743: push    ebx
0x432744: push    ebp
0x432745: push    edi
0x432746: mov     edi, ecx
0x432748: mov     eax, [edi]
0x43274A: mov     ecx, [eax+14h]
0x43274D: mov     ebp, [ecx]
0x43274F: add     ebp, ebp
0x432751: xor     ecx, ecx
0x432753: mov     eax, ebp
0x432755: mov     edx, 4
0x43275A: mul     edx
0x43275C: seto    cl
0x43275F: neg     ecx
0x432761: or      ecx, eax
0x432763: push    ecx; Size
0x432764: call    FormHeapAlloc
0x432769: mov     ecx, [edi]
0x43276B: mov     edx, [ecx+10h]
0x43276E: mov     ebx, eax
0x432770: lea     eax, ds:0[ebp*4]
0x432777: push    eax; Size
0x432778: push    edx; Src
0x432779: push    ebx; Dst
0x43277A: mov     [esp+28h+var_4], ebx
0x43277E: call    _memcpy
0x432783: xor     ecx, ecx
0x432785: add     esp, 10h
0x432788: cmp     [edi+10h], ecx
0x43278B: mov     [esp+18h+var_C], ecx
0x43278F: mov     [esp+18h+var_8], ecx
0x432793: jz      short loc_4327EB
0x432795: push    esi
0x432796: mov     esi, [edi+10h]
0x432799: mov     eax, [esi+4]
0x43279C: mov     [edi+10h], eax
0x43279F: xor     eax, eax
0x4327A1: cmp     ebp, ecx
0x4327A3: jbe     short loc_4327B1
0x4327A5: cmp     esi, [ebx+eax*4]
0x4327A8: jz      short loc_432809
0x4327AA: add     eax, 1
0x4327AD: cmp     eax, ebp
0x4327AF: jb      short loc_4327A5
0x4327B1: mov     ebx, ecx
0x4327B3: cmp     ebx, ecx
0x4327B5: mov     [esi+4], ecx
0x4327B8: jz      short loc_4327D6
0x4327BA: lea     eax, [ebx+8]
0x4327BD: push    eax; lpAddend
0x4327BE: call    ds:InterlockedDecrement
0x4327C4: test    eax, eax
0x4327C6: jnz     short loc_4327D6
0x4327C8: test    ebx, ebx
0x4327CA: jz      short loc_4327D6
0x4327CC: mov     edx, [ebx]
0x4327CE: mov     eax, [edx]
0x4327D0: push    1
0x4327D2: mov     ecx, ebx
0x4327D4: call    eax
0x4327D6: push    esi
0x4327D7: call    FormHeapFree
0x4327DC: mov     ebx, [esp+20h+var_4]
0x4327E0: add     esp, 4
0x4327E3: xor     ecx, ecx
0x4327E5: cmp     [edi+10h], ecx
0x4327E8: jnz     short loc_432796
0x4327EA: pop     esi
0x4327EB: push    ebx
0x4327EC: call    FormHeapFree
0x4327F1: mov     ecx, [esp+1Ch+var_C]
0x4327F5: mov     edx, [esp+1Ch+var_8]
0x4327F9: add     esp, 4
0x4327FC: mov     [edi+10h], ecx
0x4327FF: mov     [edi+0Ch], edx
0x432802: pop     edi
0x432803: pop     ebp
0x432804: pop     ebx
0x432805: add     esp, 0Ch
0x432808: retn
0x432809: mov     edx, [esp+1Ch+var_C]
0x43280D: add     [esp+1Ch+var_8], 1
0x432812: mov     [esi+4], edx
0x432815: mov     [esp+1Ch+var_C], esi
0x432819: jmp     short loc_4327E5
