0x942A80: push    ebx
0x942A81: push    ebp
0x942A82: mov     ebp, [esp+8+arg_0]
0x942A86: push    esi
0x942A87: push    edi
0x942A88: mov     edi, ecx
0x942A8A: mov     cl, [ebp+0]
0x942A8D: xor     eax, eax
0x942A8F: test    cl, cl
0x942A91: jz      short loc_942AA5
0x942A93: mov     edx, ebp
0x942A95: imul    eax, 1Fh
0x942A98: movsx   ecx, cl
0x942A9B: add     eax, ecx
0x942A9D: mov     cl, [edx+1]
0x942AA0: inc     edx
0x942AA1: test    cl, cl
0x942AA3: jnz     short loc_942A95
0x942AA5: mov     ecx, [edi]
0x942AA7: and     eax, 7FFFFFFFh
0x942AAC: mov     ebx, eax
0x942AAE: mov     eax, [edi+8]
0x942AB1: mov     esi, eax
0x942AB3: and     esi, ebx
0x942AB5: mov     edx, [ecx+esi*4]
0x942AB8: cmp     edx, 0FFFFFFFFh
0x942ABB: jz      short loc_942AE8
0x942ABD: lea     ecx, [ecx+0]
0x942AC0: cmp     edx, ebx
0x942AC2: jnz     short loc_942AD8
0x942AC4: add     eax, esi
0x942AC6: mov     edx, [ecx+eax*4+4]
0x942ACA: push    edx
0x942ACB: push    ebp
0x942ACC: call    sub_8B1770
0x942AD1: add     esp, 8
0x942AD4: test    eax, eax
0x942AD6: jz      short loc_942AF3
0x942AD8: mov     eax, [edi+8]
0x942ADB: mov     ecx, [edi]
0x942ADD: inc     esi
0x942ADE: and     esi, eax
0x942AE0: mov     edx, [ecx+esi*4]
0x942AE3: cmp     edx, 0FFFFFFFFh
0x942AE6: jnz     short loc_942AC0
0x942AE8: mov     eax, [edi+8]
0x942AEB: pop     edi
0x942AEC: pop     esi
0x942AED: pop     ebp
0x942AEE: inc     eax
0x942AEF: pop     ebx
0x942AF0: retn    4
0x942AF3: pop     edi
0x942AF4: mov     eax, esi
0x942AF6: pop     esi
0x942AF7: pop     ebp
0x942AF8: pop     ebx
0x942AF9: retn    4
