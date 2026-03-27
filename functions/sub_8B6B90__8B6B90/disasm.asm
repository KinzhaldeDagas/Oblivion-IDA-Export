0x8B6B90: push    ebp
0x8B6B91: mov     ebp, esp
0x8B6B93: and     esp, 0FFFFFFF0h
0x8B6B96: sub     esp, 38h
0x8B6B99: mov     eax, ds:0B30AACh
0x8B6B9E: xor     eax, esp
0x8B6BA0: mov     [esp+38h+var_4], eax
0x8B6BA4: push    esi
0x8B6BA5: mov     esi, [ebp+arg_0]
0x8B6BA8: test    esi, esi
0x8B6BAA: push    edi
0x8B6BAB: mov     edi, ecx
0x8B6BAD: jz      short loc_8B6BFF
0x8B6BAF: fld     dword ptr [esi+20h]
0x8B6BB2: push    ecx
0x8B6BB3: fstp    [esp+44h+var_30]
0x8B6BB7: lea     eax, [esp+44h+var_30]
0x8B6BBB: fld     dword ptr [esi+24h]
0x8B6BBE: lea     ecx, [esp+44h+var_20]
0x8B6BC2: fstp    [esp+44h+var_2C]
0x8B6BC6: fld     dword ptr [esi+28h]
0x8B6BC9: fstp    [esp+44h+var_28]
0x8B6BCD: fld     dword ptr [esi+2Ch]
0x8B6BD0: fstp    [esp+44h+var_24]
0x8B6BD4: fld     dword ptr [esi+10h]
0x8B6BD7: fstp    [esp+44h+var_20]
0x8B6BDB: fld     dword ptr [esi+14h]
0x8B6BDE: fstp    [esp+44h+var_1C]
0x8B6BE2: fld     dword ptr [esi+18h]
0x8B6BE5: fstp    [esp+44h+var_18]
0x8B6BE9: fld     dword ptr [esi+1Ch]
0x8B6BEC: fstp    [esp+44h+var_14]
0x8B6BF0: fld     dword ptr [esi+4]
0x8B6BF3: fstp    [esp+44h+var_44]; float
0x8B6BF6: push    eax; int
0x8B6BF7: push    ecx; float
0x8B6BF8: mov     ecx, edi
0x8B6BFA: call    sub_8B6980
0x8B6BFF: mov     edx, [edi]
0x8B6C01: mov     eax, [edx+7Ch]
0x8B6C04: push    esi
0x8B6C05: mov     ecx, edi
0x8B6C07: call    eax
0x8B6C09: mov     ecx, [esp+40h+var_4]
0x8B6C0D: pop     edi
0x8B6C0E: pop     esi
0x8B6C0F: xor     ecx, esp
0x8B6C11: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B6C16: mov     esp, ebp
0x8B6C18: pop     ebp
0x8B6C19: retn    4
