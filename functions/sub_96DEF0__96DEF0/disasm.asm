0x96DEF0: sub     esp, 14h
0x96DEF3: push    ebx
0x96DEF4: push    ebp
0x96DEF5: push    esi
0x96DEF6: push    edi
0x96DEF7: mov     edi, ecx
0x96DEF9: mov     ecx, [edi+8]
0x96DEFC: xor     ebp, ebp
0x96DEFE: cmp     ecx, ebp
0x96DF00: mov     [esp+24h+var_4], edi
0x96DF04: jz      short loc_96DF1F
0x96DF06: mov     eax, [ecx]
0x96DF08: mov     edx, [eax+4]
0x96DF0B: call    edx
0x96DF0D: cmp     eax, ebp
0x96DF0F: jz      short loc_96DF1F
0x96DF11: cmp     eax, offset dword_B3FCD4
0x96DF16: jz      short loc_96DF58
0x96DF18: mov     eax, [eax+4]
0x96DF1B: cmp     eax, ebp
0x96DF1D: jnz     short loc_96DF11
0x96DF1F: mov     ecx, [edi+8]
0x96DF22: cmp     ecx, ebp
0x96DF24: jz      loc_96E0AE
0x96DF2A: mov     edx, [ecx]
0x96DF2C: mov     eax, [edx+4]
0x96DF2F: call    eax
0x96DF31: cmp     eax, ebp
0x96DF33: jz      loc_96E0AE
0x96DF39: lea     esp, [esp+0]
0x96DF40: cmp     eax, offset dword_B3FD04
0x96DF45: jz      short loc_96DFC4
0x96DF47: mov     eax, [eax+4]
0x96DF4A: cmp     eax, ebp
0x96DF4C: jnz     short loc_96DF40
0x96DF4E: pop     edi
0x96DF4F: pop     esi
0x96DF50: pop     ebp
0x96DF51: pop     ebx
0x96DF52: add     esp, 14h
0x96DF55: retn    4
0x96DF58: cmp     [edi+34h], ebp
0x96DF5B: jnz     loc_96E0AE
0x96DF61: cmp     [edi+40h], ebp
0x96DF64: jnz     short loc_96DF74
0x96DF66: mov     ecx, edi
0x96DF68: call    sub_96DCD0
0x96DF6D: mov     ecx, edi
0x96DF6F: call    sub_96DD40
0x96DF74: mov     esi, [edi+8]
0x96DF77: push    54h ; 'T'; Size
0x96DF79: call    FormHeapAlloc
0x96DF7E: add     esp, 4
0x96DF81: cmp     eax, ebp
0x96DF83: jz      short loc_96DFB5
0x96DF85: mov     ecx, [esp+24h+arg_0]
0x96DF89: mov     edx, [esi+0B4h]
0x96DF8F: mov     esi, [edx+1Ch]
0x96DF92: mov     ebx, [edx+48h]
0x96DF95: movzx   edx, word ptr [edx+40h]
0x96DF99: push    ecx
0x96DF9A: mov     ecx, [edi+40h]
0x96DF9D: push    ecx
0x96DF9E: push    esi
0x96DF9F: push    ebx
0x96DFA0: push    edx
0x96DFA1: mov     ecx, eax; this
0x96DFA3: call    ??0NiOBBRoot@@QAE@XZ; NiOBBRoot::NiOBBRoot(void)
0x96DFA8: mov     [edi+34h], eax
0x96DFAB: pop     edi
0x96DFAC: pop     esi
0x96DFAD: pop     ebp
0x96DFAE: pop     ebx
0x96DFAF: add     esp, 14h
0x96DFB2: retn    4
0x96DFB5: xor     eax, eax
0x96DFB7: mov     [edi+34h], eax
0x96DFBA: pop     edi
0x96DFBB: pop     esi
0x96DFBC: pop     ebp
0x96DFBD: pop     ebx
0x96DFBE: add     esp, 14h
0x96DFC1: retn    4
0x96DFC4: cmp     [edi+34h], ebp
0x96DFC7: jnz     loc_96E0AE
0x96DFCD: cmp     [edi+40h], ebp
0x96DFD0: jnz     short loc_96DFE0
0x96DFD2: mov     ecx, edi
0x96DFD4: call    sub_96DCD0
0x96DFD9: mov     ecx, edi
0x96DFDB: call    sub_96DD40
0x96DFE0: mov     ebx, [edi+8]
0x96DFE3: mov     ecx, [ebx+0B4h]
0x96DFE9: movzx   esi, word ptr [ecx+40h]
0x96DFED: xor     ecx, ecx
0x96DFEF: lea     eax, [esi+esi*2]
0x96DFF2: mov     edx, 2
0x96DFF7: mul     edx
0x96DFF9: seto    cl
0x96DFFC: mov     [esp+24h+var_10], ebx
0x96E000: mov     [esp+24h+var_14], ebp
0x96E004: mov     [esp+24h+var_8], esi
0x96E008: neg     ecx
0x96E00A: or      ecx, eax
0x96E00C: push    ecx; Size
0x96E00D: call    FormHeapAlloc
0x96E012: add     esp, 4
0x96E015: cmp     esi, ebp
0x96E017: mov     [esp+24h+var_C], eax
0x96E01B: jbe     short loc_96E068
0x96E01D: lea     esi, [eax+2]
0x96E020: mov     ecx, [ebx+0B4h]
0x96E026: mov     eax, [ecx]
0x96E028: mov     edx, [eax+60h]
0x96E02B: lea     ebx, [esi+2]
0x96E02E: push    ebx
0x96E02F: push    esi
0x96E030: lea     edi, [esi-2]
0x96E033: push    edi
0x96E034: push    ebp
0x96E035: call    edx
0x96E037: movzx   eax, word ptr [edi]
0x96E03A: movzx   ecx, word ptr [esi]
0x96E03D: cmp     ax, cx
0x96E040: jz      short loc_96E057
0x96E042: movzx   edx, word ptr [ebx]
0x96E045: cmp     ax, dx
0x96E048: jz      short loc_96E057
0x96E04A: cmp     cx, dx
0x96E04D: jz      short loc_96E057
0x96E04F: add     esi, 6
0x96E052: add     [esp+24h+var_14], 1
0x96E057: mov     ebx, [esp+24h+var_10]
0x96E05B: add     ebp, 1
0x96E05E: cmp     ebp, [esp+24h+var_8]
0x96E062: jb      short loc_96E020
0x96E064: mov     edi, [esp+24h+var_4]
0x96E068: push    54h ; 'T'; Size
0x96E06A: call    FormHeapAlloc
0x96E06F: add     esp, 4
0x96E072: test    eax, eax
0x96E074: jz      short loc_96E09C
0x96E076: mov     ecx, [ebx+0B4h]
0x96E07C: mov     edx, [ecx+1Ch]
0x96E07F: mov     ecx, [esp+24h+arg_0]
0x96E083: push    ecx
0x96E084: mov     ecx, [edi+40h]
0x96E087: push    ecx
0x96E088: mov     ecx, [esp+2Ch+var_14]
0x96E08C: push    edx
0x96E08D: mov     edx, [esp+30h+var_C]
0x96E091: push    edx
0x96E092: push    ecx
0x96E093: mov     ecx, eax; this
0x96E095: call    ??0NiOBBRoot@@QAE@XZ; NiOBBRoot::NiOBBRoot(void)
0x96E09A: jmp     short loc_96E09E
0x96E09C: xor     eax, eax
0x96E09E: mov     edx, [esp+24h+var_C]
0x96E0A2: push    edx
0x96E0A3: mov     [edi+34h], eax
0x96E0A6: call    FormHeapFree
0x96E0AB: add     esp, 4
0x96E0AE: pop     edi
0x96E0AF: pop     esi
0x96E0B0: pop     ebp
0x96E0B1: pop     ebx
0x96E0B2: add     esp, 14h
0x96E0B5: retn    4
