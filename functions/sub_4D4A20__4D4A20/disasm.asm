0x4D4A20: push    ebp
0x4D4A21: mov     ebp, esp
0x4D4A23: and     esp, 0FFFFFFF0h
0x4D4A26: push    0FFFFFFFFh
0x4D4A28: push    offset SEH_4D4A20
0x4D4A2D: mov     eax, large fs:0
0x4D4A33: push    eax
0x4D4A34: sub     esp, 0D8h
0x4D4A3A: mov     eax, ds:0B30AACh
0x4D4A3F: xor     eax, esp
0x4D4A41: mov     [esp+0E4h+var_14], eax
0x4D4A48: push    ebx
0x4D4A49: push    esi
0x4D4A4A: push    edi
0x4D4A4B: mov     eax, ds:0B30AACh
0x4D4A50: xor     eax, esp
0x4D4A52: push    eax
0x4D4A53: lea     eax, [esp+0F4h+var_C]
0x4D4A5A: mov     large fs:0, eax
0x4D4A60: mov     edi, ecx
0x4D4A62: test    byte ptr [edi+24h], 1
0x4D4A66: jz      short loc_4D4A72
0x4D4A68: lea     ecx, [edi+28h]
0x4D4A6B: call    sub_424180
0x4D4A70: jmp     short loc_4D4A77
0x4D4A72: mov     eax, ds:0B35C24h
0x4D4A77: xor     ebx, ebx
0x4D4A79: test    byte ptr [edi+24h], 1
0x4D4A7D: jz      loc_4D4C8A
0x4D4A83: cmp     eax, ebx
0x4D4A85: jnz     loc_4D4C8A
0x4D4A8B: lea     ecx, [esp+0F4h+var_C0]
0x4D4A8F: call    sub_88A4F0
0x4D4A94: fldz
0x4D4A96: fst     dword ptr [esp+0F4h+var_D0]
0x4D4A9A: push    ecx
0x4D4A9B: fst     dword ptr [esp+0F8h+var_D0+4]
0x4D4A9F: lea     ecx, [esp+0F8h+var_C0]
0x4D4AA3: fld     dword ptr ds:0A46B20h
0x4D4AA9: mov     [esp+0F8h+var_4], ebx
0x4D4AB0: fstp    dword ptr [esp+0F8h+var_D0+8]
0x4D4AB4: fstp    dword ptr [esp+0F8h+var_D0+0Ch]
0x4D4AB8: movaps  xmm0, [esp+0F8h+var_D0]
0x4D4ABD: fld     dword ptr ds:0A3D8F4h
0x4D4AC3: movaps  [esp+0F8h+var_B0], xmm0
0x4D4AC8: fstp    [esp+0F8h+var_F8]; float
0x4D4ACB: call    sub_8A9460
0x4D4AD0: fld1
0x4D4AD2: mov     eax, ds:0B097D8h
0x4D4AD7: push    1
0x4D4AD9: fstp    [esp+0F8h+var_70]
0x4D4AE0: push    90h
0x4D4AE5: mov     ecx, offset FormHeap
0x4D4AEA: mov     ds:0B2E2D4h, eax
0x4D4AEF: call    j_MemoryHeap_Alloc
0x4D4AF4: mov     dl, al
0x4D4AF6: and     dl, 0Fh
0x4D4AF9: mov     cl, 10h
0x4D4AFB: sub     cl, dl
0x4D4AFD: movzx   edx, cl
0x4D4B00: add     eax, edx
0x4D4B02: mov     [eax-1], cl
0x4D4B05: mov     [esp+0F4h+var_E4], eax
0x4D4B09: lea     ecx, [esp+0F4h+var_C0]
0x4D4B0D: push    ecx
0x4D4B0E: mov     ecx, eax; this
0x4D4B10: mov     byte ptr [esp+0F8h+var_4], 1
0x4D4B18: call    ??0bhkWorld@@QAE@XZ; bhkWorld::bhkWorld(void)
0x4D4B1D: mov     esi, eax
0x4D4B1F: cmp     esi, ebx
0x4D4B21: mov     byte ptr [esp+0F4h+var_4], bl
0x4D4B28: jz      short loc_4D4B33
0x4D4B2A: mov     edx, [esi]
0x4D4B2C: mov     eax, [edx+58h]
0x4D4B2F: mov     ecx, esi
0x4D4B31: call    eax
0x4D4B33: push    20h ; ' '; Size
0x4D4B35: call    FormHeapAlloc
0x4D4B3A: add     esp, 4
0x4D4B3D: mov     [esp+0F4h+var_E4], eax
0x4D4B41: cmp     eax, ebx
0x4D4B43: mov     byte ptr [esp+0F4h+var_4], 2
0x4D4B4B: jz      short loc_4D4B56
0x4D4B4D: mov     ecx, eax; this
0x4D4B4F: call    ??0TESTrapListener@@QAE@XZ; TESTrapListener::TESTrapListener(void)
0x4D4B54: jmp     short loc_4D4B58
0x4D4B56: xor     eax, eax
0x4D4B58: push    eax
0x4D4B59: mov     ecx, esi
0x4D4B5B: mov     byte ptr [esp+0F8h+var_4], bl
0x4D4B62: call    sub_4CD320
0x4D4B67: movzx   ecx, byte ptr [edi+24h]
0x4D4B6B: shr     ecx, 1
0x4D4B6D: test    cl, 1
0x4D4B70: jz      short loc_4D4BD1
0x4D4B72: push    2Ch ; ','; Size
0x4D4B74: call    FormHeapAlloc
0x4D4B79: add     esp, 4
0x4D4B7C: mov     [esp+0F4h+var_E4], eax
0x4D4B80: cmp     eax, ebx
0x4D4B82: mov     byte ptr [esp+0F4h+var_4], 3
0x4D4B8A: jz      short loc_4D4BC0
0x4D4B8C: movzx   edx, byte ptr [edi+24h]
0x4D4B90: shr     edx, 1
0x4D4B92: test    dl, 1
0x4D4B95: jnz     short loc_4D4B9F
0x4D4B97: fld     dword ptr ds:0A3B888h
0x4D4B9D: jmp     short loc_4D4BAB
0x4D4B9F: lea     ecx, [edi+28h]
0x4D4BA2: call    GetCellWaterHeight
0x4D4BA7: mov     eax, [esp+0F4h+var_E4]
0x4D4BAB: fstp    [esp+0F4h+var_E0]
0x4D4BAF: push    ecx
0x4D4BB0: fld     [esp+0F8h+var_E0]
0x4D4BB4: mov     ecx, eax
0x4D4BB6: fstp    [esp+0F8h+var_F8]; float
0x4D4BB9: call    sub_537E40
0x4D4BBE: jmp     short loc_4D4BC2
0x4D4BC0: xor     eax, eax
0x4D4BC2: push    eax
0x4D4BC3: mov     ecx, esi
0x4D4BC5: mov     byte ptr [esp+0F8h+var_4], bl
0x4D4BCC: call    sub_4CD2D0
0x4D4BD1: push    14h; Size
0x4D4BD3: call    FormHeapAlloc
0x4D4BD8: add     esp, 4
0x4D4BDB: mov     [esp+0F4h+var_E4], eax
0x4D4BDF: cmp     eax, ebx
0x4D4BE1: mov     byte ptr [esp+0F4h+var_4], 4
0x4D4BE9: jz      short loc_4D4BF4
0x4D4BEB: mov     ecx, eax
0x4D4BED: call    sub_5360F0
0x4D4BF2: jmp     short loc_4D4BF6
0x4D4BF4: xor     eax, eax
0x4D4BF6: push    eax
0x4D4BF7: mov     ecx, esi
0x4D4BF9: mov     byte ptr [esp+0F8h+var_4], bl
0x4D4C00: call    sub_4CD2D0
0x4D4C05: lea     eax, [esp+0F4h+var_DC]
0x4D4C09: push    eax
0x4D4C0A: mov     ecx, edi
0x4D4C0C: call    sub_4CB7F0
0x4D4C11: lea     ecx, [esp+0F4h+var_DC]
0x4D4C15: push    ecx
0x4D4C16: mov     ecx, esi
0x4D4C18: call    sub_88D260
0x4D4C1D: movzx   edx, byte ptr ds:0B097B8h
0x4D4C24: push    edx
0x4D4C25: mov     ecx, esi
0x4D4C27: call    sub_88B680
0x4D4C2C: fld1
0x4D4C2E: fld     dword ptr ds:0B097C0h
0x4D4C34: fcom    st(1)
0x4D4C36: fnstsw  ax
0x4D4C38: test    ah, 5
0x4D4C3B: jp      short loc_4D4C41
0x4D4C3D: fstp    st(1)
0x4D4C3F: jmp     short loc_4D4C43
0x4D4C41: fstp    st
0x4D4C43: push    esi
0x4D4C44: fstp    dword ptr ds:0B2E2E8h
0x4D4C4A: lea     ecx, [edi+28h]
0x4D4C4D: call    sub_4240C0
0x4D4C52: cmp     esi, ebx
0x4D4C54: jz      short loc_4D4C5F
0x4D4C56: mov     eax, [esi]
0x4D4C58: mov     edx, [eax+58h]
0x4D4C5B: mov     ecx, esi
0x4D4C5D: call    edx
0x4D4C5F: mov     eax, [esi]
0x4D4C61: mov     edx, [eax+80h]
0x4D4C67: mov     ecx, esi
0x4D4C69: call    edx
0x4D4C6B: cmp     ds:0B33A34h, bl
0x4D4C71: mov     [esp+0F4h+var_4], 0FFFFFFFFh
0x4D4C7C: setz    al
0x4D4C7F: mov     [esi+19h], al
0x4D4C82: mov     [esp+0F4h+var_C0], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x4D4C8A: lea     esi, [edi+28h]
0x4D4C8D: mov     ecx, esi
0x4D4C8F: call    sub_41F950
0x4D4C94: cmp     eax, ebx
0x4D4C96: jnz     short loc_4D4CD3
0x4D4C98: push    18h; Size
0x4D4C9A: call    FormHeapAlloc
0x4D4C9F: add     esp, 4
0x4D4CA2: mov     [esp+0F4h+var_E4], eax
0x4D4CA6: cmp     eax, ebx
0x4D4CA8: mov     [esp+0F4h+var_4], 5
0x4D4CB3: jz      short loc_4D4CBE
0x4D4CB5: mov     ecx, eax; this
0x4D4CB7: call    ??0CellMopp@@QAE@XZ; CellMopp::CellMopp(void)
0x4D4CBC: jmp     short loc_4D4CC0
0x4D4CBE: xor     eax, eax
0x4D4CC0: push    eax
0x4D4CC1: mov     ecx, esi
0x4D4CC3: mov     [esp+0F8h+var_4], 0FFFFFFFFh
0x4D4CCE: call    sub_41F890
0x4D4CD3: mov     ecx, [esp+0F4h+var_C]
0x4D4CDA: mov     large fs:0, ecx
0x4D4CE1: pop     ecx
0x4D4CE2: pop     edi
0x4D4CE3: pop     esi
0x4D4CE4: pop     ebx
0x4D4CE5: mov     ecx, [esp+0E4h+var_14]
0x4D4CEC: xor     ecx, esp
0x4D4CEE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D4CF3: mov     esp, ebp
0x4D4CF5: pop     ebp
0x4D4CF6: retn
