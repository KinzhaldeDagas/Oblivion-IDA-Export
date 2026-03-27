0x711AE0: sub     esp, 2Ch
0x711AE3: push    ebx
0x711AE4: push    esi
0x711AE5: push    edi
0x711AE6: mov     esi, ecx
0x711AE8: mov     ecx, 9
0x711AED: lea     edi, [esp+38h+var_24]
0x711AF1: rep movsd
0x711AF3: mov     esi, [esp+38h+arg_0]
0x711AF7: lea     eax, [esp+38h+var_2C]
0x711AFB: push    eax
0x711AFC: push    esi
0x711AFD: lea     ecx, [esp+40h+var_24]
0x711B01: call    sub_710990
0x711B06: lea     ecx, [esp+38h+var_2C]
0x711B0A: push    ecx
0x711B0B: push    esi
0x711B0C: lea     ecx, [esp+40h+var_24]
0x711B10: mov     bl, al
0x711B12: call    sub_710B00
0x711B17: mov     eax, [esp+38h+arg_4]
0x711B1B: fld     [esp+38h+var_24]
0x711B1F: fstp    dword ptr [eax]
0x711B21: pop     edi
0x711B22: fld     [esp+34h+var_18]
0x711B26: pop     esi
0x711B27: fstp    dword ptr [eax+4]
0x711B2A: test    bl, bl
0x711B2C: fld     [esp+30h+var_C]
0x711B30: pop     ebx
0x711B31: fstp    dword ptr [eax+8]
0x711B34: fld     [esp+2Ch+var_20]
0x711B38: fstp    dword ptr [eax+0Ch]
0x711B3B: fld     [esp+2Ch+var_14]
0x711B3F: fstp    dword ptr [eax+10h]
0x711B42: fld     [esp+2Ch+var_8]
0x711B46: fstp    dword ptr [eax+14h]
0x711B49: fld     [esp+2Ch+var_1C]
0x711B4D: jz      short loc_711B6C
0x711B4F: fchs
0x711B51: fstp    dword ptr [eax+18h]
0x711B54: fld     [esp+2Ch+var_10]
0x711B58: fchs
0x711B5A: fstp    dword ptr [eax+1Ch]
0x711B5D: fld     [esp+2Ch+var_4]
0x711B61: fchs
0x711B63: fstp    dword ptr [eax+20h]
0x711B66: add     esp, 2Ch
0x711B69: retn    8
0x711B6C: fstp    dword ptr [eax+18h]
0x711B6F: fld     [esp+2Ch+var_10]
0x711B73: fstp    dword ptr [eax+1Ch]
0x711B76: fld     [esp+2Ch+var_4]
0x711B7A: fstp    dword ptr [eax+20h]
0x711B7D: add     esp, 2Ch
0x711B80: retn    8
