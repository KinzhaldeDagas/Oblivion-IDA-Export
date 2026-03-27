0x4D0100: sub     esp, 108h
0x4D0106: mov     eax, ds:0B30AACh
0x4D010B: xor     eax, esp
0x4D010D: mov     [esp+108h+var_4], eax
0x4D0114: push    esi
0x4D0115: mov     esi, ecx
0x4D0117: test    byte ptr [esi+24h], 1
0x4D011B: push    edi
0x4D011C: mov     edi, [esp+110h+arg_0]
0x4D0123: jz      short loc_4D016B
0x4D0125: push    edi
0x4D0126: call    sub_4CFF80
0x4D012B: mov     eax, [esi]
0x4D012D: mov     edx, [eax+0D4h]
0x4D0133: mov     ecx, esi
0x4D0135: call    edx
0x4D0137: mov     ecx, [esp+110h+arg_8]
0x4D013E: mov     edx, [esp+110h+arg_4]
0x4D0145: push    ecx
0x4D0146: push    edx
0x4D0147: push    eax; Format
0x4D0148: push    offset aS_02i_02i_dds; "%s.%02i.%02i.dds"
0x4D014D: lea     eax, [esp+120h+Dest]
0x4D0151: push    104h; Count
0x4D0156: push    eax; Dest
0x4D0157: call    __snprintf
0x4D015C: add     esp, 18h
0x4D015F: lea     ecx, [esp+110h+Dest]
0x4D0163: push    ecx
0x4D0164: mov     ecx, edi
0x4D0166: call    BSStringT_Append
0x4D016B: mov     ecx, [esp+110h+var_4]
0x4D0172: pop     edi
0x4D0173: pop     esi
0x4D0174: xor     ecx, esp
0x4D0176: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D017B: add     esp, 108h
0x4D0181: retn    0Ch
