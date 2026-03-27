0x761E60: sub     esp, 10h
0x761E63: push    ebx
0x761E64: mov     ebx, [esp+14h+arg_C]
0x761E68: mov     eax, ebx
0x761E6A: shr     eax, 2
0x761E6D: not     al
0x761E6F: mov     [esp+14h+var_10], ecx
0x761E73: mov     ecx, [ecx+5D0h]
0x761E79: and     al, 1
0x761E7B: test    bl, 10h
0x761E7E: push    esi; MaxCount
0x761E7F: mov     byte ptr [esp+18h+arg_C], al
0x761E83: mov     [esp+18h+var_4], ecx
0x761E87: mov     esi, 20h ; ' '
0x761E8C: jz      short loc_761E93
0x761E8E: mov     esi, 10h
0x761E93: mov     eax, [esp+18h+arg_14]
0x761E97: test    eax, eax
0x761E99: jnz     short loc_761EDA
0x761E9B: mov     eax, [esp+18h+arg_C]
0x761E9F: push    esi
0x761EA0: push    eax
0x761EA1: call    sub_7751F0
0x761EA6: test    eax, eax
0x761EA8: jnz     short loc_761EDA
0x761EAA: push    0FFh; Src
0x761EAF: push    offset aCreationFail_3; "Creation failed: Could not find desired"...
0x761EB4: push    100h; SizeInBytes
0x761EB9: push    offset byte_B3F828; Dst
0x761EBE: call    _strncpy_s
0x761EC3: push    offset aNidx9rendere_7; "NiDX9Renderer::Initialize> No matching "...
0x761EC8: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x761ECD: add     esp, 14h
0x761ED0: pop     esi
0x761ED1: xor     al, al
0x761ED3: pop     ebx
0x761ED4: add     esp, 10h
0x761ED7: retn    30h ; '0'
0x761EDA: push    ebp
0x761EDB: push    edi; MaxCount
0x761EDC: push    eax
0x761EDD: call    sub_4979E0
0x761EE2: mov     ebp, [esp+24h+arg_18]
0x761EE6: add     esp, 4
0x761EE9: test    ebp, ebp
0x761EEB: mov     edi, eax
0x761EED: mov     [esp+20h+var_C], edi
0x761EF1: jnz     short loc_761F43
0x761EF3: mov     edx, [esp+20h+var_10]
0x761EF7: mov     ecx, ebx
0x761EF9: and     ecx, 8
0x761EFC: push    ecx
0x761EFD: mov     ecx, [edx+5D0h]
0x761F03: push    esi
0x761F04: push    edi
0x761F05: push    edi
0x761F06: call    sub_775280
0x761F0B: mov     ebp, eax
0x761F0D: test    ebp, ebp
0x761F0F: jnz     short loc_761F43
0x761F11: push    0FFh; Src
0x761F16: push    offset aCreationFail_4; "Creation failed: Could not find desired"...
0x761F1B: push    100h; SizeInBytes
0x761F20: push    offset byte_B3F828; Dst
0x761F25: call    _strncpy_s
0x761F2A: push    offset aNidx9rendere_8; "NiDX9Renderer::Initialize> No matching "...
0x761F2F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x761F34: add     esp, 14h
0x761F37: pop     edi
0x761F38: pop     ebp
0x761F39: pop     esi
0x761F3A: xor     al, al
0x761F3C: pop     ebx
0x761F3D: add     esp, 10h
0x761F40: retn    30h ; '0'
0x761F43: mov     esi, [esp+20h+arg_2C]
0x761F47: push    38h ; '8'
0x761F49: push    0
0x761F4B: push    esi
0x761F4C: call    __memset
0x761F51: mov     eax, [esp+2Ch+arg_4]
0x761F55: mov     ecx, [esp+2Ch+arg_8]
0x761F59: mov     [esi+8], edi
0x761F5C: mov     edi, [esp+2Ch+arg_10]
0x761F60: push    edi
0x761F61: mov     [esi], eax
0x761F63: mov     [esi+4], ecx
0x761F66: call    sub_761CE0
0x761F6B: add     esp, 10h
0x761F6E: cmp     eax, 1
0x761F71: mov     [esp+20h+arg_14], eax
0x761F75: mov     [esi+10h], eax
0x761F78: jnz     short loc_761F87
0x761F7A: mov     edx, edi
0x761F7C: and     edx, 7FFFFFFFh
0x761F82: mov     [esi+14h], edx
0x761F85: jmp     short loc_761F8E
0x761F87: mov     dword ptr [esi+14h], 0
0x761F8E: mov     eax, [esp+20h+arg_1C]
0x761F92: not     bl
0x761F94: mov     [esi+28h], ebp
0x761F97: mov     [esi+0Ch], eax
0x761F9A: and     ebx, 1
0x761F9D: test    edi, edi
0x761F9F: mov     [esi+24h], ebx
0x761FA2: movzx   ebx, byte ptr [esp+20h+arg_C]
0x761FA7: mov     [esi+20h], ebx
0x761FAA: jz      short loc_761FB1
0x761FAC: cmp     edi, 1
0x761FAF: jnz     short loc_761FD2
0x761FB1: mov     eax, [esp+20h+arg_20]
0x761FB5: sub     eax, 1
0x761FB8: jz      short loc_761FD2
0x761FBA: sub     eax, 1
0x761FBD: jz      short loc_761FCB
0x761FBF: sub     eax, 1
0x761FC2: jnz     short loc_761FD2
0x761FC4: mov     eax, 3
0x761FC9: jmp     short loc_761FD7
0x761FCB: mov     eax, 2
0x761FD0: jmp     short loc_761FD7
0x761FD2: mov     eax, 1
0x761FD7: mov     edx, [esp+20h+arg_0]
0x761FDB: xor     ecx, ecx
0x761FDD: cmp     edi, 1
0x761FE0: mov     [esi+18h], eax
0x761FE3: mov     eax, [esp+20h+arg_24]
0x761FE7: setz    cl
0x761FEA: lea     edi, [esi+30h]
0x761FED: mov     [edi], eax
0x761FEF: mov     eax, [esp+20h+arg_28]
0x761FF3: push    eax
0x761FF4: mov     [esi+1Ch], edx
0x761FF7: mov     [esi+2Ch], ecx
0x761FFA: call    sub_761DA0
0x761FFF: add     esp, 4
0x762002: lea     edx, [esp+20h+var_8]
0x762006: push    edx
0x762007: mov     edx, [esp+24h+arg_14]
0x76200B: push    edx
0x76200C: mov     edx, [esp+28h+var_C]
0x762010: push    ebx
0x762011: mov     ebx, [esp+2Ch+var_10]
0x762015: mov     [esi+34h], eax
0x762018: mov     eax, ds:0B42154h
0x76201D: mov     ecx, [eax]
0x76201F: push    edx
0x762020: mov     edx, [ebx+5C0h]
0x762026: push    edx
0x762027: mov     edx, [ebx+5BCh]
0x76202D: push    edx
0x76202E: push    eax
0x76202F: mov     eax, [ecx+2Ch]
0x762032: call    eax
0x762034: test    eax, eax
0x762036: jge     short loc_76204E
0x762038: push    offset aNidx9rendere_9; "NiDX9Renderer::Initialize> Could not su"...
0x76203D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x762042: add     esp, 4
0x762045: mov     dword ptr [esi+10h], 0
0x76204C: jmp     short loc_76205D
0x76204E: mov     eax, dword ptr [esp+20h+var_8]
0x762052: cmp     eax, [esi+14h]
0x762055: ja      short loc_76205D
0x762057: add     eax, 0FFFFFFFFh
0x76205A: mov     [esi+14h], eax
0x76205D: mov     eax, [esi+0Ch]
0x762060: test    eax, eax
0x762062: jnz     short loc_76206D
0x762064: mov     dword ptr [esi+0Ch], 1
0x76206B: jmp     short loc_762079
0x76206D: cmp     eax, 3
0x762070: jbe     short loc_762079
0x762072: mov     dword ptr [esi+0Ch], 3
0x762079: cmp     dword ptr [esi+20h], 0
0x76207D: mov     ebp, [edi]
0x76207F: jz      short loc_762089
0x762081: mov     dword ptr [edi], 0
0x762087: jmp     short loc_7620D8
0x762089: mov     ecx, [esi+4]
0x76208C: mov     edx, [esi]
0x76208E: mov     eax, [esi+8]
0x762091: push    edi
0x762092: push    ecx
0x762093: mov     ecx, [ebx+5CCh]
0x762099: push    edx
0x76209A: push    eax
0x76209B: call    sub_775320
0x7620A0: test    eax, eax
0x7620A2: jnz     short loc_7620C7
0x7620A4: push    offset aCreationFail_5; "Creation failed: Could not match desire"...
0x7620A9: call    sub_761A90
0x7620AE: push    offset aNidx9render_10; "NiDX9Renderer::Initialize> Could not fi"...
0x7620B3: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7620B8: add     esp, 8
0x7620BB: pop     edi
0x7620BC: pop     ebp
0x7620BD: pop     esi
0x7620BE: xor     al, al
0x7620C0: pop     ebx
0x7620C1: add     esp, 10h
0x7620C4: retn    30h ; '0'
0x7620C7: cmp     ebp, [edi]
0x7620C9: jz      short loc_7620D8
0x7620CB: push    offset aNidx9render_11; "NiDX9Renderer::Initialize> Could not ma"...
0x7620D0: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7620D5: add     esp, 4
0x7620D8: cmp     dword ptr [esi+20h], 0
0x7620DC: jz      short loc_7620F1
0x7620DE: pop     edi
0x7620DF: pop     ebp
0x7620E0: mov     dword ptr [esi+34h], 80000000h
0x7620E7: pop     esi
0x7620E8: mov     al, 1
0x7620EA: pop     ebx
0x7620EB: add     esp, 10h
0x7620EE: retn    30h ; '0'
0x7620F1: mov     ecx, [esp+20h+var_4]
0x7620F5: mov     edx, [ecx+18h]
0x7620F8: test    [esi+34h], edx
0x7620FB: jnz     short loc_762104
0x7620FD: mov     dword ptr [esi+34h], 1
0x762104: pop     edi
0x762105: pop     ebp
0x762106: pop     esi
0x762107: mov     al, 1
0x762109: pop     ebx
0x76210A: add     esp, 10h
0x76210D: retn    30h ; '0'
