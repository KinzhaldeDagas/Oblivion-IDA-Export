0x8BEB60: push    ebp
0x8BEB61: mov     ebp, esp
0x8BEB63: and     esp, 0FFFFFFF0h
0x8BEB66: push    0FFFFFFFFh
0x8BEB68: push    offset SEH_8BEB60
0x8BEB6D: mov     eax, large fs:0
0x8BEB73: push    eax
0x8BEB74: sub     esp, 38h
0x8BEB77: mov     eax, ds:0B30AACh
0x8BEB7C: xor     eax, esp
0x8BEB7E: mov     [esp+44h+var_14], eax
0x8BEB82: push    ebx
0x8BEB83: push    esi
0x8BEB84: push    edi
0x8BEB85: mov     eax, ds:0B30AACh
0x8BEB8A: xor     eax, esp
0x8BEB8C: push    eax
0x8BEB8D: lea     eax, [esp+54h+var_C]
0x8BEB91: mov     large fs:0, eax
0x8BEB97: mov     esi, [ebp+arg_0]
0x8BEB9A: test    esi, esi
0x8BEB9C: mov     ebx, ecx
0x8BEB9E: jz      loc_8BEC60
0x8BEBA4: mov     ecx, ds:0BA7D98h
0x8BEBAA: mov     eax, [ecx]
0x8BEBAC: mov     edx, [eax+10h]
0x8BEBAF: push    26h ; '&'
0x8BEBB1: push    40h ; '@'
0x8BEBB3: call    edx
0x8BEBB5: mov     word ptr [eax+4], 40h ; '@'
0x8BEBBB: mov     [esp+54h+var_34], eax
0x8BEBBF: fld     dword ptr [esi+10h]
0x8BEBC2: fstp    [esp+54h+var_38]
0x8BEBC6: mov     edx, [esi+4]
0x8BEBC9: fld     dword ptr [esi+14h]
0x8BEBCC: sub     esp, 8
0x8BEBCF: fstp    [esp+5Ch+var_3C]
0x8BEBD3: lea     ecx, [esp+5Ch+var_30]
0x8BEBD7: fld     dword ptr [esi+18h]
0x8BEBDA: mov     [esp+5Ch+var_4], 0
0x8BEBE2: fstp    [esp+5Ch+var_44]
0x8BEBE6: fld     dword ptr [esi+1Ch]
0x8BEBE9: fstp    [esp+5Ch+var_40]
0x8BEBED: fld     [esp+5Ch+var_38]
0x8BEBF1: fstp    [esp+5Ch+var_30]
0x8BEBF5: fld     [esp+5Ch+var_3C]
0x8BEBF9: fstp    [esp+5Ch+var_2C]
0x8BEBFD: fld     [esp+5Ch+var_44]
0x8BEC01: fstp    [esp+5Ch+var_28]
0x8BEC05: fld     [esp+5Ch+var_40]
0x8BEC09: fstp    [esp+5Ch+var_24]
0x8BEC0D: fld     dword ptr [esi+24h]
0x8BEC10: fstp    [esp+5Ch+var_58]; float
0x8BEC14: fld     dword ptr [esi+20h]
0x8BEC17: fstp    [esp+5Ch+var_5C]; float
0x8BEC1A: push    ecx; int
0x8BEC1B: push    edx; int
0x8BEC1C: mov     ecx, eax
0x8BEC1E: call    sub_8BE730
0x8BEC23: mov     edi, eax
0x8BEC25: mov     eax, [ebx]
0x8BEC27: mov     edx, [eax+4Ch]
0x8BEC2A: push    edi
0x8BEC2B: mov     ecx, ebx
0x8BEC2D: mov     [esp+58h+var_4], 0FFFFFFFFh
0x8BEC35: call    edx
0x8BEC37: cmp     word ptr [edi+4], 0
0x8BEC3C: jz      short loc_8BEC56
0x8BEC3E: add     word ptr [edi+6], 0FFFFh
0x8BEC43: movzx   eax, word ptr [edi+6]
0x8BEC47: test    ax, ax
0x8BEC4A: jnz     short loc_8BEC56
0x8BEC4C: mov     eax, [edi]
0x8BEC4E: mov     edx, [eax]
0x8BEC50: push    1
0x8BEC52: mov     ecx, edi
0x8BEC54: call    edx
0x8BEC56: mov     eax, [ebx]
0x8BEC58: mov     edx, [eax+7Ch]
0x8BEC5B: push    esi
0x8BEC5C: mov     ecx, ebx
0x8BEC5E: call    edx
0x8BEC60: mov     ecx, [esp+54h+var_C]
0x8BEC64: mov     large fs:0, ecx
0x8BEC6B: pop     ecx
0x8BEC6C: pop     edi
0x8BEC6D: pop     esi
0x8BEC6E: pop     ebx
0x8BEC6F: mov     ecx, [esp+44h+var_14]
0x8BEC73: xor     ecx, esp
0x8BEC75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BEC7A: mov     esp, ebp
0x8BEC7C: pop     ebp
0x8BEC7D: retn    4
