0x576F30: push    0FFFFFFFFh
0x576F32: push    offset SEH_576F30
0x576F37: mov     eax, large fs:0
0x576F3D: push    eax
0x576F3E: push    ecx
0x576F3F: push    ebx
0x576F40: push    ebp
0x576F41: push    esi
0x576F42: push    edi
0x576F43: mov     eax, ds:0B30AACh
0x576F48: xor     eax, esp
0x576F4A: push    eax
0x576F4B: lea     eax, [esp+24h+var_C]
0x576F4F: mov     large fs:0, eax
0x576F55: mov     esi, ecx
0x576F57: mov     [esp+24h+var_10], esi
0x576F5B: fldz
0x576F5D: xor     ebx, ebx
0x576F5F: fst     dword ptr [esi+8]
0x576F62: fst     dword ptr [esi+0Ch]
0x576F65: fst     dword ptr [esi+10h]
0x576F68: fstp    dword ptr [esi+14h]
0x576F6B: mov     [esi+1Ch], ebx
0x576F6E: mov     [esi+20h], bx
0x576F72: mov     [esi+22h], bx
0x576F76: mov     eax, [esp+24h+arg_0]
0x576F7A: cmp     eax, 5
0x576F7D: mov     [esp+24h+var_4], ebx
0x576F81: jge     short loc_576F91
0x576F83: xor     ecx, ecx
0x576F85: cmp     eax, ebx
0x576F87: setl    cl
0x576F8A: sub     ecx, 1
0x576F8D: and     eax, ecx
0x576F8F: jmp     short loc_576F96
0x576F91: mov     eax, 5
0x576F96: mov     dl, byte ptr [esp+24h+arg_4]
0x576F9A: mov     ecx, [esp+24h+arg_C]
0x576F9E: mov     [esi], eax
0x576FA0: mov     eax, [esp+24h+arg_8]
0x576FA4: mov     [esi+8], eax
0x576FA7: mov     eax, [esp+24h+arg_14]
0x576FAB: mov     [esi+0Ch], ecx
0x576FAE: mov     ecx, [esp+24h+arg_18]
0x576FB2: mov     [esi+4], dl
0x576FB5: mov     edx, [esp+24h+arg_10]
0x576FB9: mov     [esi+10h], edx
0x576FBC: mov     [esi+14h], eax
0x576FBF: mov     [esi+18h], ecx
0x576FC2: mov     edx, [esi+1Ch]
0x576FC5: push    edx
0x576FC6: call    FormHeapFree
0x576FCB: mov     [esi+1Ch], ebx
0x576FCE: mov     [esi+22h], bx
0x576FD2: mov     [esi+20h], bx
0x576FD6: mov     edi, [esi]
0x576FD8: add     esp, 4
0x576FDB: call    FontManager_GetSingleton
0x576FE0: mov     ecx, [eax+edi*4]
0x576FE3: movzx   eax, byte ptr [esi+4]
0x576FE7: lea     edx, ds:0[eax*8]
0x576FEE: sub     edx, eax
0x576FF0: mov     eax, [ecx+38h]
0x576FF3: lea     edi, [eax+edx*8+128h]
0x576FFA: fld     dword ptr [edi+24h]
0x576FFD: fadd    st, st
0x576FFF: fldz
0x577001: fucom   st(1)
0x577003: fnstsw  ax
0x577005: fstp    st(1)
0x577007: test    ah, 44h
0x57700A: jnp     short loc_577014
0x57700C: fstp    st
0x57700E: fld     dword ptr [edi+30h]
0x577011: fadd    dword ptr [edi+2Ch]
0x577014: call    Double_To_SInt32
0x577019: mov     ebp, [esi]
0x57701B: mov     [esi+24h], eax
0x57701E: call    FontManager_GetSingleton
0x577023: mov     ecx, [eax+ebp*4]
0x577026: mov     edx, [ecx+38h]
0x577029: fld     dword ptr [edx]
0x57702B: call    Double_To_SInt32
0x577030: mov     [esi+28h], eax
0x577033: fld     dword ptr [edi+28h]
0x577036: fsub    dword ptr [edi+34h]
0x577039: call    Double_To_SInt32
0x57703E: mov     [esi+2Ch], eax
0x577041: mov     [esi+30h], ebx
0x577044: mov     [esi+34h], ebx
0x577047: mov     eax, esi
0x577049: mov     ecx, [esp+24h+var_C]
0x57704D: mov     large fs:0, ecx
0x577054: pop     ecx
0x577055: pop     edi
0x577056: pop     esi
0x577057: pop     ebp
0x577058: pop     ebx
0x577059: add     esp, 10h
0x57705C: retn    1Ch
