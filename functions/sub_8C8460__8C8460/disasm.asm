0x8C8460: push    ebp
0x8C8461: mov     ebp, esp
0x8C8463: and     esp, 0FFFFFFF0h
0x8C8466: sub     esp, 38h
0x8C8469: mov     eax, ds:0B30AACh
0x8C846E: xor     eax, esp
0x8C8470: mov     [esp+38h+var_4], eax
0x8C8474: push    esi
0x8C8475: mov     esi, [ebp+arg_0]
0x8C8478: test    esi, esi
0x8C847A: push    edi
0x8C847B: mov     edi, ecx
0x8C847D: jz      short loc_8C84CF
0x8C847F: fld     dword ptr [esi+20h]
0x8C8482: push    ecx
0x8C8483: fstp    [esp+44h+var_30]
0x8C8487: lea     eax, [esp+44h+var_30]
0x8C848B: fld     dword ptr [esi+24h]
0x8C848E: lea     ecx, [esp+44h+var_20]
0x8C8492: fstp    [esp+44h+var_2C]
0x8C8496: fld     dword ptr [esi+28h]
0x8C8499: fstp    [esp+44h+var_28]
0x8C849D: fld     dword ptr [esi+2Ch]
0x8C84A0: fstp    [esp+44h+var_24]
0x8C84A4: fld     dword ptr [esi+10h]
0x8C84A7: fstp    [esp+44h+var_20]
0x8C84AB: fld     dword ptr [esi+14h]
0x8C84AE: fstp    [esp+44h+var_1C]
0x8C84B2: fld     dword ptr [esi+18h]
0x8C84B5: fstp    [esp+44h+var_18]
0x8C84B9: fld     dword ptr [esi+1Ch]
0x8C84BC: fstp    [esp+44h+var_14]
0x8C84C0: fld     dword ptr [esi+30h]
0x8C84C3: fstp    [esp+44h+var_44]; float
0x8C84C6: push    eax; int
0x8C84C7: push    ecx; int
0x8C84C8: mov     ecx, edi
0x8C84CA: call    sub_8C82D0
0x8C84CF: mov     edx, [edi]
0x8C84D1: mov     eax, [edx+7Ch]
0x8C84D4: push    esi
0x8C84D5: mov     ecx, edi
0x8C84D7: call    eax
0x8C84D9: mov     ecx, [esp+40h+var_4]
0x8C84DD: pop     edi
0x8C84DE: pop     esi
0x8C84DF: xor     ecx, esp
0x8C84E1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C84E6: mov     esp, ebp
0x8C84E8: pop     ebp
0x8C84E9: retn    4
