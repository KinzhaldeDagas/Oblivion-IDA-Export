0x77E130: sub     esp, 0Ch
0x77E133: push    ebx
0x77E134: push    esi
0x77E135: mov     ebx, ecx
0x77E137: mov     ecx, [ebx+10h]
0x77E13A: push    edi
0x77E13B: lea     edi, [ebx+0Ch]
0x77E13E: xor     eax, eax
0x77E140: test    ecx, ecx
0x77E142: jbe     short loc_77E163
0x77E144: mov     esi, [edi+8]
0x77E147: mov     edx, esi
0x77E149: lea     esp, [esp+0]
0x77E150: cmp     dword ptr [edx], 0
0x77E153: jnz     loc_77E2B4
0x77E159: add     eax, 1
0x77E15C: add     edx, 4
0x77E15F: cmp     eax, ecx
0x77E161: jb      short loc_77E150
0x77E163: xor     eax, eax
0x77E165: test    eax, eax
0x77E167: mov     [esp+18h+var_C], eax
0x77E16B: jz      short loc_77E1C8
0x77E16D: lea     ecx, [ecx+0]
0x77E170: lea     eax, [esp+18h+var_4]
0x77E174: push    eax
0x77E175: lea     ecx, [esp+1Ch+var_8]
0x77E179: push    ecx
0x77E17A: lea     edx, [esp+20h+var_C]
0x77E17E: push    edx
0x77E17F: mov     ecx, edi
0x77E181: call    sub_452600
0x77E186: mov     eax, [esp+18h+var_8]
0x77E18A: push    eax
0x77E18B: mov     ecx, edi
0x77E18D: call    NiTMap_RemoveAt
0x77E192: mov     esi, [esp+18h+var_4]
0x77E196: test    esi, esi
0x77E198: jz      short loc_77E1C1
0x77E19A: mov     eax, [esi+10h]
0x77E19D: test    eax, eax
0x77E19F: jz      short loc_77E1A9
0x77E1A1: mov     ecx, [eax]
0x77E1A3: mov     edx, [ecx+8]
0x77E1A6: push    eax
0x77E1A7: call    edx
0x77E1A9: mov     eax, [esi+0Ch]
0x77E1AC: test    eax, eax
0x77E1AE: jz      short loc_77E1B8
0x77E1B0: mov     ecx, [eax]
0x77E1B2: mov     edx, [ecx+8]
0x77E1B5: push    eax
0x77E1B6: call    edx
0x77E1B8: push    esi
0x77E1B9: call    FormHeapFree
0x77E1BE: add     esp, 4
0x77E1C1: cmp     [esp+18h+var_C], 0
0x77E1C6: jnz     short loc_77E170
0x77E1C8: mov     edx, [ebx+20h]
0x77E1CB: lea     esi, [ebx+1Ch]
0x77E1CE: xor     eax, eax
0x77E1D0: test    edx, edx
0x77E1D2: jbe     short loc_77E1F3
0x77E1D4: mov     edi, [esi+8]
0x77E1D7: mov     ecx, edi
0x77E1D9: lea     esp, [esp+0]
0x77E1E0: cmp     dword ptr [ecx], 0
0x77E1E3: jnz     loc_77E2BC
0x77E1E9: add     eax, 1
0x77E1EC: add     ecx, 4
0x77E1EF: cmp     eax, edx
0x77E1F1: jb      short loc_77E1E0
0x77E1F3: xor     eax, eax
0x77E1F5: test    eax, eax
0x77E1F7: mov     [esp+18h+var_C], eax
0x77E1FB: jz      short loc_77E228
0x77E1FD: lea     ecx, [ecx+0]
0x77E200: lea     eax, [esp+18h+var_4]
0x77E204: push    eax
0x77E205: lea     ecx, [esp+1Ch+var_8]
0x77E209: push    ecx
0x77E20A: lea     edx, [esp+20h+var_C]
0x77E20E: push    edx
0x77E20F: mov     ecx, esi
0x77E211: call    sub_452600
0x77E216: cmp     [esp+18h+var_C], 0
0x77E21B: mov     eax, [esp+18h+var_4]
0x77E21F: mov     dword ptr [eax+8], 0
0x77E226: jnz     short loc_77E200
0x77E228: xor     esi, esi
0x77E22A: cmp     [ebx+34h], si
0x77E22E: jbe     loc_77E2AD
0x77E234: movzx   ecx, word ptr [ebx+36h]
0x77E238: cmp     esi, ecx
0x77E23A: jnb     short loc_77E295
0x77E23C: mov     edx, [ebx+30h]
0x77E23F: mov     edi, [edx+esi*4]
0x77E242: test    edi, edi
0x77E244: lea     eax, [edx+esi*4]
0x77E247: mov     dword ptr [eax], 0
0x77E24D: jz      short loc_77E255
0x77E24F: add     word ptr [ebx+38h], 0FFFFh
0x77E255: movzx   eax, word ptr [ebx+36h]
0x77E259: movzx   ecx, ax
0x77E25C: sub     ecx, 1
0x77E25F: cmp     esi, ecx
0x77E261: jnz     short loc_77E26A
0x77E263: add     eax, 0FFFFFFFFh
0x77E266: mov     [ebx+36h], ax
0x77E26A: test    edi, edi
0x77E26C: jz      short loc_77E295
0x77E26E: mov     eax, [edi+10h]
0x77E271: test    eax, eax
0x77E273: jz      short loc_77E27D
0x77E275: mov     edx, [eax]
0x77E277: push    eax
0x77E278: mov     eax, [edx+8]
0x77E27B: call    eax
0x77E27D: mov     eax, [edi+0Ch]
0x77E280: test    eax, eax
0x77E282: jz      short loc_77E28C
0x77E284: mov     ecx, [eax]
0x77E286: mov     edx, [ecx+8]
0x77E289: push    eax
0x77E28A: call    edx
0x77E28C: push    edi
0x77E28D: call    FormHeapFree
0x77E292: add     esp, 4
0x77E295: mov     eax, [ebx+40h]
0x77E298: mov     ecx, [eax+esi*4]
0x77E29B: mov     dword ptr [ecx+8], 0
0x77E2A2: movzx   edx, word ptr [ebx+34h]
0x77E2A6: add     esi, 1
0x77E2A9: cmp     esi, edx
0x77E2AB: jb      short loc_77E234
0x77E2AD: pop     edi
0x77E2AE: pop     esi
0x77E2AF: pop     ebx
0x77E2B0: add     esp, 0Ch
0x77E2B3: retn
0x77E2B4: mov     eax, [esi+eax*4]
0x77E2B7: jmp     loc_77E165
0x77E2BC: mov     eax, [edi+eax*4]
0x77E2BF: jmp     loc_77E1F5
