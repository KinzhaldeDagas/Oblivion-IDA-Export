0x781100: push    ebx
0x781101: push    esi
0x781102: push    edi
0x781103: mov     edi, [esp+0Ch+arg_0]
0x781107: mov     eax, [edi]
0x781109: mov     edx, [eax+18h]
0x78110C: mov     ebx, ecx
0x78110E: mov     ecx, edi
0x781110: call    edx
0x781112: mov     esi, eax
0x781114: test    esi, esi
0x781116: jnz     short loc_781120
0x781118: pop     edi
0x781119: pop     esi
0x78111A: xor     al, al
0x78111C: pop     ebx
0x78111D: retn    4
0x781120: push    esi
0x781121: mov     ecx, ebx
0x781123: call    sub_783C30
0x781128: test    eax, eax
0x78112A: jz      short loc_781118
0x78112C: mov     edx, [edi]
0x78112E: push    eax
0x78112F: mov     eax, [edx+3Ch]
0x781132: mov     ecx, edi
0x781134: call    eax
0x781136: lea     ecx, [esp+0Ch+arg_0]
0x78113A: push    ecx
0x78113B: push    esi
0x78113C: call    D3DXGetShaderConstantTable_0
0x781141: test    eax, eax
0x781143: jl      short loc_781153
0x781145: mov     edx, [edi]
0x781147: mov     eax, [esp+0Ch+arg_0]
0x78114B: mov     edx, [edx+5Ch]
0x78114E: push    eax
0x78114F: mov     ecx, edi
0x781151: call    edx
0x781153: mov     eax, [esp+0Ch+arg_0]
0x781157: test    eax, eax
0x781159: jz      short loc_781163
0x78115B: mov     ecx, [eax]
0x78115D: mov     edx, [ecx+8]
0x781160: push    eax
0x781161: call    edx
0x781163: pop     edi
0x781164: pop     esi
0x781165: mov     al, 1
0x781167: pop     ebx
0x781168: retn    4
