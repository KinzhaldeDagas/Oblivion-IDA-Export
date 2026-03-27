0x7839C0: push    ebp
0x7839C1: mov     ebp, esp
0x7839C3: and     esp, 0FFFFFFF0h
0x7839C6: sub     esp, 84h
0x7839CC: push    ebx
0x7839CD: push    esi
0x7839CE: mov     esi, ecx
0x7839D0: cmp     dword ptr [esi+40h], 0
0x7839D4: push    edi
0x7839D5: jz      loc_783BDD
0x7839DB: cmp     dword ptr [esi+1Ch], 0
0x7839DF: jz      loc_783BDD
0x7839E5: cmp     byte ptr ds:0B4295Bh, 0
0x7839EC: mov     edi, [ebp+arg_0]
0x7839EF: mov     ebx, [edi+14h]
0x7839F2: jnz     short loc_7839F9
0x7839F4: call    sub_783C70
0x7839F9: and     ebx, 0FFh
0x7839FF: cmp     dword ptr ds:0B428D8h[ebx*4], 8
0x783A07: jz      short loc_783A2E
0x783A09: cmp     byte ptr ds:0B4295Bh, 0
0x783A10: mov     ebx, [edi+14h]
0x783A13: jnz     short loc_783A1A
0x783A15: call    sub_783C70
0x783A1A: and     ebx, 0FFh
0x783A20: cmp     dword ptr ds:0B428D8h[ebx*4], 9
0x783A28: jnz     loc_783BDD
0x783A2E: cmp     [ebp+arg_4], 0
0x783A32: jnz     short loc_783A3A
0x783A34: mov     eax, [edi+30h]
0x783A37: mov     [ebp+arg_4], eax
0x783A3A: mov     ebx, [edi+24h]
0x783A3D: test    ebx, ebx
0x783A3F: jnz     short loc_783A44
0x783A41: mov     ebx, [edi+0Ch]
0x783A44: mov     edi, [edi+10h]
0x783A47: cmp     edi, 21h ; '!'
0x783A4A: mov     byte ptr [esp+90h+var_80+3], 0
0x783A4F: jz      short loc_783A60
0x783A51: cmp     edi, 23h ; '#'
0x783A54: jz      short loc_783A60
0x783A56: cmp     edi, 22h ; '"'
0x783A59: jz      short loc_783A60
0x783A5B: cmp     edi, 24h ; '$'
0x783A5E: jnz     short loc_783A65
0x783A60: mov     byte ptr [esp+90h+var_80+3], 1
0x783A65: mov     eax, [esi+40h]
0x783A68: mov     ecx, [eax]
0x783A6A: mov     edx, [ecx+24h]
0x783A6D: push    ebx
0x783A6E: push    0
0x783A70: push    eax
0x783A71: call    edx
0x783A73: mov     edi, eax
0x783A75: test    edi, edi
0x783A77: mov     [esp+90h+var_78], edi
0x783A7B: jz      loc_783BCB
0x783A81: mov     eax, [esi+40h]
0x783A84: lea     edx, [esp+90h+var_7C]
0x783A88: push    edx
0x783A89: lea     edx, [esp+94h+var_70]
0x783A8D: push    edx
0x783A8E: mov     [esp+98h+var_7C], 1
0x783A96: mov     ecx, [eax]
0x783A98: push    edi
0x783A99: push    eax
0x783A9A: mov     eax, [ecx+18h]
0x783A9D: call    eax
0x783A9F: cmp     [ebp+arg_10], 0
0x783AA3: jz      loc_783B67
0x783AA9: xor     edi, edi
0x783AAB: cmp     [ebp+arg_8], edi
0x783AAE: jbe     loc_783B5C
0x783AB4: mov     ecx, [ebp+arg_10]
0x783AB7: movzx   ebx, word ptr [ecx+edi*2]
0x783ABB: mov     eax, [esi+40h]
0x783ABE: mov     ecx, [esp+90h+var_78]
0x783AC2: mov     edx, [eax]
0x783AC4: mov     edx, [edx+28h]
0x783AC7: push    edi
0x783AC8: push    ecx
0x783AC9: push    eax
0x783ACA: call    edx
0x783ACC: mov     ecx, [esi+40h]
0x783ACF: lea     edx, [esp+90h+var_7C]
0x783AD3: push    edx
0x783AD4: mov     [esp+94h+var_74], eax
0x783AD8: lea     edx, [esp+94h+var_70]
0x783ADC: push    edx
0x783ADD: mov     edx, [esp+98h+var_74]
0x783AE1: mov     [esp+98h+var_7C], 1
0x783AE9: mov     eax, [ecx]
0x783AEB: mov     eax, [eax+18h]
0x783AEE: push    edx
0x783AEF: push    ecx
0x783AF0: call    eax
0x783AF2: cmp     byte ptr [esp+90h+var_80+3], 0
0x783AF7: jz      short loc_783B0D
0x783AF9: mov     edx, [esp+90h+var_64]
0x783AFD: push    edx
0x783AFE: movzx   edx, bx
0x783B01: imul    edx, [ebp+arg_C]
0x783B05: shl     edx, 4
0x783B08: add     edx, [ebp+arg_4]
0x783B0B: jmp     short loc_783B2E
0x783B0D: movzx   ecx, bx
0x783B10: imul    ecx, [ebp+arg_C]
0x783B14: shl     ecx, 4
0x783B17: add     ecx, [ebp+arg_4]
0x783B1A: lea     edx, [esp+90h+var_40]
0x783B1E: push    ecx
0x783B1F: push    edx
0x783B20: call    D3DXMatrixTranspose_0
0x783B25: mov     edx, [esp+90h+var_64]
0x783B29: push    edx
0x783B2A: lea     edx, [esp+94h+var_40]
0x783B2E: mov     eax, [esi+24h]
0x783B31: mov     eax, [eax+0FF8h]
0x783B37: mov     ecx, [eax]
0x783B39: push    edx
0x783B3A: mov     edx, [esp+98h+var_68]
0x783B3E: push    edx
0x783B3F: push    eax
0x783B40: mov     eax, [ecx+178h]
0x783B46: call    eax
0x783B48: test    eax, eax
0x783B4A: jl      loc_783BDD
0x783B50: add     edi, 1
0x783B53: cmp     edi, [ebp+arg_8]
0x783B56: jb      loc_783AB4
0x783B5C: mov     al, 1
0x783B5E: pop     edi
0x783B5F: pop     esi
0x783B60: pop     ebx
0x783B61: mov     esp, ebp
0x783B63: pop     ebp
0x783B64: retn    14h
0x783B67: cmp     byte ptr [esp+90h+var_80+3], 0
0x783B6C: mov     ebx, 80004005h
0x783B71: jz      short loc_783BA1
0x783B73: mov     ecx, [esp+90h+var_64]
0x783B77: mov     edx, [ebp+arg_4]
0x783B7A: mov     eax, [esp+90h+var_68]
0x783B7E: push    0
0x783B80: push    ecx
0x783B81: mov     ecx, [esi+24h]
0x783B84: push    edx
0x783B85: push    eax
0x783B86: call    sub_783010
0x783B8B: test    al, al
0x783B8D: jz      short loc_783BBB
0x783B8F: xor     ebx, ebx
0x783B91: xor     eax, eax
0x783B93: test    ebx, ebx
0x783B95: setnl   al
0x783B98: pop     edi
0x783B99: pop     esi
0x783B9A: pop     ebx
0x783B9B: mov     esp, ebp
0x783B9D: pop     ebp
0x783B9E: retn    14h
0x783BA1: mov     edx, [ebp+arg_8]
0x783BA4: mov     eax, [esi+40h]
0x783BA7: mov     ecx, [eax]
0x783BA9: push    edx
0x783BAA: mov     edx, [ebp+arg_4]
0x783BAD: push    edx
0x783BAE: mov     edx, [esi+1Ch]
0x783BB1: push    edi
0x783BB2: push    edx
0x783BB3: push    eax
0x783BB4: mov     eax, [ecx+58h]
0x783BB7: call    eax
0x783BB9: mov     ebx, eax
0x783BBB: xor     eax, eax
0x783BBD: test    ebx, ebx
0x783BBF: setnl   al
0x783BC2: pop     edi
0x783BC3: pop     esi
0x783BC4: pop     ebx
0x783BC5: mov     esp, ebp
0x783BC7: pop     ebp
0x783BC8: retn    14h
0x783BCB: mov     ecx, [esi+8]; void *
0x783BCE: push    ebx
0x783BCF: push    ecx
0x783BD0: push    offset aNid3dhlslver_0; "NiD3DHLSLVertexShader::SetVertexShaderC"...
0x783BD5: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x783BDA: add     esp, 0Ch
0x783BDD: pop     edi
0x783BDE: pop     esi
0x783BDF: xor     al, al
0x783BE1: pop     ebx
0x783BE2: mov     esp, ebp
0x783BE4: pop     ebp
0x783BE5: retn    14h
