0x923F40: sub     esp, 18h
0x923F43: mov     eax, [esp+18h+arg_4]
0x923F47: mov     ecx, [eax+2Ch]
0x923F4A: mov     edx, [eax+3Ch]
0x923F4D: push    ebx
0x923F4E: push    ebp
0x923F4F: mov     ebp, [eax+4Ch]
0x923F52: push    esi
0x923F53: mov     esi, [esp+24h+arg_8]
0x923F57: mov     [esp+24h+var_18], ecx
0x923F5B: mov     ecx, [esp+24h+arg_C]
0x923F5F: lea     ebx, [esi+ecx*4]
0x923F62: cmp     esi, ebx
0x923F64: push    edi
0x923F65: mov     edi, [eax+48h]
0x923F68: mov     [esp+28h+var_14], edx
0x923F6C: jnb     short loc_923FB3
0x923F6E: mov     edi, edi
0x923F70: mov     edx, [esi]
0x923F72: mov     ecx, [edx+0Ch]
0x923F75: mov     eax, [ecx]
0x923F77: lea     edx, [esp+28h+var_10]
0x923F7B: push    edx
0x923F7C: call    dword ptr [eax+20h]
0x923F7F: mov     ecx, [esp+28h+var_C]
0x923F83: mov     eax, [esp+28h+var_4]
0x923F87: mov     edx, [esp+28h+var_8]
0x923F8B: add     edi, ecx
0x923F8D: mov     ecx, [esi]
0x923F8F: lea     ebp, [ebp+eax*4+0]
0x923F93: xor     eax, eax
0x923F95: cmp     byte ptr [ecx+18h], 4
0x923F99: sbb     eax, eax
0x923F9B: inc     eax
0x923F9C: mov     ecx, [esp+eax*4+28h+var_18]
0x923FA0: lea     eax, [esp+eax*4+28h+var_18]
0x923FA4: add     ecx, edx
0x923FA6: add     esi, 4
0x923FA9: cmp     esi, ebx
0x923FAB: mov     [eax], ecx
0x923FAD: jb      short loc_923F70
0x923FAF: mov     eax, [esp+28h+arg_4]
0x923FB3: cmp     edi, [eax+18h]
0x923FB6: ja      short loc_923FE8
0x923FB8: cmp     ebp, [eax+20h]
0x923FBB: ja      short loc_923FE8
0x923FBD: mov     ecx, [esp+28h+var_18]
0x923FC1: mov     edx, [eax+28h]
0x923FC4: add     ecx, 4
0x923FC7: cmp     ecx, edx
0x923FC9: ja      short loc_923FE8
0x923FCB: mov     edx, [esp+28h+var_14]
0x923FCF: mov     ecx, [eax+38h]
0x923FD2: add     edx, 4
0x923FD5: cmp     edx, ecx
0x923FD7: ja      short loc_923FE8
0x923FD9: mov     eax, [esp+28h+arg_0]
0x923FDD: pop     edi
0x923FDE: pop     esi
0x923FDF: pop     ebp
0x923FE0: mov     byte ptr [eax], 1
0x923FE3: pop     ebx
0x923FE4: add     esp, 18h
0x923FE7: retn
0x923FE8: mov     eax, [esp+28h+arg_0]
0x923FEC: pop     edi
0x923FED: pop     esi
0x923FEE: pop     ebp
0x923FEF: mov     byte ptr [eax], 0
0x923FF2: pop     ebx
0x923FF3: add     esp, 18h
0x923FF6: retn
