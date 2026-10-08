0x88C600: push    ebp
0x88C601: mov     ebp, esp
0x88C603: and     esp, 0FFFFFFF0h
0x88C606: push    0FFFFFFFFh
0x88C608: push    offset SEH_88C600
0x88C60D: mov     eax, large fs:0
0x88C613: push    eax
0x88C614: sub     esp, 4Ch
0x88C617: mov     eax, ds:0B30AACh
0x88C61C: xor     eax, esp
0x88C61E: mov     [esp+58h+var_14], eax
0x88C622: push    esi
0x88C623: push    edi
0x88C624: mov     eax, ds:0B30AACh
0x88C629: xor     eax, esp
0x88C62B: push    eax
0x88C62C: lea     eax, [esp+64h+var_C]
0x88C630: mov     large fs:0, eax
0x88C636: mov     eax, [ebp+arg_0]
0x88C639: mov     esi, ecx
0x88C63B: mov     dword ptr [esp+64h+var_4C], 0
0x88C643: mov     dword ptr [esp+64h+var_4C+4], 0
0x88C64B: mov     dword ptr [esp+64h+var_4C+8], 80000000h
0x88C653: movaps  xmm0, xmmword ptr [eax]
0x88C656: mov     eax, [esi]
0x88C658: movaps  xmm1, xmmword ptr [esi+50h]
0x88C65C: mov     edx, [eax+58h]
0x88C65F: subps   xmm0, xmm1
0x88C662: mov     [esp+64h+var_4], 0
0x88C66A: movaps  [esp+64h+var_30], xmm0
0x88C66F: call    edx
0x88C671: mov     edi, eax
0x88C673: mov     eax, [esi]
0x88C675: mov     edx, [eax+58h]
0x88C678: mov     ecx, esi
0x88C67A: call    edx
0x88C67C: mov     ecx, [edi+64h]
0x88C67F: mov     eax, [ecx]
0x88C681: mov     eax, [eax+34h]
0x88C684: lea     edx, [esp+64h+var_4C]
0x88C688: push    edx
0x88C689: lea     edx, [esp+68h+var_4C+0Ch]
0x88C68D: push    edx
0x88C68E: lea     edx, [esp+6Ch+var_30]
0x88C692: push    edx
0x88C693: call    eax
0x88C695: movaps  xmm0, xmmword ptr [esp+64h+var_4C+0Ch]
0x88C69A: movaps  xmm1, xmmword ptr [esi+50h]
0x88C69E: addps   xmm1, xmm0
0x88C6A1: movaps  xmmword ptr [esi+50h], xmm1
0x88C6A5: movaps  xmm1, xmmword ptr [edi+280h]
0x88C6AC: addps   xmm1, xmm0
0x88C6AF: movaps  xmmword ptr [edi+280h], xmm1
0x88C6B6: movaps  xmm0, xmmword ptr [edi+290h]
0x88C6BD: movaps  xmm1, xmmword ptr [esp+64h+var_4C+0Ch]
0x88C6C2: addps   xmm0, xmm1
0x88C6C5: movaps  xmmword ptr [edi+290h], xmm0
0x88C6CC: mov     edx, [esi]
0x88C6CE: mov     eax, [edx+58h]
0x88C6D1: mov     ecx, esi
0x88C6D3: call    eax
0x88C6D5: mov     eax, dword ptr [esp+64h+var_4C+8]
0x88C6D9: test    eax, eax
0x88C6DB: mov     [esp+64h+var_4], 0FFFFFFFFh
0x88C6E3: js      short loc_88C71B
0x88C6E5: mov     ecx, ds:0BA9DE4h
0x88C6EB: mov     edx, large fs:2Ch
0x88C6F2: mov     ecx, [edx+ecx*4]
0x88C6F5: mov     ecx, [ecx+19Ch]
0x88C6FB: test    ecx, ecx
0x88C6FD: jnz     short loc_88C705
0x88C6FF: mov     ecx, ds:0BA7D9Ch
0x88C705: mov     edx, dword ptr [esp+64h+var_4C]
0x88C709: and     eax, 3FFFFFFFh
0x88C70E: add     eax, eax
0x88C710: push    14h
0x88C712: add     eax, eax
0x88C714: push    eax
0x88C715: push    edx
0x88C716: call    sub_8A75D0
0x88C71B: mov     ecx, dword ptr [esp+64h+var_C]
0x88C71F: mov     large fs:0, ecx
0x88C726: pop     ecx
0x88C727: pop     edi
0x88C728: pop     esi
0x88C729: mov     ecx, [esp+58h+var_14]
0x88C72D: xor     ecx, esp
0x88C72F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88C734: mov     esp, ebp
0x88C736: pop     ebp
0x88C737: retn    4
0x536DD0: mov     edx, ecx
0x536DD2: mov     eax, [edx+8]
0x536DD5: test    eax, eax
0x536DD7: js      short locret_536E0F
0x536DD9: mov     ecx, ds:0BA9DE4h
0x536DDF: push    esi
0x536DE0: mov     esi, large fs:2Ch
0x536DE7: mov     ecx, [esi+ecx*4]
0x536DEA: mov     ecx, [ecx+19Ch]
0x536DF0: test    ecx, ecx
0x536DF2: pop     esi
0x536DF3: jnz     short loc_536DFB
0x536DF5: mov     ecx, ds:0BA7D9Ch
0x536DFB: mov     edx, [edx]
0x536DFD: and     eax, 3FFFFFFFh
0x536E02: add     eax, eax
0x536E04: push    14h
0x536E06: add     eax, eax
0x536E08: push    eax
0x536E09: push    edx
0x536E0A: call    sub_8A75D0
0x536E0F: retn
0x9D5F50: lea     ecx, [ebp+var_4C]
0x9D5F53: jmp     loc_536DD0
0x9D5F58: mov     edx, [esp-4+arg_4]
0x9D5F5C: lea     eax, [edx-54h]
0x9D5F5F: mov     ecx, [edx-58h]
0x9D5F62: xor     ecx, eax
0x9D5F64: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D5F69: add     eax, 8
0x9D5F6C: mov     ecx, [edx-8]
0x9D5F6F: xor     ecx, eax
0x9D5F71: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D5F76: mov     eax, offset stru_AFDF4C
0x9D5F7B: jmp     ___CxxFrameHandler3
