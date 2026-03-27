0x8B5E20: push    ebp
0x8B5E21: mov     ebp, esp
0x8B5E23: and     esp, 0FFFFFFF0h
0x8B5E26: sub     esp, 3A4h
0x8B5E2C: mov     eax, ds:0B30AACh
0x8B5E31: push    ebx
0x8B5E32: push    esi
0x8B5E33: mov     esi, [ebp+arg_0]
0x8B5E36: xorps   xmm0, xmm0
0x8B5E39: mov     [esp+3ACh+var_4], eax
0x8B5E40: mov     eax, [esi]
0x8B5E42: push    edi
0x8B5E43: mov     ecx, esi
0x8B5E45: mov     [esp+3B0h+var_380], 0
0x8B5E4D: mov     [esp+3B0h+var_37C], 0
0x8B5E55: movaps  [esp+3B0h+var_330], xmm0
0x8B5E5D: movaps  [esp+3B0h+var_370], xmm0
0x8B5E62: movaps  [esp+3B0h+var_360], xmm0
0x8B5E67: movaps  [esp+3B0h+var_350], xmm0
0x8B5E6C: movaps  [esp+3B0h+var_340], xmm0
0x8B5E71: call    dword ptr [eax+8]
0x8B5E74: add     eax, 0FFFFFFFEh; switch 24 cases
0x8B5E77: cmp     eax, 17h
0x8B5E7A: ja      def_8B5E87; jumptable 008B5E87 default case, cases 10,17-21
0x8B5E80: movzx   ecx, ds:byte_8B652C[eax]
0x8B5E87: jmp     ds:jpt_8B5E87[ecx*4]; switch jump
0x8B5E8E: mov     eax, [esi+0Ch]; jumptable 008B5E87 case 4
0x8B5E91: lea     edx, [esp+3B0h+var_380]
0x8B5E95: push    edx; int
0x8B5E96: push    3F800000h; float
0x8B5E9B: push    eax; float
0x8B5E9C: call    sub_8B3550
0x8B5EA1: add     esp, 0Ch
0x8B5EA4: jmp     loc_8B6256; jumptable 008B5E87 case 23
0x8B5EA9: movaps  xmm0, xmmword ptr [esi+10h]; jumptable 008B5E87 case 7
0x8B5EAD: lea     ecx, [esp+3B0h+var_380]
0x8B5EB1: push    ecx; int
0x8B5EB2: push    3F800000h; float
0x8B5EB7: lea     edx, [esp+3B8h+var_390]
0x8B5EBB: push    edx; int
0x8B5EBC: movaps  [esp+3BCh+var_390], xmm0
0x8B5EC1: call    sub_8B35E0
0x8B5EC6: add     esp, 0Ch
0x8B5EC9: jmp     loc_8B6256; jumptable 008B5E87 case 23
0x8B5ECE: mov     eax, [esi]; jumptable 008B5E87 case 9
0x8B5ED0: lea     ecx, [esp+3B0h+var_3A0]
0x8B5ED4: push    ecx
0x8B5ED5: mov     ecx, esi
0x8B5ED7: call    dword ptr [eax+1Ch]
0x8B5EDA: mov     edx, large fs:2Ch
0x8B5EE1: mov     eax, ds:0BA9DE4h
0x8B5EE6: mov     ebx, [edx+eax*4]
0x8B5EE9: mov     ecx, [ebx+19Ch]
0x8B5EEF: test    ecx, ecx
0x8B5EF1: jnz     short loc_8B5EF9
0x8B5EF3: mov     ecx, ds:0BA7D9Ch
0x8B5EF9: mov     edx, dword ptr [esp+3ACh+var_3A0+4]
0x8B5EFD: mov     edi, [ecx+20h]
0x8B5F00: lea     eax, [edx+1]
0x8B5F03: shl     eax, 4
0x8B5F06: and     eax, 0FFFFFFF0h
0x8B5F09: lea     edx, [edi+eax]
0x8B5F0C: cmp     edx, [ecx+2Ch]
0x8B5F0F: ja      short loc_8B5F16
0x8B5F11: mov     [ecx+20h], edx
0x8B5F14: jmp     short loc_8B5F1E
0x8B5F16: mov     edx, [ecx]
0x8B5F18: push    eax
0x8B5F19: call    dword ptr [edx+0Ch]
0x8B5F1C: mov     edi, eax
0x8B5F1E: mov     eax, [esi]
0x8B5F20: push    edi
0x8B5F21: mov     ecx, esi
0x8B5F23: call    dword ptr [eax+20h]
0x8B5F26: mov     edx, dword ptr [esp+3B0h+var_3A0]
0x8B5F2A: lea     ecx, [esp+3B0h+var_380]
0x8B5F2E: push    ecx; int
0x8B5F2F: push    3F800000h; float
0x8B5F34: push    edx; int
0x8B5F35: push    10h; int
0x8B5F37: push    eax; int
0x8B5F38: call    sub_8B4540
0x8B5F3D: mov     eax, [ebx+19Ch]
0x8B5F43: add     esp, 14h
0x8B5F46: test    eax, eax
0x8B5F48: jnz     short loc_8B5F4F
0x8B5F4A: mov     eax, ds:0BA7D9Ch
0x8B5F4F: cmp     edi, [eax+28h]
0x8B5F52: mov     [eax+20h], edi
0x8B5F55: jnz     loc_8B6256; jumptable 008B5E87 case 23
0x8B5F5B: mov     edx, [eax]
0x8B5F5D: push    edi
0x8B5F5E: mov     ecx, eax
0x8B5F60: call    dword ptr [edx+10h]
0x8B5F63: jmp     loc_8B6256; jumptable 008B5E87 case 23
0x8B5F68: mov     ecx, [esi+0Ch]; jumptable 008B5E87 case 6
0x8B5F6B: movaps  xmm0, xmmword ptr [esi+10h]
0x8B5F6F: lea     eax, [esp+3B0h+var_380]
0x8B5F73: push    eax; int
0x8B5F74: push    ecx; float
0x8B5F75: push    3F800000h; float
0x8B5F7A: lea     edx, [esp+3BCh+var_390]
0x8B5F7E: push    edx; int
0x8B5F7F: movaps  [esp+3C0h+var_330], xmm0
0x8B5F87: movaps  xmm0, xmmword ptr [esi+20h]
0x8B5F8B: lea     eax, [esp+3C0h+var_3A0]
0x8B5F8F: push    eax; int
0x8B5F90: lea     ecx, [esp+3C4h+var_330]
0x8B5F97: movaps  [esp+3C4h+var_3A0], xmm0
0x8B5F9C: movaps  xmm0, xmmword ptr [esi+30h]
0x8B5FA0: push    ecx; int
0x8B5FA1: movaps  [esp+3C8h+var_390], xmm0
0x8B5FA6: call    sub_8B55D0
0x8B5FAB: add     esp, 18h
0x8B5FAE: jmp     loc_8B6256; jumptable 008B5E87 case 23
0x8B5FB3: mov     edx, [ebp+arg_8]; jumptable 008B5E87 case 22
0x8B5FB6: mov     eax, [ebp+arg_4]
0x8B5FB9: mov     ecx, [esi+10h]
0x8B5FBC: push    edx
0x8B5FBD: push    eax
0x8B5FBE: push    ecx
0x8B5FBF: call    sub_8B5E20
0x8B5FC4: add     esp, 0Ch
0x8B5FC7: mov     ecx, [esp+3B0h+var_4]
0x8B5FCE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B5FD3: pop     edi
0x8B5FD4: pop     esi
0x8B5FD5: pop     ebx
0x8B5FD6: mov     esp, ebp
0x8B5FD8: pop     ebp
0x8B5FD9: retn
0x8B5FDA: movaps  xmm0, [esp+3B0h+var_330]; jumptable 008B5E87 case 14
0x8B5FE2: mov     eax, [ebp+arg_4]
0x8B5FE5: lea     edx, [esp+3B0h+var_320]
0x8B5FEC: movaps  [esp+3B0h+var_320], xmm0
0x8B5FF4: movaps  [esp+3B0h+var_310], xmm0
0x8B5FFC: movaps  [esp+3B0h+var_300], xmm0
0x8B6004: movaps  xmm0, xmmword ptr [esi+20h]
0x8B6008: push    edx
0x8B6009: push    eax
0x8B600A: lea     ecx, [esp+3B8h+var_250]
0x8B6011: mov     dword ptr [esp+3B8h+var_320], 3F800000h
0x8B601C: mov     dword ptr [esp+3B8h+var_310+4], 3F800000h
0x8B6027: mov     dword ptr [esp+3B8h+var_300+8], 3F800000h
0x8B6032: movaps  [esp+3B8h+var_2F0], xmm0
0x8B603A: call    sub_8B1F70
0x8B603F: mov     ecx, [ebp+arg_8]
0x8B6042: mov     eax, [esi+10h]
0x8B6045: push    ecx
0x8B6046: lea     edx, [esp+3B4h+var_250]
0x8B604D: push    edx
0x8B604E: push    eax
0x8B604F: call    sub_8B5E20
0x8B6054: add     esp, 0Ch
0x8B6057: mov     ecx, [esp+3B0h+var_4]
0x8B605E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B6063: pop     edi
0x8B6064: pop     esi
0x8B6065: pop     ebx
0x8B6066: mov     esp, ebp
0x8B6068: pop     ebp
0x8B6069: retn
0x8B606A: mov     edx, [ebp+arg_4]; jumptable 008B5E87 case 15
0x8B606D: lea     ecx, [esi+20h]
0x8B6070: push    ecx
0x8B6071: push    edx
0x8B6072: lea     ecx, [esp+3B8h+var_250]
0x8B6079: call    sub_8B1F70
0x8B607E: mov     eax, [ebp+arg_8]
0x8B6081: mov     edx, [esi+10h]
0x8B6084: push    eax
0x8B6085: lea     ecx, [esp+3B4h+var_250]
0x8B608C: push    ecx
0x8B608D: push    edx
0x8B608E: call    sub_8B5E20
0x8B6093: add     esp, 0Ch
0x8B6096: mov     ecx, [esp+3B0h+var_4]
0x8B609D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B60A2: pop     edi
0x8B60A3: pop     esi
0x8B60A4: pop     ebx
0x8B60A5: mov     esp, ebp
0x8B60A7: pop     ebp
0x8B60A8: retn
0x8B60A9: mov     ecx, [ebp+arg_4]; jumptable 008B5E87 case 25
0x8B60AC: lea     eax, [esi+20h]
0x8B60AF: push    eax
0x8B60B0: push    ecx
0x8B60B1: lea     ecx, [esp+3B8h+var_250]
0x8B60B8: call    sub_8B1F70
0x8B60BD: mov     edx, [ebp+arg_8]
0x8B60C0: mov     ecx, [esi+0Ch]
0x8B60C3: push    edx
0x8B60C4: lea     eax, [esp+3B4h+var_250]
0x8B60CB: push    eax
0x8B60CC: push    ecx
0x8B60CD: call    sub_8B5E20
0x8B60D2: add     esp, 0Ch
0x8B60D5: mov     ecx, [esp+3B0h+var_4]
0x8B60DC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B60E1: pop     edi
0x8B60E2: pop     esi
0x8B60E3: pop     ebx
0x8B60E4: mov     esp, ebp
0x8B60E6: pop     ebp
0x8B60E7: retn
0x8B60E8: mov     eax, [esi+0Ch]; jumptable 008B5E87 case 11
0x8B60EB: test    eax, eax
0x8B60ED: mov     dword ptr [esp+3B0h+var_3A0], 0
0x8B60F5: jle     def_8B5E87; jumptable 008B5E87 default case, cases 10,17-21
0x8B60FB: mov     edi, [ebp+arg_4]
0x8B60FE: lea     ebx, [esi+10h]
0x8B6101: movaps  xmm0, xmmword ptr [edi]
0x8B6104: movaps  [esp+3B0h+var_320], xmm0
0x8B610C: movaps  xmm0, xmmword ptr [edi+10h]
0x8B6110: movaps  [esp+3B0h+var_310], xmm0
0x8B6118: movaps  xmm0, xmmword ptr [edi+20h]
0x8B611C: push    ebx
0x8B611D: lea     edx, [esp+3B4h+var_320]
0x8B6124: movaps  [esp+3B4h+var_300], xmm0
0x8B612C: movaps  xmm0, xmmword ptr [edi+30h]
0x8B6130: push    edx
0x8B6131: lea     ecx, [esp+3B8h+var_2F0]
0x8B6138: movaps  [esp+3B8h+var_2F0], xmm0
0x8B6140: call    sub_88FCC0
0x8B6145: mov     eax, [ebx+0Ch]
0x8B6148: push    eax
0x8B6149: lea     ecx, [esp+3B4h+var_390]
0x8B614D: call    sub_8ED410
0x8B6152: mov     ecx, [ebp+arg_8]
0x8B6155: push    ecx
0x8B6156: lea     edx, [esp+3B4h+var_320]
0x8B615D: push    edx
0x8B615E: lea     eax, [esp+3B8h+var_390]
0x8B6162: push    eax
0x8B6163: call    sub_8B5E20
0x8B6168: mov     eax, dword ptr [esp+3BCh+var_3A0]
0x8B616C: mov     ecx, [esi+0Ch]
0x8B616F: add     esp, 0Ch
0x8B6172: inc     eax
0x8B6173: add     ebx, 10h
0x8B6176: cmp     eax, ecx
0x8B6178: mov     dword ptr [esp+3B0h+var_390], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8B6180: mov     dword ptr [esp+3B0h+var_3A0], eax
0x8B6184: jl      loc_8B6101
0x8B618A: mov     ecx, [esp+3B0h+var_4]
0x8B6191: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B6196: pop     edi
0x8B6197: pop     esi
0x8B6198: pop     ebx
0x8B6199: mov     esp, ebp
0x8B619B: pop     ebp
0x8B619C: retn
0x8B619D: mov     edx, [esi]; jumptable 008B5E87 cases 2,3,12,13,16,24
0x8B619F: mov     ecx, esi
0x8B61A1: call    dword ptr [edx+8]
0x8B61A4: cmp     eax, 3
0x8B61A7: jz      short loc_8B61B5
0x8B61A9: mov     eax, [esi]
0x8B61AB: mov     ecx, esi
0x8B61AD: call    dword ptr [eax+8]
0x8B61B0: cmp     eax, 18h
0x8B61B3: jnz     short loc_8B61B8
0x8B61B5: mov     esi, [esi+0Ch]
0x8B61B8: mov     edx, [esi]
0x8B61BA: mov     ecx, esi
0x8B61BC: call    dword ptr [edx+20h]
0x8B61BF: mov     edi, eax
0x8B61C1: cmp     edi, 0FFFFFFFFh
0x8B61C4: jz      def_8B5E87; jumptable 008B5E87 default case, cases 10,17-21
0x8B61CA: mov     ebx, [ebp+arg_8]
0x8B61CD: lea     ecx, [ecx+0]
0x8B61D0: mov     eax, [esi]
0x8B61D2: lea     ecx, [esp+3B0h+var_210]
0x8B61D9: push    ecx
0x8B61DA: push    edi
0x8B61DB: mov     ecx, esi
0x8B61DD: call    dword ptr [eax+28h]
0x8B61E0: test    eax, eax
0x8B61E2: jz      short loc_8B61F2
0x8B61E4: mov     edx, [ebp+arg_4]
0x8B61E7: push    ebx
0x8B61E8: push    edx
0x8B61E9: push    eax
0x8B61EA: call    sub_8B5E20
0x8B61EF: add     esp, 0Ch
0x8B61F2: mov     eax, [esi]
0x8B61F4: push    edi
0x8B61F5: mov     ecx, esi
0x8B61F7: call    dword ptr [eax+24h]
0x8B61FA: mov     edi, eax
0x8B61FC: cmp     edi, 0FFFFFFFFh
0x8B61FF: jnz     short loc_8B61D0
0x8B6201: mov     ecx, [esp+3B0h+var_4]
0x8B6208: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B620D: pop     edi
0x8B620E: pop     esi
0x8B620F: pop     ebx
0x8B6210: mov     esp, ebp
0x8B6212: pop     ebp
0x8B6213: retn
0x8B6214: mov     edx, [esi+0Ch]; jumptable 008B5E87 case 8
0x8B6217: lea     ecx, [esp+3B0h+var_380]
0x8B621B: push    ecx; int
0x8B621C: push    3F800000h; float
0x8B6221: push    edx; float
0x8B6222: lea     eax, [esi+20h]
0x8B6225: push    eax; int
0x8B6226: add     esi, 10h
0x8B6229: push    esi; int
0x8B622A: call    sub_8B4790
0x8B622F: jmp     short loc_8B6253
0x8B6231: lea     ecx, [esp+3B0h+var_380]; jumptable 008B5E87 case 5
0x8B6235: push    ecx; int
0x8B6236: push    3F800000h; float
0x8B623B: mov     ecx, esi
0x8B623D: call    sub_8F2260
0x8B6242: push    ecx
0x8B6243: lea     edx, [esi+30h]
0x8B6246: fstp    [esp+3BCh+var_3BC]; float
0x8B6249: push    edx; int
0x8B624A: add     esi, 20h ; ' '
0x8B624D: push    esi; int
0x8B624E: call    sub_8B51C0
0x8B6253: add     esp, 14h
0x8B6256: fld     dword ptr ds:0A2FAA8h; jumptable 008B5E87 case 23
0x8B625C: fld     [esp+3B0h+var_380]
0x8B6260: fucompp
0x8B6262: fnstsw  ax
0x8B6264: test    ah, 44h
0x8B6267: jnp     def_8B5E87; jumptable 008B5E87 default case, cases 10,17-21
0x8B626D: mov     eax, [esp+3B0h+var_380]
0x8B6271: push    eax; float
0x8B6272: lea     eax, [esp+3B4h+var_380]
0x8B6276: call    sub_8B3810
0x8B627B: xor     edi, edi
0x8B627D: add     esp, 4
0x8B6280: lea     ecx, [esp+3B0h+var_2E0]
0x8B6287: mov     dword ptr [esp+3B0h+var_3A0], edi
0x8B628B: mov     dword ptr [esp+3B0h+var_3A0+4], edi
0x8B628F: mov     dword ptr [esp+3B0h+var_3A0+8], 80000000h
0x8B6297: call    sub_539B00
0x8B629C: mov     esi, [ebp+arg_8]
0x8B629F: push    esi
0x8B62A0: lea     ecx, [esp+3B4h+var_2E0]
0x8B62A7: call    sub_8B3690
0x8B62AC: mov     edx, dword ptr [esp+3B0h+var_3A0+8]
0x8B62B0: mov     ecx, dword ptr [esp+3B0h+var_3A0+4]
0x8B62B4: and     edx, 3FFFFFFFh
0x8B62BA: cmp     ecx, edx
0x8B62BC: jnz     short loc_8B62D4
0x8B62BE: lea     eax, [esp+3B0h+var_3A0]
0x8B62C2: push    90h
0x8B62C7: push    eax
0x8B62C8: call    sub_8A6EE0
0x8B62CD: mov     ecx, dword ptr [esp+3B8h+var_3A0+4]
0x8B62D1: add     esp, 8
0x8B62D4: mov     ebx, dword ptr [esp+3B0h+var_3A0]
0x8B62D8: movaps  xmm0, [esp+3B0h+var_2D0]
0x8B62E0: mov     edx, [esp+3B0h+var_2DC]
0x8B62E7: lea     eax, [ecx+ecx*8]
0x8B62EA: shl     eax, 4
0x8B62ED: add     eax, ebx
0x8B62EF: inc     ecx
0x8B62F0: mov     dword ptr [esp+3B0h+var_3A0+4], ecx
0x8B62F4: mov     ecx, [esp+3B0h+var_2E0]
0x8B62FB: movaps  xmmword ptr [eax+10h], xmm0
0x8B62FF: movaps  xmm0, [esp+3B0h+var_2C0]
0x8B6307: mov     [eax], ecx
0x8B6309: mov     [eax+4], edx
0x8B630C: movaps  xmmword ptr [eax+20h], xmm0
0x8B6310: movaps  xmm0, [esp+3B0h+var_2B0]
0x8B6318: movaps  xmmword ptr [eax+30h], xmm0
0x8B631C: movaps  xmm0, [esp+3B0h+var_2A0]
0x8B6324: movaps  xmmword ptr [eax+40h], xmm0
0x8B6328: movaps  xmm0, [esp+3B0h+var_290]
0x8B6330: movaps  xmmword ptr [eax+50h], xmm0
0x8B6334: movaps  xmm0, [esp+3B0h+var_280]
0x8B633C: movaps  xmmword ptr [eax+60h], xmm0
0x8B6340: movaps  xmm0, [esp+3B0h+var_270]
0x8B6348: movaps  xmmword ptr [eax+70h], xmm0
0x8B634C: movaps  xmm0, [esp+3B0h+var_260]
0x8B6354: lea     ecx, [esp+3B0h+var_2E0]
0x8B635B: movaps  xmmword ptr [eax+80h], xmm0
0x8B6362: call    sub_539B00
0x8B6367: movaps  xmm0, [esp+3B0h+var_370]
0x8B636C: mov     eax, [esp+3B0h+var_380]
0x8B6370: mov     ecx, [esp+3B0h+var_37C]
0x8B6374: mov     edx, dword ptr [esp+3B0h+var_3A0+8]
0x8B6378: movaps  [esp+3B0h+var_2D0], xmm0
0x8B6380: movaps  xmm0, [esp+3B0h+var_360]
0x8B6385: movaps  [esp+3B0h+var_2C0], xmm0
0x8B638D: movaps  xmm0, [esp+3B0h+var_350]
0x8B6392: movaps  [esp+3B0h+var_2B0], xmm0
0x8B639A: movaps  xmm0, [esp+3B0h+var_340]
0x8B639F: movaps  [esp+3B0h+var_2A0], xmm0
0x8B63A7: mov     [esp+3B0h+var_2E0], eax
0x8B63AE: mov     eax, [ebp+arg_4]
0x8B63B1: movaps  xmm0, xmmword ptr [eax]
0x8B63B4: movaps  [esp+3B0h+var_290], xmm0
0x8B63BC: movaps  xmm0, xmmword ptr [eax+10h]
0x8B63C0: movaps  [esp+3B0h+var_280], xmm0
0x8B63C8: movaps  xmm0, xmmword ptr [eax+20h]
0x8B63CC: mov     [esp+3B0h+var_2DC], ecx
0x8B63D3: mov     ecx, dword ptr [esp+3B0h+var_3A0+4]
0x8B63D7: and     edx, 3FFFFFFFh
0x8B63DD: cmp     ecx, edx
0x8B63DF: movaps  [esp+3B0h+var_270], xmm0
0x8B63E7: movaps  xmm0, xmmword ptr [eax+30h]
0x8B63EB: movaps  [esp+3B0h+var_260], xmm0
0x8B63F3: jnz     short loc_8B640B
0x8B63F5: lea     eax, [esp+3B0h+var_3A0]
0x8B63F9: push    90h
0x8B63FE: push    eax
0x8B63FF: call    sub_8A6EE0
0x8B6404: mov     ecx, dword ptr [esp+3B8h+var_3A0+4]
0x8B6408: add     esp, 8
0x8B640B: mov     ebx, dword ptr [esp+3B0h+var_3A0]
0x8B640F: mov     edx, [esp+3B0h+var_2DC]
0x8B6416: movaps  xmm0, [esp+3B0h+var_2D0]
0x8B641E: lea     eax, [ecx+ecx*8]
0x8B6421: shl     eax, 4
0x8B6424: add     eax, ebx
0x8B6426: inc     ecx
0x8B6427: mov     dword ptr [esp+3B0h+var_3A0+4], ecx
0x8B642B: mov     ecx, [esp+3B0h+var_2E0]
0x8B6432: movaps  xmmword ptr [eax+10h], xmm0
0x8B6436: movaps  xmm0, [esp+3B0h+var_2C0]
0x8B643E: mov     [eax], ecx
0x8B6440: mov     [eax+4], edx
0x8B6443: movaps  xmmword ptr [eax+20h], xmm0
0x8B6447: movaps  xmm0, [esp+3B0h+var_2B0]
0x8B644F: movaps  xmmword ptr [eax+30h], xmm0
0x8B6453: movaps  xmm0, [esp+3B0h+var_2A0]
0x8B645B: movaps  xmmword ptr [eax+40h], xmm0
0x8B645F: movaps  xmm0, [esp+3B0h+var_290]
0x8B6467: movaps  xmmword ptr [eax+50h], xmm0
0x8B646B: movaps  xmm0, [esp+3B0h+var_280]
0x8B6473: movaps  xmmword ptr [eax+60h], xmm0
0x8B6477: movaps  xmm0, [esp+3B0h+var_270]
0x8B647F: movaps  xmmword ptr [eax+70h], xmm0
0x8B6483: movaps  xmm0, [esp+3B0h+var_260]
0x8B648B: movaps  xmmword ptr [eax+80h], xmm0
0x8B6492: lea     eax, [esp+3B0h+var_3A0]
0x8B6496: push    esi
0x8B6497: push    eax
0x8B6498: call    sub_8B3E60
0x8B649D: mov     eax, dword ptr [esp+3B8h+var_3A0+8]
0x8B64A1: add     esp, 8
0x8B64A4: test    eax, eax
0x8B64A6: js      short def_8B5E87; jumptable 008B5E87 default case, cases 10,17-21
0x8B64A8: mov     ecx, large fs:2Ch
0x8B64AF: mov     edx, ds:0BA9DE4h
0x8B64B5: mov     ecx, [ecx+edx*4]
0x8B64B8: mov     ecx, [ecx+19Ch]
0x8B64BE: cmp     ecx, edi
0x8B64C0: jnz     short loc_8B64C8
0x8B64C2: mov     ecx, ds:0BA7D9Ch
0x8B64C8: and     eax, 3FFFFFFFh
0x8B64CD: lea     edx, [eax+eax*8]
0x8B64D0: mov     eax, dword ptr [esp+3B0h+var_3A0]
0x8B64D4: push    14h
0x8B64D6: shl     edx, 4
0x8B64D9: push    edx
0x8B64DA: push    eax
0x8B64DB: call    sub_8A75D0
0x8B64E0: mov     ecx, [esp+3B0h+var_4]; jumptable 008B5E87 default case, cases 10,17-21
0x8B64E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B64EC: pop     edi
0x8B64ED: pop     esi
0x8B64EE: pop     ebx
0x8B64EF: mov     esp, ebp
0x8B64F1: pop     ebp
0x8B64F2: retn
