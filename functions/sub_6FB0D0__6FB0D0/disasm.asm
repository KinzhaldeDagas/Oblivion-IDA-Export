0x6FB0D0: push    0FFFFFFFFh
0x6FB0D2: push    offset SEH_6FB0D0
0x6FB0D7: mov     eax, large fs:0
0x6FB0DD: push    eax
0x6FB0DE: sub     esp, 24h
0x6FB0E1: push    ebx
0x6FB0E2: push    ebp
0x6FB0E3: push    esi
0x6FB0E4: push    edi
0x6FB0E5: mov     eax, ds:0B30AACh
0x6FB0EA: xor     eax, esp
0x6FB0EC: push    eax
0x6FB0ED: lea     eax, [esp+44h+var_C]
0x6FB0F1: mov     large fs:0, eax
0x6FB0F7: mov     esi, ecx
0x6FB0F9: movzx   ecx, word ptr [esi+8]
0x6FB0FD: mov     eax, [esp+44h+arg_0]
0x6FB101: cmp     eax, ecx
0x6FB103: jz      loc_6FB263
0x6FB109: movzx   ecx, word ptr [esi+0Ah]
0x6FB10D: movzx   edx, cx
0x6FB110: xor     ebx, ebx
0x6FB112: cmp     eax, edx
0x6FB114: jnb     short loc_6FB180
0x6FB116: cmp     ax, cx
0x6FB119: movzx   ebp, ax
0x6FB11C: jnb     short loc_6FB17C
0x6FB11E: mov     edi, edi
0x6FB120: mov     ecx, [esi+4]
0x6FB123: movzx   eax, bp
0x6FB126: shl     eax, 4
0x6FB129: lea     edi, [eax+ecx]
0x6FB12C: lea     edx, [esp+44h+var_1C]
0x6FB130: push    edx
0x6FB131: mov     ecx, edi
0x6FB133: mov     [esp+48h+var_10], bx
0x6FB138: mov     [esp+48h+var_E], bl
0x6FB13C: call    sub_6FAE60
0x6FB141: test    al, al
0x6FB143: jz      short loc_6FB16F
0x6FB145: mov     eax, [esp+44h+var_2C]
0x6FB149: mov     ecx, [esp+44h+var_28]
0x6FB14D: mov     edx, [esp+44h+var_24]
0x6FB151: mov     [edi], eax
0x6FB153: mov     [edi+4], ecx
0x6FB156: mov     word ptr [esp+44h+var_20], bx
0x6FB15B: mov     byte ptr [esp+44h+var_20+2], bl
0x6FB15F: mov     eax, [esp+44h+var_20]
0x6FB163: mov     [edi+8], edx
0x6FB166: mov     [edi+0Ch], eax
0x6FB169: add     word ptr [esi+0Ch], 0FFFFh
0x6FB16F: add     ebp, 1
0x6FB172: cmp     bp, [esi+0Ah]
0x6FB176: jb      short loc_6FB120
0x6FB178: mov     eax, [esp+44h+arg_0]
0x6FB17C: mov     [esi+0Ah], ax
0x6FB180: cmp     eax, ebx
0x6FB182: mov     ecx, [esi+4]
0x6FB185: mov     [esp+44h+arg_0], ecx
0x6FB189: mov     [esi+8], ax
0x6FB18D: jbe     loc_6FB253
0x6FB193: movzx   ebp, ax
0x6FB196: xor     ecx, ecx
0x6FB198: mov     eax, ebp
0x6FB19A: mov     edx, 10h
0x6FB19F: mul     edx
0x6FB1A1: seto    cl
0x6FB1A4: neg     ecx
0x6FB1A6: or      ecx, eax
0x6FB1A8: push    ecx; Size
0x6FB1A9: call    FormHeapAlloc
0x6FB1AE: mov     edi, eax
0x6FB1B0: add     esp, 4
0x6FB1B3: mov     [esp+44h+var_30], edi
0x6FB1B7: cmp     edi, ebx
0x6FB1B9: mov     [esp+44h+var_4], ebx
0x6FB1BD: jz      short loc_6FB1CF
0x6FB1BF: push    offset sub_6FB080
0x6FB1C4: push    ebp
0x6FB1C5: push    10h
0x6FB1C7: push    edi
0x6FB1C8: call    sub_401080
0x6FB1CD: jmp     short loc_6FB1D1
0x6FB1CF: xor     edi, edi
0x6FB1D1: mov     [esi+4], edi
0x6FB1D4: xor     edi, edi
0x6FB1D6: cmp     [esi+0Ah], bx
0x6FB1DA: jbe     short loc_6FB211
0x6FB1DC: lea     esp, [esp+0]
0x6FB1E0: mov     eax, [esp+44h+arg_0]
0x6FB1E4: movzx   ecx, di
0x6FB1E7: shl     ecx, 4
0x6FB1EA: lea     edx, [ecx+eax]
0x6FB1ED: mov     eax, [esi+4]
0x6FB1F0: add     eax, ecx
0x6FB1F2: mov     ecx, [edx]
0x6FB1F4: mov     [eax], ecx
0x6FB1F6: mov     ecx, [edx+4]
0x6FB1F9: mov     [eax+4], ecx
0x6FB1FC: mov     ecx, [edx+8]
0x6FB1FF: mov     [eax+8], ecx
0x6FB202: mov     edx, [edx+0Ch]
0x6FB205: add     edi, 1
0x6FB208: mov     [eax+0Ch], edx
0x6FB20B: cmp     di, [esi+0Ah]
0x6FB20F: jb      short loc_6FB1E0
0x6FB211: movzx   ecx, word ptr [esi+0Ah]
0x6FB215: cmp     cx, [esi+8]
0x6FB219: jnb     short loc_6FB256
0x6FB21B: mov     edx, [esp+44h+var_24]
0x6FB21F: mov     edi, [esp+44h+var_28]
0x6FB223: mov     ebp, [esp+44h+var_2C]
0x6FB227: movzx   eax, cx
0x6FB22A: shl     eax, 4
0x6FB22D: add     eax, [esi+4]
0x6FB230: mov     word ptr [esp+44h+var_20], bx
0x6FB235: mov     [eax], ebp
0x6FB237: mov     [eax+4], edi
0x6FB23A: mov     byte ptr [esp+44h+var_20+2], bl
0x6FB23E: mov     ebp, [esp+44h+var_20]
0x6FB242: mov     [eax+8], edx
0x6FB245: add     ecx, 1
0x6FB248: mov     [eax+0Ch], ebp
0x6FB24B: cmp     cx, [esi+8]
0x6FB24F: jb      short loc_6FB223
0x6FB251: jmp     short loc_6FB256
0x6FB253: mov     [esi+4], ebx
0x6FB256: mov     eax, [esp+44h+arg_0]
0x6FB25A: push    eax
0x6FB25B: call    FormHeapFree
0x6FB260: add     esp, 4
0x6FB263: mov     ecx, [esp+44h+var_C]
0x6FB267: mov     large fs:0, ecx
0x6FB26E: pop     ecx
0x6FB26F: pop     edi
0x6FB270: pop     esi
0x6FB271: pop     ebp
0x6FB272: pop     ebx
0x6FB273: add     esp, 30h
0x6FB276: retn    4
