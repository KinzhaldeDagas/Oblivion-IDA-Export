0x6F05C0: push    ebp
0x6F05C1: mov     ebp, esp
0x6F05C3: push    0FFFFFFFFh
0x6F05C5: push    offset SEH_6F05C0
0x6F05CA: mov     eax, large fs:0
0x6F05D0: push    eax
0x6F05D1: sub     esp, 24h
0x6F05D4: push    ebx
0x6F05D5: push    esi
0x6F05D6: push    edi
0x6F05D7: mov     eax, ds:0B30AACh
0x6F05DC: xor     eax, ebp
0x6F05DE: push    eax
0x6F05DF: lea     eax, [ebp+var_C]
0x6F05E2: mov     large fs:0, eax
0x6F05E8: mov     [ebp+var_10], esp
0x6F05EB: mov     esi, ecx
0x6F05ED: mov     [ebp+var_14], esi
0x6F05F0: mov     eax, [ebp+arg_C]
0x6F05F3: fld     dword ptr [eax]
0x6F05F5: add     eax, 4
0x6F05F8: push    eax
0x6F05F9: fstp    [ebp+var_30]
0x6F05FC: lea     ecx, [ebp+var_2C]
0x6F05FF: call    sub_557250
0x6F0604: mov     edi, [esi+4]
0x6F0607: xor     ecx, ecx
0x6F0609: cmp     edi, ecx
0x6F060B: mov     [ebp+var_4], ecx
0x6F060E: jz      short loc_6F0626
0x6F0610: mov     ecx, [esi+0Ch]
0x6F0613: sub     ecx, edi
0x6F0615: mov     eax, 66666667h
0x6F061A: imul    ecx
0x6F061C: sar     edx, 3
0x6F061F: mov     ecx, edx
0x6F0621: shr     ecx, 1Fh
0x6F0624: add     ecx, edx
0x6F0626: mov     ebx, [ebp+arg_8]
0x6F0629: test    ebx, ebx
0x6F062B: jz      loc_6F08BB
0x6F0631: test    edi, edi
0x6F0633: jnz     short loc_6F0639
0x6F0635: xor     eax, eax
0x6F0637: jmp     short loc_6F064F
0x6F0639: mov     edx, [esi+8]
0x6F063C: sub     edx, edi
0x6F063E: mov     eax, 66666667h
0x6F0643: imul    edx
0x6F0645: sar     edx, 3
0x6F0648: mov     eax, edx
0x6F064A: shr     eax, 1Fh
0x6F064D: add     eax, edx
0x6F064F: or      edx, 0FFFFFFFFh
0x6F0652: sub     edx, eax
0x6F0654: cmp     edx, ebx
0x6F0656: jnb     short loc_6F065D
0x6F0658: call    sub_790B90
0x6F065D: test    edi, edi
0x6F065F: jnz     short loc_6F0665
0x6F0661: xor     eax, eax
0x6F0663: jmp     short loc_6F067B
0x6F0665: mov     edx, [esi+8]
0x6F0668: sub     edx, edi
0x6F066A: mov     eax, 66666667h
0x6F066F: imul    edx
0x6F0671: sar     edx, 3
0x6F0674: mov     eax, edx
0x6F0676: shr     eax, 1Fh
0x6F0679: add     eax, edx
0x6F067B: add     eax, ebx
0x6F067D: cmp     ecx, eax
0x6F067F: jnb     loc_6F07AD
0x6F0685: mov     eax, ecx
0x6F0687: shr     eax, 1
0x6F0689: or      edx, 0FFFFFFFFh
0x6F068C: sub     edx, eax
0x6F068E: cmp     edx, ecx
0x6F0690: jnb     short loc_6F0696
0x6F0692: xor     ecx, ecx
0x6F0694: jmp     short loc_6F0698
0x6F0696: add     ecx, eax
0x6F0698: test    edi, edi
0x6F069A: jnz     short loc_6F06A0
0x6F069C: xor     eax, eax
0x6F069E: jmp     short loc_6F06B6
0x6F06A0: mov     edx, [esi+8]
0x6F06A3: sub     edx, edi
0x6F06A5: mov     eax, 66666667h
0x6F06AA: imul    edx
0x6F06AC: sar     edx, 3
0x6F06AF: mov     eax, edx
0x6F06B1: shr     eax, 1Fh
0x6F06B4: add     eax, edx
0x6F06B6: add     eax, ebx
0x6F06B8: cmp     ecx, eax
0x6F06BA: jnb     short loc_6F06C7
0x6F06BC: mov     ecx, esi
0x6F06BE: call    sub_54F720
0x6F06C3: mov     ecx, eax
0x6F06C5: add     ecx, ebx
0x6F06C7: lea     ecx, [ecx+ecx*4]
0x6F06CA: add     ecx, ecx
0x6F06CC: add     ecx, ecx
0x6F06CE: push    ecx; Size
0x6F06CF: mov     [ebp+var_1C], ecx
0x6F06D2: call    FormHeapAlloc
0x6F06D7: mov     edi, [ebp+arg_4]
0x6F06DA: mov     ecx, [esi+4]
0x6F06DD: mov     byte ptr [ebp+var_18], 0
0x6F06E1: mov     edx, [ebp+var_18]
0x6F06E4: push    edx
0x6F06E5: mov     [ebp+arg_8], eax
0x6F06E8: mov     edx, [ebp+arg_8]
0x6F06EB: push    edx
0x6F06EC: push    esi
0x6F06ED: push    eax
0x6F06EE: push    edi
0x6F06EF: push    ecx
0x6F06F0: mov     [ebp+arg_C], eax
0x6F06F3: mov     byte ptr [ebp+var_4], 1
0x6F06F7: call    sub_557880
0x6F06FC: add     esp, 1Ch
0x6F06FF: lea     ecx, [ebp+var_30]
0x6F0702: push    ecx
0x6F0703: push    ebx
0x6F0704: push    eax
0x6F0705: mov     ecx, esi
0x6F0707: mov     [ebp+arg_8], eax
0x6F070A: call    sub_6F0580
0x6F070F: mov     ecx, [esi+8]
0x6F0712: mov     byte ptr [ebp+arg_4], 0
0x6F0716: mov     edx, [ebp+arg_4]
0x6F0719: push    edx
0x6F071A: mov     [ebp+arg_8], eax
0x6F071D: mov     edx, [ebp+arg_8]
0x6F0720: push    edx
0x6F0721: push    esi
0x6F0722: push    eax
0x6F0723: push    ecx
0x6F0724: push    edi
0x6F0725: call    sub_557880
0x6F072A: mov     edi, [esi+4]
0x6F072D: add     esp, 18h
0x6F0730: test    edi, edi
0x6F0732: jnz     short loc_6F0738
0x6F0734: xor     eax, eax
0x6F0736: jmp     short loc_6F074E
0x6F0738: mov     ecx, [esi+8]
0x6F073B: sub     ecx, edi
0x6F073D: mov     eax, 66666667h
0x6F0742: imul    ecx
0x6F0744: sar     edx, 3
0x6F0747: mov     eax, edx
0x6F0749: shr     eax, 1Fh
0x6F074C: add     eax, edx
0x6F074E: add     ebx, eax
0x6F0750: test    edi, edi
0x6F0752: jz      short loc_6F076F
0x6F0754: mov     eax, [ebp+arg_8]
0x6F0757: mov     ecx, [esi+8]
0x6F075A: push    eax
0x6F075B: push    esi
0x6F075C: push    ecx
0x6F075D: push    edi
0x6F075E: call    sub_557430
0x6F0763: mov     edx, [esi+4]
0x6F0766: push    edx
0x6F0767: call    FormHeapFree
0x6F076C: add     esp, 14h
0x6F076F: mov     eax, [ebp+arg_C]
0x6F0772: mov     ecx, [ebp+var_1C]
0x6F0775: add     ecx, eax
0x6F0777: lea     edx, [ebx+ebx*4]
0x6F077A: mov     [esi+0Ch], ecx
0x6F077D: lea     ecx, [eax+edx*4]
0x6F0780: mov     [esi+8], ecx
0x6F0783: mov     [esi+4], eax
0x6F0786: jmp     loc_6F08BB
0x6F078B: mov     edx, [ebp+arg_8]
0x6F078E: mov     esi, [ebp+arg_C]
0x6F0791: mov     ecx, [ebp+var_14]
0x6F0794: push    edx
0x6F0795: push    esi
0x6F0796: call    sub_557950
0x6F079B: push    esi
0x6F079C: call    FormHeapFree
0x6F07A1: add     esp, 4
0x6F07A4: push    0
0x6F07A6: push    0
0x6F07A8: call    ThrowException??
0x6F07AD: mov     ecx, [esi+8]
0x6F07B0: mov     edi, [ebp+arg_4]
0x6F07B3: mov     edx, ecx
0x6F07B5: sub     edx, edi
0x6F07B7: mov     eax, 66666667h
0x6F07BC: imul    edx
0x6F07BE: sar     edx, 3
0x6F07C1: mov     eax, edx
0x6F07C3: shr     eax, 1Fh
0x6F07C6: add     eax, edx
0x6F07C8: cmp     eax, ebx
0x6F07CA: mov     [ebp+arg_C], ecx
0x6F07CD: jnb     loc_6F0871
0x6F07D3: lea     eax, [ebx+ebx*4]
0x6F07D6: add     eax, eax
0x6F07D8: add     eax, eax
0x6F07DA: mov     [ebp+arg_C], eax
0x6F07DD: add     eax, edi
0x6F07DF: push    eax
0x6F07E0: push    ecx
0x6F07E1: push    edi
0x6F07E2: mov     ecx, esi
0x6F07E4: call    sub_559300
0x6F07E9: mov     ecx, [esi+8]
0x6F07EC: lea     edx, [ebp+var_30]
0x6F07EF: push    edx
0x6F07F0: mov     edx, ecx
0x6F07F2: sub     edx, edi
0x6F07F4: mov     eax, 66666667h
0x6F07F9: imul    edx
0x6F07FB: sar     edx, 3
0x6F07FE: mov     eax, edx
0x6F0800: shr     eax, 1Fh
0x6F0803: add     eax, edx
0x6F0805: sub     ebx, eax
0x6F0807: push    ebx
0x6F0808: push    ecx
0x6F0809: mov     ecx, esi
0x6F080B: mov     byte ptr [ebp+var_4], 3
0x6F080F: call    sub_6F0580
0x6F0814: mov     eax, [ebp+arg_C]
0x6F0817: add     [esi+8], eax
0x6F081A: mov     esi, [esi+8]
0x6F081D: sub     esi, eax
0x6F081F: cmp     edi, esi
0x6F0821: mov     [ebp+var_4], 0
0x6F0828: jz      loc_6F08BB
0x6F082E: mov     edi, edi
0x6F0830: fld     [ebp+var_30]
0x6F0833: lea     ecx, [ebp+var_2C]
0x6F0836: push    ecx
0x6F0837: fstp    dword ptr [edi]
0x6F0839: lea     ecx, [edi+4]
0x6F083C: call    sub_557470
0x6F0841: add     edi, 14h
0x6F0844: cmp     edi, esi
0x6F0846: jnz     short loc_6F0830
0x6F0848: jmp     short loc_6F08BB
0x6F084A: mov     eax, [ebp+arg_8]
0x6F084D: mov     ecx, [ebp+var_14]
0x6F0850: mov     edx, [ecx+8]
0x6F0853: lea     eax, [eax+eax*4]
0x6F0856: add     eax, eax
0x6F0858: add     eax, eax
0x6F085A: add     edx, eax
0x6F085C: push    edx
0x6F085D: mov     edx, [ebp+arg_4]
0x6F0860: add     eax, edx
0x6F0862: push    eax
0x6F0863: call    sub_557950
0x6F0868: push    0
0x6F086A: push    0
0x6F086C: call    ThrowException??
0x6F0871: lea     ebx, [ebx+ebx*4]
0x6F0874: push    ecx
0x6F0875: add     ebx, ebx
0x6F0877: mov     eax, ecx
0x6F0879: add     ebx, ebx
0x6F087B: sub     eax, ebx
0x6F087D: push    ecx
0x6F087E: push    eax
0x6F087F: mov     ecx, esi
0x6F0881: mov     [ebp+arg_8], eax
0x6F0884: call    sub_559300
0x6F0889: mov     ecx, [ebp+arg_8]
0x6F088C: mov     [esi+8], eax
0x6F088F: mov     eax, [ebp+arg_C]
0x6F0892: push    eax
0x6F0893: push    ecx
0x6F0894: push    edi
0x6F0895: call    sub_558650
0x6F089A: add     ebx, edi
0x6F089C: add     esp, 0Ch
0x6F089F: cmp     edi, ebx
0x6F08A1: jz      short loc_6F08BB
0x6F08A3: fld     [ebp+var_30]
0x6F08A6: lea     edx, [ebp+var_2C]
0x6F08A9: push    edx
0x6F08AA: fstp    dword ptr [edi]
0x6F08AC: lea     ecx, [edi+4]
0x6F08AF: call    sub_557470
0x6F08B4: add     edi, 14h
0x6F08B7: cmp     edi, ebx
0x6F08B9: jnz     short loc_6F08A3
0x6F08BB: mov     eax, [ebp+var_28]
0x6F08BE: test    eax, eax
0x6F08C0: jz      short loc_6F08CB
0x6F08C2: push    eax
0x6F08C3: call    FormHeapFree
0x6F08C8: add     esp, 4
0x6F08CB: mov     ecx, [ebp+var_C]
0x6F08CE: mov     large fs:0, ecx
0x6F08D5: pop     ecx
0x6F08D6: pop     edi
0x6F08D7: pop     esi
0x6F08D8: pop     ebx
0x6F08D9: mov     esp, ebp
0x6F08DB: pop     ebp
0x6F08DC: retn    10h
