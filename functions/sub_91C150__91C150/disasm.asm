0x91C150: push    ebp
0x91C151: mov     ebp, esp
0x91C153: and     esp, 0FFFFFFF0h
0x91C156: sub     esp, 274h
0x91C15C: mov     eax, ds:0B30AACh
0x91C161: push    ebx
0x91C162: mov     ebx, [ebp+arg_0]
0x91C165: mov     [esp+278h+var_4], eax
0x91C16C: mov     eax, [ebx+14h]
0x91C16F: test    eax, eax
0x91C171: push    esi
0x91C172: mov     esi, ecx
0x91C174: push    edi
0x91C175: mov     [esp+280h+var_258], esi
0x91C179: jz      loc_91C44D
0x91C17F: mov     eax, [esi-18h]
0x91C182: test    eax, eax
0x91C184: jnz     short loc_91C1AA
0x91C186: mov     eax, [esi-14h]
0x91C189: test    eax, eax
0x91C18B: jnz     short loc_91C1AA
0x91C18D: push    1234h
0x91C192: lea     eax, [esp+284h+var_268]
0x91C196: push    eax
0x91C197: mov     ecx, ebx
0x91C199: call    sub_47F990
0x91C19E: mov     eax, [esp+280h+var_268]
0x91C1A2: test    eax, eax
0x91C1A4: jnz     loc_91C44D
0x91C1AA: mov     ecx, [esi+0Ch]
0x91C1AD: mov     edx, [ebx+8]
0x91C1B0: xor     eax, eax
0x91C1B2: test    ecx, ecx
0x91C1B4: jle     loc_91C44D
0x91C1BA: mov     edi, [esi+8]
0x91C1BD: mov     [esp+280h+var_268], edi
0x91C1C1: mov     edi, [esp+280h+var_268]
0x91C1C5: mov     edi, [edi]
0x91C1C7: cmp     [edi], edx
0x91C1C9: jz      short loc_91C1F0
0x91C1CB: mov     edi, [esp+280h+var_268]
0x91C1CF: inc     eax
0x91C1D0: add     edi, 4
0x91C1D3: cmp     eax, ecx
0x91C1D5: mov     [esp+280h+var_268], edi
0x91C1D9: jl      short loc_91C1C1
0x91C1DB: mov     ecx, [esp+280h+var_4]
0x91C1E2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x91C1E7: pop     edi
0x91C1E8: pop     esi
0x91C1E9: pop     ebx
0x91C1EA: mov     esp, ebp
0x91C1EC: pop     ebp
0x91C1ED: retn    4
0x91C1F0: test    eax, eax
0x91C1F2: jl      loc_91C44D
0x91C1F8: mov     ecx, [esi+8]
0x91C1FB: mov     edx, [ecx+eax*4]
0x91C1FE: push    1131h
0x91C203: lea     ecx, [esp+284h+var_260]
0x91C207: lea     eax, [esp+284h+var_248]
0x91C20B: push    ecx
0x91C20C: mov     ecx, ebx
0x91C20E: mov     [esp+288h+var_268], edx
0x91C212: mov     [esp+288h+var_254], eax
0x91C216: mov     [esp+288h+var_250], 0
0x91C21E: mov     [esp+288h+var_24C], 80000008h
0x91C226: call    sub_47F990
0x91C22B: mov     esi, [eax]
0x91C22D: test    esi, esi
0x91C22F: jz      short loc_91C294
0x91C231: push    1131h
0x91C236: lea     edx, [esp+284h+var_260]
0x91C23A: push    edx
0x91C23B: mov     ecx, ebx
0x91C23D: call    sub_8BC7B0
0x91C242: mov     ecx, ds:0BA7D98h
0x91C248: mov     eax, [ecx]
0x91C24A: push    8
0x91C24C: push    60h ; '`'
0x91C24E: call    dword ptr [eax+10h]
0x91C251: push    esi
0x91C252: mov     ecx, eax
0x91C254: mov     word ptr [eax+4], 60h ; '`'
0x91C25A: call    sub_94CCB0
0x91C25F: xorps   xmm0, xmm0
0x91C262: movaps  xmmword ptr [eax+10h], xmm0
0x91C266: movaps  xmmword ptr [eax+20h], xmm0
0x91C26A: movaps  xmmword ptr [eax+30h], xmm0
0x91C26E: mov     ecx, 3F800000h
0x91C273: mov     [eax+10h], ecx
0x91C276: mov     [eax+24h], ecx
0x91C279: mov     [eax+38h], ecx
0x91C27C: movaps  xmmword ptr [eax+40h], xmm0
0x91C280: mov     ecx, [esp+280h+var_250]
0x91C284: mov     edx, [esp+280h+var_254]
0x91C288: mov     [edx+ecx*4], eax
0x91C28B: inc     [esp+280h+var_250]
0x91C28F: jmp     loc_91C34D
0x91C294: lea     ecx, [esp+280h+var_260]
0x91C298: call    sub_94A520
0x91C29D: lea     eax, [esp+280h+var_260]
0x91C2A1: push    eax
0x91C2A2: lea     ecx, [esp+284h+var_21C]
0x91C2A6: call    sub_94A530
0x91C2AB: mov     edx, [ebx+14h]
0x91C2AE: lea     ecx, [esp+280h+var_254]
0x91C2B2: push    ecx
0x91C2B3: push    edx
0x91C2B4: lea     ecx, [esp+288h+var_21C]
0x91C2B8: call    sub_94B7E0
0x91C2BD: mov     esi, [esp+280h+var_250]
0x91C2C1: dec     esi
0x91C2C2: js      loc_91C34D
0x91C2C8: mov     edi, 6
0x91C2CD: lea     ecx, [ecx+0]
0x91C2D0: mov     eax, [esp+280h+var_254]
0x91C2D4: mov     eax, [eax+esi*4]
0x91C2D7: cmp     [eax+54h], edi
0x91C2DA: jnz     short loc_91C34A
0x91C2DC: mov     ecx, [eax+50h]
0x91C2DF: test    ecx, ecx
0x91C2E1: jnz     short loc_91C34A
0x91C2E3: push    ecx
0x91C2E4: mov     eax, esp
0x91C2E6: push    200h
0x91C2EB: lea     ecx, [esp+288h+var_208]
0x91C2F2: push    ecx
0x91C2F3: lea     ecx, [esp+28Ch+var_228]
0x91C2F7: mov     byte ptr [eax], 1
0x91C2FA: call    sub_8BBFB0
0x91C2FF: push    offset aUnableToBuildD; "Unable to build display geometry from h"...
0x91C304: lea     ecx, [esp+284h+var_228]
0x91C308: call    sub_8BBDB0
0x91C30D: mov     ecx, ds:0BA7FB0h
0x91C313: mov     edx, [ecx]
0x91C315: push    0C4h ; 'Ä'
0x91C31A: push    offset a_Visualdebug_0; ".\\visualdebugger\\viewer\\hkShapeDispl"...
0x91C31F: lea     eax, [esp+288h+var_208]
0x91C326: push    eax
0x91C327: push    0FFFFFFFFh
0x91C329: push    0
0x91C32B: call    dword ptr [edx+8]
0x91C32E: lea     ecx, [esp+280h+var_228]
0x91C332: call    sub_8BC000
0x91C337: mov     eax, [esp+280h+var_250]
0x91C33B: mov     ecx, [esp+280h+var_254]
0x91C33F: dec     eax
0x91C340: mov     [esp+280h+var_250], eax
0x91C344: mov     edx, [ecx+eax*4]
0x91C347: mov     [ecx+esi*4], edx
0x91C34A: dec     esi
0x91C34B: jns     short loc_91C2D0
0x91C34D: mov     eax, [esp+280h+var_250]
0x91C351: test    eax, eax
0x91C353: jle     loc_91C3EC
0x91C359: push    ebx
0x91C35A: call    sub_91BA70
0x91C35F: mov     esi, [esp+284h+var_268]
0x91C363: mov     ecx, [esi+8]
0x91C366: add     esi, 4
0x91C369: mov     edi, eax
0x91C36B: mov     eax, [esi+8]
0x91C36E: and     eax, 3FFFFFFFh
0x91C373: add     esp, 4
0x91C376: cmp     ecx, eax
0x91C378: jnz     short loc_91C385
0x91C37A: push    4
0x91C37C: push    esi
0x91C37D: call    sub_8A6EE0
0x91C382: add     esp, 8
0x91C385: mov     ecx, [esi+4]
0x91C388: mov     edx, [esi]
0x91C38A: mov     [edx+ecx*4], edi
0x91C38D: inc     dword ptr [esi+4]
0x91C390: mov     edx, ds:0BA8438h
0x91C396: mov     esi, [esp+280h+var_258]
0x91C39A: mov     ecx, [esi-10h]
0x91C39D: mov     eax, [ecx]
0x91C39F: push    edx
0x91C3A0: mov     edx, [ebx+50h]
0x91C3A3: push    edi
0x91C3A4: add     edx, 10h
0x91C3A7: push    edx
0x91C3A8: lea     edx, [esp+28Ch+var_254]
0x91C3AC: push    edx
0x91C3AD: call    dword ptr [eax+4]
0x91C3B0: push    1130h
0x91C3B5: lea     eax, [esp+284h+var_260]
0x91C3B9: push    eax
0x91C3BA: mov     ecx, ebx
0x91C3BC: call    sub_47F990
0x91C3C1: mov     eax, [eax]
0x91C3C3: test    eax, eax
0x91C3C5: jnz     short loc_91C3DB
0x91C3C7: mov     al, [ebx+91h]
0x91C3CD: test    al, al
0x91C3CF: mov     eax, ds:0BA843Ch
0x91C3D4: jnz     short loc_91C3DB
0x91C3D6: mov     eax, ds:0BA8440h
0x91C3DB: mov     ecx, [esi-10h]
0x91C3DE: mov     esi, ds:0BA8438h
0x91C3E4: mov     edx, [ecx]
0x91C3E6: push    esi
0x91C3E7: push    edi
0x91C3E8: push    eax
0x91C3E9: call    dword ptr [edx+8]
0x91C3EC: mov     eax, [esp+280h+var_250]
0x91C3F0: xor     esi, esi
0x91C3F2: test    eax, eax
0x91C3F4: jle     short loc_91C410
0x91C3F6: mov     eax, [esp+280h+var_254]
0x91C3FA: mov     ecx, [eax+esi*4]
0x91C3FD: test    ecx, ecx
0x91C3FF: jz      short loc_91C407
0x91C401: mov     edx, [ecx]
0x91C403: push    1
0x91C405: call    dword ptr [edx]
0x91C407: mov     eax, [esp+280h+var_250]
0x91C40B: inc     esi
0x91C40C: cmp     esi, eax
0x91C40E: jl      short loc_91C3F6
0x91C410: mov     eax, [esp+280h+var_24C]
0x91C414: test    eax, eax
0x91C416: js      short loc_91C44D
0x91C418: mov     ecx, ds:0BA9DE4h
0x91C41E: mov     edx, large fs:2Ch
0x91C425: mov     ecx, [edx+ecx*4]
0x91C428: mov     ecx, [ecx+19Ch]
0x91C42E: test    ecx, ecx
0x91C430: jnz     short loc_91C438
0x91C432: mov     ecx, ds:0BA7D9Ch
0x91C438: mov     edx, [esp+280h+var_254]
0x91C43C: and     eax, 3FFFFFFFh
0x91C441: push    14h
0x91C443: shl     eax, 2
0x91C446: push    eax
0x91C447: push    edx
0x91C448: call    sub_8A75D0
0x91C44D: mov     ecx, [esp+280h+var_4]
0x91C454: call    @__security_check_cookie@4; __security_check_cookie(x)
0x91C459: pop     edi
0x91C45A: pop     esi
0x91C45B: pop     ebx
0x91C45C: mov     esp, ebp
0x91C45E: pop     ebp
0x91C45F: retn    4
