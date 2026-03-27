0x7759A0: push    ebx
0x7759A1: mov     ebx, [esp+4+arg_0]
0x7759A5: mov     eax, [ebx]
0x7759A7: push    ebp
0x7759A8: push    esi
0x7759A9: push    edi
0x7759AA: mov     edi, ecx
0x7759AC: mov     [edi], eax
0x7759AE: mov     ecx, [ebx+4]
0x7759B1: mov     [edi+4], ecx
0x7759B4: mov     edx, [ebx+0Ch]
0x7759B7: mov     [edi+0Ch], edx
0x7759BA: lea     esi, [edi+10h]
0x7759BD: xor     ebp, ebp
0x7759BF: mov     [esi+0Ch], ebp
0x7759C2: mov     [esi+4], ebp
0x7759C5: mov     [esi+8], ebp
0x7759C8: mov     dword ptr [esi], offset ??_7?$NiTPointerList@I@@6B@; const NiTPointerList<uint>::`vftable'
0x7759CE: mov     eax, [esi]
0x7759D0: mov     edx, [eax+4]
0x7759D3: mov     ecx, esi
0x7759D5: call    edx
0x7759D7: mov     ecx, [ebx+8]
0x7759DA: mov     [eax+8], ecx
0x7759DD: mov     [eax+4], ebp
0x7759E0: mov     edx, [esi+4]
0x7759E3: mov     [eax], edx
0x7759E5: mov     ecx, [esi+4]
0x7759E8: cmp     ecx, ebp
0x7759EA: jz      short loc_7759F1
0x7759EC: mov     [ecx+4], eax
0x7759EF: jmp     short loc_7759F4
0x7759F1: mov     [esi+8], eax
0x7759F4: add     dword ptr [esi+0Ch], 1
0x7759F8: mov     [esi+4], eax
0x7759FB: mov     eax, [ebx+0Ch]
0x7759FE: push    eax
0x7759FF: call    sub_774EE0
0x775A04: add     esp, 4
0x775A07: mov     [edi+8], eax
0x775A0A: mov     eax, edi
0x775A0C: pop     edi
0x775A0D: pop     esi
0x775A0E: pop     ebp
0x775A0F: pop     ebx
0x775A10: retn    4
