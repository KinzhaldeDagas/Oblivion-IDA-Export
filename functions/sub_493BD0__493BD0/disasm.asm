0x493BD0: push    0FFFFFFFFh
0x493BD2: push    offset SEH_6D7780
0x493BD7: mov     eax, large fs:0
0x493BDD: push    eax
0x493BDE: sub     esp, 8
0x493BE1: push    ebx
0x493BE2: push    ebp
0x493BE3: push    esi
0x493BE4: push    edi
0x493BE5: mov     eax, ds:0B30AACh
0x493BEA: xor     eax, esp
0x493BEC: push    eax
0x493BED: lea     eax, [esp+28h+var_C]
0x493BF1: mov     large fs:0, eax
0x493BF7: mov     ebx, [esp+28h+arg_0]
0x493BFB: test    ebx, ebx
0x493BFD: jz      loc_493D1E
0x493C03: mov     eax, [esp+28h+arg_4]
0x493C07: test    eax, eax
0x493C09: jz      loc_493D1E
0x493C0F: cmp     eax, 4
0x493C12: jb      loc_493D1E
0x493C18: mov     ebp, [ebx]
0x493C1A: cmp     ebp, 0F4240h
0x493C20: mov     [esp+28h+var_10], ebp
0x493C24: ja      loc_493D1E
0x493C2A: cmp     eax, 8
0x493C2D: jb      loc_493D1E
0x493C33: mov     edi, [ebx+4]
0x493C36: push    10h; Size
0x493C38: mov     esi, 8
0x493C3D: call    FormHeapAlloc
0x493C42: add     esp, 4
0x493C45: mov     [esp+28h+var_14], eax
0x493C49: test    eax, eax
0x493C4B: mov     [esp+28h+var_4], 0
0x493C53: jz      short loc_493C62
0x493C55: push    edi
0x493C56: push    ebp
0x493C57: mov     ecx, eax
0x493C59: call    sub_493AD0
0x493C5E: mov     edi, eax
0x493C60: jmp     short loc_493C64
0x493C62: xor     edi, edi
0x493C64: xor     edx, edx
0x493C66: test    ebp, ebp
0x493C68: jbe     short loc_493CDE
0x493C6A: mov     eax, 4
0x493C6F: sub     eax, ebx
0x493C71: mov     [esp+28h+var_14], eax
0x493C75: jmp     short loc_493C7B
0x493C77: mov     ebx, [esp+28h+arg_0]
0x493C7B: xor     eax, eax
0x493C7D: lea     ecx, [esi+ebx]
0x493C80: mov     ebx, [esp+28h+var_14]
0x493C84: add     ebx, ecx
0x493C86: cmp     ebx, [esp+28h+arg_4]
0x493C8A: ja      short loc_493CF4
0x493C8C: mov     ebx, [edi+8]
0x493C8F: fld     dword ptr [ecx]
0x493C91: mov     ebx, [ebx+edx*4]
0x493C94: fstp    dword ptr [eax+ebx]
0x493C97: add     eax, 4
0x493C9A: add     esi, 4
0x493C9D: add     ecx, 4
0x493CA0: cmp     eax, 40h ; '@'
0x493CA3: jb      short loc_493C80
0x493CA5: mov     ecx, [esp+28h+arg_0]
0x493CA9: xor     eax, eax
0x493CAB: add     ecx, esi
0x493CAD: lea     ecx, [ecx+0]
0x493CB0: mov     ebx, [esp+28h+var_14]
0x493CB4: add     ebx, ecx
0x493CB6: cmp     ebx, [esp+28h+arg_4]
0x493CBA: ja      short loc_493D34
0x493CBC: mov     ebx, [edi+0Ch]
0x493CBF: fld     dword ptr [ecx]
0x493CC1: mov     ebx, [ebx+edx*4]
0x493CC4: fstp    dword ptr [eax+ebx]
0x493CC7: add     eax, 4
0x493CCA: add     esi, 4
0x493CCD: add     ecx, 4
0x493CD0: cmp     eax, 44h ; 'D'
0x493CD3: jb      short loc_493CB0
0x493CD5: add     edx, 1
0x493CD8: cmp     edx, [esp+28h+var_10]
0x493CDC: jb      short loc_493C77
0x493CDE: mov     eax, edi
0x493CE0: mov     ecx, [esp+28h+var_C]
0x493CE4: mov     large fs:0, ecx
0x493CEB: pop     ecx
0x493CEC: pop     edi
0x493CED: pop     esi
0x493CEE: pop     ebp
0x493CEF: pop     ebx
0x493CF0: add     esp, 14h
0x493CF3: retn
0x493CF4: test    edi, edi
0x493CF6: jz      short loc_493D1E
0x493CF8: mov     edx, [edi+8]
0x493CFB: mov     eax, [edx]
0x493CFD: push    eax
0x493CFE: call    FormHeapFree
0x493D03: mov     ecx, [edi+8]
0x493D06: push    ecx
0x493D07: call    FormHeapFree
0x493D0C: mov     edx, [edi+0Ch]
0x493D0F: push    edx
0x493D10: call    FormHeapFree
0x493D15: push    edi
0x493D16: call    FormHeapFree
0x493D1B: add     esp, 10h
0x493D1E: xor     eax, eax
0x493D20: mov     ecx, [esp+28h+var_C]
0x493D24: mov     large fs:0, ecx
0x493D2B: pop     ecx
0x493D2C: pop     edi
0x493D2D: pop     esi
0x493D2E: pop     ebp
0x493D2F: pop     ebx
0x493D30: add     esp, 14h
0x493D33: retn
0x493D34: mov     eax, [edi+8]
0x493D37: mov     ecx, [eax]
0x493D39: push    ecx
0x493D3A: call    FormHeapFree
0x493D3F: mov     edx, [edi+8]
0x493D42: push    edx
0x493D43: call    FormHeapFree
0x493D48: mov     eax, [edi+0Ch]
0x493D4B: push    eax
0x493D4C: jmp     short loc_493D10
