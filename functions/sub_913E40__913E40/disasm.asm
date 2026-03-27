0x913E40: push    ebp
0x913E41: mov     ebp, esp
0x913E43: and     esp, 0FFFFFFF0h
0x913E46: sub     esp, 34h
0x913E49: mov     eax, ds:0B30AACh
0x913E4E: xor     eax, esp
0x913E50: mov     [esp+34h+var_4], eax
0x913E54: mov     eax, [ebp+arg_C]
0x913E57: push    ebx
0x913E58: mov     ebx, [ebp+arg_4]
0x913E5B: push    esi
0x913E5C: push    edi
0x913E5D: mov     edi, [ebp+arg_0]
0x913E60: mov     esi, ecx
0x913E62: lea     ecx, [esp+40h+var_28]
0x913E66: push    ecx
0x913E67: lea     edx, [esp+44h+var_20]
0x913E6B: push    edx
0x913E6C: mov     ecx, esi
0x913E6E: mov     [esp+48h+var_24], eax
0x913E72: call    sub_913D30
0x913E77: fld     [ebp+arg_8]
0x913E7A: mov     eax, [esp+40h+var_24]
0x913E7E: push    eax
0x913E7F: push    ecx
0x913E80: fstp    [esp+48h+var_48]
0x913E83: push    ebx
0x913E84: push    edi
0x913E85: mov     ecx, esi
0x913E87: call    sub_9143D0
0x913E8C: fld1
0x913E8E: fcomp   dword ptr [esi+14h]
0x913E91: fnstsw  ax
0x913E93: test    ah, 44h
0x913E96: jnp     short loc_913EAB
0x913E98: mov     esi, [esi+10h]
0x913E9B: fld     [esp+40h+var_28]
0x913E9F: movaps  xmm0, [esp+40h+var_20]
0x913EA4: movaps  xmmword ptr [esi+10h], xmm0
0x913EA8: fstp    dword ptr [esi+1Ch]
0x913EAB: sub     dword ptr ds:0BA83FCh, 1
0x913EB2: jnz     short loc_913EBE
0x913EB4: mov     dword ptr ds:0BA83F8h, 0
0x913EBE: push    offset stru_BA8380; lpCriticalSection
0x913EC3: call    dword ptr ds:0A28074h
0x913EC9: mov     ecx, [esp+40h+var_4]
0x913ECD: pop     edi
0x913ECE: pop     esi
0x913ECF: pop     ebx
0x913ED0: xor     ecx, esp
0x913ED2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x913ED7: mov     esp, ebp
0x913ED9: pop     ebp
0x913EDA: retn    10h
