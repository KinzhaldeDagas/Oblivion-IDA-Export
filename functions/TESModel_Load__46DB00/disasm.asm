0x46DB00: push    ebp
0x46DB01: mov     ebp, esp
0x46DB03: sub     esp, 8
0x46DB06: mov     eax, ds:0B30AACh
0x46DB0B: xor     eax, ebp
0x46DB0D: mov     [ebp+var_4], eax
0x46DB10: push    ebx
0x46DB11: push    esi
0x46DB12: mov     esi, [ebp+a1]
0x46DB15: test    esi, esi
0x46DB17: push    edi
0x46DB18: jz      loc_46DBA9
0x46DB1E: mov     ebx, [ebp+arg_0]
0x46DB21: test    ebx, ebx
0x46DB23: jz      loc_46DBA9
0x46DB29: mov     ecx, esi
0x46DB2B: call    TESFile_GetChunkType
0x46DB30: cmp     eax, 42444F4Dh
0x46DB35: jz      short loc_46DB98
0x46DB37: cmp     eax, 4C444F4Dh
0x46DB3C: jz      short loc_46DB63
0x46DB3E: cmp     eax, 54444F4Dh
0x46DB43: jnz     short loc_46DBA9
0x46DB45: push    esi
0x46DB46: push    ebx
0x46DB47: call    sub_46D940
0x46DB4C: add     esp, 8
0x46DB4F: lea     esp, [ebp-14h]
0x46DB52: pop     edi
0x46DB53: pop     esi
0x46DB54: pop     ebx
0x46DB55: mov     ecx, [ebp+var_4]
0x46DB58: xor     ecx, ebp
0x46DB5A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x46DB5F: mov     esp, ebp
0x46DB61: pop     ebp
0x46DB62: retn
0x46DB63: mov     eax, [esi+254h]
0x46DB69: call    __alloca?
0x46DB6E: mov     edi, esp
0x46DB70: push    0; a4
0x46DB72: push    edi; Dst
0x46DB73: mov     ecx, esi; a1
0x46DB75: call    TESFile_GetChunkData
0x46DB7A: mov     eax, [ebx]
0x46DB7C: mov     edx, [eax+18h]
0x46DB7F: push    edi
0x46DB80: mov     ecx, ebx
0x46DB82: call    edx
0x46DB84: lea     esp, [ebp-14h]
0x46DB87: pop     edi
0x46DB88: pop     esi
0x46DB89: pop     ebx
0x46DB8A: mov     ecx, [ebp+var_4]
0x46DB8D: xor     ecx, ebp
0x46DB8F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x46DB94: mov     esp, ebp
0x46DB96: pop     ebp
0x46DB97: retn
0x46DB98: lea     eax, [ebp+var_8]
0x46DB9B: push    eax
0x46DB9C: mov     ecx, esi
0x46DB9E: call    TESFile_GetChunkData4
0x46DBA3: fld     [ebp+var_8]
0x46DBA6: fstp    dword ptr [ebx+0Ch]
0x46DBA9: lea     esp, [ebp-14h]
0x46DBAC: pop     edi
0x46DBAD: pop     esi
0x46DBAE: pop     ebx
0x46DBAF: mov     ecx, [ebp+var_4]
0x46DBB2: xor     ecx, ebp
0x46DBB4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x46DBB9: mov     esp, ebp
0x46DBBB: pop     ebp
0x46DBBC: retn
