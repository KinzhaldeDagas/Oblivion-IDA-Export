0x7B8200: push    0FFFFFFFFh
0x7B8202: push    offset SEH_7B8200
0x7B8207: mov     eax, large fs:0
0x7B820D: push    eax
0x7B820E: sub     esp, 204h
0x7B8214: mov     eax, ds:0B30AACh
0x7B8219: xor     eax, esp
0x7B821B: mov     [esp+210h+var_10], eax
0x7B8222: push    ebp
0x7B8223: push    esi
0x7B8224: push    edi
0x7B8225: mov     eax, ds:0B30AACh
0x7B822A: xor     eax, esp
0x7B822C: push    eax
0x7B822D: lea     eax, [esp+220h+var_C]
0x7B8234: mov     large fs:0, eax
0x7B823A: mov     ebp, [esp+220h+arg_0]
0x7B8241: mov     edi, [esp+220h+Src]
0x7B8248: xor     esi, esi
0x7B824A: mov     [esp+220h+var_20C], 0
0x7B8252: mov     [esp+220h+var_208], ebp
0x7B8256: mov     [esp+220h+var_210], esi
0x7B825A: mov     ecx, ds:0B42EBCh
0x7B8260: test    ecx, ecx
0x7B8262: mov     [esp+220h+var_4], 1
0x7B826D: jz      short loc_7B8292
0x7B826F: mov     eax, [ecx]
0x7B8271: mov     edx, [eax+4]
0x7B8274: push    esi
0x7B8275: push    edi
0x7B8276: call    edx
0x7B8278: test    eax, eax
0x7B827A: jz      short loc_7B828C
0x7B827C: mov     esi, eax
0x7B827E: add     eax, 4
0x7B8281: push    eax; lpAddend
0x7B8282: mov     [esp+224h+var_210], esi
0x7B8286: call    dword ptr ds:0A28078h
0x7B828C: mov     ecx, ds:0B42EBCh
0x7B8292: cmp     [esp+220h+arg_8], 0
0x7B829A: jnz     short loc_7B82A4
0x7B829C: test    ecx, ecx
0x7B829E: jnz     loc_7B8393
0x7B82A4: test    esi, esi
0x7B82A6: jnz     short loc_7B82E7
0x7B82A8: push    esi
0x7B82A9: push    edi
0x7B82AA: call    NiFile_CanOpenFileWithMode_Indirect
0x7B82AF: add     esp, 8
0x7B82B2: test    al, al
0x7B82B4: jz      short loc_7B82E7
0x7B82B6: push    1; char
0x7B82B8: push    offset dword_B256D0; int
0x7B82BD: push    edi; Src
0x7B82BE: call    NiSourceTexture__LoadTextureByFilename
0x7B82C3: add     esp, 0Ch
0x7B82C6: push    eax; a2
0x7B82C7: lea     ecx, [esp+224h+var_210]; this
0x7B82CB: call    NiSmartPointer_Set??
0x7B82D0: mov     ecx, ds:0B42EBCh
0x7B82D6: test    ecx, ecx
0x7B82D8: mov     esi, [esp+220h+var_210]
0x7B82DC: jz      short loc_7B82E7
0x7B82DE: mov     eax, [ecx]
0x7B82E0: mov     edx, [eax+8]
0x7B82E3: push    esi
0x7B82E4: push    edi
0x7B82E5: call    edx
0x7B82E7: cmp     [esp+220h+arg_8], 0
0x7B82EF: jz      loc_7B8393
0x7B82F5: cmp     [esp+220h+arg_C], 0
0x7B82FD: jz      loc_7B8393
0x7B8303: test    esi, esi
0x7B8305: jz      loc_7B8393
0x7B830B: push    esi
0x7B830C: push    offset dword_B3F95C
0x7B8311: call    NiRTTI_Cast
0x7B8316: mov     ecx, [esi+24h]
0x7B8319: add     esp, 8
0x7B831C: test    ecx, ecx
0x7B831E: mov     edi, eax
0x7B8320: jz      short loc_7B8393
0x7B8322: mov     eax, [ecx]
0x7B8324: mov     edx, [eax+10h]
0x7B8327: call    edx
0x7B8329: cmp     eax, 1
0x7B832C: ja      short loc_7B8393
0x7B832E: test    edi, edi
0x7B8330: jz      short loc_7B834A
0x7B8332: mov     edi, [edi+38h]
0x7B8335: push    edi
0x7B8336: lea     eax, [esp+224h+var_204]
0x7B833A: push    offset aTextureErrorTe; "TEXTURE ERROR : texture does not contai"...
0x7B833F: push    eax
0x7B8340: call    __sprintf
0x7B8345: add     esp, 0Ch
0x7B8348: jmp     short loc_7B835C
0x7B834A: lea     ecx, [esp+220h+var_204]
0x7B834E: push    offset aTextureError_0; "TEXTURE ERROR : texture does not contai"...
0x7B8353: push    ecx
0x7B8354: call    __sprintf
0x7B8359: add     esp, 8
0x7B835C: mov     eax, ds:0B42E8Ch
0x7B8361: test    eax, eax
0x7B8363: jz      short loc_7B8371
0x7B8365: lea     edx, [esp+220h+var_204]
0x7B8369: push    0
0x7B836B: push    edx
0x7B836C: call    eax ; dword_B42E8C
0x7B836E: add     esp, 8
0x7B8371: mov     dword ptr [ebp+0], 0
0x7B8378: lea     ecx, [esp+220h+var_210]; this
0x7B837C: mov     [esp+220h+var_20C], 1
0x7B8384: mov     byte ptr [esp+220h+var_4], 0
0x7B838C: call    sub_7016A0
0x7B8391: jmp     short loc_7B83D0
0x7B8393: test    esi, esi
0x7B8395: mov     [ebp+0], esi
0x7B8398: jz      short loc_7B83A4
0x7B839A: lea     eax, [esi+4]
0x7B839D: push    eax; lpAddend
0x7B839E: call    dword ptr ds:0A28078h
0x7B83A4: test    esi, esi
0x7B83A6: mov     [esp+220h+var_20C], 1
0x7B83AE: mov     byte ptr [esp+220h+var_4], 0
0x7B83B6: jz      short loc_7B83D0
0x7B83B8: lea     ecx, [esi+4]
0x7B83BB: push    ecx; lpAddend
0x7B83BC: call    dword ptr ds:0A2807Ch
0x7B83C2: test    eax, eax
0x7B83C4: jnz     short loc_7B83D0
0x7B83C6: mov     edx, [esi]
0x7B83C8: mov     eax, [edx]
0x7B83CA: push    1
0x7B83CC: mov     ecx, esi
0x7B83CE: call    eax
0x7B83D0: mov     eax, ebp
0x7B83D2: mov     ecx, dword ptr [esp+220h+var_C]
0x7B83D9: mov     large fs:0, ecx
0x7B83E0: pop     ecx
0x7B83E1: pop     edi
0x7B83E2: pop     esi
0x7B83E3: pop     ebp
0x7B83E4: mov     ecx, [esp+210h+var_10]
0x7B83EB: xor     ecx, esp
0x7B83ED: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B83F2: add     esp, 210h
0x7B83F8: retn
