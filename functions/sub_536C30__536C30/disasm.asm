0x536C30: push    ebp
0x536C31: mov     ebp, esp
0x536C33: and     esp, 0FFFFFFF0h
0x536C36: mov     eax, [ebp+arg_4]
0x536C39: sub     esp, 14h
0x536C3C: push    ebx
0x536C3D: mov     ebx, [ebp+arg_8]
0x536C40: push    esi
0x536C41: mov     esi, [ebp+arg_0]
0x536C44: mov     edx, [esi+28h]
0x536C47: push    edi
0x536C48: push    edx
0x536C49: push    eax
0x536C4A: call    sub_536BC0
0x536C4F: mov     edi, eax
0x536C51: test    edi, edi
0x536C53: jz      loc_536D20
0x536C59: mov     eax, [ebp+arg_C]
0x536C5C: mov     ecx, [esi+20h]
0x536C5F: push    eax
0x536C60: push    ecx
0x536C61: push    ebx
0x536C62: mov     ecx, edi
0x536C64: call    sub_536B30
0x536C69: mov     ebx, eax
0x536C6B: test    ebx, ebx
0x536C6D: jz      loc_536D1E
0x536C73: movaps  xmm0, xmmword ptr [esi]
0x536C76: movaps  xmmword ptr [ebx+10h], xmm0
0x536C7A: mov     ecx, [edi+8]
0x536C7D: cmp     byte ptr [ecx+18h], 1
0x536C81: jnz     loc_536D0D
0x536C87: mov     eax, [ecx+10h]
0x536C8A: add     eax, ecx
0x536C8C: jz      short loc_536D0D
0x536C8E: mov     edx, [eax+50h]
0x536C91: mov     eax, [eax+0Ch]
0x536C94: test    eax, eax
0x536C96: movaps  xmm0, xmmword ptr [edx+0D0h]
0x536C9D: movaps  xmmword ptr [esp+20h+var_14+4], xmm0
0x536CA2: jz      short loc_536D15
0x536CA4: mov     ecx, eax
0x536CA6: call    sub_494F10
0x536CAB: test    eax, eax
0x536CAD: mov     [esp+20h+var_14], eax
0x536CB1: jz      short loc_536D15
0x536CB3: mov     edx, [eax]
0x536CB5: mov     ecx, eax
0x536CB7: mov     eax, [edx+88h]
0x536CBD: call    eax
0x536CBF: test    eax, eax
0x536CC1: jz      short loc_536CEF
0x536CC3: mov     esi, [esi+2Ch]
0x536CC6: cmp     esi, 0FFFFFFFFh
0x536CC9: jz      short loc_536CEF
0x536CCB: mov     edx, [eax]
0x536CCD: mov     ecx, eax
0x536CCF: mov     eax, [edx+9Ch]
0x536CD5: push    esi
0x536CD6: call    eax
0x536CD8: movaps  xmm0, xmmword ptr [esp+20h+var_14+4]
0x536CDD: mov     [ebx+30h], eax
0x536CE0: movaps  xmmword ptr [ebx+20h], xmm0
0x536CE4: mov     eax, edi
0x536CE6: pop     edi
0x536CE7: pop     esi
0x536CE8: pop     ebx
0x536CE9: mov     esp, ebp
0x536CEB: pop     ebp
0x536CEC: retn    10h
0x536CEF: mov     ecx, [esp+20h+var_14]
0x536CF3: mov     edx, [ecx+10h]
0x536CF6: movaps  xmm0, xmmword ptr [esp+20h+var_14+4]
0x536CFB: mov     [ebx+30h], edx
0x536CFE: movaps  xmmword ptr [ebx+20h], xmm0
0x536D02: mov     eax, edi
0x536D04: pop     edi
0x536D05: pop     esi
0x536D06: pop     ebx
0x536D07: mov     esp, ebp
0x536D09: pop     ebp
0x536D0A: retn    10h
0x536D0D: xorps   xmm0, xmm0
0x536D10: movaps  xmmword ptr [esp+20h+var_14+4], xmm0
0x536D15: movaps  xmm0, xmmword ptr [esp+20h+var_14+4]
0x536D1A: movaps  xmmword ptr [ebx+20h], xmm0
0x536D1E: mov     eax, edi
0x536D20: pop     edi
0x536D21: pop     esi
0x536D22: pop     ebx
0x536D23: mov     esp, ebp
0x536D25: pop     ebp
0x536D26: retn    10h
