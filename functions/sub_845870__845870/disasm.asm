0x845870: push    0FFFFFFFFh
0x845872: push    offset SEH_845870
0x845877: mov     eax, large fs:0
0x84587D: push    eax
0x84587E: sub     esp, 0CCh
0x845884: push    ebx
0x845885: push    ebp
0x845886: push    esi
0x845887: push    edi
0x845888: mov     eax, ds:0B30AACh
0x84588D: xor     eax, esp
0x84588F: push    eax
0x845890: lea     eax, [esp+0ECh+var_C]
0x845897: mov     large fs:0, eax
0x84589D: mov     edi, ecx
0x84589F: mov     [esp+0ECh+var_C4], edi
0x8458A3: mov     ecx, [esp+0ECh+arg_0]
0x8458AA: mov     eax, [edi]
0x8458AC: mov     ebx, ds:0B45BCCh
0x8458B2: mov     edx, [eax+0BCh]
0x8458B8: push    0
0x8458BA: push    0
0x8458BC: push    ecx
0x8458BD: mov     ecx, edi
0x8458BF: mov     [esp+0F8h+var_D4], ebx
0x8458C3: call    edx
0x8458C5: mov     eax, [ebx+24h]
0x8458C8: mov     ecx, [esp+0ECh+arg_C]
0x8458CF: mov     edx, [ecx]
0x8458D1: mov     ebp, [eax]
0x8458D3: mov     eax, [edx+88h]
0x8458D9: push    0
0x8458DB: call    eax
0x8458DD: mov     esi, [ebp+4]
0x8458E0: cmp     esi, eax
0x8458E2: mov     [esp+0ECh+var_D8], eax
0x8458E6: jz      short loc_84591D
0x8458E8: test    esi, esi
0x8458EA: jz      short loc_84590C
0x8458EC: lea     ecx, [esi+4]
0x8458EF: push    ecx; lpAddend
0x8458F0: call    dword ptr ds:0A2807Ch
0x8458F6: test    eax, eax
0x8458F8: jnz     short loc_845908
0x8458FA: test    esi, esi
0x8458FC: jz      short loc_845908
0x8458FE: mov     edx, [esi]
0x845900: mov     eax, [edx]
0x845902: push    1
0x845904: mov     ecx, esi
0x845906: call    eax
0x845908: mov     eax, [esp+0ECh+var_D8]
0x84590C: test    eax, eax
0x84590E: mov     [ebp+4], eax
0x845911: jz      short loc_84591D
0x845913: add     eax, 4
0x845916: push    eax; lpAddend
0x845917: call    dword ptr ds:0A28078h
0x84591D: mov     ecx, [esp+0ECh+arg_C]
0x845924: push    ecx
0x845925: push    ebp
0x845926: mov     ecx, edi
0x845928: call    sub_848FA0
0x84592D: mov     edx, [ebx+24h]
0x845930: mov     ebp, [edx+4]
0x845933: mov     eax, ds:0B43128h
0x845938: mov     esi, [ebp+4]
0x84593B: cmp     esi, eax
0x84593D: mov     ecx, eax
0x84593F: mov     [esp+0ECh+var_D8], ecx
0x845943: jz      short loc_84597A
0x845945: test    esi, esi
0x845947: jz      short loc_845969
0x845949: lea     eax, [esi+4]
0x84594C: push    eax; lpAddend
0x84594D: call    dword ptr ds:0A2807Ch
0x845953: test    eax, eax
0x845955: jnz     short loc_845965
0x845957: test    esi, esi
0x845959: jz      short loc_845965
0x84595B: mov     edx, [esi]
0x84595D: mov     eax, [edx]
0x84595F: push    1
0x845961: mov     ecx, esi
0x845963: call    eax
0x845965: mov     ecx, [esp+0ECh+var_D8]
0x845969: test    ecx, ecx
0x84596B: mov     [ebp+4], ecx
0x84596E: jz      short loc_84597A
0x845970: add     ecx, 4
0x845973: push    ecx; lpAddend
0x845974: call    dword ptr ds:0A28078h
0x84597A: mov     ecx, [esp+0ECh+arg_C]
0x845981: mov     [esp+0ECh+var_CC], 1
0x845989: call    sub_7EE1F0
0x84598E: mov     ebp, eax
0x845990: test    ebp, ebp
0x845992: jnz     short loc_8459AA
0x845994: mov     ecx, [esp+0ECh+arg_C]
0x84599B: call    sub_7EE1D0
0x8459A0: mov     ebp, eax
0x8459A2: test    ebp, ebp
0x8459A4: jz      loc_845C6A
0x8459AA: fldz
0x8459AC: mov     [esp+0ECh+var_D8], offset unk_B462D8
0x8459B4: fld     dword ptr ds:0A3D65Ch
0x8459BA: xor     ebx, ebx
0x8459BC: mov     ecx, ds:0B42E88h
0x8459C2: cmp     [esp+0ECh+var_CC], ecx
0x8459C6: jge     loc_845C62
0x8459CC: lea     esi, [ebp+8]
0x8459CF: mov     ecx, 0Dh
0x8459D4: lea     edi, [esp+0ECh+var_80]
0x8459D8: rep movsd
0x8459DA: fld     [esp+0ECh+var_80]
0x8459DE: fstp    [esp+0ECh+var_4C]
0x8459E5: fld     [esp+0ECh+var_7C]
0x8459E9: fstp    [esp+0ECh+var_48]
0x8459F0: fld     [esp+0ECh+var_78]
0x8459F4: fstp    [esp+0ECh+var_44]
0x8459FB: fld     [esp+0ECh+var_5C]
0x845A02: fstp    [esp+0ECh+var_40]
0x845A09: fld     [esp+0ECh+var_74]
0x845A0D: fstp    [esp+0ECh+var_3C]
0x845A14: fld     [esp+0ECh+var_70]
0x845A18: fstp    [esp+0ECh+var_38]
0x845A1F: mov     edi, [esp+0ECh+var_D8]
0x845A23: fld     [esp+0ECh+var_6C]
0x845A2A: mov     ecx, 10h
0x845A2F: fstp    [esp+0ECh+var_34]
0x845A36: lea     esi, [esp+0ECh+var_4C]
0x845A3D: fld     [esp+0ECh+var_58]
0x845A44: mov     eax, 0Ah
0x845A49: fstp    [esp+0ECh+var_30]
0x845A50: fld     [esp+0ECh+var_68]
0x845A57: fstp    [esp+0ECh+var_2C]
0x845A5E: fld     [esp+0ECh+var_64]
0x845A65: fstp    [esp+0ECh+var_28]
0x845A6C: fld     [esp+0ECh+var_60]
0x845A73: fstp    [esp+0ECh+var_24]
0x845A7A: fld     [esp+0ECh+var_54]
0x845A81: fstp    [esp+0ECh+var_20]
0x845A88: fxch    st(1)
0x845A8A: fst     [esp+0ECh+var_1C]
0x845A91: fst     [esp+0ECh+var_18]
0x845A98: fst     [esp+0ECh+var_14]
0x845A9F: fld     [esp+0ECh+var_50]
0x845AA6: fstp    [esp+0ECh+var_10]
0x845AAD: rep movsd
0x845AAF: fld     dword ptr [ebp+40h]
0x845AB2: fstp    [esp+0ECh+var_D0]
0x845AB6: fld1
0x845AB8: fstp    [esp+0ECh+var_C8]
0x845ABC: test    al, 1
0x845ABE: fld     [esp+0ECh+var_D0]
0x845AC2: jz      short loc_845ACE
0x845AC4: fld     st
0x845AC6: fmul    [esp+0ECh+var_C8]
0x845ACA: fstp    [esp+0ECh+var_C8]
0x845ACE: shr     eax, 1
0x845AD0: jz      short loc_845ADA
0x845AD2: fmul    st, st
0x845AD4: fstp    [esp+0ECh+var_D0]
0x845AD8: jmp     short loc_845ABC
0x845ADA: fstp    st
0x845ADC: fld     [esp+0ECh+var_C8]
0x845AE0: fstp    [esp+0ECh+var_D0]
0x845AE4: fld     [esp+0ECh+var_D0]
0x845AE8: fld1
0x845AEA: fsubrp  st(1), st
0x845AEC: fstp    dword ptr [ebx+0B46228h]
0x845AF2: movzx   eax, byte ptr [ebp+44h]
0x845AF6: cmp     eax, 3; switch 4 cases
0x845AF9: ja      def_845AFF
0x845AFF: jmp     ds:jpt_845AFF[eax*4]; switch jump
0x845B06: fst     [esp+0ECh+var_C0]; jumptable 00845AFF case 0
0x845B0A: mov     edx, [esp+0ECh+var_C0]
0x845B0E: fst     [esp+0ECh+var_B8]
0x845B12: mov     ecx, [esp+0ECh+var_B8]
0x845B16: fxch    st(1)
0x845B18: mov     ds:dword_B461A8[ebx], edx
0x845B1E: fst     [esp+0ECh+var_BC]
0x845B22: mov     eax, [esp+0ECh+var_BC]
0x845B26: fst     [esp+0ECh+var_B4]
0x845B2A: mov     edx, [esp+0ECh+var_B4]
0x845B2E: mov     ds:dword_B461AC[ebx], eax
0x845B34: mov     ds:dword_B461B0[ebx], ecx
0x845B3A: mov     ds:dword_B461B4[ebx], edx
0x845B40: jmp     loc_845C21
0x845B45: fxch    st(1); jumptable 00845AFF case 1
0x845B47: fst     [esp+0ECh+var_A0]
0x845B4B: mov     eax, [esp+0ECh+var_A0]
0x845B4F: fst     [esp+0ECh+var_9C]
0x845B53: mov     ecx, [esp+0ECh+var_9C]
0x845B57: fst     [esp+0ECh+var_94]
0x845B5B: mov     ds:dword_B461A8[ebx], eax
0x845B61: mov     eax, [esp+0ECh+var_94]
0x845B65: fxch    st(1)
0x845B67: fst     [esp+0ECh+var_98]
0x845B6B: mov     edx, [esp+0ECh+var_98]
0x845B6F: mov     ds:dword_B461AC[ebx], ecx
0x845B75: mov     ds:dword_B461B0[ebx], edx
0x845B7B: mov     ds:dword_B461B4[ebx], eax
0x845B81: jmp     loc_845C1F
0x845B86: fst     [esp+0ECh+var_90]; jumptable 00845AFF case 2
0x845B8A: mov     ecx, [esp+0ECh+var_90]
0x845B8E: fxch    st(1)
0x845B90: mov     ds:dword_B461A8[ebx], ecx
0x845B96: fst     [esp+0ECh+var_8C]
0x845B9A: mov     edx, [esp+0ECh+var_8C]
0x845B9E: fst     [esp+0ECh+var_88]
0x845BA2: mov     eax, [esp+0ECh+var_88]
0x845BA6: fst     [esp+0ECh+var_84]
0x845BAA: mov     ecx, [esp+0ECh+var_84]
0x845BAE: mov     ds:dword_B461AC[ebx], edx
0x845BB4: mov     ds:dword_B461B0[ebx], eax
0x845BBA: mov     ds:dword_B461B4[ebx], ecx
0x845BC0: jmp     short loc_845C21
0x845BC2: fxch    st(1); jumptable 00845AFF case 3
0x845BC4: fst     [esp+0ECh+var_B0]
0x845BC8: mov     edx, [esp+0ECh+var_B0]
0x845BCC: fst     [esp+0ECh+var_AC]
0x845BD0: mov     eax, [esp+0ECh+var_AC]
0x845BD4: mov     ds:dword_B461A8[ebx], edx
0x845BDA: fst     [esp+0ECh+var_A8]
0x845BDE: mov     ecx, [esp+0ECh+var_A8]
0x845BE2: fst     [esp+0ECh+var_A4]
0x845BE6: mov     edx, [esp+0ECh+var_A4]
0x845BEA: mov     ds:dword_B461AC[ebx], eax
0x845BF0: mov     ds:dword_B461B0[ebx], ecx
0x845BF6: mov     ds:dword_B461B4[ebx], edx
0x845BFC: jmp     short loc_845C21
