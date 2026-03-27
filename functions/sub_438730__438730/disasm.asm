0x438730: push    0FFFFFFFFh
0x438732: push    offset SEH_6E2760
0x438737: mov     eax, large fs:0
0x43873D: push    eax
0x43873E: sub     esp, 10h
0x438741: push    ebx
0x438742: push    ebp
0x438743: push    esi
0x438744: push    edi
0x438745: mov     eax, ___security_cookie
0x43874A: xor     eax, esp
0x43874C: push    eax
0x43874D: lea     eax, [esp+30h+var_C]
0x438751: mov     large fs:0, eax
0x438757: mov     esi, [esp+30h+arg_0]
0x43875B: test    esi, esi
0x43875D: jz      loc_4387F4
0x438763: mov     [esp+30h+var_18], offset aBip01Spine2; "Bip01 Spine2"
0x43876B: mov     [esp+30h+var_14], offset aBip01Spine1; "Bip01 Spine1"
0x438773: mov     [esp+30h+var_10], offset aBip01Spine; "Bip01 Spine"
0x43877B: xor     ebp, ebp
0x43877D: mov     ecx, [esp+ebp*4+30h+var_18]
0x438781: mov     eax, [esi]
0x438783: mov     edx, [eax+58h]
0x438786: push    ecx
0x438787: mov     ecx, esi
0x438789: call    edx
0x43878B: mov     edi, eax
0x43878D: test    edi, edi
0x43878F: jz      short loc_4387EC
0x438791: mov     eax, [edi+0A8h]
0x438797: test    eax, eax
0x438799: jz      short loc_4387EC
0x43879B: push    eax
0x43879C: push    offset dword_BA7A20
0x4387A1: call    NiRTTI_Cast
0x4387A6: mov     ebx, eax
0x4387A8: add     esp, 8
0x4387AB: test    ebx, ebx
0x4387AD: jz      short loc_4387EC
0x4387AF: push    4Ch ; 'L'; Size
0x4387B1: call    FormHeapAlloc
0x4387B6: add     esp, 4
0x4387B9: mov     [esp+30h+var_1C], eax
0x4387BD: xor     esi, esi
0x4387BF: cmp     eax, esi
0x4387C1: mov     [esp+30h+var_4], esi
0x4387C5: jz      short loc_4387D0
0x4387C7: mov     ecx, eax
0x4387C9: call    sub_88E7C0
0x4387CE: mov     esi, eax
0x4387D0: push    ebx
0x4387D1: mov     ecx, esi
0x4387D3: mov     [esp+34h+var_4], 0FFFFFFFFh
0x4387DB: call    sub_88E880
0x4387E0: push    esi
0x4387E1: mov     ecx, edi
0x4387E3: call    sub_435CE0
0x4387E8: mov     esi, [esp+30h+arg_0]
0x4387EC: add     ebp, 1
0x4387EF: cmp     ebp, 3
0x4387F2: jl      short loc_43877D
0x4387F4: mov     ecx, dword ptr [esp+30h+var_C]
0x4387F8: mov     large fs:0, ecx
0x4387FF: pop     ecx
0x438800: pop     edi
0x438801: pop     esi
0x438802: pop     ebp
0x438803: pop     ebx
0x438804: add     esp, 1Ch
0x438807: retn    4
