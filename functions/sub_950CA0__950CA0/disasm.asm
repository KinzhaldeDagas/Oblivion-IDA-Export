0x950CA0: push    ebp
0x950CA1: mov     ebp, esp
0x950CA3: and     esp, 0FFFFFFF0h
0x950CA6: sub     esp, 224h
0x950CAC: mov     eax, ds:0B30AACh
0x950CB1: mov     [esp+224h+var_4], eax
0x950CB8: mov     eax, [ebp+arg_4]
0x950CBB: dec     eax
0x950CBC: push    ebx
0x950CBD: push    esi
0x950CBE: push    edi
0x950CBF: mov     [esp+230h+var_218], ecx
0x950CC3: js      short loc_950D2F
0x950CC5: mov     edi, [ebp+arg_8]
0x950CC8: inc     eax
0x950CC9: mov     [esp+230h+var_21C], eax
0x950CCD: lea     ecx, [ecx+0]
0x950CD0: mov     eax, [ebp+arg_0]
0x950CD3: movzx   esi, word ptr [eax]
0x950CD6: mov     eax, esi
0x950CD8: cdq
0x950CD9: mov     ebx, 3
0x950CDE: idiv    ebx
0x950CE0: mov     ecx, [esp+230h+var_218]
0x950CE4: mov     ecx, [ecx+18h]
0x950CE7: lea     ebx, [esp+230h+var_210]
0x950CEB: push    ebx
0x950CEC: mov     ebx, [esp+234h+var_218]
0x950CF0: mov     ebx, [ebx+1Ch]
0x950CF3: mov     eax, [ebx+eax*4]
0x950CF6: mov     [esp+234h+var_214], edx
0x950CFA: mov     edx, [ecx]
0x950CFC: push    eax
0x950CFD: call    dword ptr [edx+28h]
0x950D00: mov     ecx, [esp+230h+var_214]
0x950D04: inc     ecx
0x950D05: shl     ecx, 4
0x950D08: movaps  xmm0, xmmword ptr [ecx+eax]
0x950D0C: mov     ecx, [ebp+arg_0]
0x950D0F: mov     eax, [esp+230h+var_21C]
0x950D13: or      esi, 3F000000h
0x950D19: movaps  xmmword ptr [edi], xmm0
0x950D1C: mov     [edi+0Ch], esi
0x950D1F: add     ecx, 2
0x950D22: add     edi, 10h
0x950D25: dec     eax
0x950D26: mov     [ebp+arg_0], ecx
0x950D29: mov     [esp+230h+var_21C], eax
0x950D2D: jnz     short loc_950CD0
0x950D2F: mov     ecx, [esp+230h+var_4]
0x950D36: call    @__security_check_cookie@4; __security_check_cookie(x)
0x950D3B: pop     edi
0x950D3C: pop     esi
0x950D3D: pop     ebx
0x950D3E: mov     esp, ebp
0x950D40: pop     ebp
0x950D41: retn    0Ch
