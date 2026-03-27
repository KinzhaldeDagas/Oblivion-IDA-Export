0x42E020: mov     eax, [esp+arg_0]
0x42E024: push    ebx
0x42E025: mov     ebx, [esp+4+arg_8]
0x42E029: push    esi
0x42E02A: push    edi
0x42E02B: mov     edi, [esp+0Ch+arg_10]
0x42E02F: push    edi
0x42E030: push    ebx
0x42E031: push    eax
0x42E032: mov     esi, ecx
0x42E034: call    Archive_ContainsFolder
0x42E039: test    al, al
0x42E03B: jz      short loc_42E060
0x42E03D: mov     ecx, [esp+0Ch+arg_C]
0x42E041: mov     edx, [esp+0Ch+arg_4]
0x42E045: mov     eax, [ebx]
0x42E047: push    0
0x42E049: push    edi
0x42E04A: push    ecx
0x42E04B: push    edx
0x42E04C: push    eax
0x42E04D: mov     ecx, esi
0x42E04F: call    Archive_FolderContainFile
0x42E054: test    al, al
0x42E056: jz      short loc_42E060
0x42E058: pop     edi
0x42E059: pop     esi
0x42E05A: mov     al, 1
0x42E05C: pop     ebx
0x42E05D: retn    14h
0x42E060: pop     edi
0x42E061: pop     esi
0x42E062: xor     al, al
0x42E064: pop     ebx
0x42E065: retn    14h
