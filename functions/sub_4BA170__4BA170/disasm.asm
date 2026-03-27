0x4BA170: mov     eax, [esp+arg_0]
0x4BA174: push    ebx
0x4BA175: push    edi
0x4BA176: push    0; int
0x4BA178: push    offset ??_R0?AVTESObjectTREE@@@8; struct TypeDescriptor *
0x4BA17D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BA182: push    0; int
0x4BA184: push    eax; void *
0x4BA185: mov     ebx, ecx
0x4BA187: call    OblivionDynamicCast
0x4BA18C: mov     edi, eax
0x4BA18E: add     esp, 14h
0x4BA191: test    edi, edi
0x4BA193: jnz     short loc_4BA19C
0x4BA195: pop     edi
0x4BA196: mov     al, 1
0x4BA198: pop     ebx
0x4BA199: retn    4
0x4BA19C: mov     edx, [edi]
0x4BA19E: mov     eax, [edx+12Ch]
0x4BA1A4: push    esi
0x4BA1A5: mov     ecx, edi
0x4BA1A7: mov     esi, 20h ; ' '
0x4BA1AC: call    eax
0x4BA1AE: lea     ecx, [ebx+58h]
0x4BA1B1: push    ebp
0x4BA1B2: mov     edx, [ecx]
0x4BA1B4: cmp     edx, [eax]
0x4BA1B6: jnz     short loc_4BA1CA
0x4BA1B8: sub     esi, 4
0x4BA1BB: add     eax, 4
0x4BA1BE: add     ecx, 4
0x4BA1C1: cmp     esi, 4
0x4BA1C4: jnb     short loc_4BA1B2
0x4BA1C6: test    esi, esi
0x4BA1C8: jz      short loc_4BA227
0x4BA1CA: movzx   edx, byte ptr [ecx]
0x4BA1CD: movzx   ebp, byte ptr [eax]
0x4BA1D0: sub     edx, ebp
0x4BA1D2: jnz     short loc_4BA219
0x4BA1D4: sub     esi, 1
0x4BA1D7: add     eax, 1
0x4BA1DA: add     ecx, 1
0x4BA1DD: test    esi, esi
0x4BA1DF: jz      short loc_4BA227
0x4BA1E1: movzx   edx, byte ptr [ecx]
0x4BA1E4: movzx   ebp, byte ptr [eax]
0x4BA1E7: sub     edx, ebp
0x4BA1E9: jnz     short loc_4BA219
0x4BA1EB: sub     esi, 1
0x4BA1EE: add     eax, 1
0x4BA1F1: add     ecx, 1
0x4BA1F4: test    esi, esi
0x4BA1F6: jz      short loc_4BA227
0x4BA1F8: movzx   edx, byte ptr [ecx]
0x4BA1FB: movzx   ebp, byte ptr [eax]
0x4BA1FE: sub     edx, ebp
0x4BA200: jnz     short loc_4BA219
0x4BA202: sub     esi, 1
0x4BA205: add     eax, 1
0x4BA208: add     ecx, 1
0x4BA20B: test    esi, esi
0x4BA20D: jz      short loc_4BA227
0x4BA20F: movzx   edx, byte ptr [ecx]
0x4BA212: movzx   eax, byte ptr [eax]
0x4BA215: sub     edx, eax
0x4BA217: jz      short loc_4BA227
0x4BA219: test    edx, edx
0x4BA21B: mov     eax, 1
0x4BA220: jg      short loc_4BA229
0x4BA222: or      eax, 0FFFFFFFFh
0x4BA225: jmp     short loc_4BA229
0x4BA227: xor     eax, eax
0x4BA229: test    eax, eax
0x4BA22B: jnz     short loc_4BA28A
0x4BA22D: fld     dword ptr [ebx+78h]
0x4BA230: fld     dword ptr [edi+78h]
0x4BA233: fucompp
0x4BA235: fnstsw  ax
0x4BA237: test    ah, 44h
0x4BA23A: jp      short loc_4BA28A
0x4BA23C: fld     dword ptr [ebx+7Ch]
0x4BA23F: fld     dword ptr [edi+7Ch]
0x4BA242: fucompp
0x4BA244: fnstsw  ax
0x4BA246: test    ah, 44h
0x4BA249: jp      short loc_4BA28A
0x4BA24B: movzx   edx, word ptr [ebx+52h]
0x4BA24F: movzx   ecx, word ptr [edi+52h]
0x4BA253: cmp     edx, ecx
0x4BA255: jnz     short loc_4BA28A
0x4BA257: xor     ecx, ecx
0x4BA259: test    edx, edx
0x4BA25B: jbe     short loc_4BA276
0x4BA25D: mov     eax, [ebx+4Ch]
0x4BA260: mov     esi, [edi+4Ch]
0x4BA263: sub     esi, eax
0x4BA265: mov     ebp, [eax]
0x4BA267: cmp     ebp, [esi+eax]
0x4BA26A: jnz     short loc_4BA28A
0x4BA26C: add     ecx, 1
0x4BA26F: add     eax, 4
0x4BA272: cmp     ecx, edx
0x4BA274: jb      short loc_4BA265
0x4BA276: push    edi; a2
0x4BA277: mov     ecx, ebx; this
0x4BA279: call    TESForm_CompareAllComponentsTo
0x4BA27E: pop     ebp
0x4BA27F: pop     esi
0x4BA280: test    al, al
0x4BA282: pop     edi
0x4BA283: setnz   al
0x4BA286: pop     ebx
0x4BA287: retn    4
0x4BA28A: pop     ebp
0x4BA28B: pop     esi
0x4BA28C: pop     edi
0x4BA28D: mov     al, 1
0x4BA28F: pop     ebx
0x4BA290: retn    4
