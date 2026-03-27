0x4D6950: push    ebp
0x4D6951: mov     ebp, esp
0x4D6953: and     esp, 0FFFFFFF0h
0x4D6956: sub     esp, 2Ch
0x4D6959: mov     eax, ds:0B30AACh
0x4D695E: xor     eax, esp
0x4D6960: mov     [esp+2Ch+var_4], eax
0x4D6964: mov     eax, [ecx]
0x4D6966: mov     eax, [eax+90h]
0x4D696C: push    esi
0x4D696D: mov     esi, [ebp+arg_0]
0x4D6970: lea     edx, [esp+30h+var_20]
0x4D6974: push    edx
0x4D6975: call    eax
0x4D6977: fld     dword ptr [eax]
0x4D6979: mov     ecx, [esp+30h+var_4]
0x4D697D: fstp    dword ptr [esi+4]
0x4D6980: fld     dword ptr [eax+4]
0x4D6983: fstp    dword ptr [esi+8]
0x4D6986: fld     dword ptr [eax+8]
0x4D6989: fstp    dword ptr [esi+0Ch]
0x4D698C: fld     dword ptr [eax+0Ch]
0x4D698F: fstp    dword ptr [esi]
0x4D6991: pop     esi
0x4D6992: xor     ecx, esp
0x4D6994: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D6999: mov     esp, ebp
0x4D699B: pop     ebp
0x4D699C: retn    4
