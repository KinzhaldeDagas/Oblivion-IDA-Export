0x7F4970: push    0FFFFFFFFh
0x7F4972: push    offset SEH_7F4970
0x7F4977: mov     eax, large fs:0
0x7F497D: push    eax
0x7F497E: sub     esp, 44h
0x7F4981: push    ebx
0x7F4982: push    ebp
0x7F4983: push    esi
0x7F4984: push    edi
0x7F4985: mov     eax, ds:0B30AACh
0x7F498A: xor     eax, esp
0x7F498C: push    eax
0x7F498D: lea     eax, [esp+64h+var_C]
0x7F4991: mov     large fs:0, eax
0x7F4997: mov     eax, ds:0B4690Ch
0x7F499C: test    eax, eax
0x7F499E: jnz     loc_7F4C5B
0x7F49A4: mov     eax, ds:0B468FCh
0x7F49A9: test    eax, eax
0x7F49AB: jnz     short loc_7F49C7
0x7F49AD: cmp     dword ptr ds:0B42F48h, 2
0x7F49B4: setl    al
0x7F49B7: sub     eax, 1
0x7F49BA: and     eax, 0A0h
0x7F49BF: add     eax, 4Bh ; 'K'
0x7F49C2: mov     ds:0B468FCh, eax
0x7F49C7: movzx   eax, ax
0x7F49CA: test    ax, ax
0x7F49CD: jnz     short loc_7F49E5
0x7F49CF: xor     eax, eax
0x7F49D1: mov     ecx, [esp+64h+var_C]
0x7F49D5: mov     large fs:0, ecx
0x7F49DC: pop     ecx
0x7F49DD: pop     edi
0x7F49DE: pop     esi
0x7F49DF: pop     ebp
0x7F49E0: pop     ebx
0x7F49E1: add     esp, 50h
0x7F49E4: retn
0x7F49E5: movzx   esi, ax
0x7F49E8: imul    esi, ds:0B2DC90h
0x7F49EF: lea     edi, ds:0[esi*4]
0x7F49F6: xor     ecx, ecx
0x7F49F8: mov     eax, edi
0x7F49FA: mov     edx, 0Ch
0x7F49FF: mul     edx
0x7F4A01: seto    cl
0x7F4A04: lea     ebp, [esi+esi]
0x7F4A07: mov     [esp+64h+var_48], ebp
0x7F4A0B: mov     [esp+64h+var_4C], edi
0x7F4A0F: neg     ecx
0x7F4A11: or      ecx, eax
0x7F4A13: push    ecx; Size
0x7F4A14: call    FormHeapAlloc
0x7F4A19: mov     ebx, eax
0x7F4A1B: xor     ecx, ecx
0x7F4A1D: lea     eax, [ebp+ebp*2+0]
0x7F4A21: mov     edx, 2
0x7F4A26: mul     edx
0x7F4A28: seto    cl
0x7F4A2B: mov     [esp+68h+var_50], ebx
0x7F4A2F: neg     ecx
0x7F4A31: or      ecx, eax
0x7F4A33: push    ecx; Size
0x7F4A34: call    FormHeapAlloc
0x7F4A39: add     esp, 8
0x7F4A3C: test    esi, esi
0x7F4A3E: mov     [esp+64h+var_44], eax
0x7F4A42: jbe     loc_7F4B1B
0x7F4A48: fld     dword ptr ds:0A30634h
0x7F4A4E: lea     ecx, [eax+4]
0x7F4A51: fst     [esp+64h+var_40]
0x7F4A55: lea     eax, [ebx+18h]
0x7F4A58: fst     [esp+64h+var_3C]
0x7F4A5C: xor     edx, edx
0x7F4A5E: fldz
0x7F4A60: mov     edi, esi
0x7F4A62: fst     [esp+64h+var_38]
0x7F4A66: fld1
0x7F4A68: mov     ebx, [esp+64h+var_38]
0x7F4A6C: fst     [esp+64h+var_34]
0x7F4A70: fst     [esp+64h+var_28]
0x7F4A74: fst     [esp+64h+var_24]
0x7F4A78: fstp    [esp+64h+var_18]
0x7F4A7C: fxch    st(1)
0x7F4A7E: fst     [esp+64h+var_30]
0x7F4A82: fstp    [esp+64h+var_1C]
0x7F4A86: fst     [esp+64h+var_2C]
0x7F4A8A: fst     [esp+64h+var_20]
0x7F4A8E: fstp    [esp+64h+var_14]
0x7F4A92: mov     esi, [esp+64h+var_40]
0x7F4A96: mov     [eax-18h], esi
0x7F4A99: mov     esi, [esp+64h+var_3C]
0x7F4A9D: mov     [eax-14h], esi
0x7F4AA0: mov     esi, [esp+64h+var_34]
0x7F4AA4: mov     [eax-0Ch], esi
0x7F4AA7: mov     esi, [esp+64h+var_30]
0x7F4AAB: mov     [eax-8], esi
0x7F4AAE: mov     esi, [esp+64h+var_2C]
0x7F4AB2: mov     [eax-4], esi
0x7F4AB5: mov     esi, [esp+64h+var_28]
0x7F4AB9: mov     [eax], esi
0x7F4ABB: mov     esi, [esp+64h+var_24]
0x7F4ABF: mov     [eax+4], esi
0x7F4AC2: mov     esi, [esp+64h+var_20]
0x7F4AC6: mov     [eax+8], esi
0x7F4AC9: mov     esi, [esp+64h+var_1C]
0x7F4ACD: mov     [eax+0Ch], esi
0x7F4AD0: mov     esi, [esp+64h+var_18]
0x7F4AD4: mov     [eax+10h], esi
0x7F4AD7: mov     esi, [esp+64h+var_14]
0x7F4ADB: mov     [eax+14h], esi
0x7F4ADE: mov     [eax-10h], ebx
0x7F4AE1: lea     esi, [edx+1]
0x7F4AE4: mov     [ecx-2], si
0x7F4AE8: lea     esi, [edx+2]
0x7F4AEB: lea     ebp, [edx+3]
0x7F4AEE: mov     [ecx-4], dx
0x7F4AF2: mov     [ecx+4], dx
0x7F4AF6: mov     [ecx], si
0x7F4AF9: mov     [ecx+2], bp
0x7F4AFD: mov     [ecx+6], si
0x7F4B01: add     edx, 4
0x7F4B04: add     eax, 30h ; '0'
0x7F4B07: add     ecx, 0Ch
0x7F4B0A: sub     edi, 1
0x7F4B0D: jnz     short loc_7F4A92
0x7F4B0F: mov     ebx, [esp+64h+var_50]
0x7F4B13: mov     edi, [esp+64h+var_4C]
0x7F4B17: mov     ebp, [esp+64h+var_48]
0x7F4B1B: push    58h ; 'X'; Size
0x7F4B1D: call    FormHeapAlloc
0x7F4B22: add     esp, 4
0x7F4B25: mov     [esp+64h+var_48], eax
0x7F4B29: xor     esi, esi
0x7F4B2B: cmp     eax, esi
0x7F4B2D: mov     [esp+64h+var_4], esi
0x7F4B31: jz      short loc_7F4B4B
0x7F4B33: mov     ecx, [esp+64h+var_44]
0x7F4B37: push    ecx
0x7F4B38: push    ebp
0x7F4B39: push    esi
0x7F4B3A: push    esi
0x7F4B3B: push    esi
0x7F4B3C: push    esi
0x7F4B3D: push    esi
0x7F4B3E: push    ebx
0x7F4B3F: push    edi
0x7F4B40: mov     ecx, eax
0x7F4B42: call    sub_71FB40
0x7F4B47: mov     ebx, eax
0x7F4B49: jmp     short loc_7F4B4D
0x7F4B4B: xor     ebx, ebx
0x7F4B4D: or      ebp, 0FFFFFFFFh
0x7F4B50: push    2Ch ; ','; Size
0x7F4B52: mov     [esp+68h+var_4], ebp
0x7F4B56: call    FormHeapAlloc
0x7F4B5B: add     esp, 4
0x7F4B5E: mov     [esp+64h+var_44], eax
0x7F4B62: cmp     eax, esi
0x7F4B64: mov     [esp+64h+var_4], 1
0x7F4B6C: jz      short loc_7F4B7A
0x7F4B6E: push    1
0x7F4B70: push    edi
0x7F4B71: mov     ecx, eax
0x7F4B73: call    sub_7E3AE0
0x7F4B78: mov     esi, eax
0x7F4B7A: push    1
0x7F4B7C: mov     ecx, esi
0x7F4B7E: mov     [esp+68h+var_4], ebp
0x7F4B82: call    sub_7263B0
0x7F4B87: lea     edx, ds:0[edi*4]
0x7F4B8E: push    1; char
0x7F4B90: push    edx; Src
0x7F4B91: call    sub_7F3790
0x7F4B96: push    eax; char
0x7F4B97: push    0; int
0x7F4B99: mov     ecx, esi
0x7F4B9B: call    sub_7260B0
0x7F4BA0: push    4
0x7F4BA2: push    4
0x7F4BA4: push    edi
0x7F4BA5: push    1
0x7F4BA7: push    0
0x7F4BA9: push    0
0x7F4BAB: push    0
0x7F4BAD: mov     ecx, esi
0x7F4BAF: call    sub_7262A0
0x7F4BB4: push    esi
0x7F4BB5: mov     ecx, ebx
0x7F4BB7: call    sub_6C61E0
0x7F4BBC: push    0C0h ; 'À'; Size
0x7F4BC1: call    FormHeapAlloc
0x7F4BC6: add     esp, 4
0x7F4BC9: mov     [esp+64h+var_44], eax
0x7F4BCD: test    eax, eax
0x7F4BCF: mov     [esp+64h+var_4], 2
0x7F4BD7: jz      short loc_7F4BE5
0x7F4BD9: push    ebx; a2
0x7F4BDA: mov     ecx, eax; this
0x7F4BDC: call    NiTriShape_NiTriShape
0x7F4BE1: mov     esi, eax
0x7F4BE3: jmp     short loc_7F4BE7
0x7F4BE5: xor     esi, esi
0x7F4BE7: mov     eax, [esi+0B4h]
0x7F4BED: fld     dword ptr ds:0A2FF44h
0x7F4BF3: mov     ebx, [eax+18h]
0x7F4BF6: mov     ecx, [eax+0Ch]
0x7F4BF9: mov     edx, [eax+10h]
0x7F4BFC: mov     edi, [eax+14h]
0x7F4BFF: mov     [eax+0Ch], ecx
0x7F4C02: mov     [esp+64h+var_10], ebx
0x7F4C06: fstp    [esp+64h+var_10]
0x7F4C0A: mov     ecx, [esp+64h+var_10]
0x7F4C0E: mov     [eax+10h], edx
0x7F4C11: mov     [eax+14h], edi
0x7F4C14: mov     [eax+18h], ecx
0x7F4C17: mov     eax, ds:0B4690Ch
0x7F4C1C: cmp     eax, esi
0x7F4C1E: mov     [esp+64h+var_4], ebp
0x7F4C22: jz      short loc_7F4C5B
0x7F4C24: test    eax, eax
0x7F4C26: jz      short loc_7F4C46
0x7F4C28: mov     edi, eax
0x7F4C2A: add     eax, 4
0x7F4C2D: push    eax; lpAddend
0x7F4C2E: call    dword ptr ds:0A2807Ch
0x7F4C34: test    eax, eax
0x7F4C36: jnz     short loc_7F4C46
0x7F4C38: test    edi, edi
0x7F4C3A: jz      short loc_7F4C46
0x7F4C3C: mov     edx, [edi]
0x7F4C3E: mov     eax, [edx]
0x7F4C40: push    1
0x7F4C42: mov     ecx, edi
0x7F4C44: call    eax
0x7F4C46: mov     ds:0B4690Ch, esi
0x7F4C4C: add     esi, 4
0x7F4C4F: push    esi; lpAddend
0x7F4C50: call    dword ptr ds:0A28078h
0x7F4C56: mov     eax, ds:0B4690Ch
0x7F4C5B: mov     ecx, [esp+64h+var_C]
0x7F4C5F: mov     large fs:0, ecx
0x7F4C66: pop     ecx
0x7F4C67: pop     edi
0x7F4C68: pop     esi
0x7F4C69: pop     ebp
0x7F4C6A: pop     ebx
0x7F4C6B: add     esp, 50h
0x7F4C6E: retn
