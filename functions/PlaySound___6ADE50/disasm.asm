0x6ADE50: push    0FFFFFFFFh
0x6ADE52: push    offset PlaySound???_SEH
0x6ADE57: mov     eax, large fs:0
0x6ADE5D: push    eax
0x6ADE5E: sub     esp, 110h
0x6ADE64: mov     eax, ds:0B30AACh
0x6ADE69: xor     eax, esp
0x6ADE6B: mov     [esp+11Ch+var_10], eax
0x6ADE72: push    ebx
0x6ADE73: push    ebp
0x6ADE74: push    esi
0x6ADE75: push    edi
0x6ADE76: mov     eax, ds:0B30AACh
0x6ADE7B: xor     eax, esp
0x6ADE7D: push    eax
0x6ADE7E: lea     eax, [esp+130h+var_C]
0x6ADE85: mov     large fs:0, eax
0x6ADE8B: cmp     byte ptr ds:0B16178h, 0
0x6ADE92: mov     eax, [esp+130h+arg_0]
0x6ADE99: mov     ebx, ecx
0x6ADE9B: mov     [esp+130h+var_11C], eax
0x6ADE9F: jnz     short loc_6ADED0
0x6ADEA1: push    4; Size
0x6ADEA3: call    FormHeapAlloc
0x6ADEA8: add     esp, 4
0x6ADEAB: mov     [esp+130h+var_11C], eax
0x6ADEAF: test    eax, eax
0x6ADEB1: mov     [esp+130h+var_4], 0
0x6ADEBC: jz      loc_6AE070
0x6ADEC2: push    0
0x6ADEC4: mov     ecx, eax
0x6ADEC6: call    unknown_libname_1
0x6ADECB: jmp     loc_6AE072
0x6ADED0: mov     ecx, ds:0B33A98h
0x6ADED6: push    eax
0x6ADED7: mov     [esp+134h+var_118], 0
0x6ADEDF: call    sub_447490
0x6ADEE4: mov     ebp, eax
0x6ADEE6: test    ebp, ebp
0x6ADEE8: jz      loc_6AE070
0x6ADEEE: mov     eax, ds:0A7712Ch
0x6ADEF3: mov     ecx, ds:0A77130h
0x6ADEF9: mov     edx, ds:0A77134h
0x6ADEFF: mov     [esp+130h+var_114], eax
0x6ADF03: mov     [esp+130h+var_110], ecx
0x6ADF07: mov     [esp+130h+var_10C], edx
0x6ADF0B: mov     eax, [ebp+28h]
0x6ADF0E: test    eax, eax
0x6ADF10: jnz     short loc_6ADF17
0x6ADF12: mov     eax, offset EmptyString
0x6ADF17: mov     edx, eax
0x6ADF19: lea     esp, [esp+0]
0x6ADF20: mov     cl, [eax]
0x6ADF22: add     eax, 1
0x6ADF25: test    cl, cl
0x6ADF27: jnz     short loc_6ADF20
0x6ADF29: lea     edi, [esp+130h+var_114]
0x6ADF2D: sub     eax, edx
0x6ADF2F: add     edi, 0FFFFFFFFh
0x6ADF32: mov     cl, [edi+1]
0x6ADF35: add     edi, 1
0x6ADF38: test    cl, cl
0x6ADF3A: jnz     short loc_6ADF32
0x6ADF3C: mov     ecx, eax
0x6ADF3E: shr     ecx, 2
0x6ADF41: mov     esi, edx
0x6ADF43: rep movsd
0x6ADF45: mov     ecx, eax
0x6ADF47: and     ecx, 3
0x6ADF4A: cmp     [esp+130h+arg_8], 0
0x6ADF52: rep movsb
0x6ADF54: mov     esi, [ebp+0Ch]
0x6ADF57: jz      short loc_6ADF6A
0x6ADF59: mov     esi, [ebx+0B4h]
0x6ADF5F: lea     eax, [esi+1]
0x6ADF62: mov     [ebx+0B4h], eax
0x6ADF68: jmp     short loc_6ADF7A
0x6ADF6A: push    esi
0x6ADF6B: mov     ecx, ebx
0x6ADF6D: call    sub_6AB130
0x6ADF72: test    eax, eax
0x6ADF74: jnz     loc_6AE070
0x6ADF7A: mov     ecx, [esp+130h+arg_4]
0x6ADF81: push    esi
0x6ADF82: push    ecx
0x6ADF83: lea     edx, [esp+138h+var_114]
0x6ADF87: push    edx
0x6ADF88: lea     eax, [esp+13Ch+var_118]
0x6ADF8C: push    eax
0x6ADF8D: mov     ecx, ebx
0x6ADF8F: call    sub_6AC610
0x6ADF94: test    eax, eax
0x6ADF96: jnz     loc_6AE070
0x6ADF9C: mov     al, [ebp+39h]
0x6ADF9F: test    al, al
0x6ADFA1: mov     esi, [esp+130h+var_118]
0x6ADFA5: jz      short loc_6ADFDB
0x6ADFA7: mov     cl, [ebp+38h]
0x6ADFAA: test    cl, cl
0x6ADFAC: jz      short loc_6ADFDB
0x6ADFAE: movzx   edx, al
0x6ADFB1: imul    edx, 64h ; 'd'
0x6ADFB4: movzx   eax, cl
0x6ADFB7: mov     [esp+130h+var_118], edx
0x6ADFBB: sub     esp, 8
0x6ADFBE: fild    [esp+138h+var_118]
0x6ADFC2: lea     eax, [eax+eax*4]
0x6ADFC5: mov     [esp+138h+var_118], eax
0x6ADFC9: mov     ecx, esi
0x6ADFCB: fstp    [esp+138h+var_134]; float
0x6ADFCF: fild    [esp+138h+var_118]
0x6ADFD3: fstp    [esp+138h+var_138]; float
0x6ADFD6: call    sub_6B6C60
0x6ADFDB: movzx   eax, word ptr [ebp+40h]
0x6ADFDF: push    eax
0x6ADFE0: mov     ecx, esi
0x6ADFE2: call    sub_6A90A0
0x6ADFE7: mov     ecx, [esp+130h+var_11C]
0x6ADFEB: push    ecx
0x6ADFEC: mov     ecx, esi
0x6ADFEE: call    sub_6B6770
0x6ADFF3: mov     eax, [esi+0Ch]
0x6ADFF6: push    eax; ArgList
0x6ADFF7: push    esi; int
0x6ADFF8: mov     ecx, ebx
0x6ADFFA: call    sub_6ACCA0
0x6ADFFF: movzx   edx, byte ptr [ebp+43h]
0x6AE003: mov     [esp+130h+var_11C], edx
0x6AE007: push    ecx
0x6AE008: fild    [esp+134h+var_11C]
0x6AE00C: mov     ecx, esi
0x6AE00E: fld     qword ptr ds:0A771C8h
0x6AE014: fmul    st(1), st
0x6AE016: fxch    st(1)
0x6AE018: fstp    [esp+134h+var_11C]
0x6AE01C: fld     [esp+134h+var_11C]
0x6AE020: fstp    dword ptr [esi+2Ch]
0x6AE023: movzx   eax, byte ptr [ebp+42h]
0x6AE027: mov     [esp+134h+var_11C], eax
0x6AE02B: fild    [esp+134h+var_11C]
0x6AE02F: fmulp   st(1), st
0x6AE031: fstp    [esp+134h+var_11C]
0x6AE035: fld     [esp+134h+var_11C]
0x6AE039: fstp    dword ptr [esi+30h]
0x6AE03C: fld1
0x6AE03E: fstp    [esp+134h+var_134]; float
0x6AE041: call    sub_6B6F20
0x6AE046: push    4; Size
0x6AE048: call    FormHeapAlloc
0x6AE04D: add     esp, 4
0x6AE050: mov     [esp+130h+var_11C], eax
0x6AE054: test    eax, eax
0x6AE056: mov     [esp+130h+var_4], 1
0x6AE061: jz      short loc_6AE070
0x6AE063: mov     esi, [esi+0Ch]
0x6AE066: push    esi
0x6AE067: mov     ecx, eax
0x6AE069: call    unknown_libname_1
0x6AE06E: jmp     short loc_6AE072
0x6AE070: xor     eax, eax
0x6AE072: mov     ecx, [esp+130h+var_C]
0x6AE079: mov     large fs:0, ecx
0x6AE080: pop     ecx
0x6AE081: pop     edi
0x6AE082: pop     esi
0x6AE083: pop     ebp
0x6AE084: pop     ebx
0x6AE085: mov     ecx, [esp+11Ch+var_10]
0x6AE08C: xor     ecx, esp
0x6AE08E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6AE093: add     esp, 11Ch
0x6AE099: retn    0Ch
