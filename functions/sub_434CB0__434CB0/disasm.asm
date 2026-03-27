0x434CB0: sub     esp, 118h
0x434CB6: mov     eax, ___security_cookie
0x434CBB: xor     eax, esp
0x434CBD: mov     [esp+118h+var_4], eax
0x434CC4: push    edi
0x434CC5: mov     edi, ecx
0x434CC7: mov     eax, [edi+20h]
0x434CCA: test    eax, eax
0x434CCC: jz      short loc_434D1F
0x434CCE: cmp     [esp+11Ch+arg_4], 0
0x434CD6: push    esi
0x434CD7: mov     esi, eax
0x434CD9: jz      short loc_434CF0
0x434CDB: lea     ecx, [esp+120h+var_108]
0x434CDF: push    ecx; int
0x434CE0: mov     ecx, ModelLoaderPtr
0x434CE6: push    eax; Str1
0x434CE7: call    sub_434710
0x434CEC: lea     esi, [esp+120h+var_108]
0x434CF0: lea     edx, [esp+120h+var_110]
0x434CF4: push    edx; int
0x434CF5: lea     eax, [esp+124h+var_118]
0x434CF9: push    eax; int
0x434CFA: push    esi; FullPath
0x434CFB: call    HashFilePAth
0x434D00: mov     eax, [esp+12Ch+arg_0]
0x434D07: push    esi
0x434D08: lea     ecx, [esp+130h+var_110]
0x434D0C: push    ecx
0x434D0D: lea     edx, [esp+134h+var_118]
0x434D11: push    edx
0x434D12: push    eax
0x434D13: call    ArchiveManager_LazyFileLookup
0x434D18: add     esp, 1Ch
0x434D1B: mov     [edi+24h], eax
0x434D1E: pop     esi
0x434D1F: mov     ecx, [esp+11Ch+var_4]
0x434D26: pop     edi
0x434D27: xor     ecx, esp
0x434D29: call    @__security_check_cookie@4; __security_check_cookie(x)
0x434D2E: add     esp, 118h
0x434D34: retn    8
