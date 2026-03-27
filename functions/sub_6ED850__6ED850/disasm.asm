0x6ED850: push    0FFFFFFFFh
0x6ED852: push    offset SEH_6ED850
0x6ED857: mov     eax, large fs:0
0x6ED85D: push    eax
0x6ED85E: sub     esp, 74h
0x6ED861: mov     eax, ds:0B30AACh
0x6ED866: xor     eax, esp
0x6ED868: mov     [esp+80h+var_10], eax
0x6ED86C: push    ebx
0x6ED86D: push    ebp
0x6ED86E: push    esi
0x6ED86F: push    edi
0x6ED870: mov     eax, ds:0B30AACh
0x6ED875: xor     eax, esp
0x6ED877: push    eax
0x6ED878: lea     eax, [esp+94h+var_C]
0x6ED87F: mov     large fs:0, eax
0x6ED885: mov     ecx, [esp+94h+arg_8]
0x6ED88C: mov     eax, [esp+94h+arg_4]
0x6ED893: mov     edx, [esp+94h+arg_10]
0x6ED89A: mov     esi, [esp+94h+arg_0]
0x6ED8A1: mov     edi, [esp+94h+arg_C]
0x6ED8A8: sub     esp, 1Ch
0x6ED8AB: mov     [esp+0B0h+var_70], ecx
0x6ED8AF: mov     ecx, esp
0x6ED8B1: mov     [esp+0B0h+var_78], esp
0x6ED8B5: mov     [esp+0B0h+var_7C], eax
0x6ED8B9: mov     eax, [esp+0B0h+arg_14]
0x6ED8C0: xor     ebx, ebx
0x6ED8C2: push    8; MaxCount
0x6ED8C4: mov     ebp, 0Fh
0x6ED8C9: mov     [ecx+18h], ebp
0x6ED8CC: mov     [ecx+14h], ebx
0x6ED8CF: push    offset aFrctl001; "FRCTL001"
0x6ED8D4: mov     [esp+0B8h+var_74], edx
0x6ED8D8: mov     [esp+0B8h+var_80], eax
0x6ED8DC: mov     [ecx+4], bl
0x6ED8DF: call    sub_414500
0x6ED8E4: lea     ecx, [esp+0B0h+var_54]; this
0x6ED8E8: call    sub_6F6110
0x6ED8ED: push    1
0x6ED8EF: sub     esp, 1Ch
0x6ED8F2: mov     ecx, esp
0x6ED8F4: mov     [ecx+18h], ebp
0x6ED8F7: mov     [esp+0B4h+var_78], esp
0x6ED8FB: or      ebp, 0FFFFFFFFh
0x6ED8FE: push    ebp
0x6ED8FF: push    ebx
0x6ED900: mov     [ecx+14h], ebx
0x6ED903: push    esi
0x6ED904: mov     [esp+0C0h+var_4], ebx
0x6ED90B: mov     [ecx+4], bl
0x6ED90E: call    sub_414420
0x6ED913: lea     ecx, [esp+0B4h+var_54]
0x6ED917: call    sub_6F66E0
0x6ED91C: cmp     al, bl
0x6ED91E: jnz     short loc_6ED937
0x6ED920: mov     [esp+94h+var_4], ebp
0x6ED927: lea     ecx, [esp+94h+var_54]; this
0x6ED92B: call    ??1BSFaceGenBinaryFile@@UAE@XZ; BSFaceGenBinaryFile::~BSFaceGenBinaryFile(void)
0x6ED930: xor     al, al
0x6ED932: jmp     loc_6ED9E1
0x6ED937: push    18h
0x6ED939: push    1
0x6ED93B: lea     ecx, [esp+9Ch+var_6C]
0x6ED93F: push    ecx
0x6ED940: lea     ecx, [esp+0A0h+var_54]
0x6ED944: call    sub_6F5E50
0x6ED949: test    al, al
0x6ED94B: jz      short loc_6ED920
0x6ED94D: lea     eax, [esp+94h+var_64]
0x6ED951: mov     edx, 2
0x6ED956: jmp     short loc_6ED960
0x6ED958: align 10h
0x6ED960: mov     ecx, 2
0x6ED965: add     eax, 4
0x6ED968: sub     ecx, 1
0x6ED96B: jnz     short loc_6ED965
0x6ED96D: sub     edx, 1
0x6ED970: jnz     short loc_6ED960
0x6ED972: mov     edx, [esp+94h+var_6C]
0x6ED976: mov     eax, [esp+94h+var_7C]
0x6ED97A: mov     ecx, [esp+94h+var_68]
0x6ED97E: mov     [eax], edx
0x6ED980: mov     edx, [esp+94h+var_70]
0x6ED984: mov     eax, [esp+94h+var_64]
0x6ED988: mov     [edx], ecx
0x6ED98A: mov     ecx, [esp+94h+var_60]
0x6ED98E: mov     edx, [esp+94h+var_5C]
0x6ED992: mov     [edi], eax
0x6ED994: mov     eax, [esp+94h+var_58]
0x6ED998: mov     [edi+4], ecx
0x6ED99B: push    edi
0x6ED99C: lea     ecx, [esp+98h+var_54]
0x6ED9A0: push    ecx
0x6ED9A1: mov     ecx, [esp+9Ch+var_74]
0x6ED9A5: mov     [edi+8], edx
0x6ED9A8: mov     [edi+0Ch], eax
0x6ED9AB: call    sub_6EF020
0x6ED9B0: test    al, al
0x6ED9B2: jz      loc_6ED920
0x6ED9B8: mov     ecx, [esp+94h+var_80]
0x6ED9BC: push    edi
0x6ED9BD: lea     edx, [esp+98h+var_54]
0x6ED9C1: push    edx
0x6ED9C2: call    sub_6EE270
0x6ED9C7: test    al, al
0x6ED9C9: mov     [esp+94h+var_4], ebp
0x6ED9D0: lea     ecx, [esp+94h+var_54]; this
0x6ED9D4: jz      loc_6ED92B
0x6ED9DA: call    ??1BSFaceGenBinaryFile@@UAE@XZ; BSFaceGenBinaryFile::~BSFaceGenBinaryFile(void)
0x6ED9DF: mov     al, 1
0x6ED9E1: mov     ecx, [esp+94h+var_C]
0x6ED9E8: mov     large fs:0, ecx
0x6ED9EF: pop     ecx
0x6ED9F0: pop     edi
0x6ED9F1: pop     esi
0x6ED9F2: pop     ebp
0x6ED9F3: pop     ebx
0x6ED9F4: mov     ecx, [esp+80h+var_10]
0x6ED9F8: xor     ecx, esp
0x6ED9FA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6ED9FF: add     esp, 80h
0x6EDA05: retn
