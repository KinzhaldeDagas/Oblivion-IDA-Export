0x4CA040: push    esi
0x4CA041: mov     esi, ecx
0x4CA043: movzx   eax, word ptr [esi+8]
0x4CA047: push    edi
0x4CA048: mov     edi, [esp+8+arg_0]
0x4CA04C: cmp     edi, eax
0x4CA04E: jz      loc_4CA11F
0x4CA054: movzx   eax, word ptr [esi+0Ah]
0x4CA058: fldz
0x4CA05A: movzx   ecx, ax
0x4CA05D: cmp     edi, ecx
0x4CA05F: jnb     short loc_4CA091
0x4CA061: cmp     di, ax
0x4CA064: movzx   edx, di
0x4CA067: jnb     short loc_4CA08D
0x4CA069: mov     ecx, [esi+4]
0x4CA06C: movzx   eax, dx
0x4CA06F: fcom    dword ptr [ecx+eax*4]
0x4CA072: lea     ecx, [ecx+eax*4]
0x4CA075: fnstsw  ax
0x4CA077: test    ah, 44h
0x4CA07A: jnp     short loc_4CA084
0x4CA07C: fst     dword ptr [ecx]
0x4CA07E: add     word ptr [esi+0Ch], 0FFFFh
0x4CA084: add     edx, 1
0x4CA087: cmp     dx, [esi+0Ah]
0x4CA08B: jb      short loc_4CA069
0x4CA08D: mov     [esi+0Ah], di
0x4CA091: test    edi, edi
0x4CA093: fstp    st
0x4CA095: push    ebp
0x4CA096: mov     ebp, [esi+4]
0x4CA099: mov     [esi+8], di
0x4CA09D: jbe     short loc_4CA10E
0x4CA09F: xor     ecx, ecx
0x4CA0A1: movzx   eax, di
0x4CA0A4: mov     edx, 4
0x4CA0A9: mul     edx
0x4CA0AB: seto    cl
0x4CA0AE: neg     ecx
0x4CA0B0: or      ecx, eax
0x4CA0B2: push    ecx; Size
0x4CA0B3: call    FormHeapAlloc
0x4CA0B8: xor     ecx, ecx
0x4CA0BA: add     esp, 4
0x4CA0BD: cmp     [esi+0Ah], cx
0x4CA0C1: mov     [esi+4], eax
0x4CA0C4: jbe     short loc_4CA0DF
0x4CA0C6: mov     edx, [esi+4]
0x4CA0C9: movzx   eax, cx
0x4CA0CC: add     eax, eax
0x4CA0CE: add     eax, eax
0x4CA0D0: add     ecx, 1
0x4CA0D3: fld     dword ptr [eax+ebp]
0x4CA0D6: fstp    dword ptr [eax+edx]
0x4CA0D9: cmp     cx, [esi+0Ah]
0x4CA0DD: jb      short loc_4CA0C6
0x4CA0DF: movzx   eax, word ptr [esi+0Ah]
0x4CA0E3: cmp     ax, [esi+8]
0x4CA0E7: jnb     short loc_4CA115
0x4CA0E9: fldz
0x4CA0EB: mov     edx, [esi+4]
0x4CA0EE: movzx   ecx, ax
0x4CA0F1: add     eax, 1
0x4CA0F4: fst     dword ptr [edx+ecx*4]
0x4CA0F7: cmp     ax, [esi+8]
0x4CA0FB: jb      short loc_4CA0EB
0x4CA0FD: push    ebp
0x4CA0FE: fstp    st
0x4CA100: call    FormHeapFree
0x4CA105: add     esp, 4
0x4CA108: pop     ebp
0x4CA109: pop     edi
0x4CA10A: pop     esi
0x4CA10B: retn    4
0x4CA10E: mov     dword ptr [esi+4], 0
0x4CA115: push    ebp
0x4CA116: call    FormHeapFree
0x4CA11B: add     esp, 4
0x4CA11E: pop     ebp
0x4CA11F: pop     edi
0x4CA120: pop     esi
0x4CA121: retn    4
