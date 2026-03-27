0x781DC0: sub     esp, 10h
0x781DC3: push    ebp
0x781DC4: push    esi
0x781DC5: push    edi
0x781DC6: push    2Ch ; ','; Size
0x781DC8: mov     edi, ecx
0x781DCA: call    FormHeapAlloc
0x781DCF: mov     esi, eax
0x781DD1: xor     ebp, ebp
0x781DD3: add     esp, 4
0x781DD6: cmp     esi, ebp
0x781DD8: jz      short loc_781E30
0x781DDA: mov     eax, ds:0B428C4h
0x781DDF: push    eax
0x781DE0: mov     ecx, esi; this
0x781DE2: call    ??0NiD3DShaderProgram@@QAE@XZ; NiD3DShaderProgram::NiD3DShaderProgram(void)
0x781DE7: lea     eax, [esp+1Ch+var_8]
0x781DEB: push    eax
0x781DEC: lea     ecx, [esp+20h+var_4]
0x781DF0: push    ecx
0x781DF1: mov     dword ptr [esi], offset ??_7NiD3DPixelShader@@6B@; const NiD3DPixelShader::`vftable'
0x781DF7: mov     [esi+28h], ebp
0x781DFA: mov     edx, [edi]
0x781DFC: mov     edx, [edx+24h]
0x781DFF: lea     eax, [esp+24h+var_C]
0x781E03: push    eax
0x781E04: mov     eax, [esp+28h+arg_0]
0x781E08: lea     ecx, [esp+28h+var_10]
0x781E0C: push    ecx
0x781E0D: push    eax
0x781E0E: mov     ecx, edi
0x781E10: mov     [esp+30h+var_C], ebp
0x781E14: mov     [esp+30h+var_10], ebp
0x781E18: mov     [esp+30h+var_8], ebp
0x781E1C: mov     [esp+30h+var_4], ebp
0x781E20: call    edx
0x781E22: test    al, al
0x781E24: jnz     short loc_781E3B
0x781E26: mov     eax, [esi]
0x781E28: mov     edx, [eax]
0x781E2A: push    1
0x781E2C: mov     ecx, esi
0x781E2E: call    edx
0x781E30: pop     edi
0x781E31: pop     esi
0x781E32: xor     eax, eax
0x781E34: pop     ebp
0x781E35: add     esp, 10h
0x781E38: retn    10h
0x781E3B: mov     eax, [esp+1Ch+var_10]
0x781E3F: push    ebx
0x781E40: push    eax
0x781E41: mov     ecx, edi
0x781E43: call    sub_783C30
0x781E48: mov     ebx, eax
0x781E4A: cmp     ebx, ebp
0x781E4C: jnz     short loc_781E79
0x781E4E: mov     ecx, dword ptr [esp+20h+ArgList]
0x781E52: push    ecx; ArgList
0x781E53: push    offset aFailedCreatepi; "Failed CreatePixelShader call on %s\n"
0x781E58: push    ebp; int
0x781E59: push    1; int
0x781E5B: call    sub_738460
0x781E60: mov     edx, [esi]
0x781E62: mov     eax, [edx]
0x781E64: add     esp, 10h
0x781E67: push    1
0x781E69: mov     ecx, esi
0x781E6B: call    eax
0x781E6D: pop     ebx
0x781E6E: pop     edi
0x781E6F: pop     esi
0x781E70: xor     eax, eax
0x781E72: pop     ebp
0x781E73: add     esp, 10h
0x781E76: retn    10h
0x781E79: mov     edx, [esi]
0x781E7B: mov     eax, dword ptr [esp+20h+ArgList]
0x781E7F: mov     edx, [edx+8]
0x781E82: push    eax
0x781E83: mov     ecx, esi
0x781E85: call    edx
0x781E87: mov     ecx, [esp+20h+arg_0]
0x781E8B: mov     eax, [esi]
0x781E8D: mov     edx, [eax+10h]
0x781E90: push    ecx
0x781E91: mov     ecx, esi
0x781E93: call    edx
0x781E95: mov     ecx, [esp+20h+var_10]
0x781E99: mov     eax, [esi]
0x781E9B: mov     edx, [esp+20h+var_C]
0x781E9F: mov     eax, [eax+1Ch]
0x781EA2: push    ecx
0x781EA3: push    edx
0x781EA4: mov     ecx, esi
0x781EA6: call    eax
0x781EA8: mov     edx, [esi]
0x781EAA: mov     eax, [edx+24h]
0x781EAD: push    edi
0x781EAE: mov     ecx, esi
0x781EB0: call    eax
0x781EB2: mov     edx, [esi]
0x781EB4: mov     eax, [edx+3Ch]
0x781EB7: push    ebx
0x781EB8: mov     ecx, esi
0x781EBA: call    eax
0x781EBC: pop     ebx
0x781EBD: pop     edi
0x781EBE: mov     eax, esi
0x781EC0: pop     esi
0x781EC1: pop     ebp
0x781EC2: add     esp, 10h
0x781EC5: retn    10h
