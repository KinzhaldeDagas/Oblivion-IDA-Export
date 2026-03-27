0x9159D0: push    ebp
0x9159D1: mov     ebp, esp
0x9159D3: and     esp, 0FFFFFFF0h
0x9159D6: sub     esp, 224h
0x9159DC: mov     eax, ds:0B30AACh
0x9159E1: push    ebx
0x9159E2: mov     ebx, large fs:2Ch
0x9159E9: push    esi
0x9159EA: mov     esi, ecx
0x9159EC: mov     ecx, ds:0BA9DE4h
0x9159F2: mov     [esp+22Ch+var_4], eax
0x9159F9: mov     eax, [ebx+ecx*4]
0x9159FC: mov     edx, [eax+1A4h]
0x915A02: push    edi
0x915A03: cmp     edx, [eax+1A8h]
0x915A09: jnb     short loc_915A2F
0x915A0B: mov     edi, eax
0x915A0D: mov     ecx, [edi+1A4h]
0x915A13: mov     dword ptr [ecx], offset aTthkshapecol_0; "TthkShapeCollection::getMaximumProjecti"...
0x915A19: rdtsc
0x915A1B: mov     [esp+230h+var_218], eax
0x915A1F: mov     eax, [esp+230h+var_218]
0x915A23: mov     [ecx+4], eax
0x915A26: add     ecx, 0Ch
0x915A29: mov     [edi+1A4h], ecx
0x915A2F: mov     edx, [esi]
0x915A31: mov     ecx, esi
0x915A33: mov     [esp+230h+var_218], 0FF7FFFFFh
0x915A3B: call    dword ptr [edx+20h]
0x915A3E: mov     edi, eax
0x915A40: cmp     edi, 0FFFFFFFFh
0x915A43: jz      short loc_915A81
0x915A45: mov     eax, [esi]
0x915A47: lea     ecx, [esp+230h+var_210]
0x915A4B: push    ecx
0x915A4C: push    edi
0x915A4D: mov     ecx, esi
0x915A4F: call    dword ptr [eax+28h]
0x915A52: mov     ecx, [ebp+arg_0]
0x915A55: mov     edx, [eax]
0x915A57: push    ecx
0x915A58: mov     ecx, eax
0x915A5A: call    dword ptr [edx+10h]
0x915A5D: fld     [esp+230h+var_218]
0x915A61: fcomp   st(1)
0x915A63: fnstsw  ax
0x915A65: test    ah, 41h
0x915A68: jz      short loc_915A70
0x915A6A: fstp    [esp+230h+var_218]
0x915A6E: jmp     short loc_915A72
0x915A70: fstp    st
0x915A72: mov     edx, [esi]
0x915A74: push    edi
0x915A75: mov     ecx, esi
0x915A77: call    dword ptr [edx+24h]
0x915A7A: mov     edi, eax
0x915A7C: cmp     edi, 0FFFFFFFFh
0x915A7F: jnz     short loc_915A45
0x915A81: mov     ecx, ds:0BA9DE4h
0x915A87: mov     eax, [ebx+ecx*4]
0x915A8A: mov     edx, [eax+1A4h]
0x915A90: cmp     edx, [eax+1A8h]
0x915A96: jnb     short loc_915ABC
0x915A98: mov     esi, eax
0x915A9A: mov     ecx, [esi+1A4h]
0x915AA0: mov     dword ptr [ecx], offset aEt; "Et"
0x915AA6: rdtsc
0x915AA8: mov     [esp+230h+var_214], eax
0x915AAC: mov     eax, [esp+230h+var_214]
0x915AB0: mov     [ecx+4], eax
0x915AB3: add     ecx, 0Ch
0x915AB6: mov     [esi+1A4h], ecx
0x915ABC: mov     ecx, [esp+230h+var_4]
0x915AC3: fld     [esp+230h+var_218]
0x915AC7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x915ACC: pop     edi
0x915ACD: pop     esi
0x915ACE: pop     ebx
0x915ACF: mov     esp, ebp
0x915AD1: pop     ebp
0x915AD2: retn    4
