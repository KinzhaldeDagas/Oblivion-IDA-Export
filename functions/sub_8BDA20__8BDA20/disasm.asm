0x8BDA20: push    ebp
0x8BDA21: mov     ebp, esp
0x8BDA23: and     esp, 0FFFFFFF0h
0x8BDA26: push    0FFFFFFFFh
0x8BDA28: push    offset SEH_8BE550
0x8BDA2D: mov     eax, large fs:0
0x8BDA33: push    eax
0x8BDA34: sub     esp, 38h
0x8BDA37: mov     eax, ds:0B30AACh
0x8BDA3C: xor     eax, esp
0x8BDA3E: mov     [esp+44h+var_14], eax
0x8BDA42: push    ebx
0x8BDA43: push    esi
0x8BDA44: push    edi
0x8BDA45: mov     eax, ds:0B30AACh
0x8BDA4A: xor     eax, esp
0x8BDA4C: push    eax
0x8BDA4D: lea     eax, [esp+54h+var_C]
0x8BDA51: mov     large fs:0, eax
0x8BDA57: mov     esi, [ebp+arg_0]
0x8BDA5A: test    esi, esi
0x8BDA5C: mov     ebx, ecx
0x8BDA5E: jz      loc_8BDB3C
0x8BDA64: mov     ecx, ds:0BA7D98h
0x8BDA6A: mov     eax, [ecx]
0x8BDA6C: mov     edx, [eax+10h]
0x8BDA6F: push    26h ; '&'
0x8BDA71: push    60h ; '`'
0x8BDA73: call    edx
0x8BDA75: mov     word ptr [eax+4], 60h ; '`'
0x8BDA7B: mov     [esp+54h+var_44], eax
0x8BDA7F: mov     ecx, [esi+8]
0x8BDA82: mov     edx, [esi+4]
0x8BDA85: push    0
0x8BDA87: push    ecx
0x8BDA88: push    edx
0x8BDA89: mov     ecx, eax
0x8BDA8B: mov     [esp+60h+var_4], 0
0x8BDA93: call    sub_90FA70
0x8BDA98: fld     dword ptr [esi+34h]
0x8BDA9B: mov     edi, eax
0x8BDA9D: fstp    dword ptr [edi+54h]
0x8BDAA0: lea     ecx, [esp+54h+var_30]
0x8BDAA4: fld     dword ptr [esi+38h]
0x8BDAA7: mov     [esp+54h+var_4], 0FFFFFFFFh
0x8BDAAF: fstp    dword ptr [edi+58h]
0x8BDAB2: fld     dword ptr [esi+30h]
0x8BDAB5: fstp    dword ptr [edi+50h]
0x8BDAB8: mov     al, [esi+3Ch]
0x8BDABB: mov     [edi+5Ch], al
0x8BDABE: mov     al, [esi+3Dh]
0x8BDAC1: mov     [edi+5Dh], al
0x8BDAC4: fld     dword ptr [esi+20h]
0x8BDAC7: fstp    [esp+54h+var_40]
0x8BDACB: lea     eax, [esp+54h+var_40]
0x8BDACF: fld     dword ptr [esi+24h]
0x8BDAD2: push    eax
0x8BDAD3: fstp    [esp+58h+var_3C]
0x8BDAD7: push    ecx
0x8BDAD8: fld     dword ptr [esi+28h]
0x8BDADB: mov     ecx, edi
0x8BDADD: fstp    [esp+5Ch+var_38]
0x8BDAE1: fld     dword ptr [esi+2Ch]
0x8BDAE4: fstp    [esp+5Ch+var_34]
0x8BDAE8: fld     dword ptr [esi+10h]
0x8BDAEB: fstp    [esp+5Ch+var_30]
0x8BDAEF: fld     dword ptr [esi+14h]
0x8BDAF2: fstp    [esp+5Ch+var_2C]
0x8BDAF6: fld     dword ptr [esi+18h]
0x8BDAF9: fstp    [esp+5Ch+var_28]
0x8BDAFD: fld     dword ptr [esi+1Ch]
0x8BDB00: fstp    [esp+5Ch+var_24]
0x8BDB04: call    sub_90FAC0
0x8BDB09: mov     edx, [ebx]
0x8BDB0B: mov     eax, [edx+4Ch]
0x8BDB0E: push    edi
0x8BDB0F: mov     ecx, ebx
0x8BDB11: call    eax
0x8BDB13: cmp     word ptr [edi+4], 0
0x8BDB18: jz      short loc_8BDB32
0x8BDB1A: add     word ptr [edi+6], 0FFFFh
0x8BDB1F: movzx   eax, word ptr [edi+6]
0x8BDB23: test    ax, ax
0x8BDB26: jnz     short loc_8BDB32
0x8BDB28: mov     edx, [edi]
0x8BDB2A: mov     eax, [edx]
0x8BDB2C: push    1
0x8BDB2E: mov     ecx, edi
0x8BDB30: call    eax
0x8BDB32: mov     edx, [ebx]
0x8BDB34: mov     eax, [edx+7Ch]
0x8BDB37: push    esi
0x8BDB38: mov     ecx, ebx
0x8BDB3A: call    eax
0x8BDB3C: mov     ecx, [esp+54h+var_C]
0x8BDB40: mov     large fs:0, ecx
0x8BDB47: pop     ecx
0x8BDB48: pop     edi
0x8BDB49: pop     esi
0x8BDB4A: pop     ebx
0x8BDB4B: mov     ecx, [esp+44h+var_14]
0x8BDB4F: xor     ecx, esp
0x8BDB51: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BDB56: mov     esp, ebp
0x8BDB58: pop     ebp
0x8BDB59: retn    4
