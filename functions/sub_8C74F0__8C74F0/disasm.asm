0x8C74F0: push    ebp
0x8C74F1: mov     ebp, esp
0x8C74F3: and     esp, 0FFFFFFF0h
0x8C74F6: push    0FFFFFFFFh
0x8C74F8: push    offset SEH_8C74F0
0x8C74FD: mov     eax, large fs:0
0x8C7503: push    eax
0x8C7504: sub     esp, 308h
0x8C750A: mov     eax, ds:0B30AACh
0x8C750F: xor     eax, esp
0x8C7511: mov     [esp+314h+var_14], eax
0x8C7518: push    ebx
0x8C7519: push    esi
0x8C751A: push    edi
0x8C751B: mov     eax, ds:0B30AACh
0x8C7520: xor     eax, esp
0x8C7522: push    eax
0x8C7523: lea     eax, [esp+324h+var_C]
0x8C752A: mov     large fs:0, eax
0x8C7530: mov     esi, [ebp+arg_0]
0x8C7533: mov     ebx, ecx
0x8C7535: mov     eax, [ebx]
0x8C7537: mov     edx, [eax+74h]
0x8C753A: lea     ecx, [esp+324h+var_2FD]
0x8C753E: push    ecx
0x8C753F: mov     ecx, ebx
0x8C7541: mov     [esp+328h+var_30C], ebx
0x8C7545: mov     [esp+328h+a2], esi
0x8C7549: call    edx
0x8C754B: cmp     dword ptr [esi+4], 2
0x8C754F: mov     [esp+324h+var_308], eax
0x8C7553: jnb     loc_8C7AD0
0x8C7559: lea     edi, [esi+0E0h]
0x8C755F: add     esi, 8
0x8C7562: xor     ebx, ebx
0x8C7564: cmp     [esi], bl
0x8C7566: jnz     short loc_8C756D
0x8C7568: mov     esi, offset aPlease; "Please"
0x8C756D: push    ecx
0x8C756E: mov     eax, esp
0x8C7570: mov     [esp+328h+var_228], esp
0x8C7577: mov     byte ptr [eax], 1
0x8C757A: push    200h
0x8C757F: lea     eax, [esp+32Ch+var_218]
0x8C7586: push    eax
0x8C7587: lea     ecx, [esp+330h+var_224]
0x8C758E: call    sub_8BBFB0
0x8C7593: push    offset aReExport; " re-export\n"
0x8C7598: push    esi
0x8C7599: push    offset aContainsAnOl_0; " contains an old bhkMeshShape! "
0x8C759E: push    edi
0x8C759F: push    offset aFile; "File "
0x8C75A4: lea     ecx, [esp+338h+var_224]
0x8C75AB: mov     [esp+338h+var_4], ebx
0x8C75B2: call    sub_8BBDB0
0x8C75B7: mov     ecx, eax
0x8C75B9: call    sub_8BBDB0
0x8C75BE: mov     ecx, eax
0x8C75C0: call    sub_8BBDB0
0x8C75C5: mov     ecx, eax
0x8C75C7: call    sub_8BBDB0
0x8C75CC: mov     ecx, eax
0x8C75CE: call    sub_8BBDB0
0x8C75D3: mov     ecx, ds:0BA7FB0h
0x8C75D9: mov     edx, [ecx]
0x8C75DB: mov     edx, [edx+8]
0x8C75DE: push    113h
0x8C75E3: push    offset a_Bhknitristrip; ".\\bhkNiTriStripsShape.cpp"
0x8C75E8: lea     eax, [esp+32Ch+var_218]
0x8C75EF: push    eax
0x8C75F0: push    234F2250h
0x8C75F5: push    1
0x8C75F7: call    edx
0x8C75F9: lea     ecx, [esp+324h+var_224]
0x8C7600: mov     [esp+324h+var_4], 0FFFFFFFFh
0x8C760B: call    sub_8BC000
0x8C7610: mov     esi, [esp+324h+a2]
0x8C7614: mov     ecx, [esp+324h+var_30C]; this
0x8C7618: push    esi; a2
0x8C7619: call    sub_7008A0
0x8C761E: lea     ecx, [esp+324h+var_2F0]
0x8C7622: call    sub_8C6DD0
0x8C7627: mov     eax, [esi+21Ch]
0x8C762D: mov     edx, [eax+4]
0x8C7630: push    ebx
0x8C7631: push    ebx
0x8C7632: push    0C0h ; 'À'
0x8C7637: lea     ecx, [esp+330h+var_2F0]
0x8C763B: push    ecx
0x8C763C: push    eax
0x8C763D: mov     [esp+338h+var_4], 1
0x8C7648: call    edx
0x8C764A: add     esp, 14h
0x8C764D: cmp     [esp+324h+var_308], ebx
0x8C7651: jz      loc_8C7AB0
0x8C7657: mov     eax, [esp+324h+var_2C4]
0x8C765B: test    eax, eax
0x8C765D: mov     esi, ds:0BA9DE4h
0x8C7663: mov     edi, large fs:2Ch
0x8C766A: js      short loc_8C7699
0x8C766C: mov     ecx, [edi+esi*4]
0x8C766F: mov     ecx, [ecx+19Ch]
0x8C7675: cmp     ecx, ebx
0x8C7677: jnz     short loc_8C767F
0x8C7679: mov     ecx, ds:0BA7D9Ch
0x8C767F: mov     edx, [esp+324h+var_2CC]
0x8C7683: and     eax, 3FFFFFFFh
0x8C7688: add     eax, eax
0x8C768A: push    14h
0x8C768C: add     eax, eax
0x8C768E: push    eax
0x8C768F: push    edx
0x8C7690: call    sub_8A75D0
0x8C7695: mov     eax, [esp+324h+var_2C4]
0x8C7699: and     eax, 0C0000000h
0x8C769E: or      eax, 80000000h
0x8C76A3: mov     [esp+324h+var_2C4], eax
0x8C76A7: mov     eax, [esp+324h+var_2B8]
0x8C76AB: test    eax, eax
0x8C76AD: mov     [esp+324h+var_2CC], ebx
0x8C76B1: mov     [esp+324h+var_2C8], ebx
0x8C76B5: js      short loc_8C76E4
0x8C76B7: mov     ecx, [edi+esi*4]
0x8C76BA: mov     ecx, [ecx+19Ch]
0x8C76C0: cmp     ecx, ebx
0x8C76C2: jnz     short loc_8C76CA
0x8C76C4: mov     ecx, ds:0BA7D9Ch
0x8C76CA: mov     edx, [esp+324h+var_2C0]
0x8C76CE: and     eax, 3FFFFFFFh
0x8C76D3: add     eax, eax
0x8C76D5: push    14h
0x8C76D7: add     eax, eax
0x8C76D9: push    eax
0x8C76DA: push    edx
0x8C76DB: call    sub_8A75D0
0x8C76E0: mov     eax, [esp+324h+var_2B8]
0x8C76E4: and     eax, 0C0000000h
0x8C76E9: or      eax, 80000000h
0x8C76EE: mov     [esp+324h+var_2B8], eax
0x8C76F2: mov     eax, [esp+324h+var_2AC]
0x8C76F6: test    eax, eax
0x8C76F8: mov     [esp+324h+var_2C0], ebx
0x8C76FC: mov     [esp+324h+var_2BC], ebx
0x8C7700: js      short loc_8C772F
0x8C7702: mov     ecx, [edi+esi*4]
0x8C7705: mov     ecx, [ecx+19Ch]
0x8C770B: cmp     ecx, ebx
0x8C770D: jnz     short loc_8C7715
0x8C770F: mov     ecx, ds:0BA7D9Ch
0x8C7715: mov     edx, [esp+324h+var_2B4]
0x8C7719: and     eax, 3FFFFFFFh
0x8C771E: add     eax, eax
0x8C7720: push    14h
0x8C7722: add     eax, eax
0x8C7724: push    eax
0x8C7725: push    edx
0x8C7726: call    sub_8A75D0
0x8C772B: mov     eax, [esp+324h+var_2AC]
0x8C772F: and     eax, 0C0000000h
0x8C7734: or      eax, 80000000h
0x8C7739: mov     [esp+324h+var_2AC], eax
0x8C773D: mov     eax, [esp+324h+var_2A0]
0x8C7744: test    eax, eax
0x8C7746: mov     [esp+324h+var_2B4], ebx
0x8C774A: mov     [esp+324h+var_2B0], ebx
0x8C774E: js      short loc_8C7780
0x8C7750: mov     ecx, [edi+esi*4]
0x8C7753: mov     ecx, [ecx+19Ch]
0x8C7759: cmp     ecx, ebx
0x8C775B: jnz     short loc_8C7763
0x8C775D: mov     ecx, ds:0BA7D9Ch
0x8C7763: mov     edx, [esp+324h+var_2A8]
0x8C7767: and     eax, 3FFFFFFFh
0x8C776C: add     eax, eax
0x8C776E: push    14h
0x8C7770: add     eax, eax
0x8C7772: push    eax
0x8C7773: push    edx
0x8C7774: call    sub_8A75D0
0x8C7779: mov     eax, [esp+324h+var_2A0]
0x8C7780: and     eax, 0C0000000h
0x8C7785: or      eax, 80000000h
0x8C778A: mov     [esp+324h+var_2A0], eax
0x8C7791: mov     eax, [esp+324h+var_294]
0x8C7798: test    eax, eax
0x8C779A: mov     [esp+324h+var_2A8], ebx
0x8C779E: mov     [esp+324h+var_2A4], ebx
0x8C77A5: js      short loc_8C77D6
0x8C77A7: mov     ecx, [edi+esi*4]
0x8C77AA: mov     ecx, [ecx+19Ch]
0x8C77B0: cmp     ecx, ebx
0x8C77B2: jnz     short loc_8C77BA
0x8C77B4: mov     ecx, ds:0BA7D9Ch
0x8C77BA: mov     edx, [esp+324h+var_29C]
0x8C77C1: push    14h
0x8C77C3: and     eax, 3FFFFFFFh
0x8C77C8: push    eax
0x8C77C9: push    edx
0x8C77CA: call    sub_8A75D0
0x8C77CF: mov     eax, [esp+324h+var_294]
0x8C77D6: and     eax, 0C0000000h
0x8C77DB: or      eax, 80000000h
0x8C77E0: mov     [esp+324h+var_294], eax
0x8C77E7: mov     eax, [esp+324h+var_288]
0x8C77EE: test    eax, eax
0x8C77F0: mov     [esp+324h+var_29C], ebx
0x8C77F7: mov     [esp+324h+var_298], ebx
0x8C77FE: js      short loc_8C7833
0x8C7800: mov     ecx, [edi+esi*4]
0x8C7803: mov     ecx, [ecx+19Ch]
0x8C7809: cmp     ecx, ebx
0x8C780B: jnz     short loc_8C7813
0x8C780D: mov     ecx, ds:0BA7D9Ch
0x8C7813: mov     edx, [esp+324h+var_290]
0x8C781A: and     eax, 3FFFFFFFh
0x8C781F: add     eax, eax
0x8C7821: push    14h
0x8C7823: add     eax, eax
0x8C7825: push    eax
0x8C7826: push    edx
0x8C7827: call    sub_8A75D0
0x8C782C: mov     eax, [esp+324h+var_288]
0x8C7833: and     eax, 0C0000000h
0x8C7838: or      eax, 80000000h
0x8C783D: mov     [esp+324h+var_288], eax
0x8C7844: mov     eax, [esp+324h+var_27C]
0x8C784B: test    eax, eax
0x8C784D: mov     [esp+324h+var_290], ebx
0x8C7854: mov     [esp+324h+var_28C], ebx
0x8C785B: js      short loc_8C7890
0x8C785D: mov     ecx, [edi+esi*4]
0x8C7860: mov     ecx, [ecx+19Ch]
0x8C7866: cmp     ecx, ebx
0x8C7868: jnz     short loc_8C7870
0x8C786A: mov     ecx, ds:0BA7D9Ch
0x8C7870: mov     edx, [esp+324h+var_284]
0x8C7877: and     eax, 3FFFFFFFh
0x8C787C: add     eax, eax
0x8C787E: push    14h
0x8C7880: add     eax, eax
0x8C7882: push    eax
0x8C7883: push    edx
0x8C7884: call    sub_8A75D0
0x8C7889: mov     eax, [esp+324h+var_27C]
0x8C7890: and     eax, 0C0000000h
0x8C7895: or      eax, 80000000h
0x8C789A: mov     [esp+324h+var_27C], eax
0x8C78A1: mov     eax, [esp+324h+var_270]
0x8C78A8: test    eax, eax
0x8C78AA: mov     [esp+324h+var_284], ebx
0x8C78B1: mov     [esp+324h+var_280], ebx
0x8C78B8: js      short loc_8C78ED
0x8C78BA: mov     ecx, [edi+esi*4]
0x8C78BD: mov     ecx, [ecx+19Ch]
0x8C78C3: cmp     ecx, ebx
0x8C78C5: jnz     short loc_8C78CD
0x8C78C7: mov     ecx, ds:0BA7D9Ch
0x8C78CD: mov     edx, [esp+324h+var_278]
0x8C78D4: and     eax, 3FFFFFFFh
0x8C78D9: add     eax, eax
0x8C78DB: push    14h
0x8C78DD: add     eax, eax
0x8C78DF: push    eax
0x8C78E0: push    edx
0x8C78E1: call    sub_8A75D0
0x8C78E6: mov     eax, [esp+324h+var_270]
0x8C78ED: and     eax, 0C0000000h
0x8C78F2: or      eax, 80000000h
0x8C78F7: mov     [esp+324h+var_270], eax
0x8C78FE: mov     eax, [esp+324h+var_264]
0x8C7905: test    eax, eax
0x8C7907: mov     [esp+324h+var_278], ebx
0x8C790E: mov     [esp+324h+var_274], ebx
0x8C7915: js      short loc_8C794A
0x8C7917: mov     ecx, [edi+esi*4]
0x8C791A: mov     ecx, [ecx+19Ch]
0x8C7920: cmp     ecx, ebx
0x8C7922: jnz     short loc_8C792A
0x8C7924: mov     ecx, ds:0BA7D9Ch
0x8C792A: mov     edx, [esp+324h+var_26C]
0x8C7931: and     eax, 3FFFFFFFh
0x8C7936: add     eax, eax
0x8C7938: push    14h
0x8C793A: add     eax, eax
0x8C793C: push    eax
0x8C793D: push    edx
0x8C793E: call    sub_8A75D0
0x8C7943: mov     eax, [esp+324h+var_264]
0x8C794A: and     eax, 0C0000000h
0x8C794F: or      eax, 80000000h
0x8C7954: mov     [esp+324h+var_264], eax
0x8C795B: mov     eax, [esp+324h+var_258]
0x8C7962: test    eax, eax
0x8C7964: mov     [esp+324h+var_26C], ebx
0x8C796B: mov     [esp+324h+var_268], ebx
0x8C7972: js      short loc_8C79A7
0x8C7974: mov     ecx, [edi+esi*4]
0x8C7977: mov     ecx, [ecx+19Ch]
0x8C797D: cmp     ecx, ebx
0x8C797F: jnz     short loc_8C7987
0x8C7981: mov     ecx, ds:0BA7D9Ch
0x8C7987: mov     edx, [esp+324h+var_260]
0x8C798E: and     eax, 3FFFFFFFh
0x8C7993: add     eax, eax
0x8C7995: push    14h
0x8C7997: add     eax, eax
0x8C7999: push    eax
0x8C799A: push    edx
0x8C799B: call    sub_8A75D0
0x8C79A0: mov     eax, [esp+324h+var_258]
0x8C79A7: and     eax, 0C0000000h
0x8C79AC: or      eax, 80000000h
0x8C79B1: mov     [esp+324h+var_258], eax
0x8C79B8: mov     eax, [esp+324h+var_24C]
0x8C79BF: test    eax, eax
0x8C79C1: mov     [esp+324h+var_260], ebx
0x8C79C8: mov     [esp+324h+var_25C], ebx
0x8C79CF: js      short loc_8C7A04
0x8C79D1: mov     ecx, [edi+esi*4]
0x8C79D4: mov     ecx, [ecx+19Ch]
0x8C79DA: cmp     ecx, ebx
0x8C79DC: jnz     short loc_8C79E4
0x8C79DE: mov     ecx, ds:0BA7D9Ch
0x8C79E4: mov     edx, [esp+324h+var_254]
0x8C79EB: and     eax, 3FFFFFFFh
0x8C79F0: add     eax, eax
0x8C79F2: push    14h
0x8C79F4: add     eax, eax
0x8C79F6: push    eax
0x8C79F7: push    edx
0x8C79F8: call    sub_8A75D0
0x8C79FD: mov     eax, [esp+324h+var_24C]
0x8C7A04: and     eax, 0C0000000h
0x8C7A09: or      eax, 80000000h
0x8C7A0E: mov     [esp+324h+var_24C], eax
0x8C7A15: mov     eax, [esp+324h+var_240]
0x8C7A1C: test    eax, eax
0x8C7A1E: mov     [esp+324h+var_254], ebx
0x8C7A25: mov     [esp+324h+var_250], ebx
0x8C7A2C: js      short loc_8C7A61
0x8C7A2E: mov     ecx, [edi+esi*4]
0x8C7A31: mov     ecx, [ecx+19Ch]
0x8C7A37: cmp     ecx, ebx
0x8C7A39: jnz     short loc_8C7A41
0x8C7A3B: mov     ecx, ds:0BA7D9Ch
0x8C7A41: mov     edx, [esp+324h+var_248]
0x8C7A48: and     eax, 3FFFFFFFh
0x8C7A4D: add     eax, eax
0x8C7A4F: push    14h
0x8C7A51: add     eax, eax
0x8C7A53: push    eax
0x8C7A54: push    edx
0x8C7A55: call    sub_8A75D0
0x8C7A5A: mov     eax, [esp+324h+var_240]
0x8C7A61: fld     [esp+324h+var_2EC]
0x8C7A65: mov     ecx, [esp+324h+var_308]
0x8C7A69: and     eax, 0C0000000h
0x8C7A6E: fstp    dword ptr [ecx+4]
0x8C7A71: or      eax, 80000000h
0x8C7A76: mov     [esp+324h+var_240], eax
0x8C7A7D: mov     eax, [esp+324h+var_2F0]
0x8C7A81: cmp     eax, 1Fh
0x8C7A84: mov     [esp+324h+var_248], ebx
0x8C7A8B: mov     [esp+324h+var_244], ebx
0x8C7A92: jl      short loc_8C7A9A
0x8C7A94: xor     eax, eax
0x8C7A96: mov     [esp+324h+var_2F0], eax
0x8C7A9A: mov     edx, [esp+324h+var_30C]
0x8C7A9E: mov     esi, [esp+324h+a2]
0x8C7AA2: mov     [edx+10h], eax
0x8C7AA5: mov     [ecx], ebx
0x8C7AA7: fld     dword ptr ds:0B2EFC4h
0x8C7AAD: fstp    dword ptr [ecx+4]
0x8C7AB0: mov     ecx, esi
0x8C7AB2: call    sub_712AE0
0x8C7AB7: lea     ecx, [esp+324h+var_2F0]
0x8C7ABB: mov     [esp+324h+var_4], 0FFFFFFFFh
0x8C7AC6: call    sub_8C6E80
0x8C7ACB: jmp     loc_8C7BEE
0x8C7AD0: push    esi
0x8C7AD1: mov     ecx, ebx
0x8C7AD3: call    sub_8A25C0
0x8C7AD8: mov     ecx, esi
0x8C7ADA: call    sub_712AE0
0x8C7ADF: mov     eax, [esi+21Ch]
0x8C7AE5: push    1
0x8C7AE7: lea     ecx, [esp+328h+var_30C]
0x8C7AEB: push    ecx
0x8C7AEC: push    4
0x8C7AEE: lea     edx, [esp+330h+var_304]
0x8C7AF2: push    edx
0x8C7AF3: xor     ebx, ebx
0x8C7AF5: mov     [esp+334h+var_304], ebx
0x8C7AF9: push    eax
0x8C7AFA: mov     eax, [eax+4]
0x8C7AFD: mov     [esp+338h+var_30C], 4
0x8C7B05: call    eax
0x8C7B07: mov     eax, [esp+338h+var_308]
0x8C7B0B: add     esp, 14h
0x8C7B0E: cmp     eax, ebx
0x8C7B10: jz      loc_8C7BEE
0x8C7B16: cmp     [esp+324h+var_304], ebx
0x8C7B1A: mov     [esp+324h+var_30C], ebx
0x8C7B1E: jle     loc_8C7BEE
0x8C7B24: lea     edi, [eax+8]
0x8C7B27: jmp     short loc_8C7B34
0x8C7B29: align 10h
0x8C7B30: mov     esi, [esp+324h+a2]
0x8C7B34: mov     [esp+324h+var_2F8], ebx
0x8C7B38: mov     [esp+324h+var_2F4], ebx
0x8C7B3C: mov     eax, [esi+21Ch]
0x8C7B42: push    1
0x8C7B44: lea     ecx, [esp+328h+var_308]
0x8C7B48: push    ecx
0x8C7B49: push    4
0x8C7B4B: lea     edx, [esp+330h+var_2F4]
0x8C7B4F: push    edx
0x8C7B50: push    eax
0x8C7B51: mov     eax, [eax+4]
0x8C7B54: mov     [esp+338h+var_4], 2
0x8C7B5F: mov     [esp+338h+var_308], 4
0x8C7B67: call    eax
0x8C7B69: add     esp, 14h
0x8C7B6C: cmp     dword ptr [esi+4], 9
0x8C7B70: jnb     short loc_8C7B86
0x8C7B72: mov     eax, [esp+324h+var_2F4]
0x8C7B76: test    al, 20h
0x8C7B78: jz      short loc_8C7B86
0x8C7B7A: and     eax, 0FFFFFFDFh
0x8C7B7D: or      eax, 8000h
0x8C7B82: mov     [esp+324h+var_2F4], eax
0x8C7B86: mov     esi, [edi+0Ch]
0x8C7B89: cmp     esi, [edi+8]
0x8C7B8C: jb      short loc_8C7B9B
0x8C7B8E: mov     ecx, [edi+14h]
0x8C7B91: add     ecx, esi
0x8C7B93: push    ecx
0x8C7B94: mov     ecx, edi
0x8C7B96: call    sub_8C69C0
0x8C7B9B: lea     edx, [esp+324h+var_2F8]
0x8C7B9F: push    edx
0x8C7BA0: push    esi
0x8C7BA1: mov     ecx, edi
0x8C7BA3: call    sub_8C68D0
0x8C7BA8: mov     eax, [esp+324h+var_2F8]
0x8C7BAC: cmp     eax, ebx
0x8C7BAE: mov     [esp+324h+var_4], 0FFFFFFFFh
0x8C7BB9: jz      short loc_8C7BD9
0x8C7BBB: mov     esi, eax
0x8C7BBD: add     eax, 4
0x8C7BC0: push    eax; lpAddend
0x8C7BC1: call    dword ptr ds:0A2807Ch
0x8C7BC7: test    eax, eax
0x8C7BC9: jnz     short loc_8C7BD9
0x8C7BCB: cmp     esi, ebx
0x8C7BCD: jz      short loc_8C7BD9
0x8C7BCF: mov     eax, [esi]
0x8C7BD1: mov     edx, [eax]
0x8C7BD3: push    1
0x8C7BD5: mov     ecx, esi
0x8C7BD7: call    edx
0x8C7BD9: mov     eax, [esp+324h+var_30C]
0x8C7BDD: add     eax, 1
0x8C7BE0: cmp     eax, [esp+324h+var_304]
0x8C7BE4: mov     [esp+324h+var_30C], eax
0x8C7BE8: jl      loc_8C7B30
0x8C7BEE: mov     ecx, dword ptr [esp+324h+var_C]
0x8C7BF5: mov     large fs:0, ecx
0x8C7BFC: pop     ecx
0x8C7BFD: pop     edi
0x8C7BFE: pop     esi
0x8C7BFF: pop     ebx
0x8C7C00: mov     ecx, [esp+314h+var_14]
0x8C7C07: xor     ecx, esp
0x8C7C09: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C7C0E: mov     esp, ebp
0x8C7C10: pop     ebp
0x8C7C11: retn    4
