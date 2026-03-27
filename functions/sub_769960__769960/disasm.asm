0x769960: push    ecx
0x769961: mov     eax, [esp+4+arg_0]
0x769965: push    ebx
0x769966: mov     ebx, [eax+0B8h]
0x76996C: push    ebp
0x76996D: mov     ebp, [eax+0B4h]
0x769973: push    esi
0x769974: mov     esi, ecx
0x769976: cmp     dword ptr [esi+624h], 0
0x76997D: push    edi
0x76997E: lea     edi, [esi+624h]
0x769984: jnz     short loc_7699B5
0x769986: mov     eax, [eax+0BCh]
0x76998C: push    eax
0x76998D: push    offset NiD3DShaderInterfaceString
0x769992: call    NiRTTI_Cast
0x769997: add     esp, 8
0x76999A: push    eax; a2
0x76999B: mov     ecx, edi; this
0x76999D: call    NiSmartPointer_Set??
0x7699A2: cmp     dword ptr [edi], 0
0x7699A5: jnz     short loc_7699B5
0x7699A7: mov     eax, [esi+0A94h]
0x7699AD: push    eax; a2
0x7699AE: mov     ecx, edi; this
0x7699B0: call    NiSmartPointer_Set??
0x7699B5: mov     edx, [ebp+0]
0x7699B8: mov     eax, [edx+50h]
0x7699BB: mov     ecx, ebp
0x7699BD: call    eax
0x7699BF: test    ax, ax
0x7699C2: jz      loc_769AFA
0x7699C8: mov     edi, [edi]
0x7699CA: mov     ecx, [esp+14h+arg_0]
0x7699CE: push    edi
0x7699CF: push    ecx
0x7699D0: mov     ecx, esi
0x7699D2: call    sub_768890
0x7699D7: mov     dx, [ebp+2Eh]
0x7699DB: and     dx, 0F000h
0x7699E0: xor     edi, edi
0x7699E2: cmp     dx, 8000h
0x7699E7: mov     [esp+14h+var_4], al
0x7699EB: jz      short loc_769A07
0x7699ED: cmp     ebx, edi
0x7699EF: jz      short loc_7699F5
0x7699F1: test    al, al
0x7699F3: jz      short loc_769A07
0x7699F5: mov     eax, dword ptr [esp+14h+var_4]
0x7699F9: mov     ecx, [esi+8A4h]
0x7699FF: push    edi
0x769A00: push    edi
0x769A01: push    eax
0x769A02: push    ebx
0x769A03: push    ebp
0x769A04: push    ecx
0x769A05: jmp     short loc_769A17
0x769A07: mov     edx, dword ptr [esp+14h+var_4]
0x769A0B: mov     eax, [esi+8A8h]
0x769A11: push    edi; int
0x769A12: push    edi; int
0x769A13: push    edx; char
0x769A14: push    ebx; NiSkinInstance *
0x769A15: push    ebp; NiGeometryData *
0x769A16: push    eax; NiGeometryGroup *
0x769A17: mov     ecx, [esi+8A0h]
0x769A1D: call    NiGeometryGroup__AddGeometryDataToGroup
0x769A22: cmp     [esp+14h+var_4], 0
0x769A27: jz      short loc_769AA0
0x769A29: mov     eax, [ebx+0Ch]
0x769A2C: mov     ecx, [eax+0Ch]
0x769A2F: mov     eax, [eax+8]
0x769A32: cmp     eax, edi
0x769A34: jbe     loc_769AFA
0x769A3A: mov     edi, ecx
0x769A3C: mov     ebp, eax
0x769A3E: mov     edi, edi
0x769A40: mov     eax, ds:0B42164h
0x769A45: xor     ebx, ebx
0x769A47: cmp     eax, ebx
0x769A49: jnz     short loc_769A57
0x769A4B: push    10h; Size
0x769A4D: call    FormHeapAlloc
0x769A52: add     esp, 4
0x769A55: jmp     short loc_769A63
0x769A57: mov     ecx, [eax+0Ch]
0x769A5A: mov     ds:0B42164h, ecx
0x769A60: mov     [eax+0Ch], ebx
0x769A63: mov     edx, [esp+14h+arg_0]
0x769A67: mov     [eax], edx
0x769A69: mov     [eax+4], edi
0x769A6C: mov     ecx, [edi+28h]
0x769A6F: mov     [eax+8], ecx
0x769A72: mov     [eax+0Ch], ebx
0x769A75: mov     ecx, [esi+618h]
0x769A7B: cmp     ecx, ebx
0x769A7D: jz      short loc_769A84
0x769A7F: mov     [ecx+0Ch], eax
0x769A82: jmp     short loc_769A8A
0x769A84: mov     [esi+614h], eax
0x769A8A: add     edi, 2Ch ; ','
0x769A8D: sub     ebp, 1
0x769A90: mov     [esi+618h], eax
0x769A96: jnz     short loc_769A40
0x769A98: pop     edi
0x769A99: pop     esi
0x769A9A: pop     ebp
0x769A9B: pop     ebx
0x769A9C: pop     ecx
0x769A9D: retn    4
0x769AA0: mov     eax, ds:0B42164h
0x769AA5: cmp     eax, edi
0x769AA7: jnz     short loc_769AB5
0x769AA9: push    10h; Size
0x769AAB: call    FormHeapAlloc
0x769AB0: add     esp, 4
0x769AB3: jmp     short loc_769AC1
0x769AB5: mov     edx, [eax+0Ch]
0x769AB8: mov     ds:0B42164h, edx
0x769ABE: mov     [eax+0Ch], edi
0x769AC1: mov     ecx, [esp+14h+arg_0]
0x769AC5: mov     [eax], ecx
0x769AC7: mov     [eax+4], edi
0x769ACA: mov     edx, [ebp+38h]
0x769ACD: mov     [eax+8], edx
0x769AD0: mov     [eax+0Ch], edi
0x769AD3: mov     ecx, [esi+618h]
0x769AD9: cmp     ecx, edi
0x769ADB: jz      short loc_769AEE
0x769ADD: pop     edi
0x769ADE: mov     [ecx+0Ch], eax
0x769AE1: mov     [esi+618h], eax
0x769AE7: pop     esi
0x769AE8: pop     ebp
0x769AE9: pop     ebx
0x769AEA: pop     ecx
0x769AEB: retn    4
0x769AEE: mov     [esi+614h], eax
0x769AF4: mov     [esi+618h], eax
0x769AFA: pop     edi
0x769AFB: pop     esi
0x769AFC: pop     ebp
0x769AFD: pop     ebx
0x769AFE: pop     ecx
0x769AFF: retn    4
