0x430AB0: sub     esp, 218h
0x430AB6: mov     eax, ___security_cookie
0x430ABB: xor     eax, esp
0x430ABD: mov     [esp+218h+var_4], eax
0x430AC4: mov     eax, [esp+218h+arg_0]
0x430ACB: push    ebx
0x430ACC: push    ebp
0x430ACD: push    esi
0x430ACE: push    edi
0x430ACF: mov     edi, ecx
0x430AD1: cmp     dword ptr [edi+1Ch], 0
0x430AD5: mov     [esp+228h+var_214], eax
0x430AD9: jnz     short loc_430AE6
0x430ADB: mov     edx, [edi]
0x430ADD: mov     eax, [edx+18h]
0x430AE0: push    0
0x430AE2: push    0
0x430AE4: call    eax
0x430AE6: xor     esi, esi
0x430AE8: xor     ebp, ebp
0x430AEA: xor     ebx, ebx
0x430AEC: lea     esp, [esp+0]
0x430AF0: mov     eax, [edi+4]
0x430AF3: push    1
0x430AF5: lea     ecx, [esp+22Ch+var_210]
0x430AF9: push    ecx
0x430AFA: push    2
0x430AFC: lea     edx, [esp+234h+var_218]
0x430B00: push    edx
0x430B01: push    edi
0x430B02: mov     [esp+23Ch+var_210], 1
0x430B0A: call    eax
0x430B0C: add     esp, 14h
0x430B0F: add     ebx, eax
0x430B11: cmp     eax, 2
0x430B14: jz      short loc_430B1E
0x430B16: xor     eax, eax
0x430B18: mov     [esp+228h+var_218], eax
0x430B1C: jmp     short loc_430B22
0x430B1E: mov     eax, [esp+228h+var_218]
0x430B22: cmp     ebx, [esp+228h+arg_4]
0x430B29: jbe     short loc_430B31
0x430B2B: xor     eax, eax
0x430B2D: mov     [esp+228h+var_218], eax
0x430B31: mov     [esp+esi*2+228h+var_20C], ax
0x430B36: add     esi, 1
0x430B39: cmp     esi, 104h
0x430B3F: jz      short loc_430B46
0x430B41: test    ax, ax
0x430B44: jnz     short loc_430AF0
0x430B46: test    ebp, ebp
0x430B48: jz      short loc_430B5A
0x430B4A: lea     ecx, [esp+228h+var_20C]
0x430B4E: push    ecx
0x430B4F: mov     ecx, [esp+22Ch+var_214]
0x430B53: call    BSWStringT_Append
0x430B58: jmp     short loc_430B6A
0x430B5A: mov     ecx, [esp+228h+var_214]
0x430B5E: push    0
0x430B60: lea     edx, [esp+22Ch+var_20C]
0x430B64: push    edx
0x430B65: call    BSWStringT_Set
0x430B6A: add     ebp, esi
0x430B6C: cmp     word ptr [esp+228h+var_218], 0
0x430B72: jz      short loc_430B7B
0x430B74: xor     esi, esi
0x430B76: jmp     loc_430AF0
0x430B7B: mov     ecx, [esp+228h+var_4]
0x430B82: pop     edi
0x430B83: pop     esi
0x430B84: mov     eax, ebx
0x430B86: pop     ebp
0x430B87: pop     ebx
0x430B88: xor     ecx, esp
0x430B8A: shr     eax, 1
0x430B8C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x430B91: add     esp, 218h
0x430B97: retn    8
