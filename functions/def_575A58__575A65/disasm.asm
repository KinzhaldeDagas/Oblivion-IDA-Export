0x575A65: movzx   ecx, al; jumptable 00575A58 default case
0x575A68: cmp     ecx, 100h
0x575A6E: jle     short loc_575A72
0x575A70: xor     al, al
0x575A72: mov     edx, [esp+arg_40]
0x575A76: push    edx
0x575A77: mov     edx, [esp+4+arg_5C]
0x575A7B: movzx   eax, al
0x575A7E: lea     ecx, [esp+4+arg_20]
0x575A82: push    ecx
0x575A83: push    ebp
0x575A84: lea     ecx, ds:0[eax*8]
0x575A8B: push    edx
0x575A8C: mov     edx, [edi+38h]
0x575A8F: sub     ecx, eax
0x575A91: lea     eax, [edx+ecx*8+128h]
0x575A98: push    eax
0x575A99: mov     ecx, edi
0x575A9B: call    sub_573F10
0x575AA0: mov     ebx, [esp+arg_50]
0x575AA4: fld     [esp+arg_20]
0x575AA8: add     [esp+arg_5C], 1
0x575AAD: fld     st
0x575AAF: fst     [esp+arg_14]
0x575AB3: fsub    [esp+arg_C]
0x575AB7: fild    dword ptr [ebx]
0x575AB9: fcom    st(1)
0x575ABB: fnstsw  ax
0x575ABD: test    ah, 5
0x575AC0: jp      short loc_575AC6
0x575AC2: fstp    st
0x575AC4: jmp     short loc_575AC8
0x575AC6: fstp    st(1)
0x575AC8: call    Double_To_SInt32
0x575ACD: mov     ecx, [esp+arg_4C]
0x575AD1: mov     [ebx], eax
0x575AD3: mov     eax, [ecx]
0x575AD5: mov     edx, eax
0x575AD7: neg     edx
0x575AD9: sbb     edx, edx
0x575ADB: and     edx, esi
0x575ADD: cmp     byte ptr [edx+eax], 2
0x575AE1: jnz     short loc_575AEB
0x575AE3: lea     ecx, [esp+arg_2C]
0x575AE7: mov     [esp+arg_40], ecx
0x575AEB: add     esi, 1
0x575AEE: mov     edx, eax
0x575AF0: neg     edx
0x575AF2: sbb     edx, edx
0x575AF4: and     edx, esi
0x575AF6: cmp     byte ptr [edx+eax], 0
0x575AFA: jnz     loc_5759C6
0x575B00: fstp    st
0x575B02: mov     eax, [ebp+0B4h]
0x575B08: mov     ecx, [eax+1Ch]
0x575B0B: movzx   edx, word ptr [eax+8]
0x575B0F: push    ecx
0x575B10: push    edx
0x575B11: lea     ecx, [eax+0Ch]
0x575B14: call    sub_72A0F0
0x575B19: pop     esi
0x575B1A: pop     ebx
0x575B1B: pop     edi
0x575B1C: mov     eax, ebp
0x575B1E: pop     ebp
0x575B1F: add     esp, 30h
0x575B22: retn    20h ; ' '
