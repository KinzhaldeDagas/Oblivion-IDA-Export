0x74E7C0: sub     esp, 108h
0x74E7C6: mov     eax, ds:0B30AACh
0x74E7CB: xor     eax, esp
0x74E7CD: mov     [esp+108h+var_4], eax
0x74E7D4: push    ebx
0x74E7D5: push    esi
0x74E7D6: push    edi
0x74E7D7: mov     edi, [esp+114h+arg_0]
0x74E7DE: lea     esi, [edi+0E0h]
0x74E7E4: test    esi, esi
0x74E7E6: mov     ebx, ecx
0x74E7E8: jz      short loc_74E80E
0x74E7EA: push    offset aMeshesSkyRainh; "Meshes\\Sky\\RainHeavy.NIF"
0x74E7EF: push    esi; Str1
0x74E7F0: call    __strcmp
0x74E7F5: add     esp, 8
0x74E7F8: test    eax, eax
0x74E7FA: jz      short loc_74E84A
0x74E7FC: push    offset aMeshesSkyRainl; "Meshes\\Sky\\RainLight.NIF"
0x74E801: push    esi; Str1
0x74E802: call    __strcmp
0x74E807: add     esp, 8
0x74E80A: test    eax, eax
0x74E80C: jz      short loc_74E84A
0x74E80E: cmp     byte ptr [edi+8], 0
0x74E812: lea     eax, [edi+8]
0x74E815: jnz     short loc_74E81C
0x74E817: mov     eax, offset aPlease; "Please"
0x74E81C: push    eax
0x74E81D: push    esi
0x74E81E: lea     eax, [esp+11Ch+Text]
0x74E822: push    offset aFileSContainsA; "File %s contains a mesh particle system"...
0x74E827: push    eax
0x74E828: call    __sprintf
0x74E82D: mov     eax, ds:0B27E60h
0x74E832: add     esp, 10h
0x74E835: test    eax, eax
0x74E837: jz      short loc_74E84A
0x74E839: push    0
0x74E83B: lea     ecx, [esp+118h+Text]
0x74E83F: push    offset aUnsupportedObj; "Unsupported Object"
0x74E844: push    ecx; lpText
0x74E845: call    eax ; sub_7485D0
0x74E847: add     esp, 0Ch
0x74E84A: push    edi
0x74E84B: mov     ecx, ebx
0x74E84D: call    sub_749B70
0x74E852: mov     ecx, [esp+114h+var_4]
0x74E859: pop     edi
0x74E85A: pop     esi
0x74E85B: pop     ebx
0x74E85C: xor     ecx, esp
0x74E85E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x74E863: add     esp, 108h
0x74E869: retn    4
