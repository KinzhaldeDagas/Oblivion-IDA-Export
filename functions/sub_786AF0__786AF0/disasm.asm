0x786AF0: push    ebp
0x786AF1: mov     ebp, esp
0x786AF3: and     esp, 0FFFFFFF8h
0x786AF6: sub     esp, 124h
0x786AFC: mov     eax, ds:0B30AACh
0x786B01: xor     eax, esp
0x786B03: mov     [esp+124h+var_4], eax
0x786B0A: mov     eax, [ebp+arg_0]
0x786B0D: cmp     dword ptr [eax+18h], 10h
0x786B11: push    ebx
0x786B12: push    esi
0x786B13: push    edi
0x786B14: mov     ebx, ecx
0x786B16: jb      short loc_786B1D
0x786B18: mov     eax, [eax+4]
0x786B1B: jmp     short loc_786B20
0x786B1D: add     eax, 4
0x786B20: lea     edi, [esp+130h+String]
0x786B24: call    sub_783E20
0x786B29: mov     edi, offset aBezierspline; "BezierSpline"
0x786B2E: lea     esi, [esp+130h+String]
0x786B32: mov     ecx, 0Dh
0x786B37: xor     edx, edx
0x786B39: repe cmpsb
0x786B3B: jnz     loc_786C44
0x786B41: lea     edi, [esp+130h+String]
0x786B45: call    sub_783E20
0x786B4A: mov     esi, eax
0x786B4C: mov     eax, edi
0x786B4E: push    eax; String
0x786B4F: call    _atof
0x786B54: fstp    dword ptr [ebx]
0x786B56: mov     eax, esi
0x786B58: call    sub_783E20
0x786B5D: mov     ecx, edi
0x786B5F: push    ecx; String
0x786B60: mov     esi, eax
0x786B62: call    _atof
0x786B67: fstp    dword ptr [ebx+4]
0x786B6A: mov     eax, esi
0x786B6C: call    sub_783E20
0x786B71: mov     edx, edi
0x786B73: push    edx; String
0x786B74: mov     esi, eax
0x786B76: call    _atof
0x786B7B: fstp    dword ptr [ebx+8]
0x786B7E: add     esp, 0Ch
0x786B81: mov     eax, esi
0x786B83: call    sub_783E20
0x786B88: cmp     [esp+130h+String], 7Bh ; '{'
0x786B8D: jnz     loc_786C44
0x786B93: call    sub_783E20
0x786B98: mov     esi, eax
0x786B9A: mov     eax, edi
0x786B9C: push    eax; Str
0x786B9D: call    j__atol
0x786BA2: add     esp, 4
0x786BA5: test    eax, eax
0x786BA7: jle     loc_786C44
0x786BAD: mov     [esp+130h+var_120], eax
0x786BB1: lea     edi, [esp+130h+String]
0x786BB5: mov     eax, esi
0x786BB7: call    sub_783E20
0x786BBC: mov     ecx, edi
0x786BBE: push    ecx; String
0x786BBF: mov     esi, eax
0x786BC1: call    _atof
0x786BC6: fstp    [esp+134h+var_110]
0x786BCA: mov     eax, esi
0x786BCC: call    sub_783E20
0x786BD1: mov     edx, edi
0x786BD3: push    edx; String
0x786BD4: mov     esi, eax
0x786BD6: call    _atof
0x786BDB: fstp    [esp+138h+var_10C]
0x786BDF: mov     eax, esi
0x786BE1: call    sub_783E20
0x786BE6: mov     esi, eax
0x786BE8: mov     eax, edi
0x786BEA: push    eax; String
0x786BEB: call    _atof
0x786BF0: fstp    [esp+13Ch+var_118]
0x786BF4: mov     eax, esi
0x786BF6: call    sub_783E20
0x786BFB: mov     ecx, edi
0x786BFD: push    ecx; String
0x786BFE: mov     esi, eax
0x786C00: call    _atof
0x786C05: fstp    [esp+140h+var_114]
0x786C09: mov     eax, esi
0x786C0B: call    sub_783E20
0x786C10: mov     edx, edi
0x786C12: push    edx; String
0x786C13: mov     esi, eax
0x786C15: call    _atof
0x786C1A: fstp    [esp+144h+var_11C]
0x786C1E: fld     [esp+144h+var_11C]
0x786C22: add     esp, 10h
0x786C25: fstp    [esp+134h+var_134]
0x786C28: lea     eax, [esp+134h+var_118]
0x786C2C: push    eax
0x786C2D: lea     ecx, [esp+138h+var_110]
0x786C31: push    ecx
0x786C32: mov     ecx, ebx
0x786C34: call    sub_7860D0
0x786C39: sub     [esp+130h+var_120], 1
0x786C3E: jnz     loc_786BB1
0x786C44: mov     ecx, [esp+130h+var_4]
0x786C4B: pop     edi
0x786C4C: pop     esi
0x786C4D: pop     ebx
0x786C4E: xor     ecx, esp
0x786C50: call    @__security_check_cookie@4; __security_check_cookie(x)
0x786C55: mov     esp, ebp
0x786C57: pop     ebp
0x786C58: retn    4
