0x90C020: sub     esp, 28h
0x90C023: mov     eax, [esp+28h+arg_0]
0x90C027: push    ebx
0x90C028: push    ebp
0x90C029: xor     edx, edx
0x90C02B: cmp     eax, edx
0x90C02D: mov     ebp, ecx
0x90C02F: push    esi
0x90C030: mov     ecx, 80000000h
0x90C035: push    edi
0x90C036: mov     [esp+38h+var_18], edx
0x90C03A: mov     [esp+38h+var_14], edx
0x90C03E: mov     [esp+38h+var_10], ecx
0x90C042: mov     [esp+38h+arg_0], eax
0x90C046: jz      short loc_90C085
0x90C048: lea     eax, [esp+38h+arg_0]
0x90C04C: mov     [esp+38h+var_C], eax
0x90C050: mov     [esp+38h+var_8], 1
0x90C058: mov     [esp+38h+var_4], 80000001h
0x90C060: lea     ecx, [esp+38h+var_C]
0x90C064: push    ecx
0x90C065: push    0
0x90C067: lea     ecx, [esp+40h+var_18]
0x90C06B: call    sub_8E6720
0x90C070: mov     ecx, [esp+38h+arg_0]
0x90C074: call    sub_90D1F0
0x90C079: test    eax, eax
0x90C07B: mov     [esp+38h+arg_0], eax
0x90C07F: jnz     short loc_90C060
0x90C081: mov     ecx, [esp+38h+var_10]
0x90C085: movzx   ebx, byte ptr [ebp+0]
0x90C089: mov     eax, [esp+38h+var_14]
0x90C08D: xor     esi, esi
0x90C08F: cmp     eax, esi
0x90C091: mov     edi, 1
0x90C096: mov     [esp+38h+arg_0], edi
0x90C09A: mov     [esp+38h+var_20], ebx
0x90C09E: mov     [esp+38h+var_24], esi
0x90C0A2: jle     loc_90C235
0x90C0A8: jmp     short loc_90C0B0
0x90C0AA: mov     ebx, [esp+38h+var_20]
0x90C0AE: mov     edi, edi
0x90C0B0: mov     edx, [esp+38h+var_18]
0x90C0B4: mov     eax, [esp+38h+var_24]
0x90C0B8: mov     ecx, [edx+eax*4]
0x90C0BB: mov     [esp+38h+var_28], ecx
0x90C0BF: xor     edi, edi
0x90C0C1: call    sub_88D370
0x90C0C6: test    eax, eax
0x90C0C8: jle     short loc_90C0FB
0x90C0CA: lea     ebx, [ebx+0]
0x90C0D0: mov     eax, esi
0x90C0D2: cdq
0x90C0D3: idiv    ebx
0x90C0D5: test    edx, edx
0x90C0D7: jz      short loc_90C0DF
0x90C0D9: mov     ecx, ebx
0x90C0DB: sub     ecx, edx
0x90C0DD: add     esi, ecx
0x90C0DF: mov     eax, [esp+38h+arg_0]
0x90C0E3: add     esi, ebx
0x90C0E5: cmp     ebx, eax
0x90C0E7: jle     short loc_90C0ED
0x90C0E9: mov     [esp+38h+arg_0], ebx
0x90C0ED: mov     ecx, [esp+38h+var_28]
0x90C0F1: inc     edi
0x90C0F2: call    sub_88D370
0x90C0F7: cmp     edi, eax
0x90C0F9: jl      short loc_90C0D0
0x90C0FB: mov     ecx, [esp+38h+var_28]
0x90C0FF: xor     ebx, ebx
0x90C101: call    sub_90D2C0
0x90C106: test    eax, eax
0x90C108: jle     loc_90C1E2
0x90C10E: mov     edi, edi
0x90C110: mov     ecx, [esp+38h+var_28]
0x90C114: push    ebx
0x90C115: call    sub_90D2D0
0x90C11A: test    esi, esi
0x90C11C: mov     edi, eax
0x90C11E: jnz     short loc_90C134
0x90C120: mov     eax, [esp+38h+var_24]
0x90C124: test    eax, eax
0x90C126: jz      short loc_90C134
0x90C128: mov     al, [ebp+3]
0x90C12B: test    al, al
0x90C12D: jnz     short loc_90C134
0x90C12F: mov     esi, 1
0x90C134: movzx   edx, byte ptr [ebp+0]
0x90C138: movzx   eax, byte ptr [edi+0Ch]
0x90C13C: push    edx
0x90C13D: push    eax
0x90C13E: push    edi
0x90C13F: call    sub_90BBB0
0x90C144: mov     dl, [edi+0Ch]
0x90C147: mov     ecx, eax
0x90C149: movzx   eax, dl
0x90C14C: add     esp, 0Ch
0x90C14F: cmp     eax, 14h
0x90C152: jz      short loc_90C18A
0x90C154: cmp     eax, 16h
0x90C157: jz      short loc_90C18A
0x90C159: cmp     eax, 1Ah
0x90C15C: jz      short loc_90C18A
0x90C15E: cmp     eax, 1Bh
0x90C161: jz      short loc_90C18A
0x90C163: cmp     eax, 1Ch
0x90C166: jz      short loc_90C18A
0x90C168: cmp     dl, 13h
0x90C16B: jnz     short loc_90C18E
0x90C16D: movzx   eax, byte ptr [edi+0Dh]
0x90C171: cmp     eax, 14h
0x90C174: jz      short loc_90C18A
0x90C176: cmp     eax, 16h
0x90C179: jz      short loc_90C18A
0x90C17B: cmp     eax, 1Ah
0x90C17E: jz      short loc_90C18A
0x90C180: cmp     eax, 1Bh
0x90C183: jz      short loc_90C18A
0x90C185: cmp     eax, 1Ch
0x90C188: jnz     short loc_90C18E
0x90C18A: movzx   ecx, byte ptr [ebp+0]
0x90C18E: cmp     ecx, [esp+38h+arg_0]
0x90C192: jle     short loc_90C198
0x90C194: mov     [esp+38h+arg_0], ecx
0x90C198: mov     eax, esi
0x90C19A: cdq
0x90C19B: idiv    ecx
0x90C19D: test    edx, edx
0x90C19F: jz      short loc_90C1A5
0x90C1A1: sub     ecx, edx
0x90C1A3: add     esi, ecx
0x90C1A5: mov     eax, [esp+38h+arg_4]
0x90C1A9: mov     [eax], esi
0x90C1AB: movzx   edx, byte ptr [ebp+0]
0x90C1AF: movzx   ecx, byte ptr [edi+0Ch]
0x90C1B3: add     eax, 4
0x90C1B6: push    edx
0x90C1B7: mov     [esp+3Ch+arg_4], eax
0x90C1BB: lea     eax, [esp+3Ch+var_1C]
0x90C1BF: push    eax
0x90C1C0: push    edi
0x90C1C1: push    ebp
0x90C1C2: mov     [esp+48h+var_1C], ecx
0x90C1C6: call    sub_90BC80
0x90C1CB: mov     ecx, [esp+48h+var_28]
0x90C1CF: add     esp, 10h
0x90C1D2: add     esi, eax
0x90C1D4: inc     ebx
0x90C1D5: call    sub_90D2C0
0x90C1DA: cmp     ebx, eax
0x90C1DC: jl      loc_90C110
0x90C1E2: mov     edi, [esp+38h+arg_0]
0x90C1E6: mov     eax, esi
0x90C1E8: cdq
0x90C1E9: idiv    edi
0x90C1EB: mov     ecx, esi
0x90C1ED: test    edx, edx
0x90C1EF: jz      short loc_90C1F7
0x90C1F1: mov     ecx, edi
0x90C1F3: sub     ecx, edx
0x90C1F5: add     ecx, esi
0x90C1F7: test    ecx, ecx
0x90C1F9: mov     eax, ecx
0x90C1FB: jnz     short loc_90C202
0x90C1FD: mov     eax, 1
0x90C202: mov     edx, [esp+38h+arg_8]
0x90C206: mov     [edx], eax
0x90C208: mov     al, [ebp+2]
0x90C20B: add     edx, 4
0x90C20E: test    al, al
0x90C210: mov     [esp+38h+arg_8], edx
0x90C214: jnz     short loc_90C218
0x90C216: mov     esi, ecx
0x90C218: mov     eax, [esp+38h+var_24]
0x90C21C: mov     ecx, [esp+38h+var_14]
0x90C220: inc     eax
0x90C221: cmp     eax, ecx
0x90C223: mov     [esp+38h+var_24], eax
0x90C227: jl      loc_90C0AA
0x90C22D: mov     ecx, [esp+38h+var_10]
0x90C231: mov     edi, [esp+38h+arg_0]
0x90C235: mov     eax, esi
0x90C237: cdq
0x90C238: idiv    edi
0x90C23A: test    edx, edx
0x90C23C: jz      short loc_90C242
0x90C23E: sub     edi, edx
0x90C240: add     esi, edi
0x90C242: test    esi, esi
0x90C244: jnz     short loc_90C24B
0x90C246: mov     esi, 1
0x90C24B: test    ecx, ecx
0x90C24D: js      short loc_90C27A
0x90C24F: mov     edx, ds:0BA9DE4h
0x90C255: mov     eax, large fs:2Ch
0x90C25B: and     ecx, 3FFFFFFFh
0x90C261: shl     ecx, 2
0x90C264: push    14h
0x90C266: push    ecx
0x90C267: mov     ecx, [esp+40h+var_18]
0x90C26B: push    ecx
0x90C26C: mov     ecx, [eax+edx*4]
0x90C26F: mov     ecx, [ecx+19Ch]
0x90C275: call    sub_8A75D0
0x90C27A: pop     edi
0x90C27B: mov     eax, esi
0x90C27D: pop     esi
0x90C27E: pop     ebp
0x90C27F: pop     ebx
0x90C280: add     esp, 28h
0x90C283: retn    0Ch
