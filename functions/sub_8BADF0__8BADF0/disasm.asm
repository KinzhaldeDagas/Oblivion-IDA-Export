0x8BADF0: push    ebp
0x8BADF1: mov     ebp, esp
0x8BADF3: and     esp, 0FFFFFFF0h
0x8BADF6: sub     esp, 354h
0x8BADFC: mov     eax, ds:0B30AACh
0x8BAE01: push    ebx
0x8BAE02: push    esi; dwMilliseconds
0x8BAE03: mov     esi, [ebp+lpThreadParameter]
0x8BAE06: push    edi; hHandle
0x8BAE07: mov     edi, [esi]
0x8BAE09: mov     [esp+360h+var_4], eax
0x8BAE10: mov     eax, ds:0BA7D98h
0x8BAE15: push    10h
0x8BAE17: push    eax
0x8BAE18: lea     ecx, [esp+368h+var_340]
0x8BAE1C: call    sub_8A72A0
0x8BAE21: lea     ecx, [esp+360h+var_340]
0x8BAE25: push    ecx
0x8BAE26: call    sub_8BB000
0x8BAE2B: mov     ecx, ds:0BA7D98h
0x8BAE31: mov     edx, [ecx]
0x8BAE33: add     esp, 4
0x8BAE36: push    1; dwMilliseconds
0x8BAE38: push    1E8480h; hHandle
0x8BAE3D: call    dword ptr [edx]
0x8BAE3F: push    1E8480h
0x8BAE44: push    eax
0x8BAE45: lea     ecx, [esp+370h+var_348]
0x8BAE49: mov     [esp+370h+var_34C], eax
0x8BAE4D: call    sub_8A7220
0x8BAE52: xor     ebx, ebx
0x8BAE54: lea     ecx, [esi+10h]
0x8BAE57: mov     [esi+14h], ebx
0x8BAE5A: mov     [esi+18h], ebx
0x8BAE5D: mov     [esi+24h], ebx
0x8BAE60: call    WaitForSingleObject_0
0x8BAE65: mov     al, [esi+0Ch]
0x8BAE68: test    al, al
0x8BAE6A: jnz     short loc_8BAEDA
0x8BAE6C: mov     eax, large fs:2Ch
0x8BAE72: mov     ecx, ds:0BA9DE4h
0x8BAE78: mov     edx, [eax+ecx*4]
0x8BAE7B: mov     [esp+360h+var_348], edx
0x8BAE7F: mov     ebx, edx
0x8BAE81: call    sub_8BA9F0
0x8BAE86: mov     eax, [esp+360h+var_348]
0x8BAE8A: mov     dword ptr [eax+1B4h], 1
0x8BAE94: mov     ecx, [edi+4]
0x8BAE97: mov     edx, [edi+8]
0x8BAE9A: push    ecx
0x8BAE9B: mov     ecx, [edi]
0x8BAE9D: push    edx
0x8BAE9E: call    sub_898C90
0x8BAEA3: mov     eax, [ebx+1A0h]
0x8BAEA9: mov     dword ptr [ebx+1B4h], 0
0x8BAEB3: mov     [esi+1Ch], eax
0x8BAEB6: mov     ecx, [ebx+1A4h]
0x8BAEBC: mov     [esi+20h], ecx
0x8BAEBF: push    1; lReleaseCount
0x8BAEC1: lea     ecx, [edi+0Ch]
0x8BAEC4: call    ReleaseSemaphore_0
0x8BAEC9: lea     ecx, [esi+10h]
0x8BAECC: call    WaitForSingleObject_0
0x8BAED1: mov     al, [esi+0Ch]
0x8BAED4: test    al, al
0x8BAED6: jz      short loc_8BAE81
0x8BAED8: xor     ebx, ebx
0x8BAEDA: mov     ecx, ds:0BA7D98h
0x8BAEE0: mov     eax, [esi+14h]
0x8BAEE3: mov     edx, [ecx]
0x8BAEE5: push    eax
0x8BAEE6: call    dword ptr [edx+4]
0x8BAEE9: mov     ecx, [esi+24h]
0x8BAEEC: cmp     ecx, ebx
0x8BAEEE: mov     [esi+14h], ebx
0x8BAEF1: mov     [esi+18h], ebx
0x8BAEF4: mov     [esi+1Ch], ebx
0x8BAEF7: mov     [esi+20h], ebx
0x8BAEFA: mov     [esp+35Ch+var_344], ecx
0x8BAEFE: jz      short loc_8BAF19
0x8BAF00: call    sub_8BAD50
0x8BAF05: mov     ecx, ds:0BA7D98h
0x8BAF0B: mov     eax, [esp+35Ch+var_344]
0x8BAF0F: mov     edx, [ecx]
0x8BAF11: push    18h
0x8BAF13: push    28h ; '('
0x8BAF15: push    eax
0x8BAF16: call    dword ptr [edx+14h]
0x8BAF19: push    ebx
0x8BAF1A: push    ebx
0x8BAF1B: lea     ecx, [esp+370h+var_348]
0x8BAF1F: mov     [esi+24h], ebx
0x8BAF22: call    sub_8A7220
0x8BAF27: mov     ecx, ds:0BA7D98h
0x8BAF2D: mov     eax, [esp+368h+var_34C]
0x8BAF31: mov     edx, [ecx]
0x8BAF33: push    eax
0x8BAF34: call    dword ptr [edx+4]
0x8BAF37: call    sub_8BB020
0x8BAF3C: push    1; lReleaseCount
0x8BAF3E: lea     ecx, [edi+0Ch]
0x8BAF41: call    ReleaseSemaphore_0
0x8BAF46: lea     ecx, [esp+36Ch+var_34C]
0x8BAF4A: call    sub_8A7200
0x8BAF4F: mov     ecx, [esp+36Ch+var_10]
0x8BAF56: xor     eax, eax
0x8BAF58: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BAF5D: pop     edi
0x8BAF5E: pop     esi
0x8BAF5F: pop     ebx
0x8BAF60: mov     esp, ebp
0x8BAF62: pop     ebp
0x8BAF63: retn    4
