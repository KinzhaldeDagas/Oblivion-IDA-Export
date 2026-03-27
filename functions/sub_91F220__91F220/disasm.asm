0x91F220: push    ebx
0x91F221: push    ebp
0x91F222: mov     ebp, [esp+8+arg_4]
0x91F226: push    esi
0x91F227: mov     esi, [esp+0Ch+arg_0]
0x91F22B: cmp     esi, ebp
0x91F22D: push    edi
0x91F22E: jle     short loc_91F23A
0x91F230: mov     eax, esi
0x91F232: mov     esi, ebp
0x91F234: mov     [esp+10h+arg_4], eax
0x91F238: mov     ebp, eax
0x91F23A: mov     edx, [ecx]
0x91F23C: mov     eax, [edx]
0x91F23E: mov     edi, [eax+esi*4]
0x91F241: test    edi, edi
0x91F243: mov     ebx, esi
0x91F245: jl      short loc_91F274
0x91F247: mov     ebp, edi
0x91F249: lea     esp, [esp+0]
0x91F250: mov     ebx, ebp
0x91F252: mov     ebp, [eax+ebx*4]
0x91F255: test    ebp, ebp
0x91F257: jge     short loc_91F250
0x91F259: test    edi, edi
0x91F25B: mov     ebp, [esp+10h+arg_4]
0x91F25F: jl      short loc_91F274
0x91F261: mov     eax, [edx]
0x91F263: lea     edx, [eax+esi*4]
0x91F266: mov     esi, [edx]
0x91F268: mov     [edx], ebx
0x91F26A: mov     edx, [ecx]
0x91F26C: mov     eax, [edx]
0x91F26E: cmp     dword ptr [eax+esi*4], 0
0x91F272: jge     short loc_91F261
0x91F274: mov     edx, [ecx]
0x91F276: mov     ebx, [esp+10h+arg_4]
0x91F27A: mov     eax, ebp
0x91F27C: mov     edi, ebp
0x91F27E: mov     ebp, [edx]
0x91F280: mov     ebx, [ebp+ebx*4+0]
0x91F284: test    ebx, ebx
0x91F286: mov     [esp+10h+arg_4], ebx
0x91F28A: jl      short loc_91F2B5
0x91F28C: lea     esp, [esp+0]
0x91F290: mov     edi, ebx
0x91F292: mov     ebx, [ebp+edi*4+0]
0x91F296: test    ebx, ebx
0x91F298: jge     short loc_91F290
0x91F29A: mov     ebx, [esp+10h+arg_4]
0x91F29E: test    ebx, ebx
0x91F2A0: jl      short loc_91F2B5
0x91F2A2: mov     edx, [edx]
0x91F2A4: lea     edx, [edx+eax*4]
0x91F2A7: mov     eax, [edx]
0x91F2A9: mov     [edx], edi
0x91F2AB: mov     edx, [ecx]
0x91F2AD: mov     ebx, [edx]
0x91F2AF: cmp     dword ptr [ebx+eax*4], 0
0x91F2B3: jge     short loc_91F2A2
0x91F2B5: cmp     esi, eax
0x91F2B7: jz      short loc_91F2F0
0x91F2B9: mov     edx, [ecx]
0x91F2BB: mov     edi, [edx]
0x91F2BD: mov     ebx, [edi+esi*4]
0x91F2C0: mov     edx, edi
0x91F2C2: jge     short loc_91F2DF
0x91F2C4: mov     edi, [edi+eax*4]
0x91F2C7: mov     ebx, [edx+esi*4]
0x91F2CA: lea     edx, [edx+esi*4]
0x91F2CD: add     ebx, edi
0x91F2CF: mov     [edx], ebx
0x91F2D1: mov     ecx, [ecx]
0x91F2D3: mov     edx, [ecx]
0x91F2D5: pop     edi
0x91F2D6: mov     [edx+eax*4], esi
0x91F2D9: pop     esi
0x91F2DA: pop     ebp
0x91F2DB: pop     ebx
0x91F2DC: retn    8
0x91F2DF: mov     edi, [edx+eax*4]
0x91F2E2: lea     edx, [edx+eax*4]
0x91F2E5: add     edi, ebx
0x91F2E7: mov     [edx], edi
0x91F2E9: mov     ecx, [ecx]
0x91F2EB: mov     edx, [ecx]
0x91F2ED: mov     [edx+esi*4], eax
0x91F2F0: pop     edi
0x91F2F1: pop     esi
0x91F2F2: pop     ebp
0x91F2F3: pop     ebx
0x91F2F4: retn    8
