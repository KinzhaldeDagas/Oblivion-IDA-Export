0x9181D0: sub     esp, 214h
0x9181D6: mov     eax, ds:0B30AACh
0x9181DB: mov     [esp+214h+var_4], eax
0x9181E2: mov     al, [ecx+0Ch]
0x9181E5: test    al, al
0x9181E7: mov     [esp+214h+var_20C], ecx
0x9181EB: jnz     short loc_918222
0x9181ED: mov     edx, [esp+214h+arg_4]
0x9181F4: imul    edx, [esp+214h+arg_8]
0x9181FC: mov     ecx, [ecx+8]
0x9181FF: mov     eax, [ecx]
0x918201: push    edx
0x918202: mov     edx, [esp+218h+arg_0]
0x918209: push    edx
0x91820A: call    dword ptr [eax+0Ch]
0x91820D: mov     ecx, [esp+214h+var_4]
0x918214: call    @__security_check_cookie@4; __security_check_cookie(x)
0x918219: add     esp, 214h
0x91821F: retn    0Ch
0x918222: mov     eax, [esp+214h+arg_0]
0x918229: push    ebx
0x91822A: push    ebp
0x91822B: mov     [esp+21Ch+var_214], eax
0x91822F: mov     ebp, 200h
0x918234: mov     eax, ebp
0x918236: push    esi
0x918237: mov     esi, [esp+220h+arg_4]
0x91823E: cdq
0x91823F: idiv    esi
0x918241: push    edi
0x918242: mov     edi, esi
0x918244: imul    edi, [esp+224h+arg_8]
0x91824C: mov     ecx, edi
0x91824E: and     ecx, 800001FFh
0x918254: mov     ebx, eax
0x918256: jns     short loc_918260
0x918258: dec     ecx
0x918259: or      ecx, 0FFFFFE00h
0x91825F: inc     ecx
0x918260: mov     eax, ecx
0x918262: cdq
0x918263: idiv    esi
0x918265: test    edi, edi
0x918267: mov     [esp+224h+var_208], ecx
0x91826B: mov     [esp+224h+var_210], edx
0x91826F: mov     [esp+224h+var_210], eax
0x918273: jle     loc_91836E
0x918279: jmp     short loc_918286
0x91827B: mov     esi, [esp+224h+arg_4]
0x918282: mov     ecx, [esp+224h+var_208]
0x918286: cmp     edi, 200h
0x91828C: jge     short loc_918294
0x91828E: mov     ebx, [esp+224h+var_210]
0x918292: mov     ebp, ecx
0x918294: mov     ecx, [esp+224h+var_214]
0x918298: push    ebp
0x918299: push    ecx
0x91829A: lea     edx, [esp+22Ch+var_204]
0x91829E: push    edx
0x91829F: call    sub_8B1890
0x9182A4: mov     eax, esi
0x9182A6: add     esp, 0Ch
0x9182A9: sub     eax, 2
0x9182AC: jz      loc_91832E
0x9182B2: sub     eax, 2
0x9182B5: jz      short loc_918306
0x9182B7: sub     eax, 4
0x9182BA: jnz     loc_918348
0x9182C0: test    ebx, ebx
0x9182C2: jle     loc_918348
0x9182C8: lea     eax, [esp+224h+var_1FE]
0x9182CC: mov     esi, ebx
0x9182CE: mov     edi, edi
0x9182D0: mov     dl, [eax+1]
0x9182D3: mov     cl, [eax-6]
0x9182D6: mov     [eax-6], dl
0x9182D9: mov     [eax+1], cl
0x9182DC: mov     dl, [eax]
0x9182DE: mov     cl, [eax-5]
0x9182E1: mov     [eax-5], dl
0x9182E4: mov     [eax], cl
0x9182E6: mov     dl, [eax-1]
0x9182E9: mov     cl, [eax-4]
0x9182EC: mov     [eax-4], dl
0x9182EF: mov     [eax-1], cl
0x9182F2: mov     dl, [eax-2]
0x9182F5: mov     cl, [eax-3]
0x9182F8: mov     [eax-3], dl
0x9182FB: mov     [eax-2], cl
0x9182FE: add     eax, 8
0x918301: dec     esi
0x918302: jnz     short loc_9182D0
0x918304: jmp     short loc_918348
0x918306: test    ebx, ebx
0x918308: jle     short loc_918348
0x91830A: lea     eax, [esp+224h+var_202]
0x91830E: mov     esi, ebx
0x918310: mov     dl, [eax+1]
0x918313: mov     cl, [eax-2]
0x918316: mov     [eax-2], dl
0x918319: mov     [eax+1], cl
0x91831C: mov     dl, [eax]
0x91831E: mov     cl, [eax-1]
0x918321: mov     [eax-1], dl
0x918324: mov     [eax], cl
0x918326: add     eax, 4
0x918329: dec     esi
0x91832A: jnz     short loc_918310
0x91832C: jmp     short loc_918348
0x91832E: test    ebx, ebx
0x918330: lea     eax, [esp+224h+var_204]
0x918334: jle     short loc_918348
0x918336: mov     esi, ebx
0x918338: mov     dl, [eax+1]
0x91833B: mov     cl, [eax]
0x91833D: mov     [eax], dl
0x91833F: mov     [eax+1], cl
0x918342: add     eax, 2
0x918345: dec     esi
0x918346: jnz     short loc_918338
0x918348: mov     eax, [esp+224h+var_20C]
0x91834C: mov     ecx, [eax+8]
0x91834F: mov     edx, [ecx]
0x918351: push    ebp
0x918352: lea     eax, [esp+228h+var_204]
0x918356: push    eax
0x918357: call    dword ptr [edx+0Ch]
0x91835A: mov     ecx, [esp+224h+var_214]
0x91835E: sub     edi, ebp
0x918360: add     ecx, ebp
0x918362: test    edi, edi
0x918364: mov     [esp+224h+var_214], ecx
0x918368: jg      loc_91827B
0x91836E: mov     ecx, [esp+224h+var_4]
0x918375: pop     edi
0x918376: pop     esi
0x918377: pop     ebp
0x918378: pop     ebx
0x918379: call    @__security_check_cookie@4; __security_check_cookie(x)
0x91837E: add     esp, 214h
0x918384: retn    0Ch
