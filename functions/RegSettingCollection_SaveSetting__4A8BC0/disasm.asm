0x4A8BC0: sub     esp, 4Ch
0x4A8BC3: mov     eax, ds:0B30AACh
0x4A8BC8: xor     eax, esp
0x4A8BCA: mov     [esp+4Ch+var_4], eax
0x4A8BCE: push    ebx
0x4A8BCF: mov     ebx, [esp+50h+lpData]
0x4A8BD3: push    esi
0x4A8BD4: mov     esi, [ebx+4]
0x4A8BD7: xor     al, al
0x4A8BD9: test    esi, esi
0x4A8BDB: push    edi
0x4A8BDC: mov     edi, ecx
0x4A8BDE: mov     [esp+58h+var_4A], al
0x4A8BE2: jz      loc_4A8C78
0x4A8BE8: cmp     dword ptr [edi+108h], 0
0x4A8BEF: setz    al
0x4A8BF2: test    al, al
0x4A8BF4: mov     [esp+58h+var_49], al
0x4A8BF8: jz      short loc_4A8C03
0x4A8BFA: mov     eax, [edi]
0x4A8BFC: mov     edx, [eax+14h]
0x4A8BFF: push    1
0x4A8C01: call    edx
0x4A8C03: cmp     dword ptr [edi+108h], 0
0x4A8C0A: jz      short loc_4A8C64
0x4A8C0C: mov     ecx, ebx
0x4A8C0E: call    Setting_GetValueSize?
0x4A8C13: push    esi
0x4A8C14: mov     [esp+5Ch+cbData], eax
0x4A8C18: call    Setting_GetTypeFromName
0x4A8C1D: add     esp, 4
0x4A8C20: cmp     eax, 1
0x4A8C23: jnz     short loc_4A8C46
0x4A8C25: push    ebp
0x4A8C26: lea     ebp, [esp+5Ch+var_44]
0x4A8C2A: mov     ecx, esi
0x4A8C2C: sub     ebp, esi
0x4A8C2E: mov     edi, edi
0x4A8C30: mov     dl, [ecx]
0x4A8C32: mov     [ecx+ebp], dl
0x4A8C35: add     ecx, 1
0x4A8C38: test    dl, dl
0x4A8C3A: jnz     short loc_4A8C30
0x4A8C3C: mov     [esp+5Ch+var_44], 73h ; 's'
0x4A8C41: lea     esi, [esp+5Ch+var_44]
0x4A8C45: pop     ebp
0x4A8C46: mov     edx, [esp+58h+cbData]
0x4A8C4A: mov     ecx, [edi+108h]
0x4A8C50: push    edx; cbData
0x4A8C51: push    ebx; lpData
0x4A8C52: push    eax; dwType
0x4A8C53: push    0; Reserved
0x4A8C55: push    esi; lpValueName
0x4A8C56: push    ecx; hKey
0x4A8C57: call    dword ptr ds:0A28000h
0x4A8C5D: test    eax, eax
0x4A8C5F: setz    [esp+58h+var_4A]
0x4A8C64: cmp     [esp+58h+var_49], 0
0x4A8C69: jz      short loc_4A8C74
0x4A8C6B: mov     eax, [edi]
0x4A8C6D: mov     edx, [eax+18h]
0x4A8C70: mov     ecx, edi
0x4A8C72: call    edx
0x4A8C74: mov     al, [esp+58h+var_4A]
0x4A8C78: mov     ecx, [esp+58h+var_4]
0x4A8C7C: pop     edi
0x4A8C7D: pop     esi
0x4A8C7E: pop     ebx
0x4A8C7F: xor     ecx, esp
0x4A8C81: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A8C86: add     esp, 4Ch
0x4A8C89: retn    4
