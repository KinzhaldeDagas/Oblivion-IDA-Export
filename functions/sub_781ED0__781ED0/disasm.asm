0x781ED0: sub     esp, 10h
0x781ED3: push    ebp
0x781ED4: push    esi
0x781ED5: push    edi
0x781ED6: push    2Ch ; ','; Size
0x781ED8: mov     edi, ecx
0x781EDA: call    FormHeapAlloc
0x781EDF: mov     esi, eax
0x781EE1: xor     ebp, ebp
0x781EE3: add     esp, 4
0x781EE6: cmp     esi, ebp
0x781EE8: jz      short loc_781F45
0x781EEA: mov     eax, ds:0B428C4h
0x781EEF: push    eax
0x781EF0: mov     ecx, esi; this
0x781EF2: call    ??0NiD3DShaderProgram@@QAE@XZ; NiD3DShaderProgram::NiD3DShaderProgram(void)
0x781EF7: lea     eax, [esp+1Ch+var_8]
0x781EFB: push    eax
0x781EFC: lea     ecx, [esp+20h+var_4]
0x781F00: push    ecx
0x781F01: lea     eax, [esp+24h+var_C]
0x781F05: push    eax
0x781F06: mov     eax, [esp+28h+arg_4]
0x781F0A: mov     dword ptr [esi], offset ??_7NiD3DPixelShader@@6B@; const NiD3DPixelShader::`vftable'
0x781F10: mov     [esi+28h], ebp
0x781F13: mov     edx, [edi]
0x781F15: mov     edx, [edx+28h]
0x781F18: lea     ecx, [esp+28h+var_10]
0x781F1C: push    ecx
0x781F1D: mov     ecx, [esp+2Ch+arg_0]
0x781F21: push    eax
0x781F22: push    ecx
0x781F23: mov     ecx, edi
0x781F25: mov     [esp+34h+var_C], ebp
0x781F29: mov     [esp+34h+var_10], ebp
0x781F2D: mov     [esp+34h+var_8], ebp
0x781F31: mov     [esp+34h+var_4], ebp
0x781F35: call    edx
0x781F37: test    al, al
0x781F39: jnz     short loc_781F50
0x781F3B: mov     eax, [esi]
0x781F3D: mov     edx, [eax]
0x781F3F: push    1
0x781F41: mov     ecx, esi
0x781F43: call    edx
0x781F45: pop     edi
0x781F46: pop     esi
0x781F47: xor     eax, eax
0x781F49: pop     ebp
0x781F4A: add     esp, 10h
0x781F4D: retn    14h
0x781F50: mov     eax, [esp+1Ch+var_10]
0x781F54: push    ebx
0x781F55: push    eax
0x781F56: mov     ecx, edi
0x781F58: call    sub_783C30
0x781F5D: mov     ebx, eax
0x781F5F: cmp     ebx, ebp
0x781F61: jnz     short loc_781F8E
0x781F63: mov     ecx, dword ptr [esp+20h+ArgList]
0x781F67: push    ecx; ArgList
0x781F68: push    offset aFailedCreatepi; "Failed CreatePixelShader call on %s\n"
0x781F6D: push    ebp; int
0x781F6E: push    1; int
0x781F70: call    sub_738460
0x781F75: mov     edx, [esi]
0x781F77: mov     eax, [edx]
0x781F79: add     esp, 10h
0x781F7C: push    1
0x781F7E: mov     ecx, esi
0x781F80: call    eax
0x781F82: pop     ebx
0x781F83: pop     edi
0x781F84: pop     esi
0x781F85: xor     eax, eax
0x781F87: pop     ebp
0x781F88: add     esp, 10h
0x781F8B: retn    14h
0x781F8E: mov     edx, [esi]
0x781F90: mov     eax, dword ptr [esp+20h+ArgList]
0x781F94: mov     edx, [edx+8]
0x781F97: push    eax
0x781F98: mov     ecx, esi
0x781F9A: call    edx
0x781F9C: mov     eax, [esi]
0x781F9E: mov     edx, [eax+10h]
0x781FA1: push    ebp
0x781FA2: mov     ecx, esi
0x781FA4: call    edx
0x781FA6: mov     ecx, [esp+20h+var_10]
0x781FAA: mov     eax, [esi]
0x781FAC: mov     edx, [esp+20h+var_C]
0x781FB0: mov     eax, [eax+1Ch]
0x781FB3: push    ecx
0x781FB4: push    edx
0x781FB5: mov     ecx, esi
0x781FB7: call    eax
0x781FB9: mov     edx, [esi]
0x781FBB: mov     eax, [edx+24h]
0x781FBE: push    edi
0x781FBF: mov     ecx, esi
0x781FC1: call    eax
0x781FC3: mov     edx, [esi]
0x781FC5: mov     eax, [edx+3Ch]
0x781FC8: push    ebx
0x781FC9: mov     ecx, esi
0x781FCB: call    eax
0x781FCD: pop     ebx
0x781FCE: pop     edi
0x781FCF: mov     eax, esi
0x781FD1: pop     esi
0x781FD2: pop     ebp
0x781FD3: add     esp, 10h
0x781FD6: retn    14h
