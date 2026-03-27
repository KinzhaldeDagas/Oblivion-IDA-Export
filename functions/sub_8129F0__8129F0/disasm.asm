0x8129F0: push    0FFFFFFFFh
0x8129F2: push    offset SEH_8129F0
0x8129F7: mov     eax, large fs:0
0x8129FD: push    eax
0x8129FE: push    ecx
0x8129FF: push    ebx
0x812A00: push    ebp
0x812A01: push    esi
0x812A02: push    edi
0x812A03: mov     eax, ds:0B30AACh
0x812A08: xor     eax, esp
0x812A0A: push    eax
0x812A0B: lea     eax, [esp+24h+var_C]
0x812A0F: mov     large fs:0, eax
0x812A15: mov     esi, ecx
0x812A17: mov     [esp+24h+var_10], esi
0x812A1B: xor     ebp, ebp
0x812A1D: mov     [esi], ebp
0x812A1F: mov     [esp+24h+var_4], ebp
0x812A23: mov     [esi+4], ebp
0x812A26: mov     [esi+8], ebp
0x812A29: lea     ecx, [esi+18h]
0x812A2C: mov     byte ptr [esp+24h+var_4], 2
0x812A31: call    sub_7C28E0
0x812A36: mov     al, [esp+24h+arg_C]
0x812A3A: mov     ebx, [esp+24h+arg_0]
0x812A3E: mov     [esi+40h], al
0x812A41: mov     cx, [ebx+2Ch]
0x812A45: mov     [esi+0Ch], cx
0x812A49: mov     edi, [esi+4]
0x812A4C: cmp     edi, ebx
0x812A4E: jz      short loc_812A7D
0x812A50: cmp     edi, ebp
0x812A52: jz      short loc_812A70
0x812A54: lea     edx, [edi+4]
0x812A57: push    edx; lpAddend
0x812A58: call    dword ptr ds:0A2807Ch
0x812A5E: test    eax, eax
0x812A60: jnz     short loc_812A70
0x812A62: cmp     edi, ebp
0x812A64: jz      short loc_812A70
0x812A66: mov     eax, [edi]
0x812A68: mov     edx, [eax]
0x812A6A: push    1
0x812A6C: mov     ecx, edi
0x812A6E: call    edx
0x812A70: lea     eax, [ebx+4]
0x812A73: push    eax; lpAddend
0x812A74: mov     [esi+4], ebx
0x812A77: call    dword ptr ds:0A28078h
0x812A7D: mov     edx, [esp+24h+arg_8]
0x812A81: mov     ecx, [esp+24h+arg_4]
0x812A85: movzx   eax, word ptr [esi+0Ch]
0x812A89: mov     [esi+38h], ecx
0x812A8C: mov     [esi+3Ch], edx
0x812A8F: xor     ecx, ecx
0x812A91: mov     edx, 4
0x812A96: mul     edx
0x812A98: seto    cl
0x812A9B: neg     ecx
0x812A9D: or      ecx, eax
0x812A9F: push    ecx; Size
0x812AA0: call    FormHeapAlloc
0x812AA5: mov     [esi+14h], eax
0x812AA8: movzx   eax, word ptr [esi+0Ch]
0x812AAC: xor     ecx, ecx
0x812AAE: mov     edx, 10h
0x812AB3: mul     edx
0x812AB5: seto    cl
0x812AB8: neg     ecx
0x812ABA: or      ecx, eax
0x812ABC: push    ecx; Size
0x812ABD: call    FormHeapAlloc
0x812AC2: add     esp, 8
0x812AC5: mov     ecx, esi
0x812AC7: mov     [esi+10h], eax
0x812ACA: call    sub_812980
0x812ACF: mov     edi, [esi]
0x812AD1: test    edi, edi
0x812AD3: jz      short loc_812AF7
0x812AD5: lea     eax, [edi+4]
0x812AD8: push    eax; lpAddend
0x812AD9: call    dword ptr ds:0A2807Ch
0x812ADF: test    eax, eax
0x812AE1: jnz     short loc_812AF1
0x812AE3: test    edi, edi
0x812AE5: jz      short loc_812AF1
0x812AE7: mov     edx, [edi]
0x812AE9: mov     eax, [edx]
0x812AEB: push    1
0x812AED: mov     ecx, edi
0x812AEF: call    eax
0x812AF1: mov     dword ptr [esi], 0
0x812AF7: cmp     byte ptr [ebx+30h], 1
0x812AFB: mov     edi, [ebx+8]
0x812AFE: push    0D4h ; 'Ô'; Size
0x812B03: jnz     short loc_812B24
0x812B05: call    FormHeapAlloc
0x812B0A: add     esp, 4
0x812B0D: mov     [esp+24h+arg_0], eax
0x812B11: test    eax, eax
0x812B13: mov     byte ptr [esp+24h+var_4], 3
0x812B18: jz      short loc_812B43
0x812B1A: push    edi
0x812B1B: mov     ecx, eax
0x812B1D: call    sub_864430
0x812B22: jmp     short loc_812B45
0x812B24: call    FormHeapAlloc
0x812B29: add     esp, 4
0x812B2C: mov     [esp+24h+arg_0], eax
0x812B30: test    eax, eax
0x812B32: mov     byte ptr [esp+24h+var_4], 4
0x812B37: jz      short loc_812B43
0x812B39: push    edi
0x812B3A: mov     ecx, eax
0x812B3C: call    sub_8645D0
0x812B41: jmp     short loc_812B45
0x812B43: xor     eax, eax
0x812B45: push    eax; a2
0x812B46: mov     ecx, esi; this
0x812B48: mov     byte ptr [esp+28h+var_4], 2
0x812B4D: call    NiSmartPointer_Set??
0x812B52: cmp     dword ptr ds:0B42F48h, 2
0x812B59: jl      short loc_812B69
0x812B5B: cmp     byte ptr ds:0B43070h, 0
0x812B62: jz      short loc_812B69
0x812B64: mov     eax, [ebx+18h]
0x812B67: jmp     short loc_812B6C
0x812B69: mov     eax, [ebx+1Ch]
0x812B6C: test    eax, eax
0x812B6E: jz      short loc_812B78
0x812B70: mov     ecx, [esi]; this
0x812B72: push    eax; a2
0x812B73: call    sub_405680
0x812B78: mov     eax, [ebx+20h]
0x812B7B: test    eax, eax
0x812B7D: jz      short loc_812B87
0x812B7F: mov     ecx, [esi]; this
0x812B81: push    eax; a2
0x812B82: call    sub_405680
0x812B87: push    0B0h ; '°'; Size
0x812B8C: call    FormHeapAlloc
0x812B91: add     esp, 4
0x812B94: mov     [esp+24h+arg_0], eax
0x812B98: test    eax, eax
0x812B9A: mov     byte ptr [esp+24h+var_4], 5
0x812B9F: jz      short loc_812BAC
0x812BA1: mov     ecx, eax; this
0x812BA3: call    ??0TallGrassShaderProperty@@QAE@XZ; TallGrassShaderProperty::TallGrassShaderProperty(void)
0x812BA8: mov     edi, eax
0x812BAA: jmp     short loc_812BAE
0x812BAC: xor     edi, edi
0x812BAE: mov     ebp, [edi+0A4h]
0x812BB4: cmp     ebp, [ebx+14h]
0x812BB7: mov     byte ptr [esp+24h+var_4], 2
0x812BBC: jz      short loc_812BF6
0x812BBE: test    ebp, ebp
0x812BC0: jz      short loc_812BDF
0x812BC2: lea     ecx, [ebp+4]
0x812BC5: push    ecx; lpAddend
0x812BC6: call    dword ptr ds:0A2807Ch
0x812BCC: test    eax, eax
0x812BCE: jnz     short loc_812BDF
0x812BD0: test    ebp, ebp
0x812BD2: jz      short loc_812BDF
0x812BD4: mov     edx, [ebp+0]
0x812BD7: mov     eax, [edx]
0x812BD9: push    1
0x812BDB: mov     ecx, ebp
0x812BDD: call    eax
0x812BDF: mov     eax, [ebx+14h]
0x812BE2: test    eax, eax
0x812BE4: mov     [edi+0A4h], eax
0x812BEA: jz      short loc_812BF6
0x812BEC: add     eax, 4
0x812BEF: push    eax; lpAddend
0x812BF0: call    dword ptr ds:0A28078h
0x812BF6: cmp     [esp+24h+arg_C], 0
0x812BFB: mov     [edi+9Ch], esi
0x812C01: jz      short loc_812C09
0x812C03: or      dword ptr [edi+1Ch], 4
0x812C07: jmp     short loc_812C0D
0x812C09: and     dword ptr [edi+1Ch], 0FFFFFFFBh
0x812C0D: xor     eax, eax
0x812C0F: mov     [edi+24h], eax
0x812C12: cmp     [ebx+31h], al
0x812C15: jz      short loc_812C20
0x812C17: or      dword ptr [edi+1Ch], 2000h
0x812C1E: jmp     short loc_812C27
0x812C20: and     dword ptr [edi+1Ch], 0FFFFDFFFh
0x812C27: mov     [edi+24h], eax
0x812C2A: mov     ecx, [esi]; this
0x812C2C: push    edi; a2
0x812C2D: call    sub_405680
0x812C32: mov     ebp, [esi+8]
0x812C35: cmp     ebp, edi
0x812C37: jz      short loc_812C67
0x812C39: test    ebp, ebp
0x812C3B: jz      short loc_812C5A
0x812C3D: lea     ecx, [ebp+4]
0x812C40: push    ecx; lpAddend
0x812C41: call    dword ptr ds:0A2807Ch
0x812C47: test    eax, eax
0x812C49: jnz     short loc_812C5A
0x812C4B: test    ebp, ebp
0x812C4D: jz      short loc_812C5A
0x812C4F: mov     edx, [ebp+0]
0x812C52: mov     eax, [edx]
0x812C54: push    1
0x812C56: mov     ecx, ebp
0x812C58: call    eax
0x812C5A: mov     [esi+8], edi
0x812C5D: add     edi, 4
0x812C60: push    edi; lpAddend
0x812C61: call    dword ptr ds:0A28078h
0x812C67: push    2; a1
0x812C69: call    GetShaderDefinition
0x812C6E: mov     ebp, [eax+4]
0x812C71: mov     [esp+28h+arg_0], eax
0x812C75: mov     eax, [esi]
0x812C77: mov     edi, [eax+0BCh]
0x812C7D: add     esp, 4
0x812C80: cmp     edi, ebp
0x812C82: mov     dword ptr [esp+24h+arg_C], eax
0x812C86: jz      short loc_812CC0
0x812C88: test    edi, edi
0x812C8A: jz      short loc_812CA8
0x812C8C: lea     ecx, [edi+4]
0x812C8F: push    ecx; lpAddend
0x812C90: call    dword ptr ds:0A2807Ch
0x812C96: test    eax, eax
0x812C98: jnz     short loc_812CA8
0x812C9A: test    edi, edi
0x812C9C: jz      short loc_812CA8
0x812C9E: mov     edx, [edi]
0x812CA0: mov     eax, [edx]
0x812CA2: push    1
0x812CA4: mov     ecx, edi
0x812CA6: call    eax
0x812CA8: test    ebp, ebp
0x812CAA: mov     ecx, dword ptr [esp+24h+arg_C]
0x812CAE: mov     [ecx+0BCh], ebp
0x812CB4: jz      short loc_812CC0
0x812CB6: add     ebp, 4
0x812CB9: push    ebp; lpAddend
0x812CBA: call    dword ptr ds:0A28078h
0x812CC0: mov     edx, [esp+24h+arg_0]
0x812CC4: mov     ecx, [edx+4]
0x812CC7: mov     eax, [esi]
0x812CC9: mov     edx, [ecx]
0x812CCB: push    eax
0x812CCC: mov     eax, [edx+18h]
0x812CCF: call    eax
0x812CD1: mov     edi, [ebx+10h]
0x812CD4: imul    edi, [ebx+2Ch]
0x812CD8: push    2Ch ; ','; Size
0x812CDA: call    FormHeapAlloc
0x812CDF: add     esp, 4
0x812CE2: mov     dword ptr [esp+24h+arg_C], eax
0x812CE6: test    eax, eax
0x812CE8: mov     byte ptr [esp+24h+var_4], 6
0x812CED: jz      short loc_812CFD
0x812CEF: push    1
0x812CF1: push    edi
0x812CF2: mov     ecx, eax
0x812CF4: call    sub_7E3AE0
0x812CF9: mov     ebp, eax
0x812CFB: jmp     short loc_812CFF
0x812CFD: xor     ebp, ebp
0x812CFF: push    1
0x812D01: mov     ecx, ebp
0x812D03: mov     byte ptr [esp+28h+var_4], 2
0x812D08: call    sub_7263B0
0x812D0D: mov     edx, [ebx+0Ch]
0x812D10: push    0; char
0x812D12: lea     ecx, ds:0[edi*4]
0x812D19: push    ecx; Src
0x812D1A: push    edx; char
0x812D1B: push    0; int
0x812D1D: mov     ecx, ebp
0x812D1F: call    sub_7260B0
0x812D24: push    4
0x812D26: push    4
0x812D28: push    edi
0x812D29: push    1
0x812D2B: push    0
0x812D2D: push    0
0x812D2F: push    0
0x812D31: mov     ecx, ebp
0x812D33: call    sub_7262A0
0x812D38: mov     eax, [esi]
0x812D3A: mov     ecx, [eax+0B4h]
0x812D40: push    ebp
0x812D41: call    sub_6C61E0
0x812D46: mov     eax, esi
0x812D48: mov     ecx, [esp+24h+var_C]
0x812D4C: mov     large fs:0, ecx
0x812D53: pop     ecx
0x812D54: pop     edi
0x812D55: pop     esi
0x812D56: pop     ebp
0x812D57: pop     ebx
0x812D58: add     esp, 10h
0x812D5B: retn    10h
