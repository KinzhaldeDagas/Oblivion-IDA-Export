0x925C10: sub     esp, 10h
0x925C13: movzx   eax, word ptr [esp+10h+arg_0]
0x925C18: push    ebx
0x925C19: push    ebp
0x925C1A: push    esi
0x925C1B: mov     esi, ecx
0x925C1D: mov     ecx, [esi+0Ch]
0x925C20: add     eax, ecx
0x925C22: push    edi
0x925C23: movzx   edi, byte ptr [eax]
0x925C26: mov     byte ptr [eax], 0FFh
0x925C29: mov     eax, [esi+3Ch]
0x925C2C: xor     ebp, ebp
0x925C2E: cmp     eax, 2
0x925C31: mov     [esp+20h+arg_0], edi
0x925C35: mov     [esp+20h+var_10], ebp
0x925C39: mov     [esp+20h+var_C], ebp
0x925C3D: mov     [esp+20h+var_8], ebp
0x925C41: mov     [esp+20h+var_4], ebp
0x925C45: jnz     short loc_925C5F
0x925C47: mov     [esp+20h+var_8], 4
0x925C4F: mov     [esp+20h+var_C], 20h ; ' '
0x925C57: mov     [esp+20h+var_4], 1
0x925C5F: mov     ebx, [esi+3Ch]
0x925C62: lea     ecx, [esi+38h]
0x925C65: dec     ebx
0x925C66: mov     eax, ebx
0x925C68: cmp     edi, eax
0x925C6A: mov     [ecx+4], ebx
0x925C6D: jge     short loc_925CA9
0x925C6F: lea     edx, [edi+edi*4]
0x925C72: shl     edx, 2
0x925C75: mov     eax, [ecx]
0x925C77: add     eax, edx
0x925C79: lea     ebx, [eax+14h]
0x925C7C: mov     ebp, [ebx]
0x925C7E: mov     [eax], ebp
0x925C80: mov     ebp, [ebx+4]
0x925C83: mov     [eax+4], ebp
0x925C86: mov     ebp, [ebx+8]
0x925C89: mov     [eax+8], ebp
0x925C8C: mov     ebp, [ebx+0Ch]
0x925C8F: mov     [eax+0Ch], ebp
0x925C92: mov     ebx, [ebx+10h]
0x925C95: mov     [eax+10h], ebx
0x925C98: mov     eax, [ecx+4]
0x925C9B: inc     edi
0x925C9C: add     edx, 14h
0x925C9F: cmp     edi, eax
0x925CA1: jl      short loc_925C75
0x925CA3: mov     edi, [esp+20h+arg_0]
0x925CA7: xor     ebp, ebp
0x925CA9: mov     eax, [ecx]
0x925CAB: lea     edx, [edi+edi*4]
0x925CAE: lea     eax, [eax+edx*4+0Fh]
0x925CB2: and     byte ptr [eax], 0FDh
0x925CB5: mov     eax, [esi+24h]
0x925CB8: lea     ebx, [esi+20h]
0x925CBB: dec     eax
0x925CBC: mov     [ebx+4], eax
0x925CBF: mov     edx, [ecx+4]
0x925CC2: lea     eax, [edx+edx+2]
0x925CC6: mov     edx, [ecx+8]
0x925CC9: and     edx, 3FFFFFFFh
0x925CCF: cmp     eax, edx
0x925CD1: jg      short loc_925CE0
0x925CD3: push    ebp
0x925CD4: push    ebp
0x925CD5: push    14h
0x925CD7: push    ecx
0x925CD8: call    sub_8A6F90
0x925CDD: add     esp, 10h
0x925CE0: mov     eax, [ebx+4]
0x925CE3: mov     edx, [ebx+8]
0x925CE6: lea     ecx, [eax+eax+2]
0x925CEA: and     edx, 3FFFFFFFh
0x925CF0: cmp     ecx, edx
0x925CF2: jg      short loc_925D01
0x925CF4: push    ebp
0x925CF5: push    ebp
0x925CF6: push    20h ; ' '
0x925CF8: push    ebx
0x925CF9: call    sub_8A6F90
0x925CFE: add     esp, 10h
0x925D01: mov     edx, [esi+10h]
0x925D04: dec     edx
0x925D05: js      short loc_925D1F
0x925D07: mov     eax, [esi+0Ch]
0x925D0A: lea     ecx, [eax+edx]
0x925D0D: mov     al, [ecx]
0x925D0F: cmp     al, 0FFh
0x925D11: jz      short loc_925D1C
0x925D13: movzx   eax, al
0x925D16: cmp     eax, edi
0x925D18: jle     short loc_925D1C
0x925D1A: dec     byte ptr [ecx]
0x925D1C: dec     edx
0x925D1D: jns     short loc_925D07
0x925D1F: mov     eax, [esp+20h+var_8]
0x925D23: mov     ebx, [esp+20h+var_C]
0x925D27: mov     edi, [esp+20h+var_4]
0x925D2B: add     eax, 4
0x925D2E: mov     [esp+20h+var_8], eax
0x925D32: mov     eax, [esi+34h]
0x925D35: add     ebx, 30h ; '0'
0x925D38: inc     edi
0x925D39: mov     [esp+20h+var_C], ebx
0x925D3D: mov     [esp+20h+var_4], edi
0x925D41: mov     ecx, [eax+8]
0x925D44: mov     edx, [ecx+1Ch]
0x925D47: mov     edi, [edx+0A0h]
0x925D4D: cmp     edi, ebp
0x925D4F: jz      short loc_925D7E
0x925D51: mov     ecx, edi; lpCriticalSection
0x925D53: call    sub_8A7720
0x925D58: mov     eax, [esi+34h]
0x925D5B: mov     ecx, [eax+8]
0x925D5E: mov     edx, [ecx]
0x925D60: lea     ebx, [esp+20h+var_10]
0x925D64: push    ebx
0x925D65: push    eax
0x925D66: call    dword ptr [edx+10h]
0x925D69: push    edi; lpCriticalSection
0x925D6A: call    dword ptr ds:0A28074h
0x925D70: or      byte ptr [esi+44h], 5
0x925D74: pop     edi
0x925D75: pop     esi
0x925D76: pop     ebp
0x925D77: pop     ebx
0x925D78: add     esp, 10h
0x925D7B: retn    4
0x925D7E: mov     edx, [ecx]
0x925D80: lea     edi, [esp+20h+var_10]
0x925D84: push    edi
0x925D85: push    eax
0x925D86: call    dword ptr [edx+10h]
0x925D89: or      byte ptr [esi+44h], 5
0x925D8D: pop     edi
0x925D8E: pop     esi
0x925D8F: pop     ebp
0x925D90: pop     ebx
0x925D91: add     esp, 10h
0x925D94: retn    4
