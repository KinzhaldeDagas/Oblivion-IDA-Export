0x6E7C20: sub     esp, 0Ch
0x6E7C23: push    ebx
0x6E7C24: mov     ebx, ecx
0x6E7C26: fld     dword ptr [ebx+8]
0x6E7C29: fld     [esp+10h+arg_0]
0x6E7C2D: fld     st
0x6E7C2F: fucomp  st(2)
0x6E7C31: fnstsw  ax
0x6E7C33: fstp    st(1)
0x6E7C35: test    ah, 44h
0x6E7C38: jp      short loc_6E7C6B
0x6E7C3A: mov     bl, [ebx+0Ch]
0x6E7C3D: fstp    st
0x6E7C3F: cmp     bl, ds:0A7C6ACh
0x6E7C45: jnz     short loc_6E7C57
0x6E7C47: mov     eax, [esp+10h+arg_8]
0x6E7C4B: mov     byte ptr [eax], 0
0x6E7C4E: xor     al, al
0x6E7C50: pop     ebx
0x6E7C51: add     esp, 0Ch
0x6E7C54: retn    0Ch
0x6E7C57: mov     edx, [esp+10h+arg_8]
0x6E7C5B: test    bl, bl
0x6E7C5D: setnz   cl
0x6E7C60: mov     [edx], cl
0x6E7C62: mov     al, 1
0x6E7C64: pop     ebx
0x6E7C65: add     esp, 0Ch
0x6E7C68: retn    0Ch
0x6E7C6B: mov     eax, [ebx+10h]
0x6E7C6E: test    eax, eax
0x6E7C70: jz      loc_6E7D6E
0x6E7C76: mov     dl, [eax+14h]
0x6E7C79: mov     ecx, [eax+10h]
0x6E7C7C: push    ebp
0x6E7C7D: mov     ebp, [eax+0Ch]
0x6E7C80: push    edi
0x6E7C81: mov     edi, [eax+8]
0x6E7C84: test    edi, edi
0x6E7C86: mov     [esp+18h+var_8], dl
0x6E7C8A: mov     [esp+18h+var_4], ebp
0x6E7C8E: jbe     loc_6E7D6C
0x6E7C94: mov     edx, dword ptr [esp+18h+var_8]
0x6E7C98: mov     eax, [ebx+14h]
0x6E7C9B: push    esi
0x6E7C9C: push    edx; char
0x6E7C9D: lea     esi, [ebx+14h]
0x6E7CA0: push    esi; int
0x6E7CA1: push    edi; int
0x6E7CA2: push    ecx; int
0x6E7CA3: push    ebp; int
0x6E7CA4: push    ecx
0x6E7CA5: fstp    [esp+34h+var_34]; float
0x6E7CA8: mov     [ebx+18h], eax
0x6E7CAB: call    sub_6BDBA0
0x6E7CB0: mov     esi, [esi]
0x6E7CB2: add     esp, 18h
0x6E7CB5: cmp     al, [ebx+1Ch]
0x6E7CB8: mov     [esp+1Ch+var_A], al
0x6E7CBC: mov     [esp+1Ch+var_B], al
0x6E7CC0: jnz     loc_6E7D55
0x6E7CC6: mov     edx, [ebx+18h]
0x6E7CC9: test    al, al
0x6E7CCB: setz    al
0x6E7CCE: cmp     edx, esi
0x6E7CD0: mov     [esp+1Ch+var_9], al
0x6E7CD4: jz      short loc_6E7D2F
0x6E7CD6: lea     ecx, [edx+1]
0x6E7CD9: cmp     ecx, esi
0x6E7CDB: jbe     short loc_6E7D2F
0x6E7CDD: cmp     ecx, edi
0x6E7CDF: jnb     short loc_6E7D08
0x6E7CE1: movzx   ebp, [esp+1Ch+var_8]
0x6E7CE6: mov     edx, [esp+1Ch+var_4]
0x6E7CEA: mov     eax, ebp
0x6E7CEC: imul    eax, ecx
0x6E7CEF: lea     edx, [eax+edx+4]
0x6E7CF3: mov     al, [esp+1Ch+var_9]
0x6E7CF7: cmp     [edx], al
0x6E7CF9: jz      short loc_6E7D51
0x6E7CFB: add     ecx, 1
0x6E7CFE: add     edx, ebp
0x6E7D00: cmp     ecx, edi
0x6E7D02: jb      short loc_6E7CF7
0x6E7D04: mov     ebp, [esp+1Ch+var_4]
0x6E7D08: cmp     [esp+1Ch+var_A], al
0x6E7D0C: jz      short loc_6E7D55
0x6E7D0E: xor     ecx, ecx
0x6E7D10: test    esi, esi
0x6E7D12: jbe     short loc_6E7D55
0x6E7D14: movzx   edi, [esp+1Ch+var_8]
0x6E7D19: lea     edx, [ebp+4]
0x6E7D1C: lea     esp, [esp+0]
0x6E7D20: cmp     [edx], al
0x6E7D22: jz      short loc_6E7D51
0x6E7D24: add     ecx, 1
0x6E7D27: add     edx, edi
0x6E7D29: cmp     ecx, esi
0x6E7D2B: jb      short loc_6E7D20
0x6E7D2D: jmp     short loc_6E7D55
0x6E7D2F: lea     ecx, [edx+1]
0x6E7D32: cmp     ecx, esi
0x6E7D34: jnb     short loc_6E7D55
0x6E7D36: cmp     ecx, edi
0x6E7D38: jnb     short loc_6E7D55
0x6E7D3A: movzx   edx, [esp+1Ch+var_8]
0x6E7D3F: imul    edx, ecx
0x6E7D42: cmp     [edx+ebp+4], al
0x6E7D46: jz      short loc_6E7D51
0x6E7D48: add     ecx, 1
0x6E7D4B: cmp     ecx, esi
0x6E7D4D: jb      short loc_6E7D36
0x6E7D4F: jmp     short loc_6E7D55
0x6E7D51: mov     [esp+1Ch+var_B], al
0x6E7D55: cmp     [esp+1Ch+var_B], 0
0x6E7D5A: fld     [esp+1Ch+arg_0]
0x6E7D5E: mov     cl, [esp+1Ch+var_A]
0x6E7D62: setnz   al
0x6E7D65: mov     [ebx+0Ch], al
0x6E7D68: mov     [ebx+1Ch], cl
0x6E7D6B: pop     esi
0x6E7D6C: pop     edi
0x6E7D6D: pop     ebp
0x6E7D6E: mov     al, [ebx+0Ch]
0x6E7D71: cmp     al, ds:0A7C6ACh
0x6E7D77: jnz     short loc_6E7D8B
0x6E7D79: mov     edx, [esp+10h+arg_8]
0x6E7D7D: fstp    st
0x6E7D7F: mov     byte ptr [edx], 0
0x6E7D82: xor     al, al
0x6E7D84: pop     ebx
0x6E7D85: add     esp, 0Ch
0x6E7D88: retn    0Ch
0x6E7D8B: mov     ecx, [esp+10h+arg_8]
0x6E7D8F: test    al, al
0x6E7D91: setnz   al
0x6E7D94: mov     [ecx], al
0x6E7D96: fstp    dword ptr [ebx+8]
0x6E7D99: mov     al, 1
0x6E7D9B: pop     ebx
0x6E7D9C: add     esp, 0Ch
0x6E7D9F: retn    0Ch
