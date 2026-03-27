0x8CBEE0: sub     esp, 4Ch
0x8CBEE3: mov     eax, [esp+4Ch+arg_4]
0x8CBEE7: lea     ecx, [esp+4Ch+var_40]
0x8CBEEB: push    ebx
0x8CBEEC: mov     [esp+50h+var_4C], ecx
0x8CBEF0: mov     ecx, [eax+0BCh]
0x8CBEF6: xor     ebx, ebx
0x8CBEF8: cmp     ecx, ebx
0x8CBEFA: mov     edx, 80000010h
0x8CBEFF: push    edi
0x8CBF00: mov     edi, [eax+54h]
0x8CBF03: mov     [esp+54h+var_48], ebx
0x8CBF07: mov     [esp+54h+var_44], edx
0x8CBF0B: jle     loc_8CC003
0x8CBF11: push    ebp
0x8CBF12: mov     ebp, [esp+58h+arg_8]
0x8CBF16: push    esi
0x8CBF17: jmp     short loc_8CBF20
0x8CBF19: align 10h
0x8CBF20: mov     edx, [eax+0B8h]
0x8CBF26: mov     esi, [edx+ebx*4]
0x8CBF29: test    esi, esi
0x8CBF2B: jz      loc_8CBFEA
0x8CBF31: mov     eax, [esi]
0x8CBF33: lea     ecx, [esp+5Ch+var_4C]
0x8CBF37: push    ecx
0x8CBF38: mov     ecx, esi
0x8CBF3A: call    dword ptr [eax+0Ch]
0x8CBF3D: mov     edx, [esp+5Ch+var_48]
0x8CBF41: xor     ecx, ecx
0x8CBF43: test    edx, edx
0x8CBF45: jle     short loc_8CBF6F
0x8CBF47: jmp     short loc_8CBF50
0x8CBF49: align 10h
0x8CBF50: mov     eax, [esp+5Ch+var_4C]
0x8CBF54: mov     eax, [eax+ecx*4]
0x8CBF57: cmp     byte ptr [eax+91h], 0
0x8CBF5E: jnz     short loc_8CBF6A
0x8CBF60: cmp     eax, [esp+5Ch+arg_4]
0x8CBF64: jnz     loc_8CBFEA
0x8CBF6A: inc     ecx
0x8CBF6B: cmp     ecx, edx
0x8CBF6D: jl      short loc_8CBF50
0x8CBF6F: mov     ecx, [ebp+8]
0x8CBF72: mov     eax, [ebp+4]
0x8CBF75: and     ecx, 3FFFFFFFh
0x8CBF7B: cmp     eax, ecx
0x8CBF7D: jnz     short loc_8CBF8A
0x8CBF7F: push    4
0x8CBF81: push    ebp
0x8CBF82: call    sub_8A6EE0
0x8CBF87: add     esp, 8
0x8CBF8A: mov     edx, [ebp+4]
0x8CBF8D: mov     eax, [ebp+0]
0x8CBF90: mov     [eax+edx*4], esi
0x8CBF93: inc     dword ptr [ebp+4]
0x8CBF96: cmp     word ptr [esi+4], 0
0x8CBF9B: jz      short loc_8CBFA1
0x8CBF9D: inc     word ptr [esi+6]
0x8CBFA1: push    esi
0x8CBFA2: mov     ecx, edi
0x8CBFA4: call    sub_8DDC90
0x8CBFA9: mov     byte ptr [edi+27h], 1
0x8CBFAD: cmp     word ptr [edi+22h], 0FFFFh
0x8CBFB3: jnz     short loc_8CBFEA
0x8CBFB5: mov     esi, [esp+5Ch+arg_0]
0x8CBFB9: mov     cx, [esi+54h]
0x8CBFBD: add     esi, 50h ; 'P'
0x8CBFC0: mov     [edi+22h], cx
0x8CBFC4: mov     edx, [esi+8]
0x8CBFC7: mov     eax, [esi+4]
0x8CBFCA: and     edx, 3FFFFFFFh
0x8CBFD0: cmp     eax, edx
0x8CBFD2: jnz     short loc_8CBFDF
0x8CBFD4: push    4
0x8CBFD6: push    esi
0x8CBFD7: call    sub_8A6EE0
0x8CBFDC: add     esp, 8
0x8CBFDF: mov     eax, [esi+4]
0x8CBFE2: mov     ecx, [esi]
0x8CBFE4: mov     [ecx+eax*4], edi
0x8CBFE7: inc     dword ptr [esi+4]
0x8CBFEA: mov     eax, [esp+5Ch+arg_4]
0x8CBFEE: mov     ecx, [eax+0BCh]
0x8CBFF4: inc     ebx
0x8CBFF5: cmp     ebx, ecx
0x8CBFF7: jl      loc_8CBF20
0x8CBFFD: mov     edx, [esp+5Ch+var_44]
0x8CC001: pop     esi
0x8CC002: pop     ebp
0x8CC003: test    edx, edx
0x8CC005: pop     edi
0x8CC006: pop     ebx
0x8CC007: js      short loc_8CC03E
0x8CC009: mov     ecx, large fs:2Ch
0x8CC010: mov     eax, ds:0BA9DE4h
0x8CC015: mov     eax, [ecx+eax*4]
0x8CC018: mov     ecx, [eax+19Ch]
0x8CC01E: test    ecx, ecx
0x8CC020: jnz     short loc_8CC028
0x8CC022: mov     ecx, ds:0BA7D9Ch
0x8CC028: and     edx, 3FFFFFFFh
0x8CC02E: push    14h
0x8CC030: shl     edx, 2
0x8CC033: push    edx
0x8CC034: mov     edx, [esp+54h+var_4C]
0x8CC038: push    edx
0x8CC039: call    sub_8A75D0
0x8CC03E: add     esp, 4Ch
0x8CC041: retn
