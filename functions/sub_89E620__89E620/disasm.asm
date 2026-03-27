0x89E620: push    ebp
0x89E621: mov     ebp, esp
0x89E623: and     esp, 0FFFFFFF0h
0x89E626: push    0FFFFFFFFh
0x89E628: push    offset SEH_89E620
0x89E62D: mov     eax, large fs:0
0x89E633: push    eax
0x89E634: sub     esp, 48h
0x89E637: mov     eax, ds:0B30AACh
0x89E63C: xor     eax, esp
0x89E63E: mov     [esp+54h+var_14], eax
0x89E642: push    ebx
0x89E643: push    esi
0x89E644: push    edi
0x89E645: mov     eax, ds:0B30AACh
0x89E64A: xor     eax, esp
0x89E64C: push    eax
0x89E64D: lea     eax, [esp+64h+var_C]
0x89E651: mov     large fs:0, eax
0x89E657: mov     esi, [ebp+arg_0]
0x89E65A: test    esi, esi
0x89E65C: mov     ebx, ecx
0x89E65E: jz      loc_89E776
0x89E664: mov     ecx, ds:0BA7D98h
0x89E66A: mov     eax, [ecx]
0x89E66C: mov     edx, [eax+10h]
0x89E66F: push    26h ; '&'
0x89E671: push    50h ; 'P'
0x89E673: call    edx
0x89E675: mov     word ptr [eax+4], 50h ; 'P'
0x89E67B: mov     [esp+64h+var_44], eax
0x89E67F: fld     dword ptr [esi+20h]
0x89E682: fstp    [esp+64h+var_50]
0x89E686: mov     ecx, [esi+4]
0x89E689: fld     dword ptr [esi+24h]
0x89E68C: push    ecx
0x89E68D: fstp    [esp+68h+var_48]
0x89E691: sub     esp, 0Ch
0x89E694: fld     dword ptr [esi+28h]
0x89E697: lea     edx, [esp+74h+var_40]
0x89E69B: fstp    [esp+74h+var_4C]
0x89E69F: lea     ecx, [esp+74h+var_30]
0x89E6A3: fld     dword ptr [esi+2Ch]
0x89E6A6: mov     [esp+74h+var_4], 0
0x89E6AE: fstp    [esp+74h+var_54]
0x89E6B2: fld     [esp+74h+var_50]
0x89E6B6: fstp    [esp+74h+var_40]
0x89E6BA: fld     [esp+74h+var_48]
0x89E6BE: fstp    [esp+74h+var_3C]
0x89E6C2: fld     [esp+74h+var_4C]
0x89E6C6: fstp    [esp+74h+var_38]
0x89E6CA: fld     [esp+74h+var_54]
0x89E6CE: fstp    [esp+74h+var_34]
0x89E6D2: fld     dword ptr [esi+10h]
0x89E6D5: fstp    [esp+74h+var_54]
0x89E6D9: fld     dword ptr [esi+14h]
0x89E6DC: fstp    [esp+74h+var_4C]
0x89E6E0: fld     dword ptr [esi+18h]
0x89E6E3: fstp    [esp+74h+var_48]
0x89E6E7: fld     dword ptr [esi+1Ch]
0x89E6EA: fstp    [esp+74h+var_50]
0x89E6EE: fld     [esp+74h+var_54]
0x89E6F2: fstp    [esp+74h+var_30]
0x89E6F6: fld     [esp+74h+var_4C]
0x89E6FA: fstp    [esp+74h+var_2C]
0x89E6FE: fld     [esp+74h+var_48]
0x89E702: fstp    [esp+74h+var_28]
0x89E706: fld     [esp+74h+var_50]
0x89E70A: fstp    [esp+74h+var_24]
0x89E70E: fld     dword ptr [esi+3Ch]
0x89E711: fstp    [esp+74h+var_6C]
0x89E715: fld     dword ptr [esi+34h]
0x89E718: fstp    [esp+74h+var_70]
0x89E71C: fld     dword ptr [esi+30h]
0x89E71F: fstp    [esp+74h+var_74]
0x89E722: push    edx
0x89E723: push    ecx
0x89E724: mov     ecx, eax
0x89E726: call    sub_8B89C0
0x89E72B: fld     dword ptr [esi+38h]
0x89E72E: mov     edi, eax
0x89E730: push    ecx
0x89E731: mov     ecx, edi
0x89E733: fstp    [esp+68h+var_68]
0x89E736: mov     [esp+68h+var_4], 0FFFFFFFFh
0x89E73E: call    sub_8B8A80
0x89E743: mov     edx, [ebx]
0x89E745: mov     eax, [edx+4Ch]
0x89E748: push    edi
0x89E749: mov     ecx, ebx
0x89E74B: call    eax
0x89E74D: cmp     word ptr [edi+4], 0
0x89E752: jz      short loc_89E76C
0x89E754: add     word ptr [edi+6], 0FFFFh
0x89E759: movzx   eax, word ptr [edi+6]
0x89E75D: test    ax, ax
0x89E760: jnz     short loc_89E76C
0x89E762: mov     edx, [edi]
0x89E764: mov     eax, [edx]
0x89E766: push    1
0x89E768: mov     ecx, edi
0x89E76A: call    eax
0x89E76C: mov     edx, [ebx]
0x89E76E: mov     eax, [edx+7Ch]
0x89E771: push    esi
0x89E772: mov     ecx, ebx
0x89E774: call    eax
0x89E776: mov     ecx, [esp+64h+var_C]
0x89E77A: mov     large fs:0, ecx
0x89E781: pop     ecx
0x89E782: pop     edi
0x89E783: pop     esi
0x89E784: pop     ebx
0x89E785: mov     ecx, [esp+54h+var_14]
0x89E789: xor     ecx, esp
0x89E78B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89E790: mov     esp, ebp
0x89E792: pop     ebp
0x89E793: retn    4
