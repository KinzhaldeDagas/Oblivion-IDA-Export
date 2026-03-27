0x7AE070: push    0FFFFFFFFh
0x7AE072: push    offset BSShaderAccumulator__vtable_entry_0x14_SEH
0x7AE077: mov     eax, large fs:0
0x7AE07D: push    eax
0x7AE07E: sub     esp, 2Ch
0x7AE081: push    ebx
0x7AE082: push    ebp
0x7AE083: push    esi
0x7AE084: push    edi
0x7AE085: mov     eax, ds:0B30AACh
0x7AE08A: xor     eax, esp
0x7AE08C: push    eax
0x7AE08D: lea     eax, [esp+4Ch+var_C]
0x7AE091: mov     large fs:0, eax
0x7AE097: mov     esi, ecx
0x7AE099: xor     ebx, ebx
0x7AE09B: cmp     [esi+2268h], bl
0x7AE0A1: jz      loc_7AEBFE
0x7AE0A7: cmp     [esi+8], ebx
0x7AE0AA: jz      loc_7AEBFE
0x7AE0B0: cmp     [esi+21E1h], bl
0x7AE0B6: jz      loc_7AEBFE
0x7AE0BC: mov     [esi+2268h], bl
0x7AE0C2: mov     eax, ds:0B3F928h
0x7AE0C7: mov     ebp, 5
0x7AE0CC: cmp     ds:0B42EACh, bp
0x7AE0D3: mov     [esp+4Ch+var_20], eax
0x7AE0D7: mov     ds:0B42CDDh, bl
0x7AE0DD: jnz     short loc_7AE131
0x7AE0DF: mov     edi, 6
0x7AE0E4: mov     edx, [esi]
0x7AE0E6: mov     eax, [edx+60h]
0x7AE0E9: push    ebx
0x7AE0EA: push    edi
0x7AE0EB: mov     ecx, esi
0x7AE0ED: call    eax
0x7AE0EF: add     edi, 1
0x7AE0F2: cmp     edi, 9
0x7AE0F5: jle     short loc_7AE0E4
0x7AE0F7: mov     edi, 154h
0x7AE0FC: lea     esp, [esp+0]
0x7AE100: mov     edx, [esi]
0x7AE102: mov     eax, [edx+60h]
0x7AE105: push    ebx
0x7AE106: push    edi
0x7AE107: mov     ecx, esi
0x7AE109: call    eax
0x7AE10B: add     edi, 1
0x7AE10E: cmp     edi, 155h
0x7AE114: jle     short loc_7AE100
0x7AE116: mov     ecx, esi
0x7AE118: call    sub_7AB6F0
0x7AE11D: mov     ecx, dword ptr [esp+4Ch+var_C]
0x7AE121: mov     large fs:0, ecx
0x7AE128: pop     ecx
0x7AE129: pop     edi
0x7AE12A: pop     esi
0x7AE12B: pop     ebp
0x7AE12C: pop     ebx
0x7AE12D: add     esp, 38h
0x7AE130: retn
0x7AE131: push    1; a1
0x7AE133: call    GetShaderDefinition
0x7AE138: mov     edi, [esi+68h]
0x7AE13B: mov     ecx, [eax+4]
0x7AE13E: add     eax, 4
0x7AE141: add     esp, 4
0x7AE144: cmp     edi, ebx
0x7AE146: mov     [esp+4Ch+var_28], ecx
0x7AE14A: jz      short loc_7AE164
0x7AE14C: lea     esp, [esp+0]
0x7AE150: mov     edx, [edi+8]
0x7AE153: lea     eax, [edi+8]
0x7AE156: mov     edi, [edi]
0x7AE158: push    edx
0x7AE159: mov     ecx, esi
0x7AE15B: call    sub_7ABBC0
0x7AE160: cmp     edi, ebx
0x7AE162: jnz     short loc_7AE150
0x7AE164: lea     ecx, [esi+2200h]
0x7AE16A: call    sub_7AA6C0
0x7AE16F: lea     ecx, [esi+2214h]
0x7AE175: call    sub_7AA6C0
0x7AE17A: cmp     ds:0B42CD9h, bl
0x7AE180: jz      short loc_7AE1A3
0x7AE182: cmp     ds:0B42EACh, bp
0x7AE189: jz      short loc_7AE1A3
0x7AE18B: mov     ecx, esi
0x7AE18D: call    sub_7A9E10
0x7AE192: push    eax; a2
0x7AE193: mov     ecx, offset RenderWindowNiNode; this
0x7AE198: call    NiSmartPointer_Set??
0x7AE19D: mov     ds:0B42CD9h, bl
0x7AE1A3: cmp     ds:0B42E97h, bl
0x7AE1A9: mov     eax, [esi+28h]
0x7AE1AC: mov     ecx, [esi+20h]
0x7AE1AF: mov     edx, [esi+24h]
0x7AE1B2: mov     [esp+4Ch+var_34], eax
0x7AE1B6: mov     eax, [esi+2Ch]
0x7AE1B9: mov     [esp+4Ch+var_38], ecx
0x7AE1BD: mov     [esp+4Ch+var_30], edx
0x7AE1C1: mov     [esp+4Ch+var_24], eax
0x7AE1C5: jz      loc_7AE4F1
0x7AE1CB: mov     eax, [esi+150h]
0x7AE1D1: cmp     eax, ebx
0x7AE1D3: jbe     loc_7AE4F1
0x7AE1D9: cmp     ds:0B42CDBh, bl
0x7AE1DF: jnz     loc_7AE4F1
0x7AE1E5: cmp     ds:0B42EACh, bp
0x7AE1EC: jz      loc_7AE4F1
0x7AE1F2: mov     cx, ax
0x7AE1F5: mov     [esi+21E4h], cx
0x7AE1FC: xor     ecx, ecx
0x7AE1FE: mov     [esi+20h], eax
0x7AE201: mov     [esi+24h], eax
0x7AE204: mov     edx, 4
0x7AE209: mul     edx
0x7AE20B: seto    cl
0x7AE20E: neg     ecx
0x7AE210: or      ecx, eax
0x7AE212: push    ecx; Size
0x7AE213: call    FormHeapAlloc
0x7AE218: mov     [esi+28h], eax
0x7AE21B: mov     eax, [esi+24h]
0x7AE21E: xor     ecx, ecx
0x7AE220: mov     edx, 4
0x7AE225: mul     edx
0x7AE227: seto    cl
0x7AE22A: neg     ecx
0x7AE22C: or      ecx, eax
0x7AE22E: push    ecx; Size
0x7AE22F: call    FormHeapAlloc
0x7AE234: mov     ebp, [esi+144h]
0x7AE23A: mov     [esi+2Ch], eax
0x7AE23D: mov     eax, [esi+8]
0x7AE240: fld     dword ptr [eax+64h]
0x7AE243: add     esp, 8
0x7AE246: fstp    [esp+4Ch+var_1C]
0x7AE24A: xor     edi, edi
0x7AE24C: cmp     ebp, ebx
0x7AE24E: fld     dword ptr [eax+70h]
0x7AE251: fstp    [esp+4Ch+var_18]
0x7AE255: fld     dword ptr [eax+7Ch]
0x7AE258: fstp    [esp+4Ch+var_14]
0x7AE25C: jz      short loc_7AE2A4
0x7AE25E: mov     edi, edi
0x7AE260: mov     ecx, [esi+28h]
0x7AE263: lea     eax, [ebp+8]
0x7AE266: mov     eax, [eax]
0x7AE268: mov     edx, [eax]
0x7AE26A: mov     ebp, [ebp+0]
0x7AE26D: mov     [ecx+edi*4], edx
0x7AE270: mov     eax, [esi+28h]
0x7AE273: mov     eax, [eax+edi*4]
0x7AE276: fld     dword ptr [eax+2Ch]
0x7AE279: lea     ecx, [esp+4Ch+var_1C]
0x7AE27D: push    ecx
0x7AE27E: fstp    [esp+50h+var_2C]
0x7AE282: lea     ecx, [eax+20h]
0x7AE285: call    sub_47D9E0
0x7AE28A: fsub    [esp+4Ch+var_2C]
0x7AE28E: mov     edx, [esi+2Ch]
0x7AE291: add     edi, 1
0x7AE294: cmp     ebp, ebx
0x7AE296: fstp    [esp+4Ch+var_2C]
0x7AE29A: fld     [esp+4Ch+var_2C]
0x7AE29E: fstp    dword ptr [edx+edi*4-4]
0x7AE2A2: jnz     short loc_7AE260
0x7AE2A4: mov     [esi+20h], edi
0x7AE2A7: mov     [esi+24h], edi
0x7AE2AA: add     edi, 0FFFFFFFFh
0x7AE2AD: push    edi
0x7AE2AE: push    ebx
0x7AE2AF: mov     ecx, esi
0x7AE2B1: call    sub_733380
0x7AE2B6: movzx   eax, word ptr [esi+21E4h]
0x7AE2BD: cmp     ax, [esi+21E6h]
0x7AE2C4: jbe     loc_7AE35E
0x7AE2CA: mov     edi, [esi+21E8h]
0x7AE2D0: movzx   eax, ax
0x7AE2D3: xor     ecx, ecx
0x7AE2D5: mov     edx, 4
0x7AE2DA: mul     edx
0x7AE2DC: seto    cl
0x7AE2DF: neg     ecx
0x7AE2E1: or      ecx, eax
0x7AE2E3: push    ecx; Size
0x7AE2E4: call    FormHeapAlloc
0x7AE2E9: mov     [esi+21E8h], eax
0x7AE2EF: add     esp, 4
0x7AE2F2: xor     eax, eax
0x7AE2F4: cmp     [esi+21E6h], bx
0x7AE2FB: jbe     short loc_7AE31A
0x7AE2FD: lea     ecx, [ecx+0]
0x7AE300: mov     ecx, [esi+21E8h]
0x7AE306: mov     edx, [edi+eax*4]
0x7AE309: mov     [ecx+eax*4], edx
0x7AE30C: movzx   ecx, word ptr [esi+21E6h]
0x7AE313: add     eax, 1
0x7AE316: cmp     eax, ecx
0x7AE318: jl      short loc_7AE300
0x7AE31A: movzx   eax, word ptr [esi+21E6h]
0x7AE321: movzx   edx, word ptr [esi+21E4h]
0x7AE328: cmp     eax, edx
0x7AE32A: jge     short loc_7AE347
0x7AE32C: lea     esp, [esp+0]
0x7AE330: mov     ecx, [esi+21E8h]
0x7AE336: mov     [ecx+eax*4], ebx
0x7AE339: movzx   edx, word ptr [esi+21E4h]
0x7AE340: add     eax, 1
0x7AE343: cmp     eax, edx
0x7AE345: jl      short loc_7AE330
0x7AE347: push    edi
0x7AE348: call    FormHeapFree
0x7AE34D: mov     ax, [esi+21E4h]
0x7AE354: add     esp, 4
0x7AE357: mov     [esi+21E6h], ax
0x7AE35E: mov     ecx, [esi+28h]
0x7AE361: xor     edi, edi
0x7AE363: mov     [esi+30h], edi
0x7AE366: mov     ebx, [ecx]
0x7AE368: push    edi
0x7AE369: push    3
0x7AE36B: mov     dword ptr [esi+30h], 1
0x7AE372: call    sub_7D1320
0x7AE377: mov     ebp, [esp+54h+var_28]
0x7AE37B: mov     ecx, [ebp+30h]
0x7AE37E: mov     edx, [ecx]
0x7AE380: mov     eax, [edx+48h]
0x7AE383: add     esp, 8
0x7AE386: call    eax
0x7AE388: mov     ecx, [ebp+2Ch]
0x7AE38B: mov     edx, [ecx]
0x7AE38D: mov     eax, [edx+48h]
0x7AE390: call    eax
0x7AE392: mov     ecx, ds:0B43104h
0x7AE398: mov     edx, [ecx+280h]
0x7AE39E: push    10h; Size
0x7AE3A0: mov     [esp+50h+var_28], edx
0x7AE3A4: call    FormHeapAlloc
0x7AE3A9: add     esp, 4
0x7AE3AC: mov     [esp+4Ch+var_2C], eax
0x7AE3B0: cmp     eax, edi
0x7AE3B2: mov     [esp+4Ch+var_4], edi
0x7AE3B6: jz      short loc_7AE3CB
0x7AE3B8: push    edi
0x7AE3B9: push    edi
0x7AE3BA: push    1
0x7AE3BC: push    edi
0x7AE3BD: push    edi
0x7AE3BE: push    eax
0x7AE3BF: call    sub_7E2370
0x7AE3C4: add     esp, 18h
0x7AE3C7: mov     ebp, eax
0x7AE3C9: jmp     short loc_7AE3CD
0x7AE3CB: xor     ebp, ebp
0x7AE3CD: cmp     ebx, edi
0x7AE3CF: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x7AE3D7: mov     word ptr [ebp+4], 3
0x7AE3DD: mov     byte ptr [ebp+8], 0
0x7AE3E1: jz      loc_7AE47D
0x7AE3E7: xor     edi, edi
0x7AE3E9: mov     [ebp+0], ebx
0x7AE3EC: mov     eax, [esi+21E8h]
0x7AE3F2: add     eax, edi
0x7AE3F4: cmp     dword ptr [eax], 0
0x7AE3F7: jnz     short loc_7AE40B
0x7AE3F9: mov     ecx, [esp+4Ch+var_28]
0x7AE3FD: mov     edx, [ecx]
0x7AE3FF: push    eax
0x7AE400: mov     eax, [edx+1D8h]
0x7AE406: push    9
0x7AE408: push    ecx
0x7AE409: call    eax
0x7AE40B: mov     ecx, [esi+21E8h]
0x7AE411: mov     eax, [edi+ecx]
0x7AE414: mov     edx, [eax]
0x7AE416: push    2
0x7AE418: push    eax
0x7AE419: mov     eax, [edx+18h]
0x7AE41C: call    eax
0x7AE41E: push    3; float
0x7AE420: push    ebp; int
0x7AE421: mov     ecx, esi
0x7AE423: call    sub_7A9820
0x7AE428: add     dword ptr ds:0B42CCCh, 1
0x7AE42F: mov     eax, [ebp+0]
0x7AE432: mov     ecx, [eax+0B4h]
0x7AE438: mov     edx, [ecx]
0x7AE43A: mov     eax, [edx+5Ch]
0x7AE43D: call    eax
0x7AE43F: movzx   eax, ax
0x7AE442: movzx   ecx, ax
0x7AE445: add     ds:0B42CC8h, ecx
0x7AE44B: mov     edx, [esi+21E8h]
0x7AE451: mov     eax, [edi+edx]
0x7AE454: mov     ecx, [eax]
0x7AE456: mov     edx, [ecx+18h]
0x7AE459: push    1
0x7AE45B: push    eax
0x7AE45C: call    edx
0x7AE45E: mov     eax, [esi+30h]
0x7AE461: add     edi, 4
0x7AE464: cmp     eax, [esi+20h]
0x7AE467: jge     short loc_7AE47D
0x7AE469: mov     ecx, [esi+28h]
0x7AE46C: mov     ebx, [ecx+eax*4]
0x7AE46F: add     eax, 1
0x7AE472: test    ebx, ebx
0x7AE474: mov     [esi+30h], eax
0x7AE477: jnz     loc_7AE3E9
0x7AE47D: mov     ecx, ebp
0x7AE47F: call    sub_7E2400
0x7AE484: push    ebp
0x7AE485: call    FormHeapFree
0x7AE48A: add     esp, 4
0x7AE48D: cmp     byte ptr ds:0B42CDAh, 0
0x7AE494: jz      short loc_7AE4A0
0x7AE496: cmp     word ptr ds:0B42EACh, 0
0x7AE49E: jz      short loc_7AE4AB
0x7AE4A0: lea     ecx, [esi+140h]
0x7AE4A6: call    sub_7AA6C0
0x7AE4AB: mov     eax, [esi+28h]
0x7AE4AE: mov     edx, [esp+4Ch+var_34]
0x7AE4B2: mov     ecx, [esp+4Ch+var_38]
0x7AE4B6: mov     [esp+4Ch+var_34], eax
0x7AE4BA: mov     eax, [esi+20h]
0x7AE4BD: mov     [esp+4Ch+var_38], eax
0x7AE4C1: mov     eax, [esi+24h]
0x7AE4C4: mov     [esi+28h], edx
0x7AE4C7: mov     edx, [esp+4Ch+var_30]
0x7AE4CB: mov     [esp+4Ch+var_30], eax
0x7AE4CF: mov     eax, [esi+2Ch]
0x7AE4D2: push    eax
0x7AE4D3: mov     [esi+20h], ecx
0x7AE4D6: mov     [esi+24h], edx
0x7AE4D9: call    FormHeapFree
0x7AE4DE: mov     eax, [esp+50h+var_24]
0x7AE4E2: add     esp, 4
0x7AE4E5: mov     [esi+2Ch], eax
0x7AE4E8: mov     ebp, 5
0x7AE4ED: xor     ebx, ebx
0x7AE4EF: jmp     short loc_7AE50A
0x7AE4F1: cmp     ds:0B42CDAh, bl
0x7AE4F7: jnz     short loc_7AE50A
0x7AE4F9: lea     ecx, [esi+140h]
0x7AE4FF: call    sub_7AA6C0
0x7AE504: mov     ds:0B42CCCh, ebx
0x7AE50A: mov     edx, [esi]
0x7AE50C: mov     eax, [edx+5Ch]
0x7AE50F: mov     ecx, esi
0x7AE511: mov     [esi+1Ch], ebx
0x7AE514: call    eax
0x7AE516: cmp     byte ptr ds:0B42E97h, 0
0x7AE51D: jz      loc_7AE647
0x7AE523: cmp     ds:0B42CCCh, ebx
0x7AE529: jbe     loc_7AE647
0x7AE52F: cmp     byte ptr ds:0B42CDBh, 0
0x7AE536: jnz     loc_7AE647
0x7AE53C: cmp     ds:0B42EACh, bp
0x7AE543: jz      loc_7AE647
0x7AE549: mov     eax, [esi+20h]
0x7AE54C: mov     ecx, [esp+4Ch+var_34]
0x7AE550: mov     edx, [esp+4Ch+var_38]
0x7AE554: mov     ebx, [esi+28h]
0x7AE557: mov     [esi+28h], ecx
0x7AE55A: mov     ecx, [esp+4Ch+var_30]
0x7AE55E: mov     [esp+4Ch+var_38], eax
0x7AE562: mov     eax, [esi+24h]
0x7AE565: xor     ebp, ebp
0x7AE567: cmp     [esi+21E4h], bp
0x7AE56E: mov     [esi+20h], edx
0x7AE571: mov     [esp+4Ch+var_24], eax
0x7AE575: mov     [esi+24h], ecx
0x7AE578: jbe     loc_7AE607
0x7AE57E: mov     edi, edi
0x7AE580: mov     edx, [esi+21E8h]
0x7AE586: push    1
0x7AE588: lea     edi, ds:0[ebp*4]
0x7AE58F: mov     eax, [edi+edx]
0x7AE592: mov     ecx, [eax]
0x7AE594: push    4
0x7AE596: lea     edx, [esp+54h+var_30]
0x7AE59A: push    edx
0x7AE59B: push    eax
0x7AE59C: mov     eax, [ecx+1Ch]
0x7AE59F: call    eax
0x7AE5A1: cmp     eax, 1
0x7AE5A4: jnz     short loc_7AE5D6
0x7AE5A6: jmp     short loc_7AE5B0
0x7AE5A8: align 10h
0x7AE5B0: add     dword ptr ds:0B42CA8h, 1
0x7AE5B7: mov     ecx, [esi+21E8h]
0x7AE5BD: mov     eax, [edi+ecx]
0x7AE5C0: mov     edx, [eax]
0x7AE5C2: mov     edx, [edx+1Ch]
0x7AE5C5: push    1
0x7AE5C7: push    4
0x7AE5C9: lea     ecx, [esp+54h+var_30]
0x7AE5CD: push    ecx
0x7AE5CE: push    eax
0x7AE5CF: call    edx
0x7AE5D1: cmp     eax, 1
0x7AE5D4: jz      short loc_7AE5B0
0x7AE5D6: cmp     [esp+4Ch+var_30], 0
0x7AE5DB: jnz     short loc_7AE5F5
0x7AE5DD: mov     eax, [esi+28h]
0x7AE5E0: add     eax, edi
0x7AE5E2: push    eax
0x7AE5E3: lea     ecx, [esi+21ECh]
0x7AE5E9: call    sub_7ABDE0
0x7AE5EE: add     dword ptr ds:0B42CB8h, 1
0x7AE5F5: movzx   ecx, word ptr [esi+21E4h]
0x7AE5FC: add     ebp, 1
0x7AE5FF: cmp     ebp, ecx
0x7AE601: jl      loc_7AE580
0x7AE607: cmp     dword ptr [esi+21E8h], 0
0x7AE60E: jz      short loc_7AE622
0x7AE610: cmp     byte ptr ds:0B42CDAh, 0
0x7AE617: jnz     short loc_7AE622
0x7AE619: mov     word ptr [esi+21E4h], 0
0x7AE622: cmp     dword ptr [esi+20h], 0
0x7AE626: jle     short loc_7AE634
0x7AE628: mov     eax, [esi+28h]
0x7AE62B: push    eax
0x7AE62C: call    FormHeapFree
0x7AE631: add     esp, 4
0x7AE634: mov     edx, [esp+4Ch+var_38]
0x7AE638: mov     eax, [esp+4Ch+var_24]
0x7AE63C: mov     [esi+28h], ebx
0x7AE63F: mov     [esi+20h], edx
0x7AE642: mov     [esi+24h], eax
0x7AE645: xor     ebx, ebx
0x7AE647: cmp     byte ptr ds:0B42CDAh, 0
0x7AE64E: jz      short loc_7AE660
0x7AE650: cmp     ds:0B42EACh, bx
0x7AE657: jnz     short loc_7AE660
0x7AE659: mov     byte ptr ds:0B42CDBh, 1
0x7AE660: mov     edi, 4
0x7AE665: mov     edx, [esi]
0x7AE667: mov     eax, [edx+60h]
0x7AE66A: push    ebx
0x7AE66B: push    edi
0x7AE66C: mov     ecx, esi
0x7AE66E: call    eax
0x7AE670: add     edi, 1
0x7AE673: cmp     edi, 17Ch
0x7AE679: jl      short loc_7AE665
0x7AE67B: mov     eax, [esi+78h]
0x7AE67E: cmp     eax, ebx
0x7AE680: jz      short loc_7AE690
0x7AE682: cmp     [eax+10h], ebx
0x7AE685: jbe     short loc_7AE690
0x7AE687: push    ebx
0x7AE688: push    eax
0x7AE689: mov     ecx, esi
0x7AE68B: call    sub_7ABAC0
0x7AE690: mov     eax, [esi+8Ch]
0x7AE696: cmp     eax, ebx
0x7AE698: jbe     short loc_7AE6B7
0x7AE69A: lea     edi, [esi+7Ch]
0x7AE69D: push    offset sub_7AA390
0x7AE6A2: mov     ecx, edi
0x7AE6A4: call    sub_7AA550
0x7AE6A9: mov     ecx, [esi+2264h]
0x7AE6AF: push    76h ; 'v'
0x7AE6B1: push    edi
0x7AE6B2: call    sub_7F8DB0
0x7AE6B7: cmp     [esi+0A0h], ebx
0x7AE6BD: jbe     short loc_7AE6E2
0x7AE6BF: lea     edi, [esi+90h]
0x7AE6C5: push    offset sub_7AA390
0x7AE6CA: mov     ecx, edi
0x7AE6CC: call    sub_7AA550
0x7AE6D1: mov     ecx, [esi+2264h]
0x7AE6D7: push    195h
0x7AE6DC: push    edi
0x7AE6DD: call    sub_7F9410
0x7AE6E2: mov     edi, 17Ch
0x7AE6E7: mov     edx, [esi]
0x7AE6E9: mov     eax, [edx+60h]
0x7AE6EC: push    ebx
0x7AE6ED: push    edi
0x7AE6EE: mov     ecx, esi
0x7AE6F0: call    eax
0x7AE6F2: add     edi, 1
0x7AE6F5: cmp     edi, 198h
0x7AE6FB: jl      short loc_7AE6E7
0x7AE6FD: cmp     [esi+48h], ebx
0x7AE700: jz      short loc_7AE75A
0x7AE702: mov     ecx, [esi+40h]
0x7AE705: mov     ebp, [ecx+8]
0x7AE708: cmp     ebp, ebx
0x7AE70A: jz      short loc_7AE75A
0x7AE70C: lea     edi, [esi+3Ch]
0x7AE70F: nop
0x7AE710: push    ebx
0x7AE711: push    ebp
0x7AE712: mov     ecx, esi
0x7AE714: call    sub_7ABAC0
0x7AE719: push    ebp
0x7AE71A: mov     dword ptr [ebp+0], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AE721: call    FormHeapFree
0x7AE726: mov     ecx, [edi+4]
0x7AE729: mov     eax, [ecx]
0x7AE72B: add     esp, 4
0x7AE72E: cmp     eax, ebx
0x7AE730: mov     [edi+4], eax
0x7AE733: jz      short loc_7AE73A
0x7AE735: mov     [eax+4], ebx
0x7AE738: jmp     short loc_7AE73D
0x7AE73A: mov     [edi+8], ebx
0x7AE73D: mov     edx, [edi]
0x7AE73F: mov     eax, [edx+8]
0x7AE742: push    ecx
0x7AE743: mov     ecx, edi
0x7AE745: call    eax
0x7AE747: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x7AE74B: cmp     [esi+48h], ebx
0x7AE74E: jz      short loc_7AE75A
0x7AE750: mov     ecx, [esi+40h]
0x7AE753: mov     ebp, [ecx+8]
0x7AE756: cmp     ebp, ebx
0x7AE758: jnz     short loc_7AE710
0x7AE75A: cmp     byte ptr ds:0B42CDBh, 0
0x7AE761: jnz     short loc_7AE77F
0x7AE763: lea     edi, [esi+21ECh]
0x7AE769: mov     ecx, edi
0x7AE76B: call    sub_7A9C30
0x7AE770: mov     edx, [edi+4]
0x7AE773: mov     [edi+0Ch], edx
0x7AE776: mov     [edi+4], ebx
0x7AE779: mov     [edi+8], ebx
0x7AE77C: mov     [edi+10h], ebx
0x7AE77F: cmp     dword ptr [esi+2238h], 0
0x7AE786: mov     ebx, [esi+2228h]
0x7AE78C: jz      loc_7AEA20
0x7AE792: test    ebx, ebx
0x7AE794: jz      loc_7AEA0F
0x7AE79A: cmp     byte ptr ds:0B42CDBh, 0
0x7AE7A1: jnz     loc_7AEA0F
0x7AE7A7: cmp     byte ptr ds:0B42CDEh, 0
0x7AE7AE: jz      loc_7AEA0F
0x7AE7B4: mov     eax, [esi+2230h]
0x7AE7BA: mov     dword ptr [esi+223Ch], 0
0x7AE7C4: mov     byte ptr [esi+2240h], 0
0x7AE7CB: mov     edi, [ebx+0BCh]
0x7AE7D1: test    edi, edi
0x7AE7D3: mov     [esp+4Ch+var_38], eax
0x7AE7D7: jz      loc_7AEA0F
0x7AE7DD: mov     edx, [edi]
0x7AE7DF: mov     eax, [edx+1Ch]
0x7AE7E2: mov     ecx, edi
0x7AE7E4: call    eax
0x7AE7E6: cmp     eax, 1
0x7AE7E9: jl      short loc_7AE832
0x7AE7EB: mov     edx, [edi]
0x7AE7ED: mov     eax, [edx+1Ch]
0x7AE7F0: mov     ecx, edi
0x7AE7F2: call    eax
0x7AE7F4: cmp     eax, 5
0x7AE7F7: jg      short loc_7AE832
0x7AE7F9: mov     cl, ds:0B42CE0h
0x7AE7FF: neg     cl
0x7AE801: push    0
0x7AE803: sbb     ecx, ecx
0x7AE805: and     ecx, 0Dh
0x7AE808: add     ecx, 3
0x7AE80B: mov     ebp, ecx
0x7AE80D: push    ebp
0x7AE80E: mov     [esp+54h+var_30], ebp
0x7AE812: call    sub_7D1320
0x7AE817: mov     ecx, [edi+30h]
0x7AE81A: mov     edx, [ecx]
0x7AE81C: mov     eax, [edx+48h]
0x7AE81F: add     esp, 8
0x7AE822: call    eax
0x7AE824: mov     edi, [edi+2Ch]
0x7AE827: mov     edx, [edi]
0x7AE829: mov     eax, [edx+48h]
0x7AE82C: mov     ecx, edi
0x7AE82E: call    eax
0x7AE830: jmp     short loc_7AE883
0x7AE832: mov     edx, [edi]
0x7AE834: mov     eax, [edx+1Ch]
0x7AE837: mov     ecx, edi
0x7AE839: call    eax
0x7AE83B: cmp     eax, 1Bh
0x7AE83E: jnz     short loc_7AE87F
0x7AE840: mov     cl, ds:0B42CE0h
0x7AE846: neg     cl
0x7AE848: push    0
0x7AE84A: sbb     ecx, ecx
0x7AE84C: and     ecx, 0FFFFFEE6h
0x7AE852: add     ecx, 12Ah
0x7AE858: mov     ebp, ecx
0x7AE85A: push    ebp
0x7AE85B: mov     [esp+54h+var_30], ebp
0x7AE85F: call    sub_7FD260
0x7AE864: mov     ecx, [edi+30h]
0x7AE867: mov     edx, [ecx]
0x7AE869: mov     eax, [edx+48h]
0x7AE86C: add     esp, 8
0x7AE86F: call    eax
0x7AE871: mov     edi, [edi+2Ch]
0x7AE874: mov     edx, [edi]
0x7AE876: mov     eax, [edx+48h]
0x7AE879: mov     ecx, edi
0x7AE87B: call    eax
0x7AE87D: jmp     short loc_7AE883
0x7AE87F: mov     ebp, [esp+4Ch+var_30]
0x7AE883: push    0
0x7AE885: push    0
0x7AE887: push    0
0x7AE889: push    ebp
0x7AE88A: lea     ecx, [esp+5Ch+var_1C]
0x7AE88E: push    ebx
0x7AE88F: push    ecx
0x7AE890: call    sub_7E2370
0x7AE895: add     esp, 18h
0x7AE898: cmp     [esp+4Ch+var_38], 0
0x7AE89D: mov     [esp+4Ch+var_4], 1
0x7AE8A5: jz      loc_7AE9FE
0x7AE8AB: jmp     short loc_7AE8B0
0x7AE8AD: align 10h
0x7AE8B0: mov     ecx, [esp+4Ch+var_38]
0x7AE8B4: mov     edi, [ecx+8]
0x7AE8B7: test    edi, edi
0x7AE8B9: mov     edx, [ecx]
0x7AE8BB: lea     eax, [ecx+8]
0x7AE8BE: mov     [esp+4Ch+var_38], edx
0x7AE8C2: jz      loc_7AE9F3
0x7AE8C8: cmp     byte ptr [edi+19h], 0
0x7AE8CC: jnz     loc_7AE9EF
0x7AE8D2: cmp     byte ptr [edi+1Ah], 0
0x7AE8D6: jz      loc_7AE9EF
0x7AE8DC: mov     eax, [edi]
0x7AE8DE: mov     [ebx+88h], eax
0x7AE8E4: mov     ecx, [edi+4]
0x7AE8E7: mov     [ebx+8Ch], ecx
0x7AE8ED: mov     edx, [edi+8]
0x7AE8F0: mov     [ebx+90h], edx
0x7AE8F6: fld     dword ptr [edi+0Ch]
0x7AE8F9: fstp    [esp+4Ch+var_24]
0x7AE8FD: lea     ebp, [edi+14h]
0x7AE900: fld     [esp+4Ch+var_24]
0x7AE904: fstp    dword ptr [ebx+94h]
0x7AE90A: cmp     dword ptr [ebp+0], 0
0x7AE90E: mov     eax, ds:0B43104h
0x7AE913: mov     eax, [eax+280h]
0x7AE919: jnz     short loc_7AE929
0x7AE91B: mov     ecx, [eax]
0x7AE91D: mov     edx, [ecx+1D8h]
0x7AE923: push    ebp
0x7AE924: push    9
0x7AE926: push    eax
0x7AE927: call    edx
0x7AE929: mov     eax, [ebp+0]
0x7AE92C: test    eax, eax
0x7AE92E: jz      loc_7AE9F3
0x7AE934: cmp     byte ptr [edi+19h], 0
0x7AE938: jz      short loc_7AE983
0x7AE93A: mov     ecx, [eax]
0x7AE93C: push    1
0x7AE93E: push    4
0x7AE940: lea     edx, [esp+54h+var_34]
0x7AE944: push    edx
0x7AE945: push    eax
0x7AE946: mov     eax, [ecx+1Ch]
0x7AE949: call    eax
0x7AE94B: cmp     eax, 1
0x7AE94E: jnz     short loc_7AE970
0x7AE950: add     dword ptr ds:0B42CACh, 1
0x7AE957: mov     eax, [ebp+0]
0x7AE95A: mov     ecx, [eax]
0x7AE95C: push    1
0x7AE95E: push    4
0x7AE960: lea     edx, [esp+54h+var_34]
0x7AE964: push    edx
0x7AE965: push    eax
0x7AE966: mov     eax, [ecx+1Ch]
0x7AE969: call    eax
0x7AE96B: cmp     eax, 1
0x7AE96E: jz      short loc_7AE950
0x7AE970: mov     eax, [esp+4Ch+var_34]
0x7AE974: test    eax, eax
0x7AE976: setz    cl
0x7AE979: mov     [edi+18h], cl
0x7AE97C: mov     [edi+1Ch], eax
0x7AE97F: mov     byte ptr [edi+19h], 0
0x7AE983: mov     eax, [ebp+0]
0x7AE986: mov     edx, [eax]
0x7AE988: push    2
0x7AE98A: push    eax
0x7AE98B: mov     eax, [edx+18h]
0x7AE98E: call    eax
0x7AE990: test    eax, eax
0x7AE992: jz      short loc_7AE9B2
0x7AE994: mov     eax, [ebp+0]
0x7AE997: mov     ecx, [eax]
0x7AE999: mov     edx, [ecx+18h]
0x7AE99C: push    1
0x7AE99E: push    eax
0x7AE99F: call    edx
0x7AE9A1: mov     eax, [ebp+0]
0x7AE9A4: mov     ecx, [eax]
0x7AE9A6: mov     edx, [ecx+18h]
0x7AE9A9: push    2
0x7AE9AB: push    eax
0x7AE9AC: call    edx
0x7AE9AE: test    eax, eax
0x7AE9B0: jnz     short loc_7AE9D7
0x7AE9B2: mov     eax, [esp+4Ch+var_30]
0x7AE9B6: push    eax; float
0x7AE9B7: lea     ecx, [esp+50h+var_1C]
0x7AE9BB: push    ecx; int
0x7AE9BC: mov     ecx, esi
0x7AE9BE: call    sub_7A9820
0x7AE9C3: mov     ebp, [ebp+0]
0x7AE9C6: mov     byte ptr [edi+19h], 1
0x7AE9CA: mov     edx, [ebp+0]
0x7AE9CD: mov     eax, [edx+18h]
0x7AE9D0: push    1
0x7AE9D2: push    ebp
0x7AE9D3: call    eax
0x7AE9D5: jmp     short loc_7AE9F3
0x7AE9D7: mov     ebp, [ebp+0]
0x7AE9DA: mov     byte ptr [edi+19h], 0
0x7AE9DE: mov     byte ptr [edi+18h], 0
0x7AE9E2: mov     edx, [ebp+0]
0x7AE9E5: mov     eax, [edx+18h]
0x7AE9E8: push    1
0x7AE9EA: push    ebp
0x7AE9EB: call    eax
0x7AE9ED: jmp     short loc_7AE9F3
0x7AE9EF: mov     byte ptr [edi+18h], 0
0x7AE9F3: cmp     [esp+4Ch+var_38], 0
0x7AE9F8: jnz     loc_7AE8B0
0x7AE9FE: lea     ecx, [esp+4Ch+var_1C]
0x7AEA02: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x7AEA0A: call    sub_7E2400
0x7AEA0F: mov     dword ptr [esi+223Ch], 0
0x7AEA19: mov     byte ptr [esi+2240h], 0
0x7AEA20: mov     ecx, esi
0x7AEA22: call    sub_7ACF40
0x7AEA27: cmp     byte ptr ds:0B42CE2h, 0
0x7AEA2E: jz      short loc_7AEA3B
0x7AEA30: lea     ecx, [esi+2244h]
0x7AEA36: mov     [esi+1Ch], ecx
0x7AEA39: jmp     short loc_7AEA44
0x7AEA3B: lea     edx, [esi+2254h]
0x7AEA41: mov     [esi+1Ch], edx
0x7AEA44: mov     eax, [esi]
0x7AEA46: mov     edx, [eax+5Ch]
0x7AEA49: mov     ecx, esi
0x7AEA4B: call    edx
0x7AEA4D: mov     ecx, esi
0x7AEA4F: call    sub_7ACF40
0x7AEA54: mov     edi, 198h
0x7AEA59: mov     [esp+4Ch+var_30], edi
0x7AEA5D: mov     ebp, 1
0x7AEA62: mov     eax, [esi]
0x7AEA64: mov     edx, [eax+60h]
0x7AEA67: push    ebp
0x7AEA68: push    edi
0x7AEA69: mov     ecx, esi
0x7AEA6B: call    edx
0x7AEA6D: cmp     edi, 19Bh
0x7AEA73: jnz     loc_7AEB40
0x7AEA79: cmp     byte ptr ds:0B42CE2h, 0
0x7AEA80: jz      short loc_7AEA8D
0x7AEA82: lea     eax, [esi+2254h]
0x7AEA88: mov     [esi+1Ch], eax
0x7AEA8B: jmp     short loc_7AEA96
0x7AEA8D: lea     ecx, [esi+2244h]
0x7AEA93: mov     [esi+1Ch], ecx
0x7AEA96: mov     edx, [esi]
0x7AEA98: mov     eax, [edx+5Ch]
0x7AEA9B: mov     ecx, esi
0x7AEA9D: call    eax
0x7AEA9F: mov     ecx, esi
0x7AEAA1: call    sub_7ACF40
0x7AEAA6: xor     ebx, ebx
0x7AEAA8: cmp     [esi+58h], ebx
0x7AEAAB: mov     dword ptr [esi+1Ch], 0
0x7AEAB2: jz      short loc_7AEB0C
0x7AEAB4: mov     ecx, [esi+50h]
0x7AEAB7: mov     ebp, [ecx+8]
0x7AEABA: cmp     ebp, ebx
0x7AEABC: jz      short loc_7AEB0C
0x7AEABE: lea     edi, [esi+4Ch]
0x7AEAC1: push    1
0x7AEAC3: push    ebp
0x7AEAC4: mov     ecx, esi
0x7AEAC6: call    sub_7ABAC0
0x7AEACB: push    ebp
0x7AEACC: mov     dword ptr [ebp+0], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AEAD3: call    FormHeapFree
0x7AEAD8: mov     ecx, [edi+4]
0x7AEADB: mov     eax, [ecx]
0x7AEADD: add     esp, 4
0x7AEAE0: cmp     eax, ebx
0x7AEAE2: mov     [edi+4], eax
0x7AEAE5: jz      short loc_7AEAEC
0x7AEAE7: mov     [eax+4], ebx
0x7AEAEA: jmp     short loc_7AEAEF
0x7AEAEC: mov     [edi+8], ebx
0x7AEAEF: mov     edx, [edi]
0x7AEAF1: mov     eax, [edx+8]
0x7AEAF4: push    ecx
0x7AEAF5: mov     ecx, edi
0x7AEAF7: call    eax
0x7AEAF9: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x7AEAFD: cmp     [esi+58h], ebx
0x7AEB00: jz      short loc_7AEB0C
0x7AEB02: mov     ecx, [esi+50h]
0x7AEB05: mov     ebp, [ecx+8]
0x7AEB08: cmp     ebp, ebx
0x7AEB0A: jnz     short loc_7AEAC1
0x7AEB0C: mov     edi, [esi+21C4h]
0x7AEB12: cmp     edi, ebx
0x7AEB14: lea     ebp, [esi+21C0h]
0x7AEB1A: jz      short loc_7AEB33
0x7AEB1C: lea     esp, [esp+0]
0x7AEB20: mov     edx, [ebp+0]
0x7AEB23: mov     eax, edi
0x7AEB25: mov     edi, [edi]
0x7AEB27: push    eax
0x7AEB28: mov     eax, [edx+8]
0x7AEB2B: mov     ecx, ebp
0x7AEB2D: call    eax
0x7AEB2F: cmp     edi, ebx
0x7AEB31: jnz     short loc_7AEB20
0x7AEB33: mov     edi, [esp+4Ch+var_30]
0x7AEB37: mov     [ebp+0Ch], ebx
0x7AEB3A: mov     [ebp+4], ebx
0x7AEB3D: mov     [ebp+8], ebx
0x7AEB40: mov     ebp, 1
0x7AEB45: add     edi, ebp
0x7AEB47: cmp     edi, 19Fh
0x7AEB4D: mov     [esp+4Ch+var_30], edi
0x7AEB51: jle     loc_7AEA62
0x7AEB57: push    ebp
0x7AEB58: lea     ecx, [esi+0A4h]
0x7AEB5E: push    ecx
0x7AEB5F: mov     ecx, esi
0x7AEB61: call    sub_7ABAC0
0x7AEB66: cmp     word ptr ds:0B42EACh, 4
0x7AEB6E: jnz     loc_7AEBF7
0x7AEB74: mov     ebx, [esp+4Ch+var_20]
0x7AEB78: test    ebx, ebx
0x7AEB7A: jz      loc_7AEBF7
0x7AEB80: cmp     [ebx+200h], ebp
0x7AEB86: jz      short loc_7AEB90
0x7AEB88: cmp     [ebx+204h], ebp
0x7AEB8E: jnz     short loc_7AEBA7
0x7AEB90: cmp     byte ptr [ebx+20Ch], 1
0x7AEB97: jnz     short loc_7AEBA7
0x7AEB99: mov     edx, [ebx]
0x7AEB9B: mov     eax, [edx+144h]
0x7AEBA1: push    0
0x7AEBA3: mov     ecx, ebx
0x7AEBA5: call    eax
0x7AEBA7: mov     edi, offset dword_B42CF8
0x7AEBAC: lea     esp, [esp+0]
0x7AEBB0: mov     ecx, [edi]; this
0x7AEBB2: push    ebx
0x7AEBB3: call    sub_709C60
0x7AEBB8: add     edi, 4
0x7AEBBB: cmp     edi, offset dword_B42D3C
0x7AEBC1: jl      short loc_7AEBB0
0x7AEBC3: cmp     [ebx+200h], ebp
0x7AEBC9: jz      short loc_7AEBD3
0x7AEBCB: cmp     [ebx+204h], ebp
0x7AEBD1: jnz     short loc_7AEBEC
0x7AEBD3: cmp     byte ptr [ebx+20Ch], 1
0x7AEBDA: jnz     short loc_7AEBEC
0x7AEBDC: mov     edx, [ebx]
0x7AEBDE: mov     eax, [edx+13Ch]
0x7AEBE4: push    2
0x7AEBE6: push    0
0x7AEBE8: mov     ecx, ebx
0x7AEBEA: call    eax
0x7AEBEC: mov     ecx, [esi+8]
0x7AEBEF: push    ecx
0x7AEBF0: mov     ecx, ebx
0x7AEBF2: call    SetCameraViewProj
0x7AEBF7: mov     ecx, esi
0x7AEBF9: call    sub_733830
0x7AEBFE: mov     ecx, dword ptr [esp+4Ch+var_C]
0x7AEC02: mov     large fs:0, ecx
0x7AEC09: pop     ecx
0x7AEC0A: pop     edi
0x7AEC0B: pop     esi
0x7AEC0C: pop     ebp
0x7AEC0D: pop     ebx
0x7AEC0E: add     esp, 38h
0x7AEC11: retn
