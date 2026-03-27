0x772BB0: sub     esp, 8
0x772BB3: push    ebx
0x772BB4: push    ebp
0x772BB5: mov     eax, ecx
0x772BB7: mov     ecx, ds:0B427ACh
0x772BBD: push    esi
0x772BBE: push    edi
0x772BBF: mov     edi, [eax+8]
0x772BC2: test    edi, edi
0x772BC4: mov     [esp+18h+var_4], eax
0x772BC8: jz      short loc_772C33
0x772BCA: lea     ebx, [ebx+0]
0x772BD0: mov     eax, [edi+8]
0x772BD3: mov     ebx, [ecx+8]
0x772BD6: lea     esi, [ecx+8]
0x772BD9: mov     [esp+18h+var_8], eax
0x772BDD: xor     eax, eax
0x772BDF: test    ebx, ebx
0x772BE1: mov     ebp, ecx
0x772BE3: jbe     short loc_772BFC
0x772BE5: mov     edx, [ecx]
0x772BE7: cmp     [edx], edi
0x772BE9: jz      short loc_772BF7
0x772BEB: add     eax, 1
0x772BEE: add     edx, 4
0x772BF1: cmp     eax, ebx
0x772BF3: jb      short loc_772BE7
0x772BF5: jmp     short loc_772BFC
0x772BF7: cmp     eax, 0FFFFFFFFh
0x772BFA: jnz     short loc_772C27
0x772BFC: mov     eax, [ecx+4]
0x772BFF: cmp     ebx, eax
0x772C01: jnz     short loc_772C16
0x772C03: test    eax, eax
0x772C05: jbe     short loc_772C0B
0x772C07: add     eax, eax
0x772C09: jmp     short loc_772C10
0x772C0B: mov     eax, 1
0x772C10: push    eax
0x772C11: call    sub_6E8CA0
0x772C16: mov     ecx, [esi]
0x772C18: mov     edx, [ebp+0]
0x772C1B: mov     [edx+ecx*4], edi
0x772C1E: add     dword ptr [esi], 1
0x772C21: mov     ecx, ds:0B427ACh
0x772C27: mov     edi, [esp+18h+var_8]
0x772C2B: test    edi, edi
0x772C2D: jnz     short loc_772BD0
0x772C2F: mov     eax, [esp+18h+var_4]
0x772C33: mov     edi, [eax+10h]
0x772C36: test    edi, edi
0x772C38: jz      short loc_772CB3
0x772C3A: lea     ebx, [ebx+0]
0x772C40: mov     eax, [edi+8]
0x772C43: mov     ebx, [ecx+8]
0x772C46: lea     esi, [ecx+8]
0x772C49: mov     [esp+18h+var_8], eax
0x772C4D: xor     eax, eax
0x772C4F: test    ebx, ebx
0x772C51: mov     ebp, ecx
0x772C53: jbe     short loc_772C6C
0x772C55: mov     edx, [ecx]
0x772C57: cmp     [edx], edi
0x772C59: jz      short loc_772C67
0x772C5B: add     eax, 1
0x772C5E: add     edx, 4
0x772C61: cmp     eax, ebx
0x772C63: jb      short loc_772C57
0x772C65: jmp     short loc_772C6C
0x772C67: cmp     eax, 0FFFFFFFFh
0x772C6A: jnz     short loc_772C97
0x772C6C: mov     eax, [ecx+4]
0x772C6F: cmp     ebx, eax
0x772C71: jnz     short loc_772C86
0x772C73: test    eax, eax
0x772C75: jbe     short loc_772C7B
0x772C77: add     eax, eax
0x772C79: jmp     short loc_772C80
0x772C7B: mov     eax, 1
0x772C80: push    eax
0x772C81: call    sub_6E8CA0
0x772C86: mov     ecx, [esi]
0x772C88: mov     edx, [ebp+0]
0x772C8B: mov     [edx+ecx*4], edi
0x772C8E: add     dword ptr [esi], 1
0x772C91: mov     ecx, ds:0B427ACh
0x772C97: mov     edi, [esp+18h+var_8]
0x772C9B: test    edi, edi
0x772C9D: jnz     short loc_772C40
0x772C9F: mov     eax, [esp+18h+var_4]
0x772CA3: pop     edi
0x772CA4: pop     esi
0x772CA5: xor     ecx, ecx
0x772CA7: pop     ebp
0x772CA8: mov     [eax+8], ecx
0x772CAB: mov     [eax+10h], ecx
0x772CAE: pop     ebx
0x772CAF: add     esp, 8
0x772CB2: retn
0x772CB3: pop     edi
0x772CB4: pop     esi
0x772CB5: pop     ebp
0x772CB6: mov     dword ptr [eax+8], 0
0x772CBD: mov     dword ptr [eax+10h], 0
0x772CC4: pop     ebx
0x772CC5: add     esp, 8
0x772CC8: retn
